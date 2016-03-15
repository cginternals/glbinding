from binding import *
from classes.Extension import *


def genExtensionContexts(extensions):
    extensionContexts = []
    for extension in extensions:
        commands = sorted(extension.reqCommands)
        extensionContexts.append({"identifier": extensionBID(extension),
                                  "name": extension.name,
                                  "incore": True if extension.incore else False,
                                  "incoreMajor": extension.incore.major if extension.incore else None,
                                  "incoreMinor": extension.incore.minor if extension.incore else None,
                                  "reqCommands": [{"identifier": functionBID(c),
                                                   "name": c.name,
                                                   "last": c == commands[-1]}
                                                  for c in commands]})
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
