
import os, sys
import pystache

from classes.Extension import Extension

execDir     = os.path.dirname(os.path.abspath(sys.argv[0])) + "/"
templateDir = "templates/"
templateExtension = "tpl"
tab         = "    "
tab2        = tab + tab


def versionBID(feature, core = False, ext = False):

    if feature is None:
        return ""

    version = str(feature.major) + str(feature.minor)

    if core:
        return version + "core"
    elif ext:
        return version + "ext"

    return version


def template(outputfile):

    with open (execDir + templateDir + outputfile + ".in", "rU") as file:
        return file.read()

def supportedLambda(obj):
    return lambda feature, core, ext: ( not ext and obj.supported(feature, core)
                                         or ext and not obj.supported(feature, False) )

def enumSuffixPriority(name):

    index = name.rfind("_")
    if index < 0:
        return -1

    ext = name[index + 1:]

    if ext not in Extension.suffixes:
        return -1

    return Extension.suffixes.index(ext)

class Generator:

    renderer = None

    @classmethod
    def generate(_class, context, outputPath, templateName=None):
        if _class.renderer is None:
            _class.renderer = pystache.Renderer(search_dirs=os.path.join(execDir, templateDir),
                                                file_extension=templateExtension,
                                                escape=lambda u: u)

        outputDir = os.path.dirname(outputPath).format(**context)
        if not os.path.exists(outputDir):
            os.makedirs(outputDir)

        outputFile = os.path.basename(outputPath)
        if templateName is None:
            templateName = outputFile
        outputFile = outputFile.format(**context)

        print("generating {} in {}".format(outputFile, outputDir)) #TODO-LW move logging to appropriate place

        with open(os.path.join(outputDir, outputFile), 'w') as file:
            file.write(_class.renderer.render_name(templateName, context))

class Status:

    targetdir = ""


def status(file):

    print("generating " + file.replace(Status.targetdir, ""))


# enum_binding_name_exceptions = [ "DOMAIN", "MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB", "FALSE", "TRUE", "NO_ERROR", "WAIT_FAILED" ]

def enumBID(enum):

    return enum.name

# extension_binding_name_exceptions = [ ]

# ToDo: discuss - just use name for glbinding?
def extensionBID(extension):

    return extension.name


def functionBID(function):

    return function.name




def alphabeticallyGroupedLists():

    # create a dictionary of lists by upper case letters
    # and a single "everythingelse" list

    keys = '0ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    lists = dict()
    for key in keys:
        lists[key] = list()

    return lists

def alphabeticalGroupKeys():
    return [str(c) for c in "0ABCDEFGHIJKLMNOPQRSTUVWXYZ"]

def alphabeticalGroupKey(identifier, prefix):

    # derives an key from an identifier with "GL_" prefix

    index = identifier.find(prefix)
    if index < 0:
        return -1

    index += len(prefix)

    key = ((identifier[index:])[:1]).upper()
    if ord(key) not in range(65, 91):
        key = '0'

    return key
