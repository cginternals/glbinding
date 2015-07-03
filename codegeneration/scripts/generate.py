#!/usr/bin/python

import sys, getopt

import xml.etree.ElementTree as ET

from classes.Feature import *
from classes.Enum import *
from classes.Command import *
from classes.Extension import *
from classes.Type import *

from binding import *

from gen_revision import *

from gen_features import *
from gen_bitfields import *
from gen_booleans import *
from gen_enums import *
from gen_values import *
from gen_types import *

from gen_extensions import *
from gen_functions import *

from gen_versions import *

from gen_meta import *
from gen_test import *

def generate(api, prefix, libraryNamespace, inputfile, revisionfile, patchfile):

    library = libraryNamespace + "binding"
    
    # preparing

    print("")
    print("PREPARING")

    print("checking revision")
    file = open(revisionfile, "r")
    revision = int(file.readline())
    file.close()    
    print("revision is " + str(revision))

    print("loading " + inputfile)
    tree       = ET.parse(inputfile)
    registry   = tree.getroot()

    # parsing

    print("")
    print("PARSING (" + api + " API)")

    print("parsing features")
    features   = parseFeatures(registry, api, prefix)
    print(" # " + str(len(features)) + " features parsed")

    print("parsing types")
    types      = parseTypes(registry, api, prefix)
    print(" # " + str(len(types)) + " types parsed")

    print("parsing extensions")
    extensions = parseExtensions(registry, features, api, prefix)
    print(" # " + str(len(extensions)) + " extensions parsed")

    print("parsing commands")
    commands   = parseCommands(registry, features, extensions, api, prefix)
    print(" # " + str(len(commands)) + " commands parsed")
        
    print("parsing enums")
    enums      = parseEnums(registry, features, extensions, commands, api, prefix)
    print(" # " + str(len(enums)) + " enums parsed")

    print("parsing enum groups")
    groups     = parseGroups(registry, enums)
    print(" # " + str(len(groups)) + " enum groups parsed")

    # patching

    print("")
    print("PATCHING")

    if patchfile is not None:

        print("parsing " + patchfile)
        patchtree     = ET.parse(patchfile)
        patchregistry = patchtree.getroot()

        print("patching types")
        patch = parseTypes(patchregistry, api, prefix)
        patchTypes(types, patch)

        print("patching commands")
        patch = parseCommands(patchregistry, features, extensions, api, prefix)
        patchCommands(commands, patch)

        print("patching features")
        print(" WARNING: todo")

        print("patching enums")
        patch = parseEnums(patchregistry, features, extensions, commands, api, prefix)
        patchEnums(enums, patch, groups)

        print("patching groups")
        patch = parseGroups(patchregistry, enums)
        patchGroups(groups, patch)

    # resolving references for classes

    enumsByName    = dict([(enum.name, enum) for enum in enums])
    groupsByName   = dict([(group.name, group) for group in groups])
    commandsByName = dict([(command.name, command) for command in commands])

    print("")
    print("RESOLVING")

    print("resolving features")
    resolveFeatures(features, enumsByName, commandsByName)

    print("resolving extensions")
    resolveExtensions(extensions, enumsByName, commandsByName, features, api)

    print("resolving groups")
    resolveGroups(groups, enumsByName)
        
    print("resolving enums")
    resolveEnums(enums, enumsByName, groupsByName)

    # verifying 

    print("")
    print("VERIFYING")

    bitfGroups = [ g for g in groups 
        if len(g.enums) > 0 and any(enum.type.endswith("bitfield") for enum in g.enums) ]

    print("verifying groups")
    verifyGroups(groups, enums)

    print("verifying commands")
    verifyCommands(api, commands, bitfGroups)

    # generating

    print("")
    print("GENERATING")

    includedir = "../source/"+library+"/include/"+library+"/"
    sourcedir  = "../source/"+library+"/source/"
    testdir    = "../source/tests/"+library+"-test/"

    includedir_api = includedir + libraryNamespace + "?/"

    genRevision                   (api, prefix, libraryNamespace, revision,           sourcedir,      "revision.h")

    genExtensions                 (api, prefix, libraryNamespace, extensions,         includedir_api, "extension.h")

    genBooleans                   (api, prefix, libraryNamespace, enums,              includedir_api, "boolean.h")
    genBooleansFeatureGrouped     (api, prefix, libraryNamespace, enums, features,    includedir_api, "boolean?.h")

    genValues                     (api, prefix, libraryNamespace, enums,              includedir_api, "values.h")
    genValuesFeatureGrouped       (api, prefix, libraryNamespace, enums, features,    includedir_api, "values?.h")

    genTypes_h                    (api, prefix, libraryNamespace, types, bitfGroups,  includedir_api, "types.h")
    genTypeIntegrations_h         (api, prefix, libraryNamespace, types, bitfGroups,  includedir_api, "typeintegrations.h")
    genTypesFeatureGrouped        (api, prefix, libraryNamespace, types, bitfGroups,  features,  includedir_api, "types?.h")

    genBitfieldsAll               (api, prefix, libraryNamespace, enums,              includedir_api, "bitfield.h")
    genBitfieldsFeatureGrouped    (api, prefix, libraryNamespace, enums, features,    includedir_api, "bitfield?.h")

    genEnumsAll                   (api, prefix, libraryNamespace, enums,              includedir_api, "enum.h")
    genEnumsFeatureGrouped        (api, prefix, libraryNamespace, enums, features,    includedir_api, "enum?.h")

    genFunctionsAll               (api, prefix, libraryNamespace, commands,           includedir_api, "functions.h")
    genFunctionsFeatureGrouped    (api, prefix, libraryNamespace, commands, features, includedir_api, "functions?.h")
    
    genFeatures                   (api, prefix, libraryNamespace, features,           includedir_api, "?.h")

    genTypeIntegrations_cpp       (api, prefix, libraryNamespace, types, bitfGroups,  sourcedir,  "typeintegrations.cpp")
    
    genFunctionImplementationsAll (api, prefix, libraryNamespace, commands,           sourcedir,  "functions.cpp")
    
    genTest                       (api, prefix, libraryNamespace, features,           testdir,        "AllVersions_test.cpp")

    # Generate binding classes

    genFunctionObjects_h          (api, prefix, libraryNamespace, commands,           includedir,     "Binding.h")
    genFunctionObjects_cpp        (api, prefix, libraryNamespace, commands,           sourcedir,      "Binding_objects.cpp")

    genVersions                   (api, prefix, libraryNamespace, features,           sourcedir,      "Version_ValidVersions.cpp")

    # ToDo: the generation of enum to/from string will probably be unified...
    genMetaMaps		          (api, prefix, libraryNamespace, enums,              sourcedir,      "Meta_Maps.h",               bitfGroups)
    genMetaStringsByBitfield      (api, prefix, libraryNamespace, bitfGroups,         sourcedir,      "Meta_StringsByBitfield.cpp")
    genMetaBitfieldByString       (api, prefix, libraryNamespace, bitfGroups,         sourcedir,      "Meta_BitfieldsByString.cpp")
    genMetaStringsByEnum          (api, prefix, libraryNamespace, enums,              sourcedir,      "Meta_StringsByBoolean.cpp", prefix.upper() + "boolean")
    genMetaEnumsByString          (api, prefix, libraryNamespace, enums,              sourcedir,      "Meta_BooleansByString.cpp", prefix.upper() + "boolean")
    genMetaStringsByEnum          (api, prefix, libraryNamespace, enums,              sourcedir,      "Meta_StringsByEnum.cpp",    prefix.upper() + "enum")
    genMetaEnumsByString          (api, prefix, libraryNamespace, enums,              sourcedir,      "Meta_EnumsByString.cpp",    prefix.upper() + "enum")

    genMetaStringsByExtension     (api, prefix, libraryNamespace, extensions,         sourcedir,      "Meta_StringsByExtension.cpp")
    genMetaExtensionsByString     (api, prefix, libraryNamespace, extensions,         sourcedir,      "Meta_ExtensionsByString.cpp")

    genReqVersionsByExtension     (api, prefix, libraryNamespace, extensions,         sourcedir,      "Meta_ReqVersionsByExtension.cpp")

    genFunctionStringsByExtension (api, prefix, libraryNamespace, extensions,         sourcedir,      "Meta_FunctionStringsByExtension.cpp")
    genExtensionsByFunctionString (api, prefix, libraryNamespace, extensions,         sourcedir,      "Meta_ExtensionsByFunctionString.cpp")


    print("")


def main(argv):
    try:
        opts, args = getopt.getopt(argv[1:], "a:p:l:s:r:x:", ["api=", "prefix=", "library=", "spec=", "revision=", "patch="])
    except getopt.GetoptError:
        print("usage: %s -a <api> -p <symbol prefix> -l <library namespace> -s <spec file> [-x <patch spec file>] [-r <revision file>]" % argv[0])
        sys.exit(1)
        
    api = None
    prefix = None
    library = None
    inputfile = None
    patchfile = None
    revisionfile = None
    
    for opt, arg in opts:
        if opt in ("-a", "--api"):
            api = arg
        
        if opt in ("-p", "--prefix"):
            prefix = arg

        if opt in ("-s", "--spec"):
            inputfile = arg

        if opt in ("-x", "--patch"):
            patchfile = arg

        if opt in ("-l", "--library"):
            library = arg

        if opt in ("-r", "--revision"):
            revisionfile  = arg
            
    if api == None:
        print("no api given")
        sys.exit(1)
    
    if inputfile == None:
        print("no api spec file given")
        sys.exit(1)
    
    if library == None:
        print("no library name given")
        sys.exit(1)
    
    if prefix == None:
        prefix = api
    
    if library == None:
        library = api

    generate(api, prefix, library, inputfile, revisionfile, patchfile)


if __name__ == "__main__":
    main(sys.argv)
