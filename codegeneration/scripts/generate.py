#!/usr/bin/python

import sys, getopt

import xml.etree.ElementTree as ET

from classes.Feature import *
from classes.Enum import *
from classes.Command import *
from classes.Extension import *
from classes.Type import *

from binding import *

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

def generate(inputfile, targetdir):

    print "parsing " + inputfile
    tree       = ET.parse(inputfile)
    registry   = tree.getroot()

    print "parsing types"
    types        = parseTypes(registry)
    print "parsing features"
    features   = parseFeatures(registry)
    print "parsing enums"
    enums      = sorted(parseEnums(registry, features))
    print "parsing extensions"
    extensions = sorted(parseExtensions(registry, features))
    print "parsing commands"
    commands   = sorted(parseCommands(registry, features))

    includedir = targetdir + "/include/glbinding/"
    includedir_featured = includedir + "featured/"
    sourcedir  = targetdir + "/source/"


    genFeatures                  (features,           includedir_featured, "gl?.h")

    genBooleans                  (enums,              includedir, "boolean.h")

    genBitfieldsAll              (enums,              includedir, "bitfield.h")
    genBitfieldsFeatureGrouped   (enums, features,    includedir_featured, "bitfield?.h")

    genEnumsAll                  (enums,              includedir, "enum.h")
    genEnumsFeatureGrouped       (enums, features,    includedir_featured, "enum?.h")

    genValues                    (enums,              includedir, "values.h")

    genTypes_h                   (types,              includedir, "types.h")  
    genTypes_cpp                 (types,              sourcedir,  "types.cpp")  

    genExtensions                (extensions,         includedir, "extension.h")

    genFunctionsAll              (commands,           includedir, "functions.h")
    genFunctionsFeatureGrouped   (commands, features, includedir_featured, "functions?.h")

    genFunctionObjects_h         (commands,           includedir, "FunctionObjects.h")
    genFunctionObjects_cpp       (commands,           sourcedir,  "FunctionObjects.cpp")
    genFunctionList              (commands,           sourcedir,  "FunctionObjects_Functions.cpp")

    genVersions                  (features,           sourcedir,  "Version_ValidVersions.cpp")

    # ToDo: the generation of enum to/from string will probably be unified...
    genMetaStringsByEnum         (enums,              sourcedir,  "Meta_StringsByBitfield.cpp", "GLbitfield")
    genMetaEnumsByString         (enums,              sourcedir,  "Meta_BitfieldsByString.cpp", "GLbitfield")
    genMetaStringsByEnum         (enums,              sourcedir,  "Meta_StringsByBoolean.cpp",  "GLboolean")
    genMetaEnumsByString         (enums,              sourcedir,  "Meta_BooleansByString.cpp",  "GLboolean")
    genMetaStringsByEnum         (enums,              sourcedir,  "Meta_StringsByEnum.cpp",     "GLenum")
    genMetaEnumsByString         (enums,              sourcedir,  "Meta_EnumsByString.cpp",     "GLenum")

    genMetaStringsByExtension    (extensions,         sourcedir,  "Meta_StringsByExtension.cpp")
    genMetaExtensionsByString    (extensions,         sourcedir,  "Meta_ExtensionsByString.cpp")

    genReqVersionsByExtension    (extensions,         sourcedir,  "Meta_ReqVersionsByExtension.cpp")

    genFunctionStringsByExtension(extensions,         sourcedir,  "Meta_FunctionStringsByExtension.cpp")
    genExtensionsByFunctionString(extensions,         sourcedir,  "Meta_ExtensionsByFunctionString.cpp")


def main(argv):
    try:
        opts, args = getopt.getopt(argv[1:], "s:d:", ["spec=", "directory="])
    except getopt.GetoptError:
        print("usage: %s -s <GL spec> [-d <output directory>]" % argv[0])
        sys.exit(1)
        
    targetdir = "."
    inputfile = None
    
    for opt, arg in opts:
        if opt in ("-s", "--spec"):
            inputfile = arg
            
        if opt in ("-d", "--directory"):
            targetdir = arg
            
    if inputfile == None:
        print("No GL spec file given")
        sys.exit(1)

    generate(inputfile, targetdir)

if __name__ == "__main__":
    main(sys.argv)
