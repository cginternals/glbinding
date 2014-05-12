import xml.etree.ElementTree as ET

from classes.Enum import *
from classes.Function import *
from classes.Extension import *

from classes.types_generation import *
from classes.constants_generation import *
from classes.functions_generation import *
from classes.extensions_generation import *

def generate(inputfile, directory):
	tree = ET.parse(inputfile)
	registry = tree.getroot()
	
	types = parseTypes(registry)
	enums = sorted(parseEnums(registry))
	functions = sorted(parseFunctions(registry))
	extensions = parseExtensions(registry)
	
	files = {
		"typesHeader" : "include/glbinding/types.h",
		"constantsHeader" : "include/glbinding/constants.h",
		"constantsNamesSource" : "source/constant_names.cpp",
		
		"functionObjectsHeader" : "include/glbinding/FunctionObjects.h",
		"functionObjectsSource" : "source/FunctionObjects.cpp",
		"functionWrapperHeader" : "include/glbinding/functions.h",
		"functionWrapperSource" : "source/functions.cpp",
		
		"extensionsHeader" : "include/glbinding/Extension.h",
		"extensionsNamesSource" : "source/extension_names.cpp",
		"extensionsVersionsSource" : "source/extension_versions.cpp",
		"extensionsRequirementsSource" : "source/extension_requirements.cpp"
	}
	
	for key, value in files.items():
		files[key] = directory + "/" + value
		
	generateTypesHeader(types, files["typesHeader"])
	
"""
	generateConstantsHeader(enums, files["constantsHeader"])
	generateConstantNamesSource(enums, files["constantsNamesSource"])
	
	generateFunctionObjectsHeader(functions, files["functionObjectsHeader"])
	generateFunctionObjectsSource(functions, files["functionObjectsSource"])
	generateFunctionWrapperHeader(functions, files["functionWrapperHeader"])
	generateFunctionWrapperSource(functions, files["functionWrapperSource"])
	
	generateExtensionHeader(extensions, files["extensionsHeader"])
	generateExtensionNamesSource(extensions, files["extensionsNamesSource"])
	generateExtensionVersionsSource(extensions, files["extensionsVersionsSource"])
	generateExtensionRequirementsSource(extensions, files["extensionsRequirementsSource"])
"""
	
	
