from binding import *
from classes.Extension import *


def getTemplate(outputfile):
	with open (template_dir + outputfile + ".in", "r") as f:
		return f.read()


def genExtensionHeader(extensions, outputdirectory, outputfile):
	with open(outputdirectory + outputfile, 'w') as file:
		file.write(getTemplate(outputfile) % ",\n" + tab + .join(
			[ extensionBindingIdentifier(e) for e in extensions ]))
