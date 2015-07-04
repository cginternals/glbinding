from binding import *
from classes.Type import *
from classes.Enum import *

# ToDo: move this to Type class? (as well as convert an multiline convert)

def convertTypedefLine(line, name):        

    if not line.startswith("typedef"):
        return line
    else:
        return "using " + name + " = " + line[8:].replace(name, "")


def multilineConvertTypedef(type):

    return "\n".join([ convertTypedefLine(line, type.name) for line in type.value.split('\n') ])


enum_classes = [ "boolean", "Boolean", "enum" ]

type_integration_map = {
    "extension" : [ "hashable", "streamable" ], 
    "boolean"   : [ "hashable", "streamable", "boolable" ],
    "enum"      : [ "hashable", "streamable", "addable", "comparable" ]
}


def convertTypedef(api, prefix, libraryNamespace, type):

    if type.isGroup:
        return type.value

    t = parseType(type)

    if type.name[len(prefix):] in enum_classes:
        return "enum class " + type.name[0:len(prefix)] + type.name[len(prefix):].lower() + " : unsigned int;" # EGLBoolean <-> GLboolean

    if type.ignoreName:
        return type.value
    elif type.value.startswith("struct"):
        return type.value + " " + type.name + ";"
    elif type.value.startswith("typedef"):
        return "using " + type.name + " = " + t + ";"
    else:
        return t


def convertType(api, prefix, libraryNamespace, type):

    return convertTypedef(api, prefix, libraryNamespace, type).replace(" ;", ";").replace("( *)", "(*)").replace("(*)", "(" + prefix.upper() + "_APIENTRY *)")


def forwardType(api, prefix, libraryNamespace, type):

    return "using " + type.name + " = " + libraryNamespace + "::" + type.name + ";"


def typeImport(api, prefix, libraryNamespace, type):

    if type.name[len(prefix):] in enum_classes:
        return "using " + libraryNamespace + "::" + type.name[0:len(prefix)] + type.name[len(prefix):].lower() + ";" # EGLBoolean <-> GLboolean
    
    return "using " + libraryNamespace + "::" + type.name + ";"


def genTypesForward_h(api, types, bitfGroups, outputdir, outputfile):

    genTypes_h(api, types, bitfGroups, outputdir, outputfile, True)


def genTypesFeatureGrouped(api, prefix, libraryNamespace, types, bitfGroups, features, outputdir, outputfile):

    # gen enums feature grouped
    for f in features:
        if f.api == api: # ToDo: probably seperate for all apis
            genFeatureTypes(api, prefix, libraryNamespace, types, bitfGroups, f, outputdir, outputfile)
            
            if api == "gl":
                if f.major > 3 or (f.major == 3 and f.minor >= 2):
                    genFeatureTypes(api, prefix, libraryNamespace, types, bitfGroups, f, outputdir, outputfile, True)
                genFeatureTypes(api, prefix, libraryNamespace, types, bitfGroups, f, outputdir, outputfile, False, True)


def genFeatureTypes(api, prefix, libraryNamespace, types, bitfGroups, feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")

    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version).replace("%a", libraryNamespace).replace("%A", prefix.upper())
    of = outputfile.replace("?", "")
    od = outputdir.replace("?", version)

    status(od + of)

    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:

        file.write(t %
            ("\n".join([ typeImport(api, prefix, libraryNamespace, t) for t in types if not t.isGroup and not t.isInclude and t.name ]),
            "\n".join([ "using %s::%s;" % (libraryNamespace, g.name) for g in bitfGroups ]),)
        )



def genTypes_h(api, prefix, libraryNamespace, types, bitfGroups, outputdir, outputfile, forward = False):

    of_all = outputfile.replace("?", "F")

    t = template(of_all).replace("%a", libraryNamespace).replace("%A", prefix.upper())
    of = outputfile.replace("?", "")
    od = outputdir.replace("?", "")

    status(od + of)

    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:

        if forward:
            
            file.write(t %
                ("\n".join([ forwardType(api, prefix, libraryNamespace, t) for t in types ]),
                "\n".join([ "using %s = %s::%s;" % (g.name, libraryNamespace, g.name) for g in bitfGroups ]),)
            )

        else:
            file.write(t % (
                ("\n".join([ string for string in [ convertType(api, prefix, libraryNamespace, t) for t in types if t.isInclude ] if string ])),
                ("\n".join([ string for string in [ convertType(api, prefix, libraryNamespace, t) for t in types if not t.isInclude ] if string ])),
                ("\n".join([ "enum class %s : unsigned int;" % g.name for g in bitfGroups ]))
            ))


def genTypeIntegrations_h(api, prefix, libraryNamespace, types, bitfGroups, outputdir, outputfile):

    of_all = outputfile.replace("?", "F")

    t = template(of_all).replace("%a", libraryNamespace).replace("%A", prefix.upper())
    of = outputfile.replace("?", "")
    od = outputdir.replace("?", "")

    status(od + of)

    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:
         
        type_integrations = []

        for typename, integrations in type_integration_map.items():
            for integration in integrations:
                type_integrations.append(template("type_integration/%s.h" % integration).replace("%a", libraryNamespace).replace("%A", libraryNamespace.upper()).replace("%t", prefix.upper() + typename))

        for group in bitfGroups:
            for integration in [ "hashable", "bitfield_streamable", "bit_operatable"]:
                type_integrations.append(template("type_integration/%s.h" % integration).replace("%a", libraryNamespace).replace("%A", libraryNamespace.upper()).replace("%t", group.name))

        file.write(t % ("\n".join([ t for t in type_integrations ])))


def genTypeIntegrations_cpp(api, prefix, libraryNamespace, types, bitfGroups, outputdir, outputfile):

    of = outputfile.replace("?", "")
    od = outputdir.replace("?", "")
    t = template(of).replace("%a", libraryNamespace).replace("%A", prefix.upper())

    status(od + of)

    type_integrations = []
    for typename, integrations in type_integration_map.items():
        for integration in integrations:
            type_integrations.append(template("type_integration/%s.cpp" % integration).replace("%a", libraryNamespace).replace("%A", prefix.upper()).replace("%t", prefix.upper() + typename)) 

    for group in bitfGroups:
        for integration in [ "hashable", "bitfield_streamable", "bit_operatable"]:
            type_integrations.append(template("type_integration/%s.cpp" % integration).replace("%a", libraryNamespace).replace("%A", prefix.upper()).replace("%t", group.name))

    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:
        file.write(t % ("\n".join([ type for type in type_integrations ])))
