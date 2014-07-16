from binding import *
from classes.Feature import *


def genTest(api, features, outputdir, outputfile):

    of = outputfile
    t = template(of).replace("%a", api)

    status(outputdir + of)

    featured_include = "#include <glbinding/" + api +"/" + api + "?.h>"
    featured_includes = list()

    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            featured_includes.append(featured_include.replace("?", versionBID(f)))
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                featured_includes.append(featured_include.replace("?", versionBID(f, True)))
            featured_includes.append(featured_include.replace("?", versionBID(f, False, True)))

    with open(outputdir + of, 'w') as file:
        file.write(t % ("\n").join(featured_includes))
