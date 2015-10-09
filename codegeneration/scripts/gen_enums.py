from binding import *
from classes.Enum import *
from classes.Feature import *

enumGroupTemplate = """    // %s

%s
"""


def castEnumValue(value):

    if value[0] != "-":
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

def enumImportDefinition(api, prefix, libraryNamespace, enum, group, usedEnumsByName):

    if enum.name not in usedEnumsByName:
        usedEnumsByName[enum.name] = group
        return "using %s::%s;" % (libraryNamespace, enumBID(enum))
    else:
        reuse = usedEnumsByName[enum.name]
        return "// using %s::%s; // reuse %s" % (libraryNamespace, enumBID(enum), reuse)


def forwardEnum(api, prefix, libraryNamespace, enum, group, usedEnumsByName):

    qualifier = prefix.upper() + "enum"

    if enum.name not in usedEnumsByName:
        usedEnumsByName[enum.name] = group
        return "static const %s %s = %s::%s;" % (
            qualifier, enumBID(enum), qualifier, enumBID(enum))
    else:
        reuse = usedEnumsByName[enum.name]
        return "// static const %s %s = %s::%s; // reuse %s" % (
            qualifier, enumBID(enum), qualifier, enumBID(enum), reuse)


def enumGroup(group, enums, usedEnumsByName):

    if len(enums) == 0:
        return

    maxlen = max([len(enum.name) for enum in enums]) if len(enums) > 0 else 0

    return enumGroupTemplate % (group, "\n".join(
        [ enumDefinition(group, e, maxlen, usedEnumsByName) for e in sorted(enums, key = lambda e: e.value) ]))


def genEnumsAll(api, prefix, libraryNamespace, enums, outputdir, outputfile):

    genFeatureEnums(api, prefix, libraryNamespace, enums, None, outputdir, outputfile, None)


def genEnumsFeatureGrouped(api, prefix, libraryNamespace, enums, features, outputdir, outputfile):

    # gen enums feature grouped
    for f in features:
        if f.api == api: # ToDo: probably seperate for all apis
            genFeatureEnums(api, prefix, libraryNamespace, enums, f, outputdir, outputfile)
            
            if api == "gl":
                if f.major > 3 or (f.major == 3 and f.minor >= 2):
                    genFeatureEnums(api, prefix, libraryNamespace, enums, f, outputdir, outputfile, True)
                genFeatureEnums(api, prefix, libraryNamespace, enums, f, outputdir, outputfile, False, True)


def genFeatureEnums(api, prefix, libraryNamespace, enums, feature, outputdir, outputfile, core = False, ext = False):

    of_all = outputfile.replace("?", "F")

    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version).replace("%a", libraryNamespace).replace("%A", prefix.upper())
    of = outputfile.replace("?", "")
    od = outputdir.replace("?", version)

    status(od + of)

    tgrouped     = groupEnumsByType(enums)

    pureEnums    = [ e for e in tgrouped[prefix.upper() + "enum"] if 
        (not ext and e.supported(feature, core)) or (ext and not e.supported(feature, False)) ]
    groupedEnums = groupEnumsByGroup(pureEnums)

    usedEnumsByName = dict()
    
    if feature:
        importToNamespace = [ ("\n// %s\n\n" + "%s") % (group, "\n".join(
        [ enumImportDefinition(api, prefix, libraryNamespace, e, group, usedEnumsByName) for e in enums ]))  
            for group, enums in sorted(groupedEnums.items()) ]
    else:        
        importToNamespace = [ ("\n// %s\n\n" + "%s") % (group, "\n".join(
        [ forwardEnum(api, prefix, libraryNamespace, e, group, usedEnumsByName) for e in enums ]))  
            for group, enums in sorted(groupedEnums.items()) ]

    usedEnumsByName.clear()
    
    if not os.path.exists(od):
        os.makedirs(od)

    with open(od + of, 'w') as file:
        if not feature:

            definitions = [ enumGroup(group, enums, usedEnumsByName) 
                for group, enums in sorted(groupedEnums.items(), key = lambda x: x[0]) ]

            file.write(t % ("\n".join(definitions), ("\n") .join(importToNamespace)))

        else:
            # the "original", non-featured enums are imported to the featured namespace
            file.write(t % (("\n") .join(importToNamespace)))
