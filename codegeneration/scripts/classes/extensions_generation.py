from Extension import *

#==========================================
extensionHeaderTemplate = """#pragma once

namespace gl {

enum class Extension : int
{
	Unknown = -1,
	%s
};

} // namespace gl
"""
#==========================================
extensionNamesTemplate = """#include <glbinding/Extension.h>

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

#include <utility>
#include <string>
#include <unordered_map>

using version = std::pair<unsigned char, unsigned char>;

namespace gl {

const std::unordered_map<glow::Extension, version> extensionVersions = {
	%s
};

} // namespace gl
"""
#==========================================

def enumToName(extension):
	return '{ Extension::%s, "%s" }' % (extension.baseName(), extension.name)
	
def nameToEnum(extension):
	return '{ "%s", %s }' % (extension.name, extension.baseName())
	
def extensionToVersion(extension):
	return "Extension::%s, version(%s, %s)" % (extension.baseName(), extension.incore.major, extension.incore.minor)

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
