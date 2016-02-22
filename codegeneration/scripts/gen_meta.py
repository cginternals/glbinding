from binding import *
from classes.Extension import *

def genMeta_h(bitfGroups, path):
    context = {"bitfGroups": [{"identifier": g.name} for g in bitfGroups]}
    Generator.generate(context, path)

def genMetaMaps(bitfGroups, path):
    context = {"bitfGroups": [{"identifier": g.name} for g in bitfGroups]}
    Generator.generate(context, path)

def genMetaGetStringByBitfield(bitfGroups, path):
    context = {"bitfGroups": [{"identifier": g.name} for g in sorted(bitfGroups, key = lambda g: g.name)]}
    Generator.generate(context, path)

def groupEnumsByValue(enums):

    d = dict()

    for e in enums:
        v = int(e.value, 0)
        if not v in d:
            d[v] = []
        d[v].append(e)

    for key in d.keys():
        d[key] = sortEnumsBySuffix(d[key])

    return d


def sortEnumsBySuffix(enums):

    return sorted(enums, key = lambda e : enumSuffixPriority(e.name))


def enumSuffixPriority(name):

    index = name.rfind("_")
    if index < 0:
        return -1

    ext = name[index + 1:]

    if ext not in Extension.suffixes:
        return -1

    return Extension.suffixes.index(ext)


def genMetaReqVersionsByExtension(extensions, path):
    extContexts = [{"identifier": extensionBID(e),
                    "incoreMajor": e.incore.major,
                    "incoreMinor": e.incore.minor,
                    "last": False}
                   for e in extensions if e.incore ]
    extContexts.sort(key = lambda e: (e["incoreMajor"], e["incoreMinor"]))
    extContexts[-1]["last"] = True

    context = {"extensions": extContexts}
    Generator.generate(context, path)


# STRINGS BY BITFIELDS

def genMetaStringsByBitfield(bitfGroups, path):
    groupContexts = []
    for g in sorted(bitfGroups, key = lambda g: g.name):
        enums = sorted(g.enums)
        groupContexts.append({"gIdentifier": g.name,
                              "bitfields": [{"bfIdentifier": enumBID(e),
                                             "bfName": e.name,
                                             "last": e == enums[-1]}
                                            for e in enums]})
    context = {"bfGroups": groupContexts}
    Generator.generate(context, path)


# BITFIELDS BY STRING

def genMetaBitfieldByString(bitfGroups, path):
    lists = alphabeticallyGroupedLists()
    for g in bitfGroups:
        for e in g.enums:
            lists[alphabeticalGroupKey(e.name, 'GL_')].append({"bfIdentifier": enumBID(e),
                                                               "bfName": e.name,
                                                               "gIdentifier": g.name,
                                                               "last": False})
    keys = sorted(lists.keys())
    keyContexts = []
    for key in keys:
        lists[key] = sorted(lists[key], key = lambda d: d["bfName"] + d["gIdentifier"])
        if lists[key]:
            lists[key][-1]["last"] = True
        keyContexts.append({"key": key,
                            "empty": len(lists[key]) == 0,
                            "last": key == keys[-1],
                            "enums": lists[key]})

    context = {"keys": keyContexts}
    Generator.generate(context, path)


# STRINGS BY ENUM

def genMetaStringsByEnum(enums, type, path):

    pureEnums = [ e for e in enums if e.type == type ]
    d = sorted([ es[0] for v, es in groupEnumsByValue(pureEnums).items() ])

    context = {"enums": [{"identifier": enumBID(e),
                          "name": e.name,
                          "last": e == d[-1]}
                         for e in d]}

    Generator.generate(context, path)


# ENUMS BY STRING


def genMetaEnumsByString(enums, type, path):

    typeEnums = [ e for e in enums if e.type == type ]

    if type == "GLboolean":
        typeEnums = sorted(typeEnums)
        context = {"enums": [{"identifier": enumBID(e),
                              "name": e.name,
                              "last": e == typeEnums[-1]}
                             for e in typeEnums]}

        Generator.generate(context, path)

    else:
        lists = alphabeticallyGroupedLists()
        for e in typeEnums:
            lists[alphabeticalGroupKey(e.name, 'GL_')].append({"identifier": enumBID(e),
                                                               "name": e.name,
                                                               "last": False})
        keys = sorted(lists.keys())
        keyContexts = []
        for key in keys:
            lists[key] = sorted(lists[key], key = lambda d: d["name"])
            if lists[key]:
                lists[key][-1]["last"] = True
            keyContexts.append({"key": key,
                                "empty": len(lists[key]) == 0,
                                "last": key == keys[-1],
                                "enums": lists[key]})

        context = {"keys": keyContexts}
        Generator.generate(context, path)


# EXTENSIONS BY FUNCTION STRING

def genMetaExtensionsByFunctionString(extensions, path):
    extensionsByCommands = dict()
    for e in extensions: # basically, the reqCommands association is inverted
        for c in e.reqCommands:
            command = c.name
            if not command in extensionsByCommands:
                extensionsByCommands[command] = set()
            extensionsByCommands[command].add(e)
    for c in extensionsByCommands.keys():
        extensionsByCommands[c] = sorted(extensionsByCommands[c], key = lambda e: extensionBID(e))

    # now create alphabetically grouped lists, each containing commands starting
    # with their groups letter and having a set of extensions associated ...

    lists = alphabeticallyGroupedLists()
    for c in sorted(extensionsByCommands.keys()):
        lists[alphabeticalGroupKey(c, 'gl')].append(
                    {"name": c,
                     "extensions": [{"identifier": extensionBID(e),
                                     "last": e == extensionsByCommands[c][-1]}
                                    for e in extensionsByCommands[c]],
                     "last": False})

    keyContexts = []
    keys = sorted(lists.keys())
    for key in keys:
        lists[key].sort(key = lambda c: c["name"])
        if lists[key]:
            lists[key][-1]["last"] = True
        keyContexts.append({"key": key,
                            "empty": len(lists[key]) == 0,
                            "last": key == keys[-1],
                            "commands": lists[key]})

    context = {"keys": keyContexts,
               "keyCount": len(keyContexts)}
    Generator.generate(context, path)


# EXTENSIONS BY STRING

def genMetaExtensionsByString(extensions, path):

    lists = alphabeticallyGroupedLists()
    for e in extensions:
        lists[alphabeticalGroupKey(e.name, 'GL_')].append({"identifier": extensionBID(e),
                                                           "name": e.name,
                                                           "last": False})

    keyContexts = []
    keys = sorted(lists.keys())
    for key in keys:
        lists[key].sort(key = lambda e: e["name"])
        if lists[key]:
            lists[key][-1]["last"] = True
        keyContexts.append({"key": key,
                            "empty": len(lists[key]) == 0,
                            "last": key == keys[-1],
                            "extensions": lists[key]})

    context = {"keys": keyContexts,
               "keyCount": len(keyContexts)}
    Generator.generate(context, path)


# STRINGS BY EXTENSION

def genMetaStringsByExtension(extensions, path):
    sortedExtensions = sorted(extensions)
    context = {"extensions": [{"identifier": extensionBID(e),
                               "name": e.name,
                               "last": e == extensions[-1]}
                              for e in extensions]}
    Generator.generate(context, path)


# FUNCTION STRINGS BY EXTENSION

def genMetaFunctionStringsByExtension(extensions, path):

    extensionContexts = [ {"identifier": extensionBID(e),
                           "reqCommands": [{"name": c.name,
                                            "last": c == e.reqCommands[-1]}
                                           for c in e.reqCommands],
                           "last": False}
                          for e in extensions if len(e.reqCommands) > 0 ]
    extensionContexts.sort(key = lambda e: e["identifier"])
    extensionContexts[-1]["last"] = True

    context = {"extensions": extensionContexts}
    Generator.generate(context, path)


