import xml.etree.ElementTree as ET
from classes.Type import *

#==========================================
typesHeaderTemplate = """#pragma once

#include <cstddef>
#include <cstdint>

namespace gl {

%s

} // namespace gl
"""
#==========================================
metaTypeHeaderTemplate = """#pragma once

#include <glbinding/types.h>

namespace gl {

enum ParameterType
{
	%s
};

union ParameterValue
{
	%s
};

} // namespace gl
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
		
	if not t.value.startswith("typedef"):
		return t.value
	else:
		return "using "+t.name+" = "+t.typevalue[8:]

def convertType(t):
	return convertTypedef(t).replace(" ;", ";").replace("( *)", "(*)")
	
def variantName(t):
	if t.name.startswith("struct"):
		return t.name.split(" ")[1]+"_value"
	return t.name[2:].lower()+"_value"
	
def variantType(t):
	if t.name.startswith("struct"):
		return t.name+" *"
	return t.name
	
def metaType(t):
	if t.name.startswith("struct"):
		return t.name.split(" ")[1]+"Type"
	return t.name+"Type"

def generateTypesHeader(types, outputfile):
	with open(outputfile, 'w') as file:
		file.write(typesHeaderTemplate % "\n".join([convertType(t) for t in types ]))
		
def generateMetaTypeHeader(types):
	print(
		metaTypeHeaderTemplate % (
			",\n\t".join([ metaType(t) for t in types ]),
			",\n\t".join([ variantType(t)+" "+variantName(t) for t in types if t.name != "GLvoid" ])
		)
	)

