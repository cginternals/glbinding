#!/usr/bin/python

import sys, getopt

import xml.etree.ElementTree as ET

from classes.Feature import *
from classes.Enum import *
#from classes.Function import *
from classes.Extension import *
from classes.Type import *

from binding import *

#from classes.types_generation import *
#from classes.constants_generation import *
#from classes.functions_generation import *

from gen_bitfields import *
from gen_booleans import *
from gen_enums import *
from gen_values import *
from gen_types import *

from gen_extensions import *
from gen_meta import *

def generate(inputfile, targetdir):

	tree       = ET.parse(inputfile)
	registry   = tree.getroot()

	types 	   = parseTypes(registry)

	features   = parseFeatures(registry)

	enums      = sorted(parseEnums(registry))
	extensions = sorted(parseExtensions(registry, features))


#	functions = sorted(parseFunctions(registry))

#	files = {
#		"typesHeader"                : "include/glbinding/types.h",
#
#		"enumsHeader"                : "include/glbinding/GLenum.h",
#		"bitfieldsHeader"            : "include/glbinding/bitfields.h",
#		"constantsHeader"            : "include/glbinding/special_values.h",
#	
#		"functionObjectsHeader"      : "source/function_objects.h",
#		"functionObjectsSource"      : "source/function_objects.cpp",
#		"functionWrapperHeader"      : "include/glbinding/functions.h",
#		"functionWrapperSource"      : "source/functions.cpp",
#		"functionListSource"         : "source/function_list.cpp",
#
#		"extensionsHeader"           : "include/glbinding/GLextension.h",
#
#		#meta
#
#		"enumsToStringSource"        : "source/GLMeta_StringsByEnum.cpp",
#		"stringsToEnumSource"        : "source/GLMeta_EnumsByString.cpp",
#		"extensionsToStringSource"   : "source/GLMeta_StringsByExtension.cpp",
#		"stringsToExtensionSource"   : "source/GLMeta_ExtensionsByString.cpp",
#
#		"extensionToFunctionsSource" : "source/GLMeta_FunctionStringsByExtension.cpp",
#		"functionToExtensionsSource" : "source/GLMeta_ExtensionsByFunctionString.cpp",
#
#		"extensionsToRequiringVersionSource"  : "source/GLMeta_ReqVersionsByExtension.cpp"
#	}
#
#	for key, value in files.items():
#		files[key] = directory + "/" + value

	#generateTypesHeader(types, files["typesHeader"])

	#generateEnumsHeader(enums, files["enumsHeader"])
	#generateBitfieldsHeader(enums, files["bitfieldsHeader"])
	#generateConstantsHeader(enums, files["constantsHeader"])

	#generateFunctionObjectsHeader(functions, files["functionObjectsHeader"])
	#generateFunctionObjectsSource(functions, files["functionObjectsSource"])
	#generateFunctionWrapperHeader(functions, files["functionWrapperHeader"])
	#generateFunctionWrapperSource(functions, files["functionWrapperSource"])
	
	#generateFunctionListSource(functions, files["functionListSource"])

	

	#generateEnumsToStringSource(enums, files["enumsToStringSource"])
	#generateStringsToEnumSource(enums, files["stringsToEnumSource"])
	
	#generateExtensionsToStringSource(extensions, files["extensionsToStringSource"])
	#generateStringsToExtensionSource(extensions, files["stringsToExtensionSource"])

	#generateExtensionsToRequiringVersionSource(extensions, files["extensionsToRequiringVersionSource"])
	##generateExtensionsToRemovingVersionSource(extensions, files["extensionsToRemovingVersionSource"])
	#generateExtensionToFunctionsSource(extensions, files["extensionToFunctionsSource"])
	#generateFunctionsToExtensionSource(extensions, files["functionToExtensionsSource"])
	
	includedir = targetdir + "/include/glbinding/"
	sourcedir  = targetdir + "/source/"

	genBitfields			    (enums,      includedir, "bitfield.h")
	genBooleans			   	    (enums,      includedir, "boolean.h")
	genEnums 					(enums,      includedir, "enum.h")
	genValues		   	        (enums,      includedir, "values.h")
	
	genTypes                    (types,      includedir, "types.h")  

	genExtensions			   	(extensions, includedir, "extension.h")

	genMetaStringsByEnum	    (enums,      sourcedir,  "Meta_StringsByEnum.cpp")
	genMetaEnumsByString	    (enums,      sourcedir,  "Meta_EnumsByString.cpp")

	genMetaStringsByExtension	(extensions, sourcedir,  "Meta_StringsByExtension.cpp")
	genMetaExtensionsByString	(extensions, sourcedir,  "Meta_ExtensionsByString.cpp")

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
