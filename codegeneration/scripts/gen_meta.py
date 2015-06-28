from binding import *
from classes.Extension import *


def metaExtensionToString(api, extension):

    return '{ %sextension::%s, "%s" }' % (api.upper(), extensionBID(extension), extension.name)


def metaStringToExtension(api, extension):

    return '{ "%s", %sextension::%s }' % (extension.name, api.upper(), extensionBID(extension))


def genMetaStringsByExtension(api, extensions, outputdir, outputfile):

    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    with open(outputdir + outputfile, 'w') as file:
        file.write(t % (",\n" + tab).join(
            [ metaExtensionToString(api, e) for e in extensions ]))


def genMetaExtensionsByString(api, extensions, outputdir, outputfile):    

    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    with open(outputdir + outputfile, 'w') as file:
        file.write(t % (",\n" + tab).join(
            [ metaStringToExtension(api, e) for e in extensions ]))


def metaEnumToString(enum, type):

    return ('{ ' + type + '::%s, "%s" }') % (enumBID(enum), enum.name)


def metaStringToEnum(enum, type):

    return ('{ "%s", ' + type + '::%s }') % (enum.name, enumBID(enum))

def metaStringToBitfieldGroupMap(api, group):
    return "extern const std::unordered_map<std::string, %s::%s> Meta_%sByString;" % (api, group.name, group.name)

def metaBitfieldGroupToStringMap(api, group):
    return "extern const std::unordered_map<%s::%s, std::string> Meta_StringsBy%s;" % (api, group.name, group.name)

def metaStringsByBitfieldGroup(group):
    return """const std::unordered_map<%s, std::string> Meta_StringsBy%s 
{
#ifdef STRINGS_BY_SYMBOLS
    %s
#endif
};
    """ % (group.name, group.name, ",\n\t".join([ metaEnumToString(e, group.name) for e in sorted(group.enums) ]))

def genMetaMaps(api, enums, outputdir, outputfile, bitfGroups):
    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", api).replace("%A", api.upper())
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(t % ("\n".join([ metaBitfieldGroupToStringMap(api, g) for g in bitfGroups ])))

def genMetaStringsByEnum(api, enums, outputdir, outputfile, type):
    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    pureEnums = [ e for e in enums if e.type == type ]
    d = sorted([ es[0] for v, es in groupEnumsByValue(pureEnums).items() ])
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(t % ((",\n" + tab).join(
            [ metaEnumToString(e, type) for e in d ])))    

def genMetaStringsByBitfield(api, bitfGroups, outputdir, outputfile):
    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    d = sorted([ metaStringsByBitfieldGroup(g) for g in bitfGroups ])
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(t % "\n".join(d))

def genMetaBitfieldByString(api, bitfGroups, outputdir, outputfile):
    
    status(outputdir + outputfile)

    map = [ (",\n"+tab).join([ '{ "%s", static_cast<%sbitfield>(%s::%s) }' % (e.name, api.upper(), g.name, e.name) 
        for e in sorted(g.enums) ]) for g in sorted(bitfGroups) ]

    t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    with open(outputdir + outputfile, 'w') as file:
        file.write(t % ((",\n" + tab).join(map)))

def genMetaEnumsByString(api, enums, outputdir, outputfile, type):

    status(outputdir + outputfile)
    
    t = t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    pureEnums = [ e for e in enums if e.type == type ]

    with open(outputdir + outputfile, 'w') as file:
        file.write(t % ((",\n" + tab).join(
            [ metaStringToEnum(e, type) for e in pureEnums ])))


def groupEnumsByValue(enums):

    d = dict()

    for e in enums:
        v = e.value
        if not v in d:
            d[v] = []
        d[v].append(e)
    
    for key in d.keys():
        d[key] = sortEnumsBySuffix(d[key])
        
    return d


def sortEnumsBySuffix(enums):

    return sorted(enums, key = lambda e : enumSuffixPriority(e.name))


def enumSuffixPriority(name):

    index = name.rfind("_")
    if index < 0:
        return -1

    ext = name[index + 1:]

    if ext not in Extension.suffixes:
        return -1
    
    return Extension.suffixes.index(ext)



def extensionVersionPair(api, extension):

    return "{ %sextension::%s, { %s, %s } }" % (
        api.upper(), extensionBID(extension), extension.incore.major, extension.incore.minor)


def genReqVersionsByExtension(api, extensions, outputdir, outputfile):

    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    inCoreExts = [ e for e in extensions if e.incore ]
    sortedExts = sorted(inCoreExts, key = lambda e : e.incore)

    with open(outputdir + outputfile, 'w') as file:
        file.write(t % (",\n" + tab).join(
            [ extensionVersionPair(api, e) for e in sortedExts if e.incore ]))


def extensionRequiredFunctions(api, extension):

    return "{ %sextension::%s, { %s } }" % (api.upper(), extensionBID(extension), ", ".join(
        [ '"%s"' % f.name for f in extension.reqCommands ]))


def functionRequiredByExtensions(api, function, extensions):

    return '{ "%s", { %s } }' % (function.name, ", ".join(
        [ api.upper() + "extension::" + extensionBID(e) for e in extensions ]))


def genFunctionStringsByExtension(api, extensions, outputdir, outputfile):                

    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    with open(outputdir + outputfile, 'w') as file:        
        file.write(t % ((",\n" + tab).join(
            [ extensionRequiredFunctions(api, e) for e in extensions if len(e.reqCommands) > 0 ])))


def genExtensionsByFunctionString(api, extensions, outputdir, outputfile):    

    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    extensionsByCommands = dict()
    for e in extensions:
        for c in e.reqCommands:
            if not c in extensionsByCommands:
                extensionsByCommands[c] = set()
            extensionsByCommands[c].add(e)

    with open(outputdir + outputfile, 'w') as file:        
        file.write(t % ((",\n" + tab).join(
            [ functionRequiredByExtensions(api, c, sorted(extensionsByCommands[c])) for c in sorted(extensionsByCommands.keys()) ])))
