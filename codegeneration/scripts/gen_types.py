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


enum_classes = [ "GLboolean", "GLenum" ]

type_integration_map = {
    "GLextension" : [ "hashable", "streamable" ], 
    "GLboolean"   : [ "hashable", "streamable" ],
    "GLenum"      : [ "hashable", "streamable", "addable", "comparable" ]
}


def convertTypedef(type):

    if '\n' in type.value:
        return multilineConvertTypedef(type)

    t = parseType(type)

    if type.name in enum_classes:
        return "enum class " + type.name + " : " + t + ";"

    if not type.value.startswith("typedef"):
        return t
    else:
        return "using " + type.name + " = " + t + ";"


def convertType(type):

    return convertTypedef(type).replace(" ;", ";").replace("( *)", "(*)").replace("(*)", "(GL_APIENTRY *)")


def forwardType(api, type):

    return "using " + type.name + " = " + api + "::" + type.name + ";"


def genTypesForward_h(api, types, bitfGroups, outputdir, outputfile):

    genTypes_h(api, types, bitfGroups, outputdir, outputfile, True)


def genTypes_h(api, types, bitfGroups, outputdir, outputfile, forward = False):

    of_all = outputfile.replace("?", "F")

    t = template(of_all).replace("%a", api)
    of = outputfile.replace("?", "")

    status(outputdir + of)

    with open(outputdir + of, 'w') as file:

        if forward:

            file.write(t %
                ("\n".join([ forwardType(api, t) for t in types ]),
                "\n".join([ "using %s = gl::%s;" % (g.name, g.name) for g in bitfGroups ]),)
            )

        else:            
            type_integrations = []

            for typename, integrations in type_integration_map.items():
                for integration in integrations:
                    type_integrations.append(template("type_integration/%s.h" % integration).replace("%t", typename))

            for group in bitfGroups:
                for integration in [ "hashable", "bitfield_streamable", "bit_operatable"]:
                    type_integrations.append(template("type_integration/%s.h" % integration).replace("%t", group.name))

            file.write(t % (
                ("\n".join([ convertType(t) for t in types ])), # if t.name != "GLbitfield" 
                 "\n".join([ "enum class %s : unsigned int;" % g.name for g in bitfGroups ]),
                ("\n".join([ t for t in type_integrations ]))
            ))


def genTypes_cpp(api, types, bitfGroups, outputdir, outputfile):

    of = outputfile
    t = template(of).replace("%a", api)

    status(outputdir + of)

    type_integrations = []
    for typename, integrations in type_integration_map.items():
        for integration in integrations:
            type_integrations.append(template("type_integration/%s.cpp" % integration).replace("%t", typename)) 

    for group in bitfGroups:
        for integration in [ "hashable", "bitfield_streamable", "bit_operatable"]:
            type_integrations.append(template("type_integration/%s.cpp" % integration).replace("%t", group.name))


    with open(outputdir + of, 'w') as file:
        file.write(t % ("\n".join([ type for type in type_integrations ])))
