import xml.etree.ElementTree as ET
from classes.Enum import *

#==========================================
enumsHeaderTemplate = """#pragma once

#include <glbinding/types.h>
#include <glbinding/GLenum.h>

namespace gl {

%s

} // namespace gl
"""
#==========================================
constantsHeaderTemplate = """#pragma once

#include <glbinding/types.h>
#include <glbinding/enums.h>

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

const std::unordered_map<gl::GLenum, std::string> constantsNames = {
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
	return "const GLenum %s = %s;" % (enum.baseName(), correctValue(enum.value))
		
def enumToName(enum):
	return '{ gl::%s, "%s" }' % (enum.baseName(), enum.name)
	
def nameToEnum(enum):
	return '{ "%s", gl::%s }' % (enum.name, enum.baseName())

def generateEnumsHeader(enums, outputfile):
	d = groupByType(enums)
	pureEnums = d["GLenum"]
	
	with open(outputfile, 'w') as file:
		file.write(enumsHeaderTemplate % ("\n".join([ enumDefinition(e) for e in pureEnums ])))

def generateConstantsHeader(enums, outputfile):
	d = groupByType(enums)
	del d["GLenum"]
	
	groups = []	
	for t in sorted(d.keys()):
		groups.append("\n".join([ constantDefinition(c) for c in d[t] ]))
	
	with open(outputfile, 'w') as file:
		file.write(constantsHeaderTemplate % (
			"\n\n".join(groups))
		)
		
def generateConstantNamesSource(enums, outputfile):
	pureEnums = [ e for e in enums if e.type == "GLenum" ]
	d = sorted([ es[0] for v, es in groupByValue(pureEnums).items() ])
	
	with open(outputfile, 'w') as file:
		file.write(constantsNamesTemplate % (
			",\n\t".join([ enumToName(e) for e in d ]),
			",\n\t".join([ nameToEnum(e) for e in pureEnums ])
		))
