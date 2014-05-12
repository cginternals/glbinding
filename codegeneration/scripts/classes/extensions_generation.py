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

#include <string>
#include <unordered_map>

namespace gl {

const std::unordered_map<Extension, std::string> extensionNames = {
	{ Extension::Unknown, "Unknown" },
	%s
};

const std::unordered_map<std::string, Extension> namesToExtension = {
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

const std::unordered_map<Extension, ucharpair> extensionVersions = {
	%s
};

} // namespace gl
"""
#==========================================
extensionRequirementsTemplate = """#include <glbinding/Extension.h>

#include "declarations.h"

#include <unordered_map>
#include <set>
#include <string>

namespace gl {

const std::unordered_map<Extension, std::set<std::string>> requiredFunctionsByExtension = {
	%s
};

const std::unordered_map<std::string, std::set<Extension>> extensionsRequiringFunction = {
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
			",\n\t".join([ enumToName(e) for e in extensions ]),
			",\n\t".join([ nameToEnum(e) for e in extensions ])
			))
			
def generateExtensionVersionsSource(extensions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(extensionVersionsTemplate % ",\n\t".join([ extensionToVersion(e) for e in extensions if e.incore ]))

def generateExtensionRequirementsSource(extensions, outputfile):	
	funcToExtension = dict()
	for e in extensions:
		for f in e.requiredFunctions:
			if not f in funcToExtension:
				funcToExtension[f] = set()
			funcToExtension[f].add(e)
			
	with open(outputfile, 'w') as file:		
		file.write(extensionRequirementsTemplate % (
			",\n\t".join([ extensionRequiredFunctions(e) for e in extensions if len(e.requiredFunctions)>0 ]),
			",\n\t".join([functionRequiredByExtensions(f, es) for f, es in funcToExtension.items() ])
			))
		