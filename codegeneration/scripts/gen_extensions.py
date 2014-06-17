from binding import *
from classes.Extension import *


def genExtensionHeader(extensions, outputdirectory, outputfile):
	with open(outputdirectory + outputfile, 'w') as file:
		file.write(template(outputfile) % (",\n" + tab).join(
			[ extensionBindingIdentifier(e) for e in extensions ]))
