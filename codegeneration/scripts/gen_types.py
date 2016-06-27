from binding import *

from classes.Type import *


REGULAR_TYPE_INTEGRATIONS = {
    "GLextension" : [ "hashable", "streamable" ],
    "GLboolean"   : [ "streamable" ],
    "GLenum"      : [ "hashable", "streamable", "addable", "comparable" ]
}
BITFIELD_TYPE_INTEGRATIONS = [ "hashable", "bitfieldStreamable", "bitOperatable"]
TYPE_INTEGRATIONS = [ "addable", "bitOperatable", "bitfieldStreamable", "comparable", "hashable", "streamable"]


def integrationMap(integrationList):
    return { integration: (integration in integrationList) for integration in TYPE_INTEGRATIONS}


def typeIntegrationMap(type):
    return integrationMap(REGULAR_TYPE_INTEGRATIONS[type.name] if type.name in REGULAR_TYPE_INTEGRATIONS else [])


# ToDo: move this to Type class? (as well as convert an multiline convert)
enum_classes = [ "GLenum" ]

def convertTypedefLine(line, name):

    if not line.startswith("typedef"):
        return line
    else:
        return "using " + name + " = " + line[8:].replace(name, "")


def multilineConvertTypedef(type):

    return "\n".join([ convertTypedefLine(line, type.name) for line in type.value.split('\n') ])


def convertTypedef(type):

    if '\n' in type.value:
        return multilineConvertTypedef(type)

    t = parseType(type)

    if type.name in enum_classes:
        return "enum class " + type.name + " : " + t + ";"

    if not type.value.startswith("typedef"):
        return t
    elif type.name == "GLboolean":
        return "// Import of GLboolean is an include"
    else:
        return "using " + type.name + " = " + t + ";"


def convertType(type):

    return convertTypedef(type).replace(" ;", ";").replace("( *)", "(*)").replace("(*)", "(GL_APIENTRY *)")


def genTypeContexts(types, bitfGroups):
    typeContexts = [{"identifier": "GLextension",
                     "definition": "enum class GLextension : int;",
                     "integrations": integrationMap([ "hashable", "streamable" ]),
                     "hasIntegrations": True}]
    for type in types: #TODO-LW: explicitly sort types and bitfGroups
        integrations = typeIntegrationMap(type)
        typeContexts.append({"identifier": type.name,
                             "definition": convertType(type),
                             "integrations": integrations,
                             "hasIntegrations": any(integrations.values()) })
    for bitf in bitfGroups:
        integrations = integrationMap(BITFIELD_TYPE_INTEGRATIONS)
        typeContexts.append({"identifier": bitf.name,
                             "definition": "enum class {} : unsigned int;".format(bitf.name),
                             "integrations": integrations,
                             "hasIntegrations": any(integrations.values()) })
    return typeContexts
