from binding import *

from context import Context


def genBitfieldContexts(enums, bitfGroups):
    bitfieldEnums = [enum for enum in enums if enum.type == "GLbitfield"]
    eglBitfieldEnums = [enum for enum in enums if enum.type == "EGLbitfield"]
    
    if len(bitfieldEnums) == 0 and len(eglBitfieldEnums) == 0:
        return []

    noneIdentifier = "GL_NONE_BIT"
    if len(eglBitfieldEnums) > 0:
        noneIdentifier = "EGL_NONE_BIT"
        bitfieldEnums = eglBitfieldEnums

    maxLength = max([len(enumBID(enum)) for enum in bitfieldEnums])
    
    noneValue = "0x0"
    noneGroups = Context.listContext([g.name for g in bitfGroups], sortKey = lambda g: g)

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
        groups = Context.listContext([g.name for g in enum.groups], sortKey = lambda g: g)
        bitfieldContexts.append({"identifier": enumBID(enum),
                                 "name": enum.name,
                                 "value": enum.value,
                                 "spaces": " " * (maxLength - len(enumBID(enum))),
                                 "generic": False,
                                 "groups": groups,
                                 "primaryGroup": groups["items"][0]["item"] if not groups["empty"] else None,
                                 "supported": supportedLambda(enum) })
    return bitfieldContexts
