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


def metaStringToBitfieldGroupMap(group):
    return "extern const std::unordered_map<std::string, gl::%s> Meta_%sByString;" % (group.name, group.name)

def metaBitfieldGroupToStringMap(group):
    return "extern const std::unordered_map<gl::%s, std::string> Meta_StringsBy%s;" % (group.name, group.name)



def genMetaMaps(enums, outputdir, outputfile, bitfGroups):
    status(outputdir + outputfile)
    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % ("\n".join([ metaBitfieldGroupToStringMap(g) for g in bitfGroups ])))

def genMetaStringsByEnum(enums, outputdir, outputfile, type):
    status(outputdir + outputfile)

    pureEnums = [ e for e in enums if e.type == type ]
    d = sorted([ es[0] for v, es in groupEnumsByValue(pureEnums).items() ])
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % ((",\n" + tab).join(
            [ metaEnumToString(e, type) for e in d ])))    




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

    inCoreExts = [ e for e in extensions if e.incore ]
    sortedExts = sorted(inCoreExts, key = lambda e : e.incore)

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





def alphabeticallyGroupedLists():

    # create a dictionary of lists by upper case letters
    # and a single "everythingelse" list

    keys = '0ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    lists = dict()
    for key in keys:
        lists[key] = list()

    return lists


def alphabeticalGroupKey(identifier):

    # derives an key from an identifier with "GL_" prefix 

    index = identifier.find('_')
    if index < 0:
        return -1

    index += 1

    key = ((identifier[index:])[:1]).upper()
    if ord(key) not in range(65, 91):
        key = '0'

    return key


# STRINGS BY BITFIELDS

def metaStringsByBitfieldGroup(group):
    return """const std::unordered_map<%s, std::string> Meta_StringsBy%s 
{
    %s
};
    """ % (group.name, group.name, ",\n\t".join([ metaEnumToString(e, group.name) for e in sorted(group.enums) ]))


def genMetaStringsByBitfield(bitfGroups, outputdir, outputfile):
    status(outputdir + outputfile)

    d = sorted([ metaStringsByBitfieldGroup(g) for g in bitfGroups ])
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % "\n".join(d))


# BITFIELDS BY STRING

def metaBitfieldsByStringGroup(tuples, key):

    if not key:
        postfix = ''
    else:
        postfix = '_' + key

    return """const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString%s 
{
%s%s
};
    """ % (postfix, tab, (",\n" + tab).join([ '{ "%s", static_cast<GLbitfield>(%s::%s) }' % (t[0], t[1], t[0]) for t in tuples ]))


def genMetaBitfieldByString(bitfGroups, outputdir, outputfile):
    
    status(outputdir + outputfile)

    # enum groups are not required here, but alphabetical groups instead (reduce map complexity, decrease compile time)

    # create map of lists by character, 0 is for anything not A-Z

    lists = alphabeticallyGroupedLists()
    for g in bitfGroups:
        for e in g.enums:
            lists[alphabeticalGroupKey(e.name)].append((e.name, g.name)) # append tupel as required for metaBitfieldsByStringGroup

    lines = [ metaBitfieldsByStringGroup(lists[key], key) for key in sorted(lists.keys()) ]

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % "\n".join(lines))


# ENUMS BY STRING


def metaEnumsByStringGroup(type, identifier, enums, key):

    if not key:
        postfix = ''
    else:
        postfix = '_' + key

    return """const std::unordered_map<std::string, %s> Meta_%sByString%s 
{
%s%s
};
    """ % (type, identifier, postfix, tab, (",\n" + tab).join([ '{ "%s", %s::%s }' % (e, type, e) for e in enums ]))


def genMetaEnumsByString(enums, outputdir, outputfile, type, identifier):

    status(outputdir + outputfile)

    # enum groups are not required here, but alphabetical groups instead (reduce map complexity, decrease compile time)

    # create map of lists by character, 0 is for anything not A-Z

    typeFilteredEnums = [ e for e in enums if e.type == type ]

    lines = {}

    if type == "GLboolean":

        lines = [ metaEnumsByStringGroup(type, identifier, [e.name for e in typeFilteredEnums], '') ]

    else:

        lists = alphabeticallyGroupedLists()
        for e in typeFilteredEnums:
            lists[alphabeticalGroupKey(e.name)].append(e.name) # append enum as required for metaEnumsByStringGroup

        lines = [ metaEnumsByStringGroup(type, identifier, lists[key], key) for key in sorted(lists.keys()) ]

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % "\n".join(lines))

