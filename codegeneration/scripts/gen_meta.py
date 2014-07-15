from binding import *
from classes.Extension import *


def metaExtensionToString(extension):

    return '{ GLextension::%s, "%s" }' % (extensionBID(extension), extension.name)


def metaStringToExtension(extension):

    return '{ "%s", GLextension::%s }' % (extension.name, extensionBID(extension))


def genMetaStringsByExtension(extensions, outputdir, outputfile):

    status(outputdir + outputfile)

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % (",\n" + tab).join(
            [ metaExtensionToString(e) for e in extensions ]))


def genMetaExtensionsByString(extensions, outputdir, outputfile):    

    status(outputdir + outputfile)

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % (",\n" + tab).join(
            [ metaStringToExtension(e) for e in extensions ]))


def metaEnumToString(enum, type):

    # t = (enum.groupString if type == "GLbitfield" else type)
    return ('{ ' + type + '::%s, "%s" }') % (enumBID(enum), enum.name)


def metaStringToEnum(enum, type):

    # t = (enum.groupString if type == "GLbitfield" else type)
    return ('{ "%s", ' + type + '::%s }') % (enum.name, enumBID(enum))


def genMetaStringsByEnum(enums, outputdir, outputfile, type):

    status(outputdir + outputfile)

    pureEnums = [ e for e in enums if e.type == type ]
    d = sorted([ es[0] for v, es in groupEnumsByValue(pureEnums).items() ])
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % ((",\n" + tab).join(
            [ metaEnumToString(e, type) for e in d ])))    


def genMetaEnumsByString(enums, outputdir, outputfile, type):

    status(outputdir + outputfile)

    pureEnums = [ e for e in enums if e.type == type ]

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % ((",\n" + tab).join(
            [ metaStringToEnum(e, type) for e in pureEnums ])))


def groupEnumsByValue(enums):

    d = dict()

    for e in enums:
        v = int(e.value, 0)
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



def extensionVersionPair(extension):

    return "{ GLextension::%s, { %s, %s } }" % (
        extensionBID(extension), extension.incore.major, extension.incore.minor)


def genReqVersionsByExtension(extensions, outputdir, outputfile):

    status(outputdir + outputfile)

    sortedExts = sorted(extensions, key = lambda e: e.incore)

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % (",\n" + tab).join(
            [ extensionVersionPair(e) for e in sortedExts if e.incore ]))


def extensionRequiredFunctions(extension):

    return "{ GLextension::%s, { %s } }" % (extensionBID(extension), ", ".join(
        [ '"%s"' % f.name for f in extension.reqCommands ]))


def functionRequiredByExtensions(function, extensions):

    return '{ "%s", { %s } }' % (function.name, ", ".join(
        [ "GLextension::" + extensionBID(e) for e in extensions ]))


def genFunctionStringsByExtension(extensions, outputdir, outputfile):                

    status(outputdir + outputfile)

    with open(outputdir + outputfile, 'w') as file:        
        file.write(template(outputfile) % ((",\n" + tab).join(
            [ extensionRequiredFunctions(e) for e in extensions if len(e.reqCommands) > 0 ])))


def genExtensionsByFunctionString(extensions, outputdir, outputfile):    

    status(outputdir + outputfile)

    extensionsByCommands = dict()
    for e in extensions:
        for c in e.reqCommands:
            if not c in extensionsByCommands:
                extensionsByCommands[c] = set()
            extensionsByCommands[c].add(e)

    with open(outputdir + outputfile, 'w') as file:        
        file.write(template(outputfile) % ((",\n" + tab).join(
            [ functionRequiredByExtensions(c, sorted(extensionsByCommands[c])) for c in sorted(extensionsByCommands.keys()) ])))
