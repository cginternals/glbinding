from classes.Extension import *
from classes.name_translation import *

#==========================================
extensionHeaderTemplate = """#pragma once

#include <functional>

namespace gl 
{

enum class Extension : int
{
    UNKNOWN = -1,
    %s
};

} // namespace gl

namespace std 
{

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
extensionsToStringTemplate = """
#include "Meta_StringsByExtension.hpp"


namespace gl
{

const std::unordered_map<Extension, std::string> Meta_StringsByExtension::s_strings =
{
#ifdef STRINGS_BY_GL
    %s
#endif
};

} // namespace gl
"""
#==========================================
stringsToExtensionTemplate = """
#include "Meta_ExtensionsByString.hpp"


namespace gl
{

const std::unordered_map<std::string, Extension> Meta_ExtensionsByString::s_extensions =
{
#ifdef GL_BY_STRINGS
    %s
#endif
};

} // namespace gl
"""
#==========================================
extensionsToRequiringVersionTemplate = """
#include "Meta_ReqVersionsByExtension.hpp"


namespace gl 
{

const std::unordered_map<Extension, Meta_ReqVersionsByExtension::ucharpair> Meta_ReqVersionsByExtension::s_versions = 
{
    %s
};

} // namespace gl
"""
#==========================================
extensionToFunctionsTemplate = """
#include "Meta_FunctionStringsByExtension.hpp"


namespace gl 
{

const std::unordered_map<Extension, std::vector<std::string>> Meta_FunctionStringsByExtension::s_strings = 
{
#ifdef STRINGS_BY_GL
    %s
#endif
};

} // namespace gl
"""
#==========================================
functionToExtensionsTemplate = """
#include "Meta_ExtensionsByFunctionString.hpp"


namespace gl 
{

const std::unordered_map<std::string, std::vector<Extension>> Meta_ExtensionsByFunctionString::s_extensions = 
{
#ifdef GL_BY_STRINGS
    %s
#endif
};

} // namespace gl
"""
#==========================================

def extensionToString(extension):
	return '{ Extension::%s, "%s" }' % (extension.baseName(), extension.name)

def stringToExtension(extension):
	return '{ "%s", Extension::%s }' % (extension.name, extension.baseName())

def extensionToRequiringVersion(extension):
	return "{ Extension::%s, ucharpair(%s, %s) }" % (extension.baseName(), extension.incore.major, extension.incore.minor)

def extensionRequiredFunctions(extension):
	return "{ Extension::%s, { %s } }" % (extension.baseName(), ", ".join([ '"%s"' % f for f in extension.requiredFunctions ]))

def functionRequiredByExtensions(function, extensions):
	return '{ "%s", { %s } }' % (function, ", ".join([ "Extension::"+e.baseName() for e in extensions ]))

def generateExtensionHeader(extensions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(extensionHeaderTemplate % ",\n    ".join([ e.baseName() for e in extensions ]))
		
def generateExtensionsToStringSource(extensions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write(extensionsToStringTemplate % (
			",\n    ".join([ extensionToString(e) for e in extensions ])
			))

def generateStringsToExtensionSource(extensions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write(stringsToExtensionTemplate % (
			",\n    ".join([ stringToExtension(e) for e in extensions ])
			))
			
def generateExtensionsToRequiringVersionSource(extensions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(extensionsToRequiringVersionTemplate % ",\n    ".join([ extensionToRequiringVersion(e) for e in extensions if e.incore ]))

def generateExtensionToFunctionsSource(extensions, outputfile):				
	with open(outputfile, 'w') as file:		
		file.write(extensionToFunctionsTemplate % (
			",\n    ".join([ extensionRequiredFunctions(e) for e in extensions if len(e.requiredFunctions)>0 ])
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
			",\n    ".join([functionRequiredByExtensions(f, sorted(funcToExtension[f])) for f in sorted(funcToExtension.keys()) ])
			))
