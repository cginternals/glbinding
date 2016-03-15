from binding import *
from classes.Enum import *
from classes.Feature import *


def genBitfieldContexts(enums, bitfGroups):
    bitfieldEnums = [enum for enum in enums if enum.type == "GLbitfield"]
    maxLength = max([len(enumBID(enum)) for enum in bitfieldEnums])

    noneIdentifier = "GL_NONE_BIT"
    noneValue = "0x0"
    noneGroups = listContext([g.name for g in bitfGroups], sortKey = lambda g: g)

    bitfieldContexts = []
    bitfieldContexts.append({"identifier": noneIdentifier,
                             "name": noneIdentifier,
                             "value": noneValue,
                             "spaces": " " * (maxLength - len(noneIdentifier)),
                             "generic": True,
                             "groups": noneGroups,
                             "primaryGroup": noneGroups["items"][0]["item"] if not noneGroups["empty"] else None,
                             "supported": (lambda feature, core, ext: True) })
    for enum in bitfieldEnums:
        groups = listContext([g.name for g in enum.groups], sortKey = lambda g: g)
        bitfieldContexts.append({"identifier": enumBID(enum),
                                 "name": enum.name,
                                 "value": enum.value,
                                 "spaces": " " * (maxLength - len(enumBID(enum))),
                                 "generic": False,
                                 "groups": groups,
                                 "primaryGroup": groups["items"][0]["item"] if not groups["empty"] else None,
                                 "supported": supportedLambda(enum) })
    return bitfieldContexts


def genBitfields(api, enums, features, path):

    genBitfieldsH(api, enums, path, None)

    # gen bitfields feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genBitfieldsH(api, enums, path, f)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genBitfieldsH(api, enums, path, f, True)
            genBitfieldsH(api, enums, path, f, False, True)


def genBitfieldsH(api, enums, path, feature, core = False, ext = False):
    noneIdentifier = "GL_NONE_BIT"
    noneValue = "0x0"

    supportedBitfields = [b for b in enums
                          if b.type == "GLbitfield"
                          and (not ext and b.supported(feature, core)
                                or ext and not b.supported(feature, False))]
    supportedBitfields = sorted(supportedBitfields, key = lambda b: b.value)

    bitfieldsByGroup = {}
    maxLengthByGroup = {}
    maxLength = len(noneIdentifier)
    for b in supportedBitfields:
        length = len(enumBID(b))
        maxLength = max(length, maxLength)
        for group in b.groups:
            if group not in maxLengthByGroup:
                maxLengthByGroup[group] = len(noneIdentifier)
            maxLengthByGroup[group] = max(length, maxLengthByGroup[group])
            if group not in bitfieldsByGroup:
                bitfieldsByGroup[group] = []
            bitfieldsByGroup[group].append(b)
    for group in bitfieldsByGroup.keys():
        bitfieldsByGroup[group] = sorted(bitfieldsByGroup[group], key = lambda e: e.value)
    groups = sorted(bitfieldsByGroup.keys(), key = lambda g: g.name)

    groupedBfContexts = []
    reuseFrom = {}
    for group in groups:
        bitfieldContexts = [{"identifier": noneIdentifier,
                             "generic": True,
                             "spaces": " " * (maxLengthByGroup[group] - len(noneIdentifier)),
                             "value": noneValue}]
        for b in bitfieldsByGroup[group]:
            bitfieldContexts.append({"identifier": enumBID(b),
                                     "reused": {"from": reuseFrom[b.name].name} if b.name in reuseFrom else None,
                                     "spaces": " " * (maxLengthByGroup[group] - len(enumBID(b))),
                                     "value": b.value})
            if b.name not in reuseFrom:
                reuseFrom[b.name] = group
        groupedBfContexts.append({"group": group.name, "bitfields": bitfieldContexts})

    linearBfContexts = []
    if len(supportedBitfields) > 0:
        linearBfContexts.append({"identifier": noneIdentifier,
                                  "spaces": " " * (maxLength - len(noneIdentifier)),
                                  "shared": len(groups) > 1,
                                  "firstGroup": groups[0].name if len(groups) > 0 else None,
                                  "groups": [{"name": group.name,
                                              "last": groups.index(group) == len(groups) - 1}
                                             for group in groups]})
    for b in supportedBitfields:
        groupList = sorted(b.groups, key = lambda g: g.name)

        linearBfContexts.append({"identifier": enumBID(b),
                                 "spaces": " " * (maxLength - len(enumBID(b))),
                                 "shared": len(groupList) > 1,
                                 "firstGroup": reuseFrom[b.name].name,
                                 "groups": [{"name": group.name,
                                             "last": groupList.index(group) == len(groupList) - 1}
                                             for group in groupList]})

    context = { "api": api,
                "feature": versionBID(feature, core, ext),
                "groupedBitfields": groupedBfContexts,
                "linearBitfields": linearBfContexts,
                "defineBitfields": (feature is None),
                "importBitfields": (feature is not None) }

    Generator.generate(context, path)
