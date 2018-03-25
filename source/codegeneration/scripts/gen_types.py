from binding import *

from classes.Type import *


REGULAR_TYPE_INTEGRATIONS = {
    "GLextension" : [ "hashable", "streamable", "valueRepresentable" ],
    "EGLextension" : [ "hashable", "streamable", "valueRepresentable" ],
    "GLboolean"   : [ "streamable", "valueRepresentable" ],
    "EGLbBolean"   : [ "streamable", "valueRepresentable" ],
    "GLenum"      : [ "hashable", "streamable", "addable", "comparable", "valueRepresentable" ],
    "EGLenum"      : [ "hashable", "streamable", "addable", "comparable", "valueRepresentable" ],
    "GLbitfield": [],
    "EGLbitfield": [],
    "GLvoid"      : [],
    "EGLvoid"      : [],
    "_cl_context": [],
    "_cl_event": []
}
BITFIELD_TYPE_INTEGRATIONS = [ "hashable", "bitfieldStreamable", "bitOperatable", "valueRepresentable" ]
TYPE_INTEGRATIONS = [ "addable", "bitOperatable", "bitfieldStreamable", "comparable", "hashable", "streamable", "valueRepresentable" ]


def integrationMap(integrationList):
    return { integration: (integration in integrationList) for integration in TYPE_INTEGRATIONS}


def typeIntegrationMap(type):
    return integrationMap(REGULAR_TYPE_INTEGRATIONS[type.name] if type.name in REGULAR_TYPE_INTEGRATIONS else ["valueRepresentable"])


# ToDo: move this to Type class? (as well as convert an multiline convert)
enum_classes = [ "GLenum", "EGLenum" ]

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
    elif type.name == "EGLBoolean":
        return "// Import of EGLBoolean is an include"
    else:
        return "using " + type.name + " = " + t + ";"


def convertType(type, api):

    return convertTypedef(type).replace(" ;", ";").replace("( *)", "(*)").replace("(*)", "("+api.upper()+"_APIENTRY *)")


def genTypeContexts(types, bitfGroups, api):
    typeContexts = [{"identifier": api.upper()+"extension",
                     "definition": "enum class "+api.upper()+"extension : int;",
                     "integrations": integrationMap([ "hashable", "streamable", "valueRepresentable" ]),
                     "hasIntegrations": True}]
    if api == "egl":
        typeContexts.append({"identifier": "EGLbitfield",
                             "definition": "enum class EGLbitfield : unsigned int;",
                             "integrations": integrationMap([]),
                             "hasIntegrations": False })
    for type in types: #TODO-LW: explicitly sort types and bitfGroups
        if type.name == "GLuint_array_2" and api=="egl":
            continue
        integrations = typeIntegrationMap(type)
        typeContexts.append({"identifier": type.name,
                             "definition": convertType(type, api),
                             "integrations": integrations,
                             "hasIntegrations": any(integrations.values()) })
    for bitf in bitfGroups:
        integrations = integrationMap(BITFIELD_TYPE_INTEGRATIONS)
        typeContexts.append({"identifier": bitf.name,
                             "definition": "enum class {} : unsigned int;".format(bitf.name),
                             "integrations": integrations,
                             "hasIntegrations": any(integrations.values()) })
    return typeContexts
