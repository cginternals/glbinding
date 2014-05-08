from Extension import *

#==========================================
extensionsInfoHeaderTemplate = """#pragma once

#include <glbinding/Extension.h>

#include <string>
#include <utility>
#include <unordered_map>

namespace gl {

extern const std::unordered_map<Extension, std::string> extensionNames;
extern const std::unordered_map<std::string, Extension> namesToExtension;
extern const std::unordered_map<Extension, std::pair<unsigned char, unsigned char>> extensionVersions;

} // namespace gl
"""
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
#include "extension_info.h"

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
#include "extension_info.h"

using ucharpair = std::pair<unsigned char, unsigned char>;

namespace gl {

const std::unordered_map<Extension, ucharpair> extensionVersions = {
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

def generateExtensionHeader(extensions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(extensionHeaderTemplate % ",\n\t".join([ e.baseName() for e in extensions ]))
		
def generateExtensionInfoHeader(extensions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(extensionsInfoHeaderTemplate)

def generateExtensionNamesSource(extensions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write(extensionNamesTemplate % (
			",\n\t".join([ enumToName(e) for e in extensions ]),
			",\n\t".join([ nameToEnum(e) for e in extensions ])
			))
			
def generateExtensionVersionsSource(extensions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(extensionVersionsTemplate % ",\n\t".join([ extensionToVersion(e) for e in extensions if e.incore ]))
