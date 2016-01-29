from binding import *
from classes.Enum import *
from classes.Feature import *

enumGroupTemplate = """    // %s

%s
"""


def castEnumValue(value):

    if not value.startswith("-"):
        return value
    else:
        return "static_cast<unsigned int>(%s)" % value


def enumDefinition(group, enum, maxlen, usedEnumsByName):

    spaces = " " * (maxlen - len(enumBID(enum)))
    if enum.name not in usedEnumsByName:
        usedEnumsByName[enum.name] = group
        return "    %s %s= %s," % (enumBID(enum), spaces, castEnumValue(enum.value))
    else:
        reuse = usedEnumsByName[enum.name]
        return "//  %s %s= %s, // reuse %s" % (enumBID(enum), spaces, castEnumValue(enum.value), reuse)

def enumImportDefinition(api, enum, group, usedEnumsByName):

    qualifier = api + "::"

    if enum.name not in usedEnumsByName:
        usedEnumsByName[enum.name] = group
        return "using %s%s;" % (qualifier, enumBID(enum))
    else:
        reuse = usedEnumsByName[enum.name]
        return "// using %s%s; // reuse %s" % (qualifier, enumBID(enum), reuse)


def forwardEnum(api, enum, group, usedEnumsByName):

    qualifier = "GLenum"

    if enum.name not in usedEnumsByName:
        usedEnumsByName[enum.name] = group
        return "static const %s %s = %s::%s;" % (
            qualifier, enumBID(enum), qualifier, enumBID(enum))
    else:
        reuse = usedEnumsByName[enum.name]
        return "// static const %s %s = %s::%s; // reuse %s" % (
            qualifier, enumBID(enum), qualifier, enumBID(enum), reuse)


def enumGroup(group, enums, usedEnumsByName):

    if len(enums) == 0:
        return

    maxlen = max([len(enum.name) for enum in enums]) if len(enums) > 0 else 0

    return enumGroupTemplate % (group, "\n".join(
        [ enumDefinition(group, e, maxlen, usedEnumsByName) for e in sorted(enums, key = lambda e: e.value) ]))

def genEnums(api, enums, features, path):

    genEnumH(api, enums, path, None)

    # gen enums feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genEnumH(api, enums, path, f)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genEnumH(api, enums, path, f, True)
            genEnumH(api, enums, path, f, False, True)


def genEnumH(api, enums, path, feature, core = False, ext = False):

    supportedEnums = [e for e in enums
                      if e.type == "GLenum"
                      and (not ext and e.supported(feature, core)
                            or ext and not e.supported(feature, False))]

    enumsByGroup = groupEnumsByGroup(supportedEnums)
    maxLengthByGroup = {group: max([len(enumBID(e)) for e in groupEnums])
                        for group, groupEnums in enumsByGroup.items()}
    groups = sorted(enumsByGroup.keys())

    groupedEnumContexts = []
    reuseFromGroup = {}
    for group in groups:
        enumContexts = []
        for enum in enumsByGroup[group]:
            enumContexts.append({"identifier": enumBID(enum),
                                 "value": enum.value,
                                 "cast": enum.value.startswith("-"),
                                 "spaces": " " * (maxLengthByGroup[group] - len(enumBID(enum))),
                                 "reuse": {"from": reuseFromGroup[enum]} if enum in reuseFromGroup else None,
                                 })
            if enum not in reuseFromGroup:
                reuseFromGroup[enum] = group
        groupedEnumContexts.append({"group": group,
                                    "enums": enumContexts})
    # if feature:
    #     importToNamespace = [ ("\n// %s\n\n" + "%s") % (group, "\n".join(
    #     [ enumImportDefinition(api, e, group, usedEnumsByName) for e in enums ]))
    #         for group, enums in sorted(groupedEnums.items()) ]
    # else:
    #     importToNamespace = [ ("\n// %s\n\n" + "%s") % (group, "\n".join(
    #     [ forwardEnum(api, e, group, usedEnumsByName) for e in enums ]))
    #         for group, enums in sorted(groupedEnums.items()) ]
    #
    # usedEnumsByName.clear()
    #
    # with open(od + of, 'w') as file:
    #     if not feature:
    #
    #         definitions = [ enumGroup(group, enums, usedEnumsByName)
    #             for group, enums in sorted(groupedEnums.items(), key = lambda x: x[0]) ]
    #
    #         file.write(t % ("\n".join(definitions), ("\n") .join(importToNamespace)))
    #
    #     else:
    #         # the "original", non-featured enums are imported to the featured namespace
    #         file.write(t % (("\n") .join(importToNamespace)))

    context = { "api": api,
                "feature": versionBID(feature, core, ext),
                "groups": groupedEnumContexts,
                "define": (feature is None),
                "import": (feature is not None) }

    Generator.generate(context, path)
