from classes.Function import *

#==========================================
functionObjectsHeaderTemplate = """#pragma once

#include <glbinding/noGL.h>

#include <glbinding/types.h>
#include <glbinding/constants.h>

#include <glbinding/Function.h>

namespace gl {
namespace functions {

%s

} // namespace functions
} // namespace gl
"""
#==========================================
functionObjectsSourceTemplate = """#include <glbinding/FunctionObjects.h>

namespace gl {
namespace functions {

%s

} // namespace functions
} // namespace gl
"""
#==========================================
functionListTemplate = """#include <glbinding/AbstractFunction.h>
#include <glbinding/FunctionObjects.h>
#include "declarations.h"

namespace gl {

const std::vector<AbstractFunction*> functionList = {
	%s
};

} // namespace gl
"""
#==========================================
functionsWrapperHeaderTemplate = """#pragma once

#include <glbinding/noGL.h>

#include <glbinding/glbinding_api.h>
#include <glbinding/constants.h>
#include <glbinding/types.h>

namespace gl {

%s

} // namespace gl
"""
#==========================================
functionsWrapperSourceTemplate = """#include <glbinding/functions.h>
#include <glbinding/FunctionObjects.h>

namespace gl {

%s

} // namespace gl
"""
#==========================================
functionWrapperTemplate = """%s %s(%s)
{
	return functions::%s(%s);
}
"""
#==========================================

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
	
	return functionWrapperTemplate % (function.returntype, function.baseName(), params, function.baseName(), paramNames)


def generateFunctionObjectsHeader(functions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write(functionObjectsHeaderTemplate % "\n".join([functionDeclaration(f) for f in functions ]))


def generateFunctionObjectsSource(functions, outputfile):	
	with open(outputfile, 'w') as file:
		file.write(functionObjectsSourceTemplate % "\n".join([functionTemplate(f) for f in functions ]))

def generateFunctionWrapperHeader(functions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(functionsWrapperHeaderTemplate % "\n".join([functionWrapperDeclaration(f) for f in functions ]))

def generateFunctionWrapperSource(functions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(functionsWrapperSourceTemplate % "\n".join([functionWrapper(f) for f in functions ]))
		
def generateFunctionListSource(functions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(functionListTemplate % ",\n\t".join([ "&functions::"+f.baseName() for f in functions ]))
