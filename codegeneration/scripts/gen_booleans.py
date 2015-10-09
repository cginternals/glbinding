from binding import *
from classes.Enum import *


def booleanDefinition(enum):

    return "%s = %s" % (enumBID(enum), enum.value)


def booleanImportDefinition(api, prefix, libraryNamespace, enum):

    return "using %s::%s;" % (libraryNamespace, enumBID(enum))


def forwardBoolean(api, prefix, libraryNamespace, enum):

    return "static const %sboolean %s = %sboolean::%s;" % (prefix.upper(), enumBID(enum), prefix.upper(), enumBID(enum))


def genBooleans(api, prefix, libraryNamespace, enums, outputdir, outputfile, forward = False):

    of_all = outputfile.replace("?", "F")

    t = template(of_all).replace("%a", libraryNamespace).replace("%A", prefix.upper())
    of = outputfile.replace("?", "")
    od = outputdir.replace("?", "")

    status(od + of)
    
    tgrouped = groupEnumsByType(enums)
    
    pureBooleans = tgrouped[prefix.upper() + "boolean"]
    
    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:

        if forward:

            file.write(t % (("\n").join([ forwardBoolean(api, prefix, libraryNamespace, e) for e in pureBooleans ])))

        else:

            file.write(t % (
                (",\n" + tab).join([ booleanDefinition(e) for e in pureBooleans ]),
                ("\n") .join([ forwardBoolean(api, prefix, libraryNamespace, e) for e in pureBooleans ])))

def genFeatureBooleans(api, prefix, libraryNamespace, enums, feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")
    
    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version).replace("%a", libraryNamespace)
    of = outputfile.replace("?", "")
    od = outputdir.replace("?", version)

    status(od + of)

    tgrouped = groupEnumsByType(enums)
    pureBooleans = tgrouped[prefix.upper() + "boolean"]
    
    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:

        if not feature:

            file.write(t % (
                (",\n" + tab).join([ booleanDefinition(e) for e in pureBooleans ]),
                ("\n") .join([ forwardBoolean(api, prefix, libraryNamespace, e) for e in pureBooleans ])))

        else:

            file.write(t % (("\n").join([ booleanImportDefinition(api, prefix, libraryNamespace, e) for e in pureBooleans ])))

def genBooleansFeatureGrouped(api, prefix, libraryNamespace, enums, features, outputdir, outputfile):

    # gen functions feature grouped
    for f in features:
        if f.api == api: # ToDo: probably seperate for all apis
            genFeatureBooleans(api, prefix, libraryNamespace, enums, f, outputdir, outputfile)
            
            if api == "gl":
                if f.major > 3 or (f.major == 3 and f.minor >= 2):
                    genFeatureBooleans(api, prefix, libraryNamespace, enums, f, outputdir, outputfile, True)
                genFeatureBooleans(api, prefix, libraryNamespace, enums, f, outputdir, outputfile, False, True)
