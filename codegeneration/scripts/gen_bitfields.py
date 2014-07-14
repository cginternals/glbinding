from binding import *
from classes.Enum import *
from classes.Feature import *

#bitfieldGroupTemplate = """enum class %s : unsigned int
bitfieldGroupTemplate = """    // %s

%s
"""


def bitfieldDefinition(enum, group, maxlen, usedBitfsByName):

    spaces = " " * (maxlen - len(enumBID(enum)))
    if enum.name not in usedBitfsByName:
        usedBitfsByName[enum.name] = group
        return "    %s %s= %s," % (enumBID(enum), spaces, enum.value)
    else:
        reuse = usedBitfsByName[enum.name]
        return "//  %s %s= %s, // reuse %s" % (enumBID(enum), spaces, enum.value, reuse)


def bitfieldImportDefinition(enum, group, usedBitfsByName, feature):

    qualifier = "GLbitfield" if feature is None else "gl::GLbitfield"

    if enum.name not in usedBitfsByName:
        usedBitfsByName[enum.name] = group
        return "static const %s %s = %s::%s;" % (
            qualifier, enumBID(enum), qualifier, enumBID(enum))
    else:
        reuse = usedBitfsByName[enum.name]
        return "// static const %s %s = %s::%s; // reuse %s" % (
            qualifier, enumBID(enum), qualifier, enumBID(enum), reuse)

    # return "static const %s %s = %s::%s;" % (enum.groupString, enumBID(enum), enum.groupString, enumBID(enum))


def bitfieldGroup(group, enums, usedBitfsByName):

    maxlen = max([len(enum.name) for enum in enums]) if len(enums) > 0 else 0

    return bitfieldGroupTemplate % (group, "\n".join([ bitfieldDefinition(e, group, maxlen, usedBitfsByName) for e in enums ]))


def genBitfieldsAll(enums, outputdir, outputfile):

    genFeatureBitfields(enums, None, outputdir, outputfile, None)


def genBitfieldsFeatureGrouped(enums, features, outputdir, outputfile):

    # gen bitfields feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genFeatureBitfields(enums, f, outputdir, outputfile, False)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFeatureBitfields(enums, f, outputdir, outputfile, True)


def genFeatureBitfields(enums, feature, outputdir, outputfile, core):

    of_all = outputfile.replace("?", "F")

    version = ""
    if feature:
        version = str(feature.major) + str(feature.minor) + ("core" if core else "")

    t = template(of_all).replace("%f", version)
    of = outputfile.replace("?", version)

    status(outputdir + of)

    tgrouped = groupEnumsByType(enums)

    pureBitfields    = [ b for b in tgrouped["GLbitfield"] if b.supported(feature, core) ]
    groupedBitfields = groupEnumsByGroup(pureBitfields)

    usedBitfsByName = dict()

    importToNamespace = [ ("\n// %s\n\n" + "%s") % (group, "\n".join(
        [ bitfieldImportDefinition(e, group, usedBitfsByName, feature) for e in values ])) 
            for group, values in sorted(groupedBitfields.items()) ]

    usedBitfsByName.clear()

    with open(outputdir + of, 'w') as file:

        if not feature:

            #definitions = [ bitfieldGroup(group, enums, maxlen) for group, enums in groupedBitfields.items() ]
            definitions = [ bitfieldGroup(group, enums, usedBitfsByName) 
                for group, enums in sorted(groupedBitfields.items()) ]

            file.write(t % (("\n") .join(definitions), ("\n") .join(importToNamespace)))

        else:
            # the "original", non-featured bitfields are imported to the featured namespace
            file.write(t % (("\n") .join(importToNamespace)))
