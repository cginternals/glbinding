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
#include <glbinding/Meta.h>

#include <glbinding/Extension.h>


namespace gl
{

const std::unordered_map<Extension, std::string> Meta::s_stringsByExtension =
{
#ifdef STRINGS_BY_GL
    %s
#endif
};

} // namespace gl
"""
#==========================================
stringsToExtensionTemplate = """
#include <glbinding/Meta.h>

#include <glbinding/Extension.h>


namespace gl
{

const std::unordered_map<std::string, Extension> Meta::s_extensionsByString =
{
#ifdef GL_BY_STRINGS
    %s
#endif
};

} // namespace gl
"""
#==========================================
extensionsToRequiringVersionTemplate = """
#include <glbinding/Meta.h>

#include <glbinding/Extension.h>


namespace gl 
{

const std::unordered_map<Extension, Meta::ucharpair> Meta::s_reqVersionsByExtension = 
{
    %s
};

} // namespace gl
"""
#==========================================
extensionToFunctionsTemplate = """
#include <glbinding/Meta.h>

#include <glbinding/Extension.h>


namespace gl 
{

const std::unordered_map<Extension, std::vector<std::string>> Meta::s_functionStringsByExtension = 
{
    %s
};

} // namespace gl
"""
#==========================================
functionToExtensionsTemplate = """
#include <glbinding/Meta.h>

#include <glbinding/Extension.h>


namespace gl 
{

const std::unordered_map<std::string, std::vector<Extension>> Meta::s_extensionsByFunctionString = 
{
    %s
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
