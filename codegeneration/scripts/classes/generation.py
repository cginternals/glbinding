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
	extensions = sorted(parseExtensions(registry))
	
	files = {
		"typesHeader" : "include/glbinding/types.h",
		
		"enumsHeader" : "include/glbinding/enums.h",
		"bitfieldsHeader" : "include/glbinding/bitfields.h",
		"constantsHeader" : "include/glbinding/special_values.h",
		
		"constantsNamesSource" : "source/enum_to_name.cpp",
		"constantsByNameSource" : "source/name_to_enum.cpp",
		
		"functionObjectsHeader" : "include/glbinding/FunctionObjects.h",
		"functionObjectsSource" : "source/FunctionObjects.cpp",
		"functionWrapperHeader" : "include/glbinding/functions.h",
		"functionWrapperSource" : "source/functions.cpp",
		"functionListSource" : "source/function_list.cpp",
		
		"extensionsHeader" : "include/glbinding/Extension.h",
		"extensionsNamesSource" : "source/extension_to_name.cpp",
		"extensionsByNameSource" : "source/name_to_extension.cpp",
		"extensionsVersionsSource" : "source/extension_core_versions.cpp",
		"extensionToFunctionsSource" : "source/extension_to_functions.cpp",
		"functionToExtensionsSource" : "source/function_to_extensions.cpp"
	}
	
	for key, value in files.items():
		files[key] = directory + "/" + value
		
	generateTypesHeader(types, files["typesHeader"])

	generateEnumsHeader(enums, files["enumsHeader"])
	generateBitfieldsHeader(enums, files["bitfieldsHeader"])
	
	generateConstantsHeader(enums, files["constantsHeader"])
	generateConstantNamesSource(enums, files["constantsNamesSource"])
	generateConstantsByNameSource(enums, files["constantsByNameSource"])
	
	generateFunctionObjectsHeader(functions, files["functionObjectsHeader"])
	generateFunctionObjectsSource(functions, files["functionObjectsSource"])
	generateFunctionWrapperHeader(functions, files["functionWrapperHeader"])
	generateFunctionWrapperSource(functions, files["functionWrapperSource"])
	generateFunctionListSource(functions, files["functionListSource"])
	
	generateExtensionHeader(extensions, files["extensionsHeader"])
	generateExtensionNamesSource(extensions, files["extensionsNamesSource"])
	generateExtensionsByNameSource(extensions, files["extensionsByNameSource"])
	generateExtensionVersionsSource(extensions, files["extensionsVersionsSource"])
	generateExtensionToFunctionsSource(extensions, files["extensionToFunctionsSource"])
	generateFunctionsToExtensionSource(extensions, files["functionToExtensionsSource"])
	
