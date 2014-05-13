import xml.etree.ElementTree as ET
from classes.Enum import *

#==========================================
constantsHeaderTemplate = """#pragma once

#include <glbinding/types.h>

namespace gl {

enum class GLenum : unsigned int
{
	%s
};

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

const std::unordered_multimap<gl::GLenum, std::string> constantsNames = {
	%s
};

const std::unordered_map<std::string, gl::GLenum> namesToConstants = {
	%s
};

} // namespace gl
"""
#==========================================
	
def constantDefinition(enum):
	return "const %s %s = %s;" % (enum.type, enum.baseName(), enum.value)
	
def correctValue(t):
	if not t.startswith("-"):
		return t
	else:
		return "static_cast<unsigned int>(%s)" % t
	
def enumDefinition(enum):
	return "%s = %s" % (enum.baseName(), correctValue(enum.value))
		
def enumToName(enum):
	return '{ gl::GLenum::%s, "%s" }' % (enum.baseName(), enum.name)
	
def nameToEnum(enum):
	return '{ "%s", gl::GLenum::%s }' % (enum.name, enum.baseName())

def generateConstantsHeader(enums, outputfile):
	d = groupByType(enums)
	pureEnums = d["GLenum"]
	del d["GLenum"]
	
	groups = []	
	for t in sorted(d.keys()):
		groups.append("\n".join([ constantDefinition(c) for c in d[t] ]))
	
	with open(outputfile, 'w') as file:
		file.write(constantsHeaderTemplate % (
			",\n\t".join([ enumDefinition(e) for e in pureEnums ]),
			"\n\n".join(groups))
		)
		
def generateConstantNamesSource(enums, outputfile):
	with open(outputfile, 'w') as file:
		file.write(constantsNamesTemplate % (
			",\n\t".join([ enumToName(e) for e in enums if e.type == "GLenum" ]),
			",\n\t".join([ nameToEnum(e) for e in enums if e.type == "GLenum" ])
		))
