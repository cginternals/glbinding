from binding import *
from classes.Extension import *


def genExtensions(extensions, outputdir, outputfile):
	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % (",\n" + tab).join(
			[ extensionBID(e) for e in extensions ]))
