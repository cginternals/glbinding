from binding import *
from classes.Command import *


functionForwardTemplate = """inline %s %s(%s)
{
   	return FunctionObjects::%s(%s);
}
"""

def functionTemplate(function):
	params = ", ".join([function.returntype] + [ p.baseType() for p in function.params ])
	return 'Function<%s> FunctionObjects::%s("%s");' % (params,
		functionBID(function)[2:], function.name)

def functionDecl(function):
	params = ", ".join([function.returntype] + [ p.baseType() for p in function.params ])
	return tab + "static Function<%s> %s;" % (params, functionBID(function)[2:])

def functionForward(function):
	params = ", ".join([p.baseType()+" "+p.name for p in function.params])
	paramNames = ", ".join([p.name for p in function.params])

	return functionForwardTemplate % (function.returntype, 
		functionBID(function), params, functionBID(function)[2:], paramNames)


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

	version = ""
	if feature:
		version = str(feature.major) + str(feature.minor) + ("core" if core else "")

	t = template(of_all).replace("?", version)
	of = outputfile.replace("?", version)

	status(outputdir + of)

	with open(outputdir + of, 'w') as file:
		file.write(t % ("using namespace gl;\n\n" if feature else "", "\n".join(
			[ functionForward(c) for c in commands if c.supported(feature, core)])))
