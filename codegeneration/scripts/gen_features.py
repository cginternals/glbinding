from binding import *


def genFeatureContexts(features):
    featureContexts = []
    for feature in sorted(features):
        featureContexts.append({"identifier": versionBID(feature),
                                "major": feature.major,
                                "minor": feature.minor})
    return featureContexts

