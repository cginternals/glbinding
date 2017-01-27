from binding import *

from context import Context

def genFeatureContexts(features):

    featureContexts = []
    for feature in sorted(features) :

        commandContexts = Context.listContext([{"identifier": c } for c in feature.reqCommandStrings], 
            sortKey = lambda c: c["identifier"])

        featureContexts.append({
            "identifier": versionBID(feature),
            "major": feature.major,
            "minor": feature.minor,
            "reqCommandStrings": commandContexts})

    return featureContexts

