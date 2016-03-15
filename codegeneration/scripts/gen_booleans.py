from binding import *
from classes.Enum import *


def genBooleanContexts(enums):
    booleanEnums = [enum for enum in enums if enum.type == "GLboolean"]
    booleanContexts = []
    for enum in booleanEnums:
        booleanContexts.append({"identifier": enumBID(enum),
                                "name": enum.name,
                                "value": enum.value})
    return booleanContexts

def genBooleans(api, enums, features, path):

    genBooleanH(api, enums, path, None)

    # gen functions feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genBooleanH(api, enums, path, f)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genBooleanH(api, enums, path, f, True)
            genBooleanH(api, enums, path, f, False, True)


def genBooleanH(api, enums, path, feature, core = False, ext = False):
    booleanEnums = groupEnumsByType(enums).get("GLboolean")
    booleans = [   {"identifier": enumBID(enum),
                    "value": enum.value,
                    "last": (booleanEnums.index(enum) == len(booleanEnums) - 1)}
                    for enum in booleanEnums]
    context = { "api": api,
                "feature": versionBID(feature, core, ext),
                "booleans": booleans,
                "define": (feature is None),
                "import": (feature is not None) }

    Generator.generate(context, path)
