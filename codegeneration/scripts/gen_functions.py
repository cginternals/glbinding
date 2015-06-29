from binding import *
from classes.Command import *



functionForwardTemplate = """%sBINDING_API %s %s(%s);"""

importFunctionTemplate = """using %s%s;"""

functionInlineForwardTemplate = """inline %sBINDING_API %s %s(%s)
{
    return %s::%s(%s);
}
"""

functionInlineForwardTemplateRValueCast = """inline %sBINDING_API %s %s(%s)
{
    return static_cast<%s%s::%s>(%s::%s(%s));
}
"""

functionForwardImplementationTemplate = """%s %s(%s)
{
    return %s::%s(%s);
}
"""

functionForwardImplementationTemplateRValueCast = """%s %s(%s)
{
    return static_cast<%s%s::%s>(%s::%s(%s));
}
"""

functionImplementationTemplate = """%s %s(%s)
{
    return %sbinding::Binding::%s(%s);
}
"""

functionImplementationTemplateRValueCast = """%s %s(%s)
{
    return static_cast<%s%s::%s>(%sbinding::Binding::%s(%s));
}
"""


def namespacify(type, namespace):

    if " void" in type or type.startswith("void"):
        return type

    if type.startswith("int") or type.startswith("const int") or type.startswith("char") or type.startswith("const char"):
        return type
    
    if type.startswith("const "):
        return "const " + namespace + "::" + type[6:]
    
    return namespace + "::" + type


def bitfieldType(api, param):

    return param.groupString if param.groupString else api.upper() + "bitfield" 


def paramSignature(api, param, forward):

    if param.type == api.upper() + "bitfield":
        return bitfieldType(api, param)
    
    return param.type


def functionMember(api, function):

    params = ", ".join([function.returntype] + [ paramSignature(api, p, False) for p in function.params ])
    return 'khrapi::Function<Binding, %s> Binding::%s("%s");' % (params, functionBID(function)[len(api.upper()):], function.name)


def functionDecl(api, function):

    params = ", ".join([namespacify(function.returntype, api)] + [ namespacify(paramSignature(api, p, True), api) for p in function.params ])
    return tab + "static khrapi::Function<Binding, %s> %s;" % (params, functionBID(function)[len(api.upper()):])


# def functionSignature(api, function, extern = True):

#     params = ", ".join([namespacify(function.returntype, api)] + [ namespacify(paramSignature(api, p, True), api) for p in function.params ])
#     if extern:
#         return "extern template class Function<%s>;" % (params)
#     else:
#         return "template class Function<%s>;" % (params)


def functionForward(api, function, feature, version):

    params = ", ".join([paramSignature(api, p, False) + " " + paramPass(p) for p in function.params])
    # paramNames = ", ".join([p.name for p in function.params])

    if feature:
        qualifier = api + "::" 
        return importFunctionTemplate % (qualifier, functionBID(function))
    else:
        return functionForwardTemplate % (api.upper(), function.returntype, functionBID(function), params)


def functionInlineForwardImplementation(api, function, feature, version):

    params = ", ".join([paramSignature(api, p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    if feature and function.returntype in [ api.upper() + "enum", api.upper() + "bitfield" ]:
        return functionInlineForwardTemplateRValueCast % (function.returntype, functionBID(function), params,
            version, function.returntype, functionBID(function), paramNames)
    else:
        return functionInlineForwardTemplate % (function.returntype, functionBID(function), params,
            functionBID(function), paramNames)


def functionForwardImplementation(api, function, feature, version):

    params = ", ".join([paramSignature(api, p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    if feature and function.returntype in [ api.upper() + "enum", api.upper() + "bitfield" ]:
        return functionForwardImplementationTemplateRValueCast % (function.returntype, functionBID(function), params,
            version, function.returntype, functionBID(function), paramNames)
    else:
        return functionForwardImplementationTemplate % (function.returntype, functionBID(function), params,
            functionBID(function), paramNames)


def functionImplementation(api, function, feature, version):

    params = ", ".join([paramSignature(api, p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    if feature and function.returntype in [ api.upper() + "enum", api.upper() + "bitfield" ]:
        return functionImplementationTemplateRValueCast % (function.returntype, functionBID(function), params,
            version, function.returntype, functionBID(function)[len(api.upper()):], paramNames)
    else:
        return functionImplementationTemplate % (function.returntype, functionBID(function), params,
            api, functionBID(function)[len(api.upper()):], paramNames)


def paramPass(param): 

    return param.name


def functionList(api, commands):

    #return "std::vector<AbstractFunction*>(&%s, %s)" % (commands[0].name, len(commands))
    return (",\n" + tab).join([ "&"+ functionBID(f)[len(api.upper()):] for f in commands ])


def genFunctionObjects_h(api, commands, outputdir, outputfile):    

    of = outputfile
    t = template(of).replace("%a", api).replace("%A", api.upper())

    status(outputdir + of)

    with open(outputdir + of, 'w') as file:
        file.write(t % (
            #"\n".join(sorted(extern_templates)), 
            len(commands),
            "\n".join([ functionDecl(api, f) for f in commands ])))


def genFunctionObjects_cpp(api, commands, outputdir, outputfile):

    of = outputfile
    t = template(of).replace("%a", api).replace("%A", api.upper())

    status(outputdir + of)

    with open(outputdir + of, 'w') as file:
        file.write(t.replace("%b", functionBID(commands[0])[len(api.upper()):]).replace("%e", functionBID(commands[-1])[len(api.upper()):]) % (
            #"\n".join(sorted(extern_templates)), 
            #len(commands),
            "\n".join([ functionMember(api, f) for f in commands ]),
            functionList(api, commands)
        ))


def genFunctionsAll(api, commands, outputdir, outputfile):

    genFeatureFunctions(api, commands, None, outputdir, outputfile, None)


def genFunctionImplementationsAll(api, commands, outputdir, outputfile):

    genFeatureFunctionImplementations(api, commands, None, outputdir, outputfile, None)


def genFunctionsFeatureGrouped(api, commands, features, outputdir, outputfile):

    # gen functions feature grouped
    for f in features:
        if f.api == api: # ToDo: probably seperate for all apis
            genFeatureFunctions(api, commands, f, outputdir, outputfile)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFeatureFunctions(api, commands, f, outputdir, outputfile, True)
            genFeatureFunctions(api, commands, f, outputdir, outputfile, False, True)


def genFunctionImplementationsFeatureGrouped(api, commands, features, outputdir, outputfile):

    # gen functions feature grouped
    for f in features:
        if f.api == api: # ToDo: probably seperate for all apis
            genFeatureFunctionImplementations(api, commands, f, outputdir, outputfile)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFeatureFunctionImplementations(api, commands, f, outputdir, outputfile, True)
            genFeatureFunctionImplementations(api, commands, f, outputdir, outputfile, False, True)


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
                [ functionImplementation(api, c, feature, version) for c in pureCommands ])))
        else:
            file.write(t % ("\n".join(
                [ functionForwardImplementation(c, feature, version) for c in pureCommands ])))