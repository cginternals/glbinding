from binding import *
from classes.Extension import *


def metaGetStringByBitfieldGroup(group):

    return "static const std::string & getString(gl::%s glbitfield);" % group.name


def genMeta_h(bitfGroups, outputdir, outputfile):

    status(outputdir + outputfile)

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % ("\n" + tab).join([ metaGetStringByBitfieldGroup(g) for g in bitfGroups ]))    


def metaStringsByBitfieldGroupExtern(group):

    return "extern const std::unordered_map<gl::%s, std::string> Meta_StringsBy%s;" % (group.name, group.name)


def genMetaMaps(bitfGroups, outputdir, outputfile):

    status(outputdir + outputfile)
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % "\n".join([ metaStringsByBitfieldGroupExtern(g) for g in bitfGroups ]))


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


def genMetaReqVersionsByExtension(extensions, outputdir, outputfile):

    status(outputdir + outputfile)

    inCoreExts = [ e for e in extensions if e.incore ]
    sortedExts = sorted(inCoreExts, key = lambda e : e.incore)

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % (",\n" + tab).join(
            [ extensionVersionPair(e) for e in sortedExts if e.incore ]))


# STRINGS BY BITFIELDS

def metaStringsByBitfieldGroup(group):

    # this creates the meta map as well as the overloaded getString function

    return """const std::unordered_map<%s, std::string> Meta_StringsBy%s =
{
    %s
};
    """ % (group.name, group.name, ",\n\t".join([ metaEnumToString(e, group.name) for e in sorted(group.enums) ]))


def genMetaStringsByBitfield(bitfGroups, outputdir, outputfile):
    status(outputdir + outputfile)

    d = sorted([ metaStringsByBitfieldGroup(g) for g in bitfGroups ])
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % "\n".join(d))


def metaGetStringsByBitfield(group):

    return """#ifdef EXTENSIVE_META

const std::string & Meta::getString(const %s glbitfield)
{
    const auto i = Meta_StringsBy%s.find(glbitfield);
    if (i != Meta_StringsBy%s.end())
    {
        return i->second;
    }
    return none;
}

#else 

const std::string & Meta::getString(const %s)
{
    return none;
}

#endif // EXTENSIVE_META
""" % (group.name, group.name, group.name, group.name)


def genMetaGetStringByBitfield(bitfGroups, outputdir, outputfile):
    status(outputdir + outputfile)

    d = sorted([ metaGetStringsByBitfield(g) for g in bitfGroups ])

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % "\n".join(d))


# BITFIELDS BY STRING

def metaBitfieldsByStringGroup(tuples, key):

    postfix = '_' + key

    return """const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString%s =
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
            lists[alphabeticalGroupKey(e.name, 'GL_')].append((e.name, g.name)) # append tupel as required for metaBitfieldsByStringGroup

    for key in lists.keys():
        lists[key].sort()

    lines = [ metaBitfieldsByStringGroup(lists[key], key) for key in sorted(lists.keys()) ]

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % "\n".join(lines))


# STRINGS BY ENUM

def metaEnumToString(enum, type):

    # t = (enum.groupString if type == "GLbitfield" else type)
    return ('{ ' + type + '::%s, "%s" }') % (enumBID(enum), enum.name)


def genMetaStringsByEnum(enums, outputdir, outputfile, type):

    status(outputdir + outputfile)

    pureEnums = [ e for e in enums if e.type == type ]
    d = sorted([ es[0] for v, es in groupEnumsByValue(pureEnums).items() ])
    
    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % ((",\n" + tab).join(
            [ metaEnumToString(e, type) for e in d ])))    


# ENUMS BY STRING


def metaEnumsByStringGroup(type, identifier, enums, key):

    postfix = ''

    if key:
        postfix = '_' + key

    return """const std::unordered_map<std::string, %s> Meta_%ssByString%s =
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

        lines = [ metaEnumsByStringGroup(type, identifier, [e.name for e in sorted(typeFilteredEnums)], '') ]

    else:

        lists = alphabeticallyGroupedLists()
        for e in typeFilteredEnums:
            lists[alphabeticalGroupKey(e.name, 'GL_')].append(e.name) # append enum as required for metaEnumsByStringGroup

        for key in lists.keys():
            lists[key].sort()

        lines = [ metaEnumsByStringGroup(type, identifier, lists[key], key) for key in sorted(lists.keys()) ]

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % "\n".join(lines))


# EXTENSIONS BY FUNCTION STRING


def metaExtensionsByFunctionStringGroup(tuples, key):

    postfix = '_' + key

    return """const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString%s =
{
%s%s
};
    """ % (postfix, tab, (",\n" + tab).join([ '{ "%s", { %s } }' % (t[0],
        ", ".join([ "GLextension::" + e for e in t[1] ])) for t in tuples ]))



def genMetaExtensionsByFunctionString(extensions, outputdir, outputfile):    

    status(outputdir + outputfile)

    extensionsByCommands = dict()
    for e in extensions: # basically, the reqCommands association is inverted
        for c in e.reqCommands:
            command = c.name
            if not command in extensionsByCommands:
                extensionsByCommands[command] = set()
            extensionsByCommands[command].add(e.name)

    # now create alphabetically grouped lists, each containing commands starting 
    # with their groups letter and having a set of extensions associated ...

    lists = alphabeticallyGroupedLists()
    for c in sorted(extensionsByCommands.keys()):
        lists[alphabeticalGroupKey(c, 'gl')].append((c, extensionsByCommands[c])) # append tuple of command and set of extensions as required for metaExtensionsByFunctionStringGroup

    lines = [ metaExtensionsByFunctionStringGroup(lists[key], key) for key in sorted(lists.keys()) ]

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % "\n".join(lines))


# EXTENSIONS BY STRING

def metaExtensionsByStringGroup(extensions, key):

    postfix = '_' + key

    return """const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString%s =
{
%s%s
};
    """ % (postfix, tab, (",\n" + tab).join([ '{ "%s", GLextension::%s }' % (e, e) for e in extensions ]))  


def genMetaExtensionsByString(extensions, outputdir, outputfile):    

    status(outputdir + outputfile)

    lists = alphabeticallyGroupedLists()
    for e in extensions:
        lists[alphabeticalGroupKey(e.name, 'GL_')].append(e.name) # append extension as required for metaExtensionsByStringGroup

    for key in lists.keys():
        lists[key].sort()

    lines = [ metaExtensionsByStringGroup(lists[key], key) for key in sorted(lists.keys()) ]

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % "\n".join(lines))


# STRINGS BY EXTENSION

def metaStringByExtension(extension):

    return '{ GLextension::%s, "%s" }' % (extension, extension)


def genMetaStringsByExtension(extensions, outputdir, outputfile):

    status(outputdir + outputfile)

    with open(outputdir + outputfile, 'w') as file:
        file.write(template(outputfile) % (",\n" + tab).join(
            [ metaStringByExtension(e.name) for e in sorted(extensions) ]))


# FUNCTION STRINGS BY EXTENSION

def metaExtensionRequiredFunctions(extension):

    return "{ GLextension::%s, { %s } }" % (extensionBID(extension), ", ".join(
        [ '"%s"' % f.name for f in extension.reqCommands ]))


def genMetaFunctionStringsByExtension(extensions, outputdir, outputfile):                

    status(outputdir + outputfile)

    lines = [ metaExtensionRequiredFunctions(e) for e in extensions if len(e.reqCommands) > 0 ]

    with open(outputdir + outputfile, 'w') as file:        
        file.write(template(outputfile) % (",\n" + tab).join(lines))


