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
bitf_group_integrations = [ "hashable", "bitfieldStreamable", "bitOperatable"]
all_integrations = [ "addable", "bitOperatable", "bitfieldStreamable", "comparable", "hashable", "streamable"]


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


def genTypeHeaders(api, types, bitfGroups, features, path):

    genTypesH(api, types, bitfGroups, path, None)

    # gen enums feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genTypesH(api, types, bitfGroups, path, f)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genTypesH(api, types, bitfGroups, path, f, True)
            genTypesH(api, types, bitfGroups, path, f, False, True)


def typeIntegrationMap(type):
    return integrationMap(type_integration_map[type.name] if type.name in type_integration_map else [])

def integrationMap(integrationList):
    return { integration: integration in integrationList for integration in all_integrations}

def genTypesH(api, types, bitfGroups, path, feature, core = False, ext = False):

    typeContexts = [       {"identifier": "GLextension",
                            "definition": "enum class GLextension : int;",
                            "integrations": integrationMap([ "hashable", "streamable" ])}]
    typeContexts.extend([  {"identifier": type.name,
                            "definition": convertType(type),
                            "integrations": typeIntegrationMap(type)}
                            for type in types])
    typeContexts.extend([  {"identifier": group.name,
                            "definition": "enum class {} : unsigned int;".format(group.name),
                            "integrations": integrationMap(bitf_group_integrations)}
                            for group in bitfGroups])
    context = { "api": api,
                "feature": versionBID(feature, core, ext),
                "types": typeContexts,
                "define": (feature is None),
                "import": (feature is not None)}

    Generator.generate(context, path)


def genTypeSources(api, types, bitfGroups, outputdir, outputfile):

    of = outputfile.replace("?", "")
    od = outputdir.replace("?", "")
    t = template(of).replace("%a", api)

    status(od + of)

    type_integrations = []
    for typename, integrations in type_integration_map.items():
        for integration in integrations:
            type_integrations.append(template("type_integration/%s.cpp" % integration).replace("%t", typename))

    for group in bitfGroups:
        for integration in [ "hashable", "bitfield_streamable", "bit_operatable"]:
            type_integrations.append(template("type_integration/%s.cpp" % integration).replace("%t", group.name))

    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:
        file.write(t % ("\n".join([ type for type in type_integrations ])))
