import xml.etree.ElementTree as ET

from Enum import *
from Function import *
from Extension import *

from constants_generation import *
from functions_generation import *
from extensions_generation import *

def generate(inputfile, directory):
	tree = ET.parse(inputfile)
	registry = tree.getroot()
	
	enums = sorted(parseEnums(registry))
	functions = sorted(parseFunctions(registry))
	extensions = parseExtensions(registry)
	
	files = {
		"constantsHeader" : "include/glbinding/constants.h",
		
		"functionObjectsHeader" : "include/glbinding/FunctionObjects.h",
		"functionObjectsSource" : "source/FunctionObjects.cpp",
		"functionWrapperHeader" : "include/glbinding/functions.h",
		"functionWrapperSource" : "source/functions.cpp",
		
		"extensionsHeader" : "include/glbinding/Extension.h",
		"extensionsInfoHeader" : "source/extension_info.h",
		"extensionsNamesSource" : "source/extension_names.cpp",
		"extensionsVersionsSource" : "source/extension_versions.cpp"
	}
	
	for key, value in files.iteritems():
		files[key] = directory + "/" + value
	
	generateConstantsHeader(enums, files["constantsHeader"])
	
	generateFunctionObjectsHeader(functions, files["functionObjectsHeader"])
	generateFunctionObjectsSource(functions, files["functionObjectsSource"])
	generateFunctionWrapperHeader(functions, files["functionWrapperHeader"])
	generateFunctionWrapperSource(functions, files["functionWrapperSource"])
	
	generateExtensionHeader(extensions, files["extensionsHeader"])
	generateExtensionInfoHeader(extensions, files["extensionsInfoHeader"])
	generateExtensionNamesSource(extensions, files["extensionsNamesSource"])
	generateExtensionVersionsSource(extensions, files["extensionsVersionsSource"])
	