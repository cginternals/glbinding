from binding import *
from classes.Enum import *
from classes.Feature import *

enumGroupTemplate = """    // %s

%s
"""


def castEnumValue(value):

    if not value.startswith("-"):
        return value
    else:
        return "static_cast<unsigned int>(%s)" % value    


def enumDefinition(group, enum, maxlen, usedEnumsByName):

    spaces = " " * (maxlen - len(enumBID(enum)))
    if enum.name not in usedEnumsByName:
        usedEnumsByName[enum.name] = group
        return "    %s %s= %s," % (enumBID(enum), spaces, castEnumValue(enum.value))
    else:
        reuse = usedEnumsByName[enum.name]
        return "//  %s %s= %s, // reuse %s" % (enumBID(enum), spaces, castEnumValue(enum.value), reuse)


def enumImportDefinition(enum, group, usedEnumsByName, feature):

    qualifier = "GLenum" if feature is None else "gl::GLenum"

    if enum.name not in usedEnumsByName:
        usedEnumsByName[enum.name] = group
        return "static const %s %s = %s::%s;" % (
            qualifier, enumBID(enum), qualifier, enumBID(enum))
    else:
        reuse = usedEnumsByName[enum.name]
        return "// static const %s %s = %s::%s; // reuse %s" % (
            qualifier, enumBID(enum), qualifier, enumBID(enum), reuse)


def enumGroup(group, enums, usedEnumsByName, feature, core):

    featureEnums = [ e for e in enums if e.supported(feature, core) ]

    maxlen = max([len(enum.name) for enum in enums]) if len(enums) > 0 else 0

    if len(featureEnums) == 0:
        return ""

    return enumGroupTemplate % (group, "\n".join([ enumDefinition(group, e, maxlen, usedEnumsByName) for e in sorted(featureEnums, key=lambda e: e.value) ]))


def genEnumsAll(enums, outputdir, outputfile):

    genFeatureEnums(enums, None, outputdir, outputfile, None)


def genEnumsFeatureGrouped(enums, features, outputdir, outputfile):

    # gen enums feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genFeatureEnums(enums, f, outputdir, outputfile, False)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFeatureEnums(enums, f, outputdir, outputfile, True)


def genFeatureEnums(enums, feature, outputdir, outputfile, core):

    of_all = outputfile.replace("?", "F")

    version = ""
    if feature:
        version = str(feature.major) + str(feature.minor) + ("core" if core else "")

    t = template(of_all).replace("%f", version)
    of = outputfile.replace("?", version)

    status(outputdir + of)

    tgrouped = groupEnumsByType(enums)
    pureEnums = tgrouped["GLenum"]
    
    groupedEnums = groupEnumsByGroup(pureEnums)
    usedEnumsByName = dict()
    
    importToNamespace = [ ("\n// %s\n\n" + "%s") % (group, "\n".join(
      [ enumImportDefinition(e, group, usedEnumsByName, feature) 
        for e in enums if e.supported(feature, core) ]))  
      for group, enums in sorted(groupedEnums.items()) ]

    usedEnumsByName.clear()

    with open(outputdir + of, 'w') as file:
        if not feature:

            definitions = [ enumGroup(group, enums, usedEnumsByName, feature, core) for group, enums in sorted(groupedEnums.items(), key=lambda x: x[0]) ]

            file.write(t % ("\n".join(definitions), ("\n") .join(importToNamespace)))

        else:
            # the "original", non-featured enums are imported to the featured namespace
            file.write(t % (("\n") .join(importToNamespace)))
