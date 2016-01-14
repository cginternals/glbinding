from binding import *
from classes.Extension import *


def genExtensions(api, extensions, path):

    path = path.replace("?", "")

    context = { "api": api,
                "feature": "",
                "extensions":
                    [ { "name": extensionBID(e),
                        "last": (extensions.index(e) == len(extensions) - 1)}
                        for e in extensions ]}

    Generator.generate(context, path)
