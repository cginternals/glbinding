from binding import *

from context import Context

def genExtensionContexts(extensions):
    extensionContexts = []
    for extension in extensions:
        commandContexts = Context.listContext([{"identifier": functionBID(c), "name": c.name} for c in extension.reqCommands],
                                              sortKey = lambda c: c["identifier"])
        extensionContexts.append({"identifier": extensionBID(extension),
                                  "name": extension.name,
                                  "incore": extension.incore,
                                  "incoreMajor": extension.incore.major if extension.incore else None,
                                  "incoreMinor": extension.incore.minor if extension.incore else None,
                                  "reqCommands": commandContexts})
    return extensionContexts
