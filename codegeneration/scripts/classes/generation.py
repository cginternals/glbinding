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
		"typesHeader"                : "include/glbinding/types.h",

		"enumsHeader"                : "include/glbinding/enums.h",
		"bitfieldsHeader"            : "include/glbinding/bitfields.h",
		"constantsHeader"            : "include/glbinding/special_values.h",
	
		"functionObjectsHeader"      : "source/function_objects.h",
		"functionObjectsSource"      : "source/function_objects.cpp",
		"functionWrapperHeader"      : "include/glbinding/functions.h",
		"functionWrapperSource"      : "source/functions.cpp",
		"functionListSource"         : "source/function_list.cpp",

		"extensionsHeader"           : "include/glbinding/Extension.h",

		#meta

		"enumsToStringSource"        : "source/meta_strings_by_enum.cpp",
		"stringsToEnumSource"        : "source/meta_enums_by_string.cpp",
		"extensionsToStringSource"   : "source/meta_strings_by_extension.cpp",
		"stringsToExtensionSource"   : "source/meta_extensions_by_string.cpp",

		"extensionToFunctionsSource" : "source/meta_function_strings_by_extension.cpp",
		"functionToExtensionsSource" : "source/meta_extensions_by_function_string.cpp",

		"extensionsToRequiringVersionSource"  : "source/meta_req_versions_by_extension.cpp"
		#"extensionsToRemovingVersionSource"  : "source/meta_rem_versions_by_extension.cpp",
	}

	for key, value in files.items():
		files[key] = directory + "/" + value

	generateTypesHeader(types, files["typesHeader"])

	generateEnumsHeader(enums, files["enumsHeader"])
	generateBitfieldsHeader(enums, files["bitfieldsHeader"])
	generateConstantsHeader(enums, files["constantsHeader"])

	generateFunctionObjectsHeader(functions, files["functionObjectsHeader"])
	generateFunctionObjectsSource(functions, files["functionObjectsSource"])
	generateFunctionWrapperHeader(functions, files["functionWrapperHeader"])
	generateFunctionWrapperSource(functions, files["functionWrapperSource"])
	
	generateFunctionListSource(functions, files["functionListSource"])

	generateExtensionHeader(extensions, files["extensionsHeader"])

	generateEnumsToStringSource(enums, files["enumsToStringSource"])
	generateStringsToEnumSource(enums, files["stringsToEnumSource"])
	
	generateExtensionsToStringSource(extensions, files["extensionsToStringSource"])
	generateStringsToExtensionSource(extensions, files["stringsToExtensionSource"])

	generateExtensionsToRequiringVersionSource(extensions, files["extensionsToRequiringVersionSource"])
	#generateExtensionsToRemovingVersionSource(extensions, files["extensionsToRemovingVersionSource"])
	generateExtensionToFunctionsSource(extensions, files["extensionToFunctionsSource"])
	generateFunctionsToExtensionSource(extensions, files["functionToExtensionsSource"])
	
