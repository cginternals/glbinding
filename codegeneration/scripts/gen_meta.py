from binding import *
from classes.Extension import *


def metaExtensionToString(api, prefix, libraryNamespace, extension):

    return '{ %sextension::%s, "%s" }' % (prefix.upper(), extensionBID(extension), extension.name)


def metaStringToExtension(api, prefix, libraryNamespace, extension):

    return '{ "%s", %sextension::%s }' % (extension.name, prefix.upper(), extensionBID(extension))


def genMetaStringsByExtension(api, prefix, libraryNamespace, extensions, outputdir, outputfile):

    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", libraryNamespace).replace("%A", prefix.upper())

    with open(outputdir + outputfile, 'w') as file:
        file.write(t % (",\n" + tab).join(
            [ metaExtensionToString(api, prefix, libraryNamespace, e) for e in extensions ]))


def genMetaExtensionsByString(api, prefix, libraryNamespace, extensions, outputdir, outputfile):    

    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", libraryNamespace).replace("%A", prefix.upper())

    with open(outputdir + outputfile, 'w') as file:
        file.write(t % (",\n" + tab).join(
            [ metaStringToExtension(api, prefix, libraryNamespace, e) for e in extensions ]))


def metaEnumToString(enum, type):

    return ('{ ' + type + '::%s, "%s" }') % (enumBID(enum), enum.name)


def metaStringToEnum(enum, type):

    return ('{ "%s", ' + type + '::%s }') % (enum.name, enumBID(enum))

def metaStringToBitfieldGroupMap(api, prefix, libraryNamespace, group):
    return "extern const std::unordered_map<std::string, %s::%s> Meta_%sByString;" % (libraryNamespace, group.name, group.name)

def metaBitfieldGroupToStringMap(api, prefix, libraryNamespace, group):
    return "extern const std::unordered_map<%s::%s, std::string> Meta_StringsBy%s;" % (libraryNamespace, group.name, group.name)

def metaStringsByBitfieldGroup(group):
    return """const std::unordered_map<%s, std::string> Meta_StringsBy%s 
{
#ifdef STRINGS_BY_SYMBOLS
    %s
#endif
};
    """ % (group.name, group.name, ",\n\t".join([ metaEnumToString(e, group.name) for e in sorted(group.enums) ]))

def genMetaMaps(api, prefix, libraryNamespace, enums, outputdir, outputfile, bitfGroups):
    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", libraryNamespace).replace("%A", prefix.upper())
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(t % ("\n".join([ metaBitfieldGroupToStringMap(api, prefix, libraryNamespace, g) for g in bitfGroups ])))

def genMetaStringsByEnum(api, prefix, libraryNamespace, enums, outputdir, outputfile, type):
    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", libraryNamespace).replace("%A", prefix.upper())

    pureEnums = [ e for e in enums if e.type == type ]
    d = sorted([ es[0] for v, es in groupEnumsByValue(pureEnums).items() ])
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(t % ((",\n" + tab).join(
            [ metaEnumToString(e, type) for e in d ])))    

def genMetaStringsByBitfield(api, prefix, libraryNamespace, bitfGroups, outputdir, outputfile):
    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", libraryNamespace).replace("%A", prefix.upper())

    d = sorted([ metaStringsByBitfieldGroup(g) for g in bitfGroups ])
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(t % "\n".join(d))

def genMetaBitfieldByString(api, prefix, libraryNamespace, bitfGroups, outputdir, outputfile):
    
    status(outputdir + outputfile)

    map = [ (",\n"+tab).join([ '{ "%s", static_cast<%sbitfield>(%s::%s) }' % (e.name, prefix.upper(), g.name, e.name) 
        for e in sorted(g.enums) ]) for g in sorted(bitfGroups) ]

    t = template(outputfile).replace("%a", libraryNamespace).replace("%A", prefix.upper())

    with open(outputdir + outputfile, 'w') as file:
        file.write(t % ((",\n" + tab).join(map)))

def genMetaEnumsByString(api, prefix, libraryNamespace, enums, outputdir, outputfile, type):

    status(outputdir + outputfile)
    
    t = t = template(outputfile).replace("%a", libraryNamespace).replace("%A", prefix.upper())

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



def extensionVersionPair(api, prefix, libraryNamespace, extension):

    return "{ %sextension::%s, { %s, %s } }" % (
        prefix.upper(), extensionBID(extension), extension.incore.major, extension.incore.minor)


def genReqVersionsByExtension(api, prefix, libraryNamespace, extensions, outputdir, outputfile):

    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", libraryNamespace).replace("%A", prefix.upper())

    inCoreExts = [ e for e in extensions if e.incore ]
    sortedExts = sorted(inCoreExts, key = lambda e : e.incore)

    with open(outputdir + outputfile, 'w') as file:
        file.write(t % (",\n" + tab).join(
            [ extensionVersionPair(api, prefix, libraryNamespace, e) for e in sortedExts if e.incore ]))


def extensionRequiredFunctions(api, prefix, libraryNamespace, extension):

    return "{ %sextension::%s, { %s } }" % (prefix.upper(), extensionBID(extension), ", ".join(
        [ '"%s"' % f.name for f in extension.reqCommands ]))


def functionRequiredByExtensions(api, prefix, libraryNamespace, function, extensions):

    return '{ "%s", { %s } }' % (function.name, ", ".join(
        [ prefix.upper() + "extension::" + extensionBID(e) for e in extensions ]))


def genFunctionStringsByExtension(api, prefix, libraryNamespace, extensions, outputdir, outputfile):                

    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", libraryNamespace).replace("%A", prefix.upper())

    with open(outputdir + outputfile, 'w') as file:        
        file.write(t % ((",\n" + tab).join(
            [ extensionRequiredFunctions(api, prefix, libraryNamespace, e) for e in extensions if len(e.reqCommands) > 0 ])))


def genExtensionsByFunctionString(api, prefix, libraryNamespace, extensions, outputdir, outputfile):    

    status(outputdir + outputfile)
    
    t = template(outputfile).replace("%a", libraryNamespace).replace("%A", prefix.upper())

    extensionsByCommands = dict()
    for e in extensions:
        for c in e.reqCommands:
            if not c in extensionsByCommands:
                extensionsByCommands[c] = set()
            extensionsByCommands[c].add(e)

    with open(outputdir + outputfile, 'w') as file:        
        file.write(t % ((",\n" + tab).join(
            [ functionRequiredByExtensions(api, prefix, libraryNamespace, c, sorted(extensionsByCommands[c])) for c in sorted(extensionsByCommands.keys()) ])))
