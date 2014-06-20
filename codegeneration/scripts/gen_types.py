from binding import *
from classes.Type import *

# ToDo: move this to Type class? (as well as convert an multiline convert)

def convertTypedefLine(line, name):		
	if not line.startswith("typedef"):
		return line
	else:
		return "using " + name + " = " + line[8:].replace(name, "")

def multilineConvertTypedef(type):
	return "\n".join([ convertTypedefLine(line, type.name) for line in type.value.split('\n') ])

enum_class_exceptions = [ "GLbitfield", "GLboolean", "GLenum" ]


def convertTypedef(type):

	if '\n' in type.value:
		return multilineConvertTypedef(type)

	t = parseType(type)

	if type.name in enum_class_exceptions:
		return "enum class " + type.name + " : " + t + ";"

	if not type.value.startswith("typedef"):
		return t
	else:
		return "using " + type.name + " = " + t + ";"

def convertType(type):
	return convertTypedef(type).replace(" ;", ";").replace("( *)", "(*)").replace("(*)", "(GL_APIENTRY *)")

def genTypes_h(types, outputdir, outputfile):
	status(outputdir + outputfile)

	type_integrations = []
	for type in types:
		if type.name in enum_class_exceptions:
			type_integrations.append(template("type_integration.h").replace("%t", type.name).replace("%v", parseType(type)[:-1]))

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % (
			("\n".join([ convertType(t) for t in types ])),
			("\n".join([ t for t in type_integrations ]))))

def genTypes_cpp(types, outputdir, outputfile):
	status(outputdir + outputfile)

	type_integrations = []
	for type in types:
		if type.name in enum_class_exceptions:
			type_integrations.append(template("type_integration.cpp").replace("%t", type.name).replace("%v", parseType(type)[:-1]))

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % ("\n".join([ t for t in type_integrations ])))
