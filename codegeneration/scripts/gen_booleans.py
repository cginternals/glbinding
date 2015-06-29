from binding import *
from classes.Enum import *


def booleanDefinition(enum):

    return "%s = %s" % (enumBID(enum), enum.value)


def booleanImportDefinition(api, enum):

    return "using %s::%s;" % (api, enumBID(enum))


def forwardBoolean(api, enum):

    return "static const %sboolean %s = %sboolean::%s;" % (api.upper(), enumBID(enum), api.upper(), enumBID(enum))


def genBooleans(api, enums, outputdir, outputfile, forward = False):

    of_all = outputfile.replace("?", "F")

    t = template(of_all).replace("%a", api).replace("%A", api.upper())
    of = outputfile.replace("?", "")
    od = outputdir.replace("?", "")

    status(od + of)
    
    tgrouped = groupEnumsByType(enums)
    
    pureBooleans = tgrouped[api.upper() + "boolean"]
    
    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:

        if forward:

            file.write(t % (("\n").join([ forwardBoolean(api, e) for e in pureBooleans ])))

        else:

            file.write(t % (
                (",\n" + tab).join([ booleanDefinition(e) for e in pureBooleans ]),
                ("\n") .join([ forwardBoolean(api, e) for e in pureBooleans ])))

def genFeatureBooleans(api, enums, feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")
    
    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version).replace("%a", api)
    of = outputfile.replace("?", "")
    od = outputdir.replace("?", version)

    status(od + of)

    tgrouped = groupEnumsByType(enums)
    pureBooleans = tgrouped[api.upper() + "boolean"]
    
    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:

        if not feature:

            file.write(t % (
                (",\n" + tab).join([ booleanDefinition(e) for e in pureBooleans ]),
                ("\n") .join([ forwardBoolean(api, e) for e in pureBooleans ])))

        else:

            file.write(t % (("\n").join([ booleanImportDefinition(api, e) for e in pureBooleans ])))

def genBooleansFeatureGrouped(api, enums, features, outputdir, outputfile):

    # gen functions feature grouped
    for f in features:
        if f.api == api: # ToDo: probably seperate for all apis
            genFeatureBooleans(api, enums, f, outputdir, outputfile)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFeatureBooleans(api, enums, f, outputdir, outputfile, True)
            genFeatureBooleans(api, enums, f, outputdir, outputfile, False, True)
