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


def bitfieldType(api, prefix, libraryNamespace, param):

    return param.groupString if param.groupString else prefix.upper() + "bitfield" 


def paramSignature(api, prefix, libraryNamespace, param, forward):

    if param.type == prefix.upper() + "bitfield":
        return bitfieldType(api, prefix, libraryNamespace, param)
    
    return param.type


def functionMember(api, prefix, libraryNamespace, function):

    params = ", ".join([function.returntype] + [ paramSignature(api, prefix, libraryNamespace, p, False) for p in function.params ])
    return 'khrapi::Function<Binding, %s> Binding::%s("%s");' % (params, functionBID(function)[len(prefix):], function.name)


def functionDecl(api, prefix, libraryNamespace, function):

    params = ", ".join([namespacify(function.returntype, libraryNamespace)] + [ namespacify(paramSignature(api, prefix, libraryNamespace, p, True), libraryNamespace) for p in function.params ])
    return tab + "static khrapi::Function<Binding, %s> %s;" % (params, functionBID(function)[len(prefix):])


def functionForward(api, prefix, libraryNamespace, function, feature, version):

    params = ", ".join([paramSignature(api, prefix, libraryNamespace, p, False) + " " + paramPass(p) for p in function.params])

    if feature:
        return importFunctionTemplate % (libraryNamespace+"::", functionBID(function))
    else:
        return functionForwardTemplate % (libraryNamespace.upper(), function.returntype, functionBID(function), params)


def functionInlineForwardImplementation(api, prefix, libraryNamespace, function, feature, version):

    params = ", ".join([paramSignature(api, prefix, libraryNamespace, p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    if feature and function.returntype in [ prefix.upper() + "enum", prefix.upper() + "bitfield" ]:
        return functionInlineForwardTemplateRValueCast % (function.returntype, functionBID(function), params,
            version, function.returntype, functionBID(function), paramNames)
    else:
        return functionInlineForwardTemplate % (function.returntype, functionBID(function), params,
            functionBID(function), paramNames)


def functionForwardImplementation(api, prefix, libraryNamespace, function, feature, version):

    params = ", ".join([paramSignature(api, p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    if feature and function.returntype in [ prefix.upper() + "enum", prefix.upper() + "bitfield" ]:
        return functionForwardImplementationTemplateRValueCast % (function.returntype, functionBID(function), params,
            version, function.returntype, functionBID(function), paramNames)
    else:
        return functionForwardImplementationTemplate % (function.returntype, functionBID(function), params,
            functionBID(function), paramNames)


def functionImplementation(api, prefix, libraryNamespace, function, feature, version):

    params = ", ".join([paramSignature(api, prefix, libraryNamespace, p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    if feature and function.returntype in [ prefix.upper() + "enum", prefix.upper() + "bitfield" ]:
        return functionImplementationTemplateRValueCast % (function.returntype, functionBID(function), params,
            version, function.returntype, functionBID(function)[len(prefix):], paramNames)
    else:
        return functionImplementationTemplate % (function.returntype, functionBID(function), params,
            libraryNamespace, functionBID(function)[len(prefix):], paramNames)


def paramPass(param): 

    return param.name


def functionList(api, prefix, libraryNamespace, commands):

    return (",\n" + tab).join([ "&"+ functionBID(f)[len(prefix):] for f in commands ])


def genFunctionObjects_h(api, prefix, libraryNamespace, commands, outputdir, outputfile):    

    of = outputfile
    t = template(of).replace("%a", libraryNamespace).replace("%A", libraryNamespace.upper())

    status(outputdir + of)

    with open(outputdir + of, 'w') as file:
        file.write(t % (
            len(commands),
            "\n".join([ functionDecl(api, prefix, libraryNamespace, f) for f in commands ])))


def genFunctionObjects_cpp(api, prefix, libraryNamespace, commands, outputdir, outputfile):

    of = outputfile
    t = template(of).replace("%a", libraryNamespace).replace("%A", libraryNamespace.upper())

    status(outputdir + of)

    with open(outputdir + of, 'w') as file:
        file.write(t.replace("%b", functionBID(commands[0])[len(prefix):]).replace("%e", functionBID(commands[-1])[len(prefix):]) % (
            "\n".join([ functionMember(api, prefix, libraryNamespace, f) for f in commands ]),
            functionList(api, prefix, libraryNamespace, commands)
        ))


def genFunctionsAll(api, prefix, libraryNamespace, commands, outputdir, outputfile):

    genFeatureFunctions(api, prefix, libraryNamespace, commands, None, outputdir, outputfile, None)


def genFunctionImplementationsAll(api, prefix, libraryNamespace, commands, outputdir, outputfile):

    genFeatureFunctionImplementations(api, prefix, libraryNamespace, commands, None, outputdir, outputfile, None)


def genFunctionsFeatureGrouped(api, prefix, libraryNamespace, commands, features, outputdir, outputfile):

    # gen functions feature grouped
    for f in features:
        if f.api == api: # ToDo: probably seperate for all apis
            genFeatureFunctions(api, prefix, libraryNamespace, commands, f, outputdir, outputfile)
            
            if api == "gl":
                if f.major > 3 or (f.major == 3 and f.minor >= 2):
                    genFeatureFunctions(api, prefix, libraryNamespace, commands, f, outputdir, outputfile, True)
                genFeatureFunctions(api, prefix, libraryNamespace, commands, f, outputdir, outputfile, False, True)


def genFunctionImplementationsFeatureGrouped(api, commands, features, outputdir, outputfile):

    # gen functions feature grouped
    for f in features:
        if f.api == api: # ToDo: probably seperate for all apis
            genFeatureFunctionImplementations(api, prefix, libraryNamespace, commands, f, outputdir, outputfile)
            
            if api == "gl":
                if f.major > 3 or (f.major == 3 and f.minor >= 2):
                    genFeatureFunctionImplementations(api, prefix, libraryNamespace, commands, f, outputdir, outputfile, True)
                genFeatureFunctionImplementations(api, prefix, libraryNamespace, commands, f, outputdir, outputfile, False, True)


def genFeatureFunctions(api, prefix, libraryNamespace, commands, feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")

    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version).replace("%a", libraryNamespace)
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
                [ functionForward(api, prefix, libraryNamespace, c, feature, version) for c in pureCommands ])))
        else:
            file.write(t % ("\n".join(
                [ functionForward(api, prefix, libraryNamespace, c, feature, version) for c in pureCommands ])))


def genFeatureFunctionImplementations(api, prefix, libraryNamespace, commands, feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")

    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version).replace("%a", libraryNamespace)
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
                [ functionImplementation(api, prefix, libraryNamespace, c, feature, version) for c in pureCommands ])))
        else:
            file.write(t % ("\n".join(
                [ functionForwardImplementation(c, prefix, libraryNamespace, feature, version) for c in pureCommands ])))
