from binding import *

from context import Context


def typeContext(typeString, namespace=None):
    #TODO-LW reliably split typeString into its logical components
    noNamespace = " void" in typeString or typeString.startswith("void")
    hasModifier = typeString.startswith("const ")
    return {"modifiers": typeString[0:5] if hasModifier else None,
            "ns": None if noNamespace else namespace,
            "type": typeString[6:] if hasModifier else typeString}

def genFunctionContexts(commands):
    contexts = []
    for command in commands:
        paramContexts = []
        for param in command.params:
            paramContexts.append(
               {"name": param.name,
                "type": typeContext(param.groupString
                                    if param.type == "GLbitfield" and param.groupString
                                    else param.type, command.api) })

        identifier = functionBID(command)
        contexts.append({"identifier": identifier,
                         "identifierNoGl": identifier[2:] if identifier.startswith("gl") else identifier,
                         "type": typeContext(command.returntype, command.api),
                         "params": Context.listContext(paramContexts),
                         "supported": supportedLambda(command) })

    return contexts
