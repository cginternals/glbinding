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
bitfieldsHeaderTemplate = """#pragma once

#include <glbinding/types.h>

namespace gl {

%s

} // namespace gl
"""
#==========================================
constantsHeaderTemplate = """#pragma once

#include <glbinding/types.h>

namespace gl {

%s

} // namespace gl
"""
#==========================================
constantsNamesTemplate = """#include <glbinding/types.h>
#include <glbinding/enums.h>

#include "declarations.h"

namespace gl {

const std::unordered_map<gl::GLenum, std::string> enum_to_name = {
	%s
};

} // namespace gl
"""
#==========================================
constantsByNameTemplate = """#include <glbinding/types.h>
#include <glbinding/enums.h>

#include "declarations.h"

namespace gl {

const std::unordered_map<std::string, gl::GLenum> name_to_enum = {
	%s
};

} // namespace gl
"""
#==========================================
	
def constantDefinition(enum):
	return "constexpr %s %s = %s;" % (enum.type, enum.baseName(), enum.value)
	
def correctValue(t):
	if not t.startswith("-"):
		return t
	else:
		return "static_cast<unsigned int>(%s)" % t
	
def enumDefinition(enum):
	return "constexpr GLenum %s = %s;" % (enum.baseName(), correctValue(enum.value))
		
def enumToName(enum):
	return '{ gl::%s, "%s" }' % (enum.baseName(), enum.name)
	
def nameToEnum(enum):
	return '{ "%s", gl::%s }' % (enum.name, enum.baseName())

def generateEnumsHeader(enums, outputfile):
	d = groupByType(enums)
	pureEnums = d["GLenum"]
	
	with open(outputfile, 'w') as file:
		file.write(enumsHeaderTemplate % ("\n".join([ enumDefinition(e) for e in pureEnums ])))

def generateBitfieldsHeader(enums, outputfile):
	d = groupByType(enums)
	bitfields = groupByGroup(d["GLbitfield"])
	
	a = sorted([ "// %s\n%s" % (group, "\n".join([ constantDefinition(e) for e in values ]))  for group, values in bitfields.items() ])
	
	with open(outputfile, 'w') as file:
		file.write(bitfieldsHeaderTemplate % ("\n\n".join(a)))

def generateConstantsHeader(enums, outputfile):
	d = groupByType(enums)
	del d["GLenum"]
	del d["GLbitfield"]
	
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
		file.write(constantsNamesTemplate % (",\n\t".join([ enumToName(e) for e in d ])))	
		
def generateConstantsByNameSource(enums, outputfile):
	pureEnums = [ e for e in enums if e.type == "GLenum" ]
	
	with open(outputfile, 'w') as file:
		file.write(constantsByNameTemplate % (",\n\t".join([ nameToEnum(e) for e in pureEnums ])))
