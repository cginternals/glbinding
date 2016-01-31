from binding import *
from classes.Feature import *


def genFeatures(api, features, path):

    genGlH(api, path, None)

    # gen bitfields feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genGlH(api, path, f)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genGlH(api, path, f, True)

            # non core gl includes ext to support forward
            genGlH(api, path, f, False, True)


def genGlH(api, path, feature, core = False, ext = False):

    features = [{"feature": versionBID(feature, core, ext)}]

    if not core and not ext and feature is not None:
        features.append({"feature": versionBID(feature, core, True)})

    context = {"api": api,
               "feature": versionBID(feature, core, ext),
               "features": features}
    Generator.generate(context, path)
