from binding import *
from classes.Feature import *


def genFeatures(api, prefix, libraryNamespace, features, outputdir, outputfile):

    genFeature(api, prefix, libraryNamespace, None, outputdir, outputfile)
    
    # gen bitfields feature grouped
    for f in features:
        if f.api == api:
            genFeature(api, prefix, libraryNamespace, f, outputdir, outputfile)
            
            if api == "gl":
                if f.major > 3 or (f.major == 3 and f.minor >= 2):
                    genFeature(api, prefix, libraryNamespace, f, outputdir, outputfile, True)
                # non core gl includes ext to support forward
                genFeature(api, prefix, libraryNamespace, f, outputdir, outputfile, False, True)


def genFeature(api, prefix, libraryNamespace, feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")

    version = versionBID(feature, core, ext)
    
    t = template(of_all).replace("%d", version).replace("%f", "").replace("%a", libraryNamespace)
    of = outputfile.replace("?", libraryNamespace)
    od = outputdir.replace("?", version)
    versionExtFile = ""
    versionExtDir = versionBID(feature, core, True)

    status(od + of)
    
    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:
        if core or ext or (not feature) or (api != "gl"):
            file.write(t.replace("%f", version) % ("", "", "", "", "", ""))
        else:
            file.write(t.replace("%f", version) % (
                "\n#include <"+libraryNamespace+"binding/" + libraryNamespace + versionExtDir + "/types"            + versionExtFile + ".h>",
                "\n#include <"+libraryNamespace+"binding/" + libraryNamespace + versionExtDir + "/boolean"          + versionExtFile + ".h>",
                "\n#include <"+libraryNamespace+"binding/" + libraryNamespace + versionExtDir + "/values"           + versionExtFile + ".h>",
                "\n#include <"+libraryNamespace+"binding/" + libraryNamespace + versionExtDir + "/bitfield"         + versionExtFile + ".h>",
                "\n#include <"+libraryNamespace+"binding/" + libraryNamespace + versionExtDir + "/enum"             + versionExtFile + ".h>",
                "\n#include <"+libraryNamespace+"binding/" + libraryNamespace + versionExtDir + "/functions"        + versionExtFile + ".h>"))
