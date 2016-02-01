from binding import *
from classes.Feature import *

def genTest(api, features, path):

    featureContexts = [{"feature": versionBID(None)}]
    for f in features:
        if f.api == "gl": # ToDo: probably separate for all apis
            featureContexts.append({"feature": versionBID(f)})
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                featureContexts.append({"feature": versionBID(f, True)})
            featureContexts.append({"feature": versionBID(f, False, True)})

    context = {"api": api,
               "features": featureContexts}

    Generator.generate(context, path)

