from binding import *
from classes.Command import *



functionForwardTemplate = """inline %s %s(%s)
{
   	return FunctionObjects::%s(%s);
}
"""
functionForwardTemplateRValueCast = """inline %s %s(%s)
{
   	return static_cast<gl%s::%s>(FunctionObjects::%s(%s));
}
"""

def bitfieldType(param, bid):
	return "gl::GenericBitmask" if param.group is None else "gl" + bid + "::" + param.group

		
def paramSignature(param, bid=""):
	t = param.type
	if "GLenum" in t:
		return t.replace("GLenum", "gl" + bid + "::GLenum")
	elif "GLbitfield" in t:
		return t.replace("GLbitfield", bitfieldType(param, bid))
	else:
		return t

def functionTemplate(function):
	params = ", ".join([function.returntype] + [ paramSignature(p) for p in function.params ])
	return 'Function<%s> FunctionObjects::%s("%s");' % (params,
		functionBID(function)[2:], function.name)

def functionDecl(function):
	params = ", ".join([function.returntype] + [ paramSignature(p) for p in function.params ])
	return tab + "static Function<%s> %s;" % (params, functionBID(function)[2:])

def functionForward(function, feature, core):
	params = ", ".join([paramSignature(p, versionBID(feature, core)) + " " + p.name for p in function.params])
	paramNames = ", ".join([(paramPass(p, feature)) for p in function.params])

	if feature and function.returntype in [ "GLenum", "GLbitfield" ]:
		return functionForwardTemplateRValueCast % (function.returntype, functionBID(function), params,
			versionBID(feature, core), function.returntype, functionBID(function)[2:], paramNames)
	else:
		return functionForwardTemplate % (function.returntype, functionBID(function), params,
			functionBID(function)[2:], paramNames)

def paramPass(param, feature):
	# this returns a string used for passing the param by its name to a function object.
	# if this is inside a featured function, the param will be cast from featured GLenum 
	# and GLbitfield to gl::GLenum and gl::GLbitfield, required for function object.
	t = param.type
	if not feature:
		return param.name
	# elif t == "GLenum":
	#	return "static_cast<gl::GLenum>(" + param.name + ")"
	# elif "GLenum" in t and "*" in t:
	#	return ("reinterpret_cast<" + t + ">").replace("GLenum", "gl::GLenum") + "(" + param.name + ")"
	# elif t == "GLbitfield":
	#	return "static_cast<gl::GLbitfield>(" + param.name + ")"
	# elif "GLbitfield" in t and "*" in t:
	#	return ("reinterpret_cast<" + t + ">").replace("GLbitfield", "gl::GLbitfield") + "(" + param.name + ")"
	else:
		return param.name

def genFunctionObjects_h(commands, outputdir, outputfile):	
	status(outputdir + outputfile)

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % "\n".join(
			[ functionDecl(f) for f in commands ]))

def genFunctionObjects_cpp(commands, outputdir, outputfile):	
	status(outputdir + outputfile)

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % "\n".join(
			[ functionTemplate(f) for f in commands ]))

def genFunctionList(commands, outputdir, outputfile):
	status(outputdir + outputfile)

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % ",\n    ".join(
			[ "&FunctionObjects::"+ functionBID(f)[2:] for f in commands ]))


def genFunctionsAll(commands, outputdir, outputfile):

	genFeatureFunctions(commands, None, outputdir, outputfile, None)


def genFunctionsFeatureGrouped(commands, features, outputdir, outputfile):

	# gen functions feature grouped
	for f in features:
		if f.api == "gl":
			genFeatureFunctions(commands, f, outputdir, outputfile, False)
			if f.major > 3 or (f.major == 3 and f.minor >= 2):
				genFeatureFunctions(commands, f, outputdir, outputfile, True)


def genFeatureFunctions(commands, feature, outputdir, outputfile, core):

	of_all = outputfile.replace("?", "")

	version = versionBID(feature, core)
	t = template(of_all).replace("%f", version)

	of = outputfile.replace("?", version)

	status(outputdir + of)

	gl_include = "featured/" if feature else ""
	using_namespace = "using namespace gl;\n\n\n" if feature else ""

	with open(outputdir + of, 'w') as file:
		file.write(t % (gl_include, using_namespace, "\n".join(
			[ functionForward(c, feature, core) for c in commands if c.supported(feature, core)])))
