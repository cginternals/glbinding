from binding import *

from context import Context


def typeContext(typeString, namespace=None):
    #TODO-LW reliably split typeString into its logical components
    noNamespace = " void" in typeString or typeString.startswith("void")
    noNamespace = noNamespace or (" int" in typeString or typeString.startswith("int"))
    noNamespace = noNamespace or (" char" in typeString or typeString.startswith("char"))
    hasModifier = typeString.startswith("const ")
    modifier = typeString[0:5] if hasModifier else None
    if hasModifier:
        typeString = typeString[6:]
    typeString = typeString[7:] if typeString.startswith("struct ") else typeString
    return {"modifiers": modifier,
            "ns": None if noNamespace else namespace,
            "type": typeString}

def genFunctionContexts(commands):
    contexts = []
    for command in commands:
        paramContexts = []
        for param in command.params:
            paramContexts.append(
               {"name": param.name,
                "type": typeContext(param.groupString
                                    if (param.type == "GLbitfield" or param.type == "EGLbitfield") and param.groupString
                                    else param.type, command.api) })

        identifier = functionBID(command)
        contexts.append({"identifier": identifier,
                         "identifierNoGl": identifier[2:] if identifier.startswith("gl") else (identifier[3:] if identifier.startswith("egl") else identifier),
                         "type": typeContext(command.returntype, command.api),
                         "params": Context.listContext(paramContexts),
                         "supported": supportedLambda(command) })

    return contexts
