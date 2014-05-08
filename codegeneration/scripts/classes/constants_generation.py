import xml.etree.ElementTree as ET
from Enum import *

#==========================================
constantsHeaderTemplate = """#pragma once

#include <glbinding/types.h>

namespace gl {

%s

} // namespace gl
"""
#==========================================
constantsNamesTemplate = """#include <glbinding/types.h>
#include <glbinding/constants.h>

#include "declarations.h"

#include <unordered_map>
#include <string>

namespace gl {

const std::unordered_multimap<gl::GLuint64, std::string> constantsNames = {
	%s
};

const std::unordered_map<std::string, gl::GLuint64> namesToConstants = {
	%s
};

} // namespace gl
"""
#==========================================

def enumDefinition(enum):
	return "const %s %s = %s;" % (enum.type, enum.baseName(), enum.value)
	
def enumToName(enum):
	return '{ gl::%s, "%s" }' % (enum.baseName(), enum.name)
	
def nameToEnum(enum):
	return '{ "%s", gl::%s }' % (enum.name, enum.baseName())

def generateConstantsHeader(enums, outputfile):
	with open(outputfile, 'w') as file:
		file.write(constantsHeaderTemplate % "\n".join([ enumDefinition(e) for e in enums ]))
		
def generateConstantNamesSource(enums, outputfile):
	with open(outputfile, 'w') as file:
		file.write(constantsNamesTemplate % (
			",\n\t".join([ enumToName(e) for e in enums ]),
			",\n\t".join([ nameToEnum(e) for e in enums ])
		))