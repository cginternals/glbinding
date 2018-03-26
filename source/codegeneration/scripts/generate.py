#!/usr/bin/python

import sys, getopt

import time
import json

from os.path import join as pjoin

import xml.etree.ElementTree as ET

from classes.Feature import *
from classes.Enum import *
from classes.Command import *
from classes.Extension import *
from classes.Type import *

from binding import *

from context import Context


def listApiMemberSets(features):
    apiMemberSetList = []
    for f in features:
        apiMemberSetList.append( (f, False, False) )
        if f.api == "gl": # ToDo: probably seperate for all apis
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                apiMemberSetList.append( (f, True, False) )
            apiMemberSetList.append( (f, False, True) )
    return apiMemberSetList

def generate(profile, targetdir, revisionfile):

    api = profile["baseNamespace"]
    inputfile = profile["sourceFile"]
    patchfile = profile["patchFile"]
    apiRequire = profile["apiIdentifier"]
    multiContextBinding = profile["multiContext"]
    booleanWidth = profile["booleanWidth"]

    # preparing

    print("")
    print("PREPARING")

    # api     = "gl" # ToDo: other apis are untested yet

    print("checking revision")
    file = open(revisionfile, "r")
    revision = int(file.readline())
    file.close()
    print(" revision is " + str(revision))

    print("loading " + inputfile)
    tree       = ET.parse(inputfile)
    registry   = tree.getroot()

    # parsing
    
    print("")
    print("PARSING (" + api + " API)")

    print("parsing features")
    features   = parseFeatures(registry, api, apiRequire)
    print(" # " + str(len(features)) + " features parsed")

    print("parsing types")
    types      = parseTypes(registry, api, apiRequire)
    print(" # " + str(len(types)) + " types parsed")

    print("parsing extensions")
    extensions = parseExtensions(registry, features, api, apiRequire)
    print(" # " + str(len(extensions)) + " extensions parsed")

    print("parsing commands")
    commands   = parseCommands(registry, features, extensions, api, apiRequire)
    print(" # " + str(len(commands)) + " commands parsed")

    print("parsing enums")
    enums      = parseEnums(registry, features, extensions, commands, api, apiRequire)
    print(" # " + str(len(enums)) + " enums parsed")

    print("parsing enum groups")
    groups     = parseGroups(registry, enums, api, apiRequire)
    print(" # " + str(len(groups)) + " enum groups parsed")

    if patchfile is not None: # patching
        print("")
        print("PATCHING")

        print("parsing " + patchfile)
        patchtree     = ET.parse(patchfile)
        patchregistry = patchtree.getroot()

        print("patching types")
        patch = parseTypes(patchregistry, api, apiRequire)
        patchTypes(types, patch)

        print("patching commands")
        patch = parseCommands(patchregistry, features, extensions, api, apiRequire)
        patchCommands(commands, patch)

        print("patching features")
        print(" WARNING: todo")

        print("patching enums")
        patch = parseEnums(patchregistry, features, extensions, commands, api, apiRequire)
        patchEnums(enums, patch, groups)

        print("patching groups")
        patch = parseGroups(patchregistry, enums, api, apiRequire)
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
        if len(g.enums) > 0 and any(enum.type == "GLbitfield" or enum.type == "EGLbitfield" for enum in g.enums) ]

    print("verifying groups")
    verifyGroups(groups, enums)

    print("verifying commands")
    verifyCommands(commands, bitfGroups)

    # generating

    print("")
    print("GENERATING")
    generateBegin = time.time()

    includedir = pjoin(targetdir, "include/{api}binding/")
    includedir_api = pjoin(includedir, "{api}{memberSet}/")
    includedir_aux = pjoin(targetdir+"-aux", "include/{api}binding-aux/")
    sourcedir  = pjoin(targetdir, "source/")
    sourcedir_api  = pjoin(sourcedir, "{api}/")
    sourcedir_aux  = pjoin(targetdir+"-aux", "source/")
    testdir    = pjoin(targetdir, "../tests/{api}binding-test/")

    context = Context(api, multiContextBinding, booleanWidth == 8, revision, features, extensions, enums, bitfGroups, types, commands)
    generalContext = context.general()

    # Generate files with common context
    Generator.generate(generalContext, pjoin(sourcedir_aux, "{api}revision.h"))
    Generator.generate(generalContext, pjoin(includedir_api, "extension.h"))
    # Generator.generate(generalContext, pjoin(includedir_api, "boolean.h"))
    Generator.generate(generalContext, pjoin(includedir_api, "values.h"))
    Generator.generate(generalContext, pjoin(includedir_api, "types.h"))
    Generator.generate(generalContext, pjoin(includedir_api, "bitfield.h"))
    Generator.generate(generalContext, pjoin(includedir_api, "enum.h"))
    Generator.generate(generalContext, pjoin(includedir_api, "functions.h"))
    Generator.generate(generalContext, pjoin(includedir_api, "{api}.h"))

    Generator.generate(generalContext, pjoin(sourcedir_aux, "types_to_string.cpp"))
    Generator.generate(generalContext, pjoin(includedir_aux, "types_to_string.h"))
    Generator.generate(generalContext, pjoin(testdir, "AllVersions_test.cpp"))
    Generator.generate(generalContext, pjoin(includedir, "Binding.h"))
    Generator.generate(generalContext, pjoin(sourcedir, "Binding_list.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux, "ValidVersions_list.cpp"))

    Generator.generate(generalContext, pjoin(includedir_aux, "Meta.h"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_Maps.h"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_getStringByBitfield.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_StringsByBitfield.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_BitfieldsByString.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_StringsByBoolean.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_BooleansByString.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_StringsByEnum.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_EnumsByString.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_StringsByExtension.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_ExtensionsByString.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_ReqVersionsByExtension.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_FunctionStringsByExtension.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_FunctionStringsByVersion.cpp"))
    Generator.generate(generalContext, pjoin(sourcedir_aux,  "Meta_ExtensionsByFunctionString.cpp"))
    
    # KHR binding
    
    if multiContextBinding:
        Generator.generate(generalContext, pjoin(includedir, "MultiContextBinding.h"), "khrbinding/MultiContextBinding.h")
        Generator.generate(generalContext, pjoin(includedir, "MultiContextBinding.inl"), "khrbinding/MultiContextBinding.inl")
    else:
        Generator.generate(generalContext, pjoin(includedir, "SingleContextBinding.h"), "khrbinding/SingleContextBinding.h")
        Generator.generate(generalContext, pjoin(includedir, "SingleContextBinding.inl"), "khrbinding/SingleContextBinding.inl")

    if booleanWidth == 8:
        Generator.generate(generalContext, pjoin(includedir, "Boolean8.h"), "khrbinding/Boolean8.h")
        Generator.generate(generalContext, pjoin(includedir, "Boolean8.inl"), "khrbinding/Boolean8.inl")
    else:
        Generator.generate(generalContext, pjoin(includedir, "Boolean32.h"), "khrbinding/Boolean32.h")
        Generator.generate(generalContext, pjoin(includedir, "Boolean32.inl"), "khrbinding/Boolean32.inl")

    Generator.generate(generalContext, pjoin(includedir, "AbstractFunction.h"), "khrbinding/AbstractFunction.h")
    Generator.generate(generalContext, pjoin(includedir, "AbstractState.h"), "khrbinding/AbstractState.h")
    Generator.generate(generalContext, pjoin(includedir, "AbstractValue.h"), "khrbinding/AbstractValue.h")
    Generator.generate(generalContext, pjoin(includedir, "AbstractVersion.h"), "khrbinding/AbstractVersion.h")
    Generator.generate(generalContext, pjoin(includedir, "AbstractVersion.inl"), "khrbinding/AbstractVersion.inl")
    Generator.generate(generalContext, pjoin(includedir, "CallbackMask.h"), "khrbinding/CallbackMask.h")
    Generator.generate(generalContext, pjoin(includedir, "CallbackMask.inl"), "khrbinding/CallbackMask.inl")
    Generator.generate(generalContext, pjoin(includedir, "ContextHandle.h"), "khrbinding/ContextHandle.h")
    Generator.generate(generalContext, pjoin(includedir, "Function.h"), "khrbinding/Function.h")
    Generator.generate(generalContext, pjoin(includedir, "Function.inl"), "khrbinding/Function.inl")
    Generator.generate(generalContext, pjoin(includedir, "FunctionCall.h"), "khrbinding/FunctionCall.h")
    Generator.generate(generalContext, pjoin(includedir, "ProcAddress.h"), "khrbinding/ProcAddress.h")
    Generator.generate(generalContext, pjoin(includedir, "SharedBitfield.h"), "khrbinding/SharedBitfield.h")
    Generator.generate(generalContext, pjoin(includedir, "SharedBitfield.inl"), "khrbinding/SharedBitfield.inl")
    Generator.generate(generalContext, pjoin(includedir, "State.h"), "khrbinding/State.h")
    Generator.generate(generalContext, pjoin(includedir, "State.inl"), "khrbinding/State.inl")
    Generator.generate(generalContext, pjoin(includedir, "Value.h"), "khrbinding/Value.h")
    Generator.generate(generalContext, pjoin(includedir, "Value.inl"), "khrbinding/Value.inl")
    Generator.generate(generalContext, pjoin(includedir, "Version.h"), "khrbinding/Version.h")
    Generator.generate(generalContext, pjoin(includedir, "Version.inl"), "khrbinding/Version.inl")

    Generator.generate(generalContext, pjoin(sourcedir, "AbstractFunction.cpp"), "khrbinding/AbstractFunction.cpp")
    Generator.generate(generalContext, pjoin(sourcedir, "AbstractState.cpp"), "khrbinding/AbstractState.cpp")
    Generator.generate(generalContext, pjoin(sourcedir, "AbstractValue.cpp"), "khrbinding/AbstractValue.cpp")
    Generator.generate(generalContext, pjoin(sourcedir, "FunctionCall.cpp"), "khrbinding/FunctionCall.cpp")
    
    # KHR binding AUX

    Generator.generate(generalContext, pjoin(includedir_aux, "RingBuffer.h"), "khrbinding-aux/RingBuffer.h")
    Generator.generate(generalContext, pjoin(includedir_aux, "RingBuffer.inl"), "khrbinding-aux/RingBuffer.inl")
    Generator.generate(generalContext, pjoin(includedir_aux, "types_to_string.h"), "khrbinding-aux/types_to_string.h")
    Generator.generate(generalContext, pjoin(includedir_aux, "ValidVersions.h"), "khrbinding-aux/ValidVersions.h")
    Generator.generate(generalContext, pjoin(includedir_aux, "ValidVersions.inl"), "khrbinding-aux/ValidVersions.inl")

    Generator.generate(generalContext, pjoin(sourcedir_aux, "types_to_string.cpp"), "khrbinding-aux/types_to_string.cpp")

    # Generate function-related files with specific contexts for each initial letter of the function name
    for functionGroup in generalContext["functionsByInitial"]["groups"]:
        specificContext = generalContext.copy()
        specificContext["currentFunctionGroup"] = functionGroup
        specificContext["currentFunctionInitial"] = functionGroup["name"].lower()

        Generator.generate(specificContext, pjoin(sourcedir_api, "functions_{currentFunctionInitial}.cpp"), "functions.cpp")
        Generator.generate(specificContext, pjoin(sourcedir, "Binding_objects_{currentFunctionInitial}.cpp"), "Binding_objects.cpp")

    # Generate files with ApiMemberSet-specific contexts
    for feature, core, ext in context.apiMemberSets():
        specificContext = context.apiMemberSetSpecific(feature, core, ext)

        Generator.generate(specificContext, pjoin(includedir_api, "boolean.h"), "booleanF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "values.h"), "valuesF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "types.h"), "typesF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "bitfield.h"), "bitfieldF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "enum.h"), "enumF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "functions.h"), "functionsF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "{api}.h"), "{api}F.h")

    generateEnd = time.time()
    print("generation took {:.3f} seconds".format(generateEnd - generateBegin))


def main(argv):
    try:
        opts, args = getopt.getopt(argv[1:], "p:d:r:", ["profile=", "directory=" , "revision="])
    except getopt.GetoptError:
        print("usage: %s -p <profile JSON> [-d <output directory>] [-r <revision file>]" % argv[0])
        sys.exit(1)

    profile = None
    targetdir = "."
    revision = None

    for opt, arg in opts:
        if opt in ("-p", "--profile"):
            profile = arg
        
        if opt in ("-d", "--directory"):
            targetdir = arg

        if opt in ("-r", "--revision"):
            revision  = arg

    if profile == None or not os.path.isfile(profile):
        print("no profile given or not readable")
        sys.exit(1)

    Status.targetdir = targetdir

    generate(json.load(open(profile)), targetdir, revision)

if __name__ == "__main__":
    main(sys.argv)
