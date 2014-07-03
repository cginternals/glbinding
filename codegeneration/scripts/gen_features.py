from binding import *
from classes.Feature import *


def genFeatures(features, outputdir, outputfile):

	# gen bitfields feature grouped
	for f in features:
		if f.api == "gl": # ToDo: probably seperate for all apis
			genFeature(f, outputdir, outputfile, False)
			if f.major > 3 or (f.major == 3 and f.minor >= 2):
				genFeature(f, outputdir, outputfile, True)


def genFeature(feature, outputdir, outputfile, core):

	of_all = outputfile.replace("?", "")

	version = ""
	if feature:
		version = str(feature.major) + str(feature.minor) + ("core" if core else "")

	t = template(of_all).replace("?", version)
	of = outputfile.replace("?", version)

	status(outputdir + of)

	with open(outputdir + of, 'w') as file:
		file.write(t.replace("?", version))
