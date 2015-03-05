from binding import *
from classes.Enum import *


def booleanDefinition(enum):

    return "%s = %s" % (enumBID(enum), enum.value)


def booleanImportDefinition(enum):

    return "static const gl::GLboolean %s = gl::GLboolean::%s;" % (enumBID(enum), enumBID(enum))


def forwardBoolean(enum):

    return "static const GLboolean %s = GLboolean::%s;" % (enumBID(enum), enumBID(enum))


def genBooleansForward(api, enums, outputdir, outputfile):

    genBooleans(api, enums, outputdir, outputfile, True)


def genBooleans(api, enums, outputdir, outputfile, forward = False):

    of_all = outputfile.replace("?", "F")

    t = template(of_all).replace("%a", api)
    of = outputfile.replace("?", "")

    status(outputdir + of)

    tgrouped = groupEnumsByType(enums)
    pureBooleans = tgrouped["GLboolean"]

    with open(outputdir + of, 'w') as file:

        if forward:

            file.write(t % (("\n").join([ forwardBoolean(e) for e in pureBooleans ])))

        else:

            file.write(t % (
                (",\n" + tab).join([ booleanDefinition(e) for e in pureBooleans ]),
                ("\n") .join([ booleanImportDefinition(e) for e in pureBooleans ])))

def genFeatureBooleans(api, enums, feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")
    
    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version).replace("%a", api)
    of = outputfile.replace("?", version)

    status(outputdir + of)

    tgrouped = groupEnumsByType(enums)
    pureBooleans = tgrouped["GLboolean"]

    with open(outputdir + of, 'w') as file:

        if not feature:

            file.write(t % (
                (",\n" + tab).join([ booleanDefinition(e) for e in pureBooleans ]),
                ("\n") .join([ forwardBoolean(e) for e in pureBooleans ])))

        else:

            file.write(t % (("\n").join([ booleanImportDefinition(e) for e in pureBooleans ])))

def genBooleansFeatureGrouped(api, enums, features, outputdir, outputfile):

    # gen functions feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genFeatureBooleans(api, enums, f, outputdir, outputfile)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFeatureBooleans(api, enums, f, outputdir, outputfile, True)
            genFeatureBooleans(api, enums, f, outputdir, outputfile, False, True)
