import xml.etree.ElementTree as ET
from classes.Type import *

#==========================================
typesHeaderTemplate = """#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>

namespace gl {

%s

} // namespace gl

namespace std {

template<>
struct hash<gl::GLenum>
{
    hash<unsigned int>::result_type operator()(const gl::GLenum & e) const
    {
        return hash<unsigned int>()(static_cast<unsigned int>(e));
    }
};

}

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
		return "enum class GLenum : unsigned int;"
		
	if not t.value.startswith("typedef"):
		return t.value
	else:
		return "using "+t.name+" = "+t.typevalue[8:]

def convertType(t):
	return convertTypedef(t).replace(" ;", ";").replace("( *)", "(*)")

def generateTypesHeader(types, outputfile):
	with open(outputfile, 'w') as file:
		file.write(typesHeaderTemplate % "\n".join([convertType(t) for t in types ]))

