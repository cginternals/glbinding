from binding import *
from classes.Feature import *


def genTest(features, outputdir, outputfile):
	status(outputdir + outputfile)

	featured_include = "#include <glbinding/featured/gl?.h>"
	featured_includes = list()

	for f in features:
		if f.api == "gl": # ToDo: probably seperate for all apis
			featured_includes.append(featured_include.replace("?", versionBID(f)))
			if f.major > 3 or (f.major == 3 and f.minor >= 2):
				featured_includes.append(featured_include.replace("?", versionBID(f, True)))
			featured_includes.append(featured_include.replace("?", versionBID(f, False, True)))

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % 
			("\n").join(featured_includes))
