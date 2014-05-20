from classes.Extension import *
from classes.name_translation import *

#==========================================
extensionHeaderTemplate = """#pragma once

#include <functional>

namespace gl {

enum class Extension : int
{
	Unknown = -1,
	%s
};

} // namespace gl

namespace std {

template<>
struct hash<gl::Extension>
{
	hash<int>::result_type operator()(gl::Extension extension) const
	{
		return hash<int>()(static_cast<int>(extension));
	}
};

} // namespace std

"""
#==========================================
extensionNamesTemplate = """#include <glbinding/Extension.h>

#include "declarations.h"

namespace gl {

const std::unordered_map<Extension, std::string> extension_to_name = {
	{ Extension::Unknown, "Unknown" },
	%s
};
	
} // namespace gl
"""
#==========================================
extensionByNameTemplate = """#include <glbinding/Extension.h>

#include "declarations.h"

namespace gl {

const std::unordered_map<std::string, Extension> name_to_extension = {
	{ "Unknown", Extension::Unknown },
	%s
};
	
} // namespace gl
"""
#==========================================
extensionVersionsTemplate = """#include <glbinding/Extension.h>

#include "declarations.h"

#include <utility>
#include <unordered_map>

using ucharpair = std::pair<unsigned char, unsigned char>;

namespace gl {

const std::unordered_map<Extension, ucharpair> extension_core_versions = {
	%s
};

} // namespace gl
"""
#==========================================
extensionToFunctionsTemplate = """#include <glbinding/Extension.h>

#include "declarations.h"

namespace gl {

const std::unordered_map<Extension, std::vector<std::string>> extension_to_functions = {
	%s
};

} // namespace gl
"""
#==========================================
functionToExtensionsTemplate = """#include <glbinding/Extension.h>

#include "declarations.h"

namespace gl {

const std::unordered_map<std::string, std::vector<Extension>> function_to_extensions = {
	%s
};

} // namespace gl
"""
#==========================================

def enumToName(extension):
	return '{ Extension::%s, "%s" }' % (extension.baseName(), extension.name)
	
def nameToEnum(extension):
	return '{ "%s", Extension::%s }' % (extension.name, extension.baseName())
	
def extensionToVersion(extension):
	return "{ Extension::%s, ucharpair(%s, %s) }" % (extension.baseName(), extension.incore.major, extension.incore.minor)
	
def extensionRequiredFunctions(extension):
	return "{ Extension::%s, { %s } }" % (extension.baseName(), ", ".join([ '"%s"' % f for f in extension.requiredFunctions ]))

def functionRequiredByExtensions(function, extensions):
	return '{ "%s", { %s } }' % (function, ", ".join([ "Extension::"+e.baseName() for e in extensions ]))

def generateExtensionHeader(extensions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(extensionHeaderTemplate % ",\n\t".join([ e.baseName() for e in extensions ]))
		
def generateExtensionNamesSource(extensions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write(extensionNamesTemplate % (
			",\n\t".join([ enumToName(e) for e in extensions ])
			))

def generateExtensionsByNameSource(extensions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write(extensionByNameTemplate % (
			",\n\t".join([ nameToEnum(e) for e in extensions ])
			))
			
def generateExtensionVersionsSource(extensions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(extensionVersionsTemplate % ",\n\t".join([ extensionToVersion(e) for e in extensions if e.incore ]))

def generateExtensionToFunctionsSource(extensions, outputfile):				
	with open(outputfile, 'w') as file:		
		file.write(extensionToFunctionsTemplate % (
			",\n\t".join([ extensionRequiredFunctions(e) for e in extensions if len(e.requiredFunctions)>0 ])
			))

def generateFunctionsToExtensionSource(extensions, outputfile):	
	funcToExtension = dict()
	for e in extensions:
		for f in e.requiredFunctions:
			if not f in funcToExtension:
				funcToExtension[f] = set()
			funcToExtension[f].add(e)
			
	with open(outputfile, 'w') as file:		
		file.write(functionToExtensionsTemplate % (
			",\n\t".join([functionRequiredByExtensions(f, sorted(funcToExtension[f])) for f in sorted(funcToExtension.keys()) ])
			))
		