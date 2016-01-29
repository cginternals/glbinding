from binding import *
from classes.Enum import *


def genValues(api, values, features, path):

    genValueH(api, values, path, None)

    # gen values feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably separate for all apis
            genValueH(api, values, path, f)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genValueH(api, values, path, f, True)
            genValueH(api, values, path, f, False, True)


def genValueH(api, values, path, feature, core = False, ext = False):
    typeBlacklist = ["GLboolean", "GLenum", "GLbitfield"]
    valuesByType = { t: e for (t, e) in groupEnumsByType(values).items() if t not in typeBlacklist}

    groups = []
    types = sorted(valuesByType.keys())
    for type in types:
        valueList = valuesByType[type]
        values = [ {"type": value.type,
                    "identifier": enumBID(value),
                    "value": value.value,
                    "last": (valueList.index(value) == len(valueList) - 1)}
                    for value in valueList
                    if (feature is None) or (not ext and value.supported(feature, core)) or (ext and not value.supported(feature, False))]
        groups.append({"values": values, "type": type, "last": (types.index(type) == len(types) - 1)})

    context = { "api": api,
                "feature": versionBID(feature, core, ext),
                "groups": groups,
                "define": (feature is None),
                "import": (feature is not None)}

    Generator.generate(context, path)
