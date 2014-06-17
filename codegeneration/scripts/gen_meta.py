from binding import *
from classes.Extension import *


def metaExtensionToString(extension):
	return '{ GLextension::%s, "%s" }' % (extensionBID(extension), extension.name)
def metaStringToExtension(extension):
	return '{ "%s", GLextension::%s }' % (extension.name, extensionBID(extension))


def genMetaStringsByExtension(extensions, outputdir, outputfile):
	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % (",\n" + tab).join(
			[ metaExtensionToString(e) for e in extensions ]))

def genMetaExtensionsByString(extensions, outputdir, outputfile):	
	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % (",\n" + tab).join(
			[ metaStringToExtension(e) for e in extensions ]))


def metaEnumToString(enum):
	return '{ GLenum::%s, "%s" }' % (enumBID(enum), enum.name)
def metaStringToEnum(enum):
	return '{ "%s", GLenum::%s }' % (enum.name, enumBID(enum))


def genMetaStringsByEnum(enums, outputdir, outputfile):
	pureEnums = [ e for e in enums if e.type == "GLenum" ]
	d = sorted([ es[0] for v, es in groupEnumsByValue(pureEnums).items() ])
	
	with open(outputfile, 'w') as file:
		file.write(template(outputfile) % (",\n    ".join(
			[ metaEnumToString(e) for e in d ])))	

def genMetaEnumsByString(enums, outputdir, outputfile):
	pureEnums = [ e for e in enums if e.type == "GLenum" ]

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % (",\n    ".join(
			[ metaStringToEnum(e) for e in pureEnums ])))


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







def extensionToRequiringVersion(extension):
	return "{ GLextension::%s, ucharpair(%s, %s) }" % (extensionBindingName(extension), extension.incore.major, extension.incore.minor)

def extensionRequiredFunctions(extension):
	return "{ GLextension::%s, { %s } }" % (extensionBindingName(extension), ", ".join([ '"%s"' % f for f in extension.commands ]))

def functionRequiredByExtensions(function, extensions):
	return '{ "%s", { %s } }' % (function, ", ".join([ "GLextension::"+extensionBindingName(e) for e in extensions ]))

	

			
def generateExtensionsToRequiringVersionSource(extensions, outputfile):
	with open(outputfile, 'w') as file:
		file.write(extensionsToRequiringVersionTemplate % ",\n    ".join([ extensionToRequiringVersion(e) for e in extensions if e.incore ]))

def generateExtensionToFunctionsSource(extensions, outputfile):				
	with open(outputfile, 'w') as file:		
		file.write(extensionToFunctionsTemplate % (
			",\n    ".join([ extensionRequiredFunctions(e) for e in extensions if len(e.commands) > 0 ])
			))

def generateFunctionsToExtensionSource(extensions, outputfile):	
	extensionsByCommands = dict()
	for e in extensions:
		for c in e.commands:
			if not c in extensionsByCommands:
				extensionsByCommands[c] = set()
			extensionsByCommands[c].add(e)

	with open(outputfile, 'w') as file:		
		file.write(functionToExtensionsTemplate % (
			",\n    ".join([functionRequiredByExtensions(c, sorted(extensionsByCommands[c])) for c in sorted(extensionsByCommands.keys()) ])
			))


