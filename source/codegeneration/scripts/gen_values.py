from binding import *


def genValueContexts(enums):
    typeBlacklist = ["GLboolean", "GLenum", "GLbitfield"]
    valueEnums = [enum for enum in enums if enum.type not in typeBlacklist]
    valueContexts = []
    for enum in valueEnums:
        valueContexts.append({"type": enum.type,
                               "identifier": enumBID(enum),
                               "name": enum.name,
                               "value": enum.value,
                               "supported": supportedLambda(enum) })
    return valueContexts
