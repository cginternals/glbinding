from binding import *
from classes.Command import *



functionForwardTemplate = """GLBINDING_API %s %s(%s);"""

importFunctionTemplate = """using %s%s;"""

functionInlineForwardTemplate = """inline GLBINDING_API %s %s(%s)
{
    return gl::%s(%s);
}
"""

functionInlineForwardTemplateRValueCast = """inline GLBINDING_API %s %s(%s)
{
    return static_cast<gl%s::%s>(gl::%s(%s));
}
"""

functionForwardImplementationTemplate = """%s %s(%s)
{
    return gl::%s(%s);
}
"""

functionForwardImplementationTemplateRValueCast = """%s %s(%s)
{
    return static_cast<gl%s::%s>(gl::%s(%s));
}
"""

functionImplementationTemplate = """%s %s(%s)
{
    return glbinding::Binding::%s(%s);
}
"""

functionImplementationTemplateRValueCast = """%s %s(%s)
{
    return static_cast<gl%s::%s>(glbinding::Binding::%s(%s));
}
"""


def namespacify(type, namespace):

    if " void" in type or type.startswith("void"):
        return type

    if type.startswith("const "):
        return "const " + namespace + "::" + type[6:]

    return namespace + "::" + type


def bitfieldType(param):

    return param.groupString if param.groupString else "GLbitfield"


def paramSignature(param, forward):

    if param.type == "GLbitfield":
        return bitfieldType(param)

#    if forward and param.array is not "":
#        return param.type + " " + param.array
#    else:
    return param.type


def functionMember(function):

    params = ", ".join([function.returntype] + [ paramSignature(p, False) for p in function.params ])
    return 'Function<%s> Binding::%s("%s");' % (params, functionBID(function)[2:], function.name)


def functionDecl(api, function):

    params = ", ".join([namespacify(function.returntype, api)] + [ namespacify(paramSignature(p, True), api) for p in function.params ])
    return tab + "static Function<%s> %s;" % (params, functionBID(function)[2:])


# def functionSignature(api, function, extern = True):

#     params = ", ".join([namespacify(function.returntype, api)] + [ namespacify(paramSignature(p, True), api) for p in function.params ])
#     if extern:
#         return "extern template class Function<%s>;" % (params)
#     else:
#         return "template class Function<%s>;" % (params)


def functionForward(api, function, feature, version):

    params = ", ".join([paramSignature(p, False) + " " + paramPass(p) for p in function.params])
    # paramNames = ", ".join([p.name for p in function.params])

    if feature:
        qualifier = api + "::"
        return importFunctionTemplate % (qualifier, functionBID(function))
    else:
        return functionForwardTemplate % (function.returntype, functionBID(function), params)


def functionInlineForwardImplementation(function, feature, version):

    params = ", ".join([paramSignature(p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    if feature and function.returntype in [ "GLenum", "GLbitfield" ]:
        return functionInlineForwardTemplateRValueCast % (function.returntype, functionBID(function), params,
            version, function.returntype, functionBID(function), paramNames)
    else:
        return functionInlineForwardTemplate % (function.returntype, functionBID(function), params,
            functionBID(function), paramNames)


def functionForwardImplementation(function, feature, version):

    params = ", ".join([paramSignature(p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    if feature and function.returntype in [ "GLenum", "GLbitfield" ]:
        return functionForwardImplementationTemplateRValueCast % (function.returntype, functionBID(function), params,
            version, function.returntype, functionBID(function), paramNames)
    else:
        return functionForwardImplementationTemplate % (function.returntype, functionBID(function), params,
            functionBID(function), paramNames)


def functionImplementation(function, feature, version):

    params = ", ".join([paramSignature(p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    if feature and function.returntype in [ "GLenum", "GLbitfield" ]:
        return functionImplementationTemplateRValueCast % (function.returntype, functionBID(function), params,
            version, function.returntype, functionBID(function)[2:], paramNames)
    else:
        return functionImplementationTemplate % (function.returntype, functionBID(function), params,
            functionBID(function)[2:], paramNames)


def paramPass(param):

    return param.name # + param.array

    # this returns a string used for passing the param by its name to a function object.
    # if this is inside a featured function, the param will be cast from featured GLenum
    # and GLbitfield to gl::GLenum and gl::GLbitfield, required for function object.
    # t = param.type
    #
    # if not feature:
    #    return param.name
    # elif t == "GLenum":
    #    return "static_cast<gl::GLenum>(" + param.name + ")"
    # elif "GLenum" in t and "*" in t:
    #    return ("reinterpret_cast<" + t + ">").replace("GLenum", "gl::GLenum") + "(" + param.name + ")"
    # elif t == "GLbitfield":
    #    return "static_cast<gl::GLbitfield>(" + param.name + ")"
    # elif "GLbitfield" in t and "*" in t:
    #    return ("reinterpret_cast<" + t + ">").replace("GLbitfield", "gl::GLbitfield") + "(" + param.name + ")"
    # else:
    #    return param.name


def functionList(commands):

    #return "std::vector<AbstractFunction*>(&%s, %s)" % (commands[0].name, len(commands))
    return (",\n" + tab).join([ "&"+ functionBID(f)[2:] for f in commands ])










def genFunctionsAll(api, commands, outputdir, outputfile):

    genFeatureFunctions(api, commands, None, outputdir, outputfile, None)


def genFunctionsFeatureGrouped(api, commands, features, outputdir, outputfile):

    # gen functions feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genFeatureFunctions(api, commands, f, outputdir, outputfile)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFeatureFunctions(api, commands, f, outputdir, outputfile, True)
            genFeatureFunctions(api, commands, f, outputdir, outputfile, False, True)


#def genFunctionImplementationsFeatureGrouped(api, commands, features, outputdir, outputfile):

#    # gen functions feature grouped
#    for f in features:
#        if f.api == "gl": # ToDo: probably seperate for all apis
#            genFeatureFunctionImplementations(api, commands, f, outputdir, outputfile)
#            if f.major > 3 or (f.major == 3 and f.minor >= 2):
#                genFeatureFunctionImplementations(api, commands, f, outputdir, outputfile, True)
#            genFeatureFunctionImplementations(api, commands, f, outputdir, outputfile, False, True)


def genFeatureFunctions(api, commands, feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")

    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version).replace("%a", api)
    of = outputfile.replace("?", "")
    od = outputdir.replace("?", version)

    status(od + of)

    pureCommands = [ c for c in commands if
        (not ext and c.supported(feature, core)) or (ext and not c.supported(feature, False)) ]

    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:
        if not feature:
            file.write(t % ("\n".join(
                [ functionForward(api, c, feature, version) for c in pureCommands ])))
        else:
            file.write(t % ("\n".join(
                [ functionForward(api, c, feature, version) for c in pureCommands ])))


def genFeatureFunctionImplementations(api, commands, feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")

    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version).replace("%a", api)
    of = outputfile.replace("?", "")
    od = outputdir.replace("?", version)

    status(od + of)

    pureCommands = [ c for c in commands if
        (not ext and c.supported(feature, core)) or (ext and not c.supported(feature, False)) ]

    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:
        if not feature:
            file.write(t % ("\n".join(
                [ functionImplementation(c, feature, version) for c in pureCommands ])))
        else:
            file.write(t % ("\n".join(
                [ functionForwardImplementation(c, feature, version) for c in pureCommands ])))


# ALL FUNCTION TEMPLATE INSTANTIATION

def functionImplementation2(function):

    params = ", ".join([paramSignature(p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    return """%s %s(%s)
{
    return Binding::%s(%s);
}
    """ % (function.returntype, functionBID(function), params, functionBID(function)[2:], paramNames)



# ALL FUNCTION INSTANTIATION FORWARD DECLARATIONS

def functionForward2(function):

    params = ", ".join([paramSignature(p, False) + " " + paramPass(p) for p in function.params])

    return """GLBINDING_API %s %s(%s);""" % (function.returntype, functionBID(function), params)


def functionForwardGroup(functions, key):

    if not functions:
        return ""

    return """%s
    """ % ("\n".join([ functionForward2(c) for c in functions ]))

def typeContext(typeString, namespace=None):
    #TODO-LW reliably split typeString into its logical components
    noNamespace = " void" in typeString or typeString.startswith("void")
    hasModifier = typeString.startswith("const ")
    return {"modifiers": typeString[0:5] if hasModifier else None,
            "ns": None if noNamespace else namespace,
            "type": typeString[6:] if hasModifier else typeString}

def commandContext(command, last=None):
    paramContexts = []
    for param in command.params:
        paramContexts.append(
           {"name": param.name,
            "type": typeContext(param.groupString
                                if param.type == "GLbitfield" and param.groupString
                                else param.type, command.api),
            "last": command.params.index(param) == len(command.params) - 1})
    identifier = functionBID(command)
    return {"identifier": identifier,
            "identifierNoGl": identifier[2:] if identifier.startswith("gl") else identifier,
            "type": typeContext(command.returntype, command.api),
            "params": paramContexts,
            "hasParams": len(paramContexts) > 0,
            "last": last}


def genFunctionHeaders(api, commands, features, path):

    genFunctionsH(api, commands, path, None)

    # gen functions feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genFunctionsH(api, commands, path, f)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFunctionsH(api, commands, path, f, True)
            genFunctionsH(api, commands, path, f, False, True)

def genFunctionsH(api, commands, path, feature, core = False, ext = False):
    functionContexts = {command: commandContext(command)
                        for command in commands
                        if feature is None
                        or (not ext and command.supported(feature, core))
                        or (ext and not command.supported(feature, False))}

    functionsByLetter = alphabeticallyGroupedLists()
    for c in functionContexts.keys():
        functionsByLetter[alphabeticalGroupKey(c.name, 'gl')].append(c) # append commands
    for key in functionsByLetter.keys():
        functionsByLetter[key].sort()

    contextsByLetter = [{"key": key,
                         "functions": [functionContexts[command]
                                      for command in functionsByLetter[key]]}
                        for key in sorted(functionsByLetter.keys())]

    context = {"api": api,
                "feature": versionBID(feature, core, ext),
                "groups": contextsByLetter,
                "forward": (feature is None),
                "import": (feature is not None)}

    Generator.generate(context, path)

def genFunctionSources(api, commands, path):
    functionContexts = {command: commandContext(command) for command in commands}

    functionsByLetter = alphabeticallyGroupedLists()
    for c in functionContexts.keys():
        functionsByLetter[alphabeticalGroupKey(c.name, 'gl')].append(c) # append commands
    for key in functionsByLetter.keys():
        functionsByLetter[key].sort()

    for key in sorted(functionsByLetter.keys()):
        context = {"api": api,
                    "feature": versionBID(None),
                    "key": key.lower(),
                    "functions": [functionContexts[command]
                                  for command in functionsByLetter[key]]}

        Generator.generate(context, path, "functions_.cpp")

def genFunctionObjectHeaders(commands, path):
    context = {"functionCount": len(commands),
               "functions": [commandContext(command) for command in commands]}

    Generator.generate(context, path)

def genFunctionList(commands, path):
    context = {"functionCount": len(commands),
               "functions": [commandContext(command, commands.index(command) == len(commands) - 1) for command in commands]}

    Generator.generate(context, path)

def genFunctionObjectSources(commands, path):

    functionContexts = {command: commandContext(command) for command in commands}

    functionsByLetter = alphabeticallyGroupedLists()
    for c in functionContexts.keys():
        functionsByLetter[alphabeticalGroupKey(c.name, 'gl')].append(c) # append commands
    for key in functionsByLetter.keys():
        functionsByLetter[key].sort()

    for key in sorted(functionsByLetter.keys()):
        context = {"key": key.lower(),
                   "functions": [functionContexts[command]
                                 for command in functionsByLetter[key]]}

        Generator.generate(context, path, "Binding_objects_.cpp")