import xml.etree.ElementTree as ET
from Function import *


def functionTemplate(function):
	params = ", ".join([function.returntype] + [p.baseType() for p in function.params])
	return 'Function<%s> %s("%s");' % (params, function.baseName(), function.name)
	
def functionDeclaration(function):
	params = ", ".join([function.returntype] + [p.baseType()  for p in function.params])
	return 'extern Function<%s> %s;' % (params, function.baseName())
	
def functionWrapperDeclaration(function):
	params = ", ".join([p.baseType()+" "+p.name for p in function.params])
	return 'GLBINDING_API %s %s(%s);' % (function.returntype, function.baseName(), params)
	
def functionWrapper(function):
	params = ", ".join([p.baseType()+" "+p.name for p in function.params])
	paramNames = ", ".join([p.name for p in function.params])
	
	return """%s %s(%s)
{
	return functions::%s(%s);
}
""" % (function.returntype, function.baseName(), params, function.baseName(), paramNames)


def generateFunctionObjectsHeader(functions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write("""#pragma once

#include <glbinding/types.h>
#include <glbinding/constants.h>

#include <glbinding/Function.h>

namespace gl {
namespace functions {

""")

		for function in functions:
			file.write(functionDeclaration(function))
			file.write("\n")
			
		file.write("""

} // namespace functions
} // namespace gl
		""")


def generateFunctionObjectsSource(functions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write("""#include <glbinding/FunctionObjects.h>

namespace gl {
namespace functions {

""")

		for function in functions:
			file.write(functionTemplate(function))
			file.write("\n")
			
		file.write("""

} // namespace functions
} // namespace gl
		""")

def generateFunctionWrapperHeader(functions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write("""#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/constants.h>
#include <glbinding/types.h>

namespace gl {

""")

		for function in functions:
			file.write(functionWrapperDeclaration(function))
			file.write("\n")
			
		file.write("""

} // namespace gl
		""")

def generateFunctionWrapperSource(functions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write("""#include <glbinding/glbinding.h>
#include <glbinding/FunctionObjects.h>

namespace gl {

""")

		for function in functions:
			file.write(functionWrapper(function))
			file.write("\n")
			
		file.write("""

} // namespace gl
		""")

def generateFunctions(inputfile):
	tree = ET.parse(inputfile)
	registry = tree.getroot()

	functions = sorted(parseFunctions(registry))
	
	#~ for f in functions:
		#~ print(functionDeclaration(f))
		#~ print(functionTemplate(f))
		#~ print(functionWrapperDeclaration(f))
		#~ print(functionWrapper(f))
		#~ print("=============")
	
	generateFunctionObjectsHeader(functions, "FunctionObjects.h")
	generateFunctionObjectsSource(functions, "FunctionObjects.cpp")
	
	generateFunctionWrapperHeader(functions, "functions.h")
	generateFunctionWrapperSource(functions, "functions.cpp")
