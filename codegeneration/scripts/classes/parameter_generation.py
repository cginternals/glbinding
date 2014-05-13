import xml.etree.ElementTree as ET

#==========================================
parameterHeaderTemplate = """#pragma once

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

	Type type;
	Value value;

	Parameter(Type type, Value value);
	~Parameter();
};

template <typename T>
Parameter createParameter(T value);

%s

} // namespace gl
"""
#==========================================
parameterSourceTemplate =  """#include <glbinding/Parameter.h>

namespace gl {

Parameter::Parameter(Type _type, Value _value)
: type(_type)
, value(_value)
{
}

Parameter::~Parameter()
{
}

%s

} // namespace gl
"""
#==========================================
	
parameterTypes = [ "GLenum", "GLbyte", "GLshort", "GLint", "GLubyte", "GLushort", "GLuint", "GLfloat", "GLdouble", "GLint64", "GLuint64", "GLsync", "GLDEBUGPROC", "GLvoid *" ]

def parameterType(t):
	if "*" in t:
		base = t.replace("*", "").strip()
		return base+"ptr_type"
	return t+"_type"

def parameterValueName(t):
	if "*" in t:
		base = t.replace("*", "").strip()
		return base+"ptr_value"
	return t+"_value"

def parameterValue(t):
	return t+" "+parameterValueName(t)+";"

def parameterCreationSpecialization(t):
	return "template <> Parameter createParameter<%s>(%s value);" % (t, t)
	
def parameterCreationSpecializationSource(t):
	return """template <> Parameter createParameter<%s>(%s value)
{
	Parameter::Value v;
	v.%s = value;
	return Parameter(Parameter::%s, v);
}""" % (t, t, parameterValueName(t), parameterType(t))
		
def generateParameterHeader(outputfile):
	with open(outputfile, 'w') as file:
		file.write(
			parameterHeaderTemplate % (
				",\n\t\t".join([ parameterType(t) for t in parameterTypes ]),
				"\n\t\t".join([ parameterValue(t) for t in parameterTypes ]),
				"\n".join([ parameterCreationSpecialization(t) for t in parameterTypes ])
			)
		)

def generateParameterSource(outputfile):
	with open(outputfile, 'w') as file:
		file.write(
			parameterSourceTemplate % (
				"\n\n".join([ parameterCreationSpecializationSource(t) for t in parameterTypes ])
			)
		)
