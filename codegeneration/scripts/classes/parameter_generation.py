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
	
parameterBaseTypes = [ "GLenum", "GLbyte", "GLchar", "GLshort", "GLint", "GLubyte", "GLushort", "GLuint", "GLfloat", "GLdouble", "GLint64", "GLuint64" ]

def parameterTypes():
	return parameterBaseTypes + [ "GLsync", "GLDEBUGPROC", "GLDEBUGPROCAMD", "_cl_event*" ] +\
		[ t+" *" for t in parameterBaseTypes+["GLvoid"] ] +\
		[ t+" const *" for t in parameterBaseTypes+["GLvoid"] ] +\
		[ t+" * *" for t in parameterBaseTypes+["GLvoid"] ] +\
		[ t+ " const * *" for t in parameterBaseTypes+["GLvoid"] ] +\
		[ t+" const * const *" for t in parameterBaseTypes+["GLvoid"] ]

def parameterBase(t):
	return t.replace("*", "ptr").replace(" ", "_").strip()

def parameterType(t):
	return parameterBase(t)+"_type"

def parameterValueName(t):
	return parameterBase(t)+"_value"

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
				",\n\t\t".join([ parameterType(t) for t in parameterTypes() ]),
				"\n\t\t".join([ parameterValue(t) for t in parameterTypes() ]),
				"\n".join([ parameterCreationSpecialization(t) for t in parameterTypes() ])
			)
		)

def generateParameterSource(outputfile):
	with open(outputfile, 'w') as file:
		file.write(
			parameterSourceTemplate % (
				"\n\n".join([ parameterCreationSpecializationSource(t) for t in parameterTypes() ])
			)
		)
