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

#include <glbinding/glbinding_api.h>
#include <glbinding/types.h>

namespace gl {

class GLBINDING_API Parameter
{
public:
	enum Type
	{
		%s
	};

	union Value
	{
		%s
	};

	Value value;
	Type type;

	Parameter(Type type, Value value);
	~Parameter();
};

template <typename T>
Parameter createParameter(const T & value);

%s

} // namespace gl
"""
#==========================================
metaTypeSourceTemplate =  """#include <glbinding/Parameter.h>

namespace gl {

%s

Parameter::~Parameter()
{
}

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
	
def typeConstructor(t):
	return "Parameter(%s %s);" % (variantType(t), variantName(t))
	
def typeConstructorSource(t):
	vtype = variantType(t)
	name = variantName(t)
	mtype = metaType(t)
	return """Parameter::Parameter(%s %s)
: type(%s)
{
	value.%s = %s;
}""" % (
		vtype, name, 
		mtype,
		name, name
	)
	
def templateSpecializationSource(t):
	vtype = variantType(t)
	name = variantName(t)
	mtype = metaType(t)
	return """template <>
Parameter createParameter<%s>(const %s & value)
{
	Parameter::Value v;
	v.%s = value;
	return Parameter(Parameter::%s, v);
}""" % (
		vtype, vtype, 
		name, mtype
	)
	
def templateSpecialization(t):
	vtype = variantType(t)
	return """template <>
Parameter createParameter<%s>(const %s & value);""" % (vtype, vtype)

def generateTypesHeader(types, outputfile):
	with open(outputfile, 'w') as file:
		file.write(typesHeaderTemplate % "\n".join([convertType(t) for t in types ]))
		
def generateMetaTypeHeader(types, outputfile):
	with open(outputfile, 'w') as file:
		file.write(
			metaTypeHeaderTemplate % (
				",\n\t\t".join([ metaType(t) for t in types ]),
				"\n\t\t".join([ variantType(t)+" "+variantName(t)+";" for t in types if t.name != "GLvoid" ]),
				"\n".join([ templateSpecialization(t) for t in types if t.name != "GLvoid" ])
			)
		)

def generateMetaTypeSource(types, outputfile):
	with open(outputfile, 'w') as file:
		file.write(
			metaTypeSourceTemplate % (
				"\n\n".join([ templateSpecializationSource(t) for t in types if t.name != "GLvoid" ])
			)
		)
