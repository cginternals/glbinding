import xml.etree.ElementTree as ET
from classes.Enum import *

#==========================================
enumsHeaderTemplate = """#pragma once

#include <glbinding/types.h>

namespace gl 
{

enum class GLenum : unsigned int
{
	%s
};

// import enums to namespace

%s

} // namespace gl
"""
#==========================================
bitfieldsHeaderTemplate = """#pragma once

#include <glbinding/types.h>

namespace gl 
{

%s

} // namespace gl
"""
#==========================================
constantsHeaderTemplate = """#pragma once

#include <glbinding/types.h>

namespace gl 
{

%s

} // namespace gl
"""
#==========================================
enumsToStringTemplate = """
#include "Meta_StringsByEnum.hpp"


namespace gl
{

const std::unordered_map<GLenum, std::string> Meta_StringsByEnum::s_strings =
{
#ifdef STRINGS_BY_GL
    %s
#endif
};

} // namespace gl
"""
#==========================================
stringsToEnumTemplate = """
#include "Meta_EnumsByString.hpp"


namespace gl 
{

const std::unordered_map<std::string, GLenum> Meta_EnumsByString::s_enums = 
{
#ifdef GL_BY_STRINGS
    %s
#endif
};

} // namespace gl
"""
#==========================================
	
def constantDefinition(enum):
	return "static const %s %s = %s;" % (enum.type, enum.baseName(), enum.value)
	
def correctValue(t):
	if not t.startswith("-"):
		return t
	else:
		return "static_cast<unsigned int>(%s)" % t

	
def enumDefinition(enum):
	return "%s = %s" % (enum.baseName(), correctValue(enum.value))	
	
def enumImportDefinition(enum):
	return "static const GLenum %s = GLenum::%s;" % (enum.baseName(), enum.baseName())

def enumToString(enum):
	return '{ gl::%s, "%s" }' % (enum.baseName(), enum.name)
	
def stringToEnum(enum):
	return '{ "%s", gl::%s }' % (enum.name, enum.baseName())


def generateEnumsHeader(enums, outputfile):
	d = groupByType(enums)
	pureEnums = d["GLenum"]
	
	with open(outputfile, 'w') as file:
		file.write(enumsHeaderTemplate % (
			",\n\t".join([ enumDefinition(e) for e in pureEnums ]),
			"\n".join([ enumImportDefinition(e) for e in pureEnums ])
			)
		)

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
		
def generateEnumsToStringSource(enums, outputfile):
	pureEnums = [ e for e in enums if e.type == "GLenum" ]
	d = sorted([ es[0] for v, es in groupByValue(pureEnums).items() ])
	
	with open(outputfile, 'w') as file:
		file.write(enumsToStringTemplate % (",\n    ".join([ enumToString(e) for e in d ])))	

def generateStringsToEnumSource(enums, outputfile):
	pureEnums = [ e for e in enums if e.type == "GLenum" ]
	
	with open(outputfile, 'w') as file:
		file.write(stringsToEnumTemplate % (",\n    ".join([ stringToEnum(e) for e in pureEnums ])))
