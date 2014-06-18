from binding import *
from classes.Function import *


functionForwardTemplate = """inline %s %s(%s)
{
   	return FunctionObjects::%s(%s);
}
"""

def functionTemplate(function):
	params = ", ".join([function.returntype] + [ p.baseType() for p in function.params ])
	return 'Function<%s> FunctionObject::%s("%s");' % (params,
		functionBID(function)[2:], function.name)

def functionDecl(function):
	params = ", ".join([function.returntype] + [ p.baseType() for p in function.params ])
	return tab + "Function<%s> %s;" % (params, functionBID(function)[2:])

def functionForward(function):
	params = ", ".join([p.baseType()+" "+p.name for p in function.params])
	paramNames = ", ".join([p.name for p in function.params])

	return functionForwardTemplate % (function.returntype, 
		functionBID(function), params, functionBID(function)[2:], paramNames)


def genFunctionObjects_h(functions, outputdir, outputfile):	
	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % "\n".join(
			[ functionDecl(f) for f in functions ]))

def genFunctionObjects_cpp(functions, outputdir, outputfile):	
	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % "\n".join(
			[ functionTemplate(f) for f in functions ]))

def genFunctionList(functions, outputdir, outputfile):
	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % ",\n    ".join(
			[ "&functions::"+ functionBID(f) for f in functions ]))

def genFunctions(functions, outputdir, outputfile):
	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % "\n".join(
			[ functionForward(f) for f in functions ]))
