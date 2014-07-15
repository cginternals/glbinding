from binding import *
from classes.Feature import *


def genFeatures(features, outputdir, outputfile):

    # gen bitfields feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genFeature(f, outputdir, outputfile)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFeature(f, outputdir, outputfile, True)

            # non core gl includes ext to support forward
            genFeature(f, outputdir, outputfile, False, True)


def genFeature(feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")

    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version)
    of = outputfile.replace("?", version)

    status(outputdir + of)

    with open(outputdir + of, 'w') as file:
        if core or ext:
            file.write(t.replace("%f", version) % ("", "", ""))
        else:
            file.write(t.replace("%f", version) % (
                "\n#include <glbinding/featured/bitfield" + version + "ext.h>",
                "\n#include <glbinding/featured/enum" + version + "ext.h>",
                "\n#include <glbinding/featured/functions" + version + "ext.h>"))
