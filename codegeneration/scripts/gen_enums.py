from binding import *

from context import Context


def genEnumContexts(allEnums):
    ungroupedName = "__UNGROUPED__"
    enums = [enum for enum in allEnums if enum.type == "GLenum"]
    maxLength = max([len(enumBID(enum)) for enum in enums])
    enumContexts = []
    for enum in enums:
        groups = Context.listContext([g.name for g in enum.groups] if enum.groups else [ungroupedName], sortKey = lambda g: g)
        enumContexts.append({"identifier": enumBID(enum),
                             "name": enum.name,
                             "value": enum.value,
                             "decimalValue": int(enum.value, 0) if enum.value.startswith("0x") else "",
                             "cast": enum.value.startswith("-"),
                             "spaces": " " * (maxLength - len(enumBID(enum))),
                             "groups": groups,
                             "primaryGroup": groups["items"][0]["item"] if not groups["empty"] else None,
                             "supported": supportedLambda(enum) })
    return enumContexts
