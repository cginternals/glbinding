from binding import *

class Context:

    # TODO-LW document arguments
    # structure:
    # { "items": [ { "item": {...},
    #                "last": <bool>} ],
    #   "firstItem": {...},
    #   "count": <uint>,
    #   "empty": <bool>,
    #   "singleItem": <bool>,
    #   "multipleItems": <bool> }
    @staticmethod
    def listContext(contextList, sortKey = None, filter = lambda i: True):

        context = {}
        if sortKey is not None:
            contextList = sorted(contextList, key = sortKey)

        context["items"] = [{"item": item, "last": item == contextList[-1]}
          for item in contextList if filter(item)]

        context["firstItem"] = context["items"][0]["item"] if context["items"] else None

        context["count"] = len(context["items"])
        context["empty"] = len(context["items"]) == 0

        context["singleItem"] = len(context["items"]) == 1
        context["multipleItems"] = len(context["items"]) > 1

        return context

    @staticmethod
    def groupItems(items, groupKey, groupKeyList = [], filter = lambda i: True):
        groupMap = {key: [] for key in groupKeyList}
        for item in items:
            if filter(item):
                for gKey in groupKey(item):
                    if gKey not in groupMap:
                        groupMap[gKey] = []
                    groupMap[gKey].append(item)
        return groupMap

    # TODO-LW document arguments
    # structure:
    # { "groups": [ { "name": <string>,
    #                 "items": [ { "item": {...},
    #                              "last": <bool>},
    #                              "hasPrimary": <bool>,
    #                              "isPrimary": <bool>,
    #                              "isSecondary": <bool> } ],
    #                 "firstItem": {...},
    #                 "count": <uint>,
    #                 "empty": <bool>,
    #                 "singleItem": <bool>,
    #                 "multipleItems": <bool>,
    #                 "last": <bool> } ],
    #   "count": <uint>,
    #   "empty": <bool>,
    #   "singleGroup": <bool>,
    #   "multipleGroups": <bool> }
    @classmethod
    def groupedContext(_class, contextList, groupKey, primaryGroupKey = None,
                       groupKeyList = [],
                       groupSortKey = None, itemSortKey = None,
                       groupName = lambda gk: str(gk), filter = lambda i: True):
        context = {}
        groupMap = _class.groupItems(contextList, groupKey, groupKeyList, filter)

        groupKeys = list(groupMap.keys())
        if groupSortKey is not None:
            groupKeys.sort(key = groupSortKey)

        context["groups"] = []
        for key in groupKeys:
            if itemSortKey is not None:
                groupMap[key].sort(key = itemSortKey)

            items = []
            for item in groupMap[key]:
                hasPrimary = primaryGroupKey is not None and primaryGroupKey(item) in groupKeys
                isPrimary = primaryGroupKey is not None and primaryGroupKey(item) == key
                items.append({"item": item,
                          "last": item == groupMap[key][-1],
                          "hasPrimary": hasPrimary,
                          "isPrimary": isPrimary,
                          "isSecondary": hasPrimary and not isPrimary})

            context["groups"].append({"name": groupName(key),
                                      "items": items,
                                      "firstItem": items[0]["item"] if items else None,
                                      "count": len(items),
                                      "empty": len(items) == 0,
                                      "singleItem": len(items) == 1,
                                      "multipleItems": len(items) > 1,
                                      "last": key == groupKeys[-1]})
        context["count"] = len(context["groups"])
        context["empty"] = len(context["groups"]) == 0
        context["singleGroup"] = len(context["groups"]) == 1
        context["multipleGroups"] = len(context["groups"]) > 1
        return context

    @staticmethod
    def _listApiMemberSets(features):
        apiMemberSetList = []
        for f in features:
            if f.api == "gl": # ToDo: probably seperate for all apis
                apiMemberSetList.append( (f, False, False) )
                if f.major > 3 or (f.major == 3 and f.minor >= 2):
                    apiMemberSetList.append( (f, True, False) )
                apiMemberSetList.append( (f, False, True) )
        return apiMemberSetList

    def __init__(self, api, revision, features, extensions, enums, bitfGroups, types, commands):
        self.api = api
        self.revision = revision
        self.features = features
        self.extensions = extensions
        self.enums = enums
        self.bitfGroups = bitfGroups
        self.types = types
        self.commands = commands

        self.apiMemberSetList = self._listApiMemberSets(features)

        import gen_extensions
        import gen_booleans
        import gen_values
        import gen_types
        import gen_bitfields
        import gen_enums
        import gen_functions
        import gen_features

        self.extensionContexts = gen_extensions.genExtensionContexts(extensions)
        self.booleanContexts = gen_booleans.genBooleanContexts(enums)
        self.valueContexts = gen_values.genValueContexts(enums)
        self.typeContexts = gen_types.genTypeContexts(types, bitfGroups)
        self.bitfieldContexts = gen_bitfields.genBitfieldContexts(enums, bitfGroups)
        self.enumContexts = gen_enums.genEnumContexts(enums)
        self.functionContexts = gen_functions.genFunctionContexts(commands)
        self.featureContexts = gen_features.genFeatureContexts(features)

    def apiMemberSets(self):
        return self.apiMemberSetList

    def general(self):

        context = {"api": self.api,
                   "memberSet": "",
                   "revision": self.revision}

        context["apiMemberSets"] = self.listContext( [{"memberSet": versionBID(feature, core, ext)}
                                                 for feature, core, ext in ( [(None, False, False)] + self.apiMemberSetList )] )
        context["extensions"] = self.listContext(self.extensionContexts, sortKey = lambda e: e["identifier"])
        extensionsByCommands = self.groupItems(self.extensionContexts, groupKey = lambda e: [ i["item"]["identifier"] for i in e["reqCommands"]["items"] ])
        extensionsByCommandsContexts = [{"command": c, "extensions": self.listContext(extensionsByCommands[c], sortKey = lambda e: e["identifier"])} for c in extensionsByCommands.keys()]
        context["extensionsByCommandsByInitial"] = self.groupedContext(extensionsByCommandsContexts,
                                                                  groupKey = lambda e: [ alphabeticalGroupKey(e["command"], "gl") ],
                                                                  groupKeyList = alphabeticalGroupKeys(),
                                                                  groupSortKey = lambda i: str(i),
                                                                  itemSortKey = lambda e: e["command"])
        # TODO-LW: use extensions instead of extensionsIncore for Meta_ReqVersionsByExtension.cpp
        context["extensionsIncore"] = self.listContext(self.extensionContexts,
                                                  filter = lambda e: e["incore"],
                                                  sortKey = lambda e: (e["incoreMajor"] if e["incoreMajor"] else 0, e["incoreMinor"] if e["incoreMinor"] else 0))
        context["extensionsByInitial"] = self.groupedContext(self.extensionContexts,
                                                        groupKey = lambda e: [ alphabeticalGroupKey(e["identifier"], "GL_") ],
                                                        groupKeyList = alphabeticalGroupKeys(),
                                                        groupSortKey = lambda k: k,
                                                        itemSortKey = lambda e: e["identifier"])
        context["booleans"] = self.listContext(self.booleanContexts, sortKey = lambda e: e["identifier"])
        context["valuesByType"] = self.groupedContext(self.valueContexts, groupKey = lambda e: [ e["type"] ])
        context["types"] = self.listContext(self.typeContexts) # no sortKey because order by genTypeContexts() should be kept
        context["bitfields"] = self.listContext(self.bitfieldContexts, sortKey = lambda b: b["value"])
        context["bitfieldsByGroup"] = self.groupedContext(self.bitfieldContexts,
                                                     groupKey = lambda b: [ i["item"] for i in b["groups"]["items"] ],
                                                     primaryGroupKey = lambda b: b["primaryGroup"],
                                                     groupSortKey = lambda g: g,
                                                     itemSortKey = lambda b: b["value"])
        context["bitfieldsByInitial"] = self.groupedContext(self.bitfieldContexts,
                                                       groupKey = lambda b: [ alphabeticalGroupKey(b["identifier"], "GL_") ],
                                                       groupKeyList = alphabeticalGroupKeys(),
                                                       groupSortKey = lambda k: k,
                                                       itemSortKey = lambda b: b["identifier"])
        context["bitfieldGroups"] = self.listContext([g.name for g in self.bitfGroups], sortKey = lambda g: g)
        context["enums"] = self.listContext(self.enumContexts, sortKey = lambda e: e["value"])
        context["enumsByGroup"] = self.groupedContext(self.enumContexts,
                                                 groupKey = lambda e: [ i["item"] for i in e["groups"]["items"] ],
                                                 primaryGroupKey = lambda e: e["primaryGroup"],
                                                 groupSortKey = lambda g: g,
                                                 itemSortKey = lambda e: e["value"])
        context["enumsByValue"] = self.groupedContext(self.enumContexts,
                                                 groupKey = lambda e: [ int(e["value"], 0) ],
                                                 groupSortKey = lambda g: g,
                                                 itemSortKey = lambda e: (enumSuffixPriority(e["identifier"]), e["identifier"]))
        context["enumsByInitial"] = self.groupedContext(self.enumContexts,
                                                   groupKey = lambda e: [ alphabeticalGroupKey(e["identifier"], "GL_") ],
                                                   groupKeyList = alphabeticalGroupKeys(),
                                                   groupSortKey = lambda k: k,
                                                   itemSortKey = lambda e: e["identifier"])
        context["functions"] = self.listContext(self.functionContexts, sortKey = lambda f: f["identifier"])
        context["functionsByInitial"] = self.groupedContext(self.functionContexts,
                                                       groupKey = lambda f: [ alphabeticalGroupKey(f["identifier"], "gl") ],
                                                       groupKeyList = alphabeticalGroupKeys(),
                                                       groupSortKey = lambda k: k,
                                                       itemSortKey = lambda f: f["identifier"])
        context["features"] = self.listContext(self.featureContexts)
        context["latestFeature"] = context["features"]["items"][-1]["item"]

        return context

    def apiMemberSetSpecific(self, feature, core, ext):
        context = {"api": self.api,
                           "memberSet": versionBID(feature, core, ext),
                           "revision": self.revision}

        context["booleans"] = self.listContext(self.booleanContexts, sortKey = lambda e: e["identifier"])
        context["valuesByType"] = self.groupedContext(self.valueContexts, groupKey = lambda v: [ v["type"] ],
                                                        groupSortKey = lambda t: t,
                                                        itemSortKey = lambda v: v["value"],
                                                        filter = lambda v: v["supported"](feature, core, ext))
        context["types"] = self.listContext(self.typeContexts) # no sortKey because order by genTypeContexts() should be kept
        context["bitfields"] = self.listContext(self.bitfieldContexts, sortKey = lambda b: b["value"],
                                                  filter = lambda b: b["supported"](feature, core, ext))
        context["enumsByGroup"] = self.groupedContext(self.enumContexts,
                                                        groupKey = lambda e: [ i["item"] for i in e["groups"]["items"] ],
                                                        primaryGroupKey = lambda e: e["primaryGroup"],
                                                        groupSortKey = lambda g: g,
                                                        itemSortKey = lambda b: b["value"],
                                                        filter = lambda e: e["supported"](feature, core, ext))
        context["functions"] = self.listContext(self.functionContexts, sortKey = lambda f: f["identifier"],
                                                  filter = lambda f: f["supported"](feature, core, ext))
        
        return context
