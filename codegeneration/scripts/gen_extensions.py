from binding import *
from classes.Extension import *


def genExtensionContexts(extensions):
    extensionContexts = []
    for extension in extensions:
        commandContexts = listContext([{"identifier": functionBID(c), "name": c.name} for c in extension.reqCommands],
                                      sortKey = lambda c: c["identifier"])
        extensionContexts.append({"identifier": extensionBID(extension),
                                  "name": extension.name,
                                  "incore": extension.incore,
                                  "incoreMajor": extension.incore.major if extension.incore else None,
                                  "incoreMinor": extension.incore.minor if extension.incore else None,
                                  "reqCommands": commandContexts})
    return extensionContexts

def genExtensions(api, extensions, path):

    path = path.replace("?", "")

    context = { "api": api,
                "feature": "",
                "extensions":
                    [ { "name": extensionBID(e),
                        "last": (extensions.index(e) == len(extensions) - 1)}
                        for e in extensions ]}

    Generator.generate(context, path)
