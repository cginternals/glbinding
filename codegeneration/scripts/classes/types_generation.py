import xml.etree.ElementTree as ET
from classes.Type import *

#==========================================
typesHeaderTemplate = """#pragma once

#include <cstddef>
#include <cstdint>

#ifdef _MSC_VER
#define GL_APIENTRY __stdcall
#else
#define GL_APIENTRY
#endif

namespace gl 
{

%s

} // namespace gl

#include <glbinding/type_integration.h>
"""
#==========================================

def convertTypedefLine(line, name):		
	if not line.startswith("typedef"):
		return line
	else:
		return "using "+name+" = "+line[8:].replace(name, "")

def multilineConvertTypedef(t):
	return "\n".join([ convertTypedefLine(line, t.name) for line in t.value.split('\n') ])

def convertTypedef(t):
	if '\n' in t.value:
		return multilineConvertTypedef(t)

	if t.name == "GLenum":
		return "enum class GLenum : unsigned int;\n"

	if not t.value.startswith("typedef"):
		return t.value
	else:
		return "using "+t.name+" = "+t.typevalue[8:]

def convertType(t):
	return convertTypedef(t).replace(" ;", ";").replace("( *)", "(*)").replace("(*)", "(GL_APIENTRY *)")

def generateTypesHeader(types, outputfile):
	with open(outputfile, 'w') as file:
		file.write(typesHeaderTemplate % "\n".join([ convertType(t) for t in types ]))
