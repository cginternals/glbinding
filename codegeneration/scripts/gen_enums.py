from binding import *
from classes.Enum import *
from classes.Feature import *


def enumDefinition(enum):
	if not enum.value.startswith("-"):
		t = enum.value
	else:
		t = "static_cast<unsigned int>(%s)" % enum.value
	return "%s = %s" % (enumBID(enum), t)

def enumImportDefinition(enum):
	return "static const GLenum %s = GLenum::%s;" % (enumBID(enum), enumBID(enum))


def genEnumsAll(enums, outputdir, outputfile):

	genFeatureEnums(enums, None, outputdir, outputfile, None)


def genEnumsFeatureGrouped(enums, features, outputdir, outputfile):

	# gen enums feature grouped
	for f in features:
		if f.api == "gl": # ToDo: probably seperate for all apis
			genFeatureEnums(enums, f, outputdir, outputfile, False)
			if f.major > 3 or (f.major == 3 and f.minor >= 2):
				genFeatureEnums(enums, f, outputdir, outputfile, True)


def genFeatureEnums(enums, feature, outputdir, outputfile, core):

	of_all = outputfile.replace("?", "F")

	version = ""
	if feature:
		version = str(feature.major) + str(feature.minor) + ("core" if core else "")

	t = template(of_all).replace("%f", version)
	of = outputfile.replace("?", version)

	status(outputdir + of)

	tgrouped = groupEnumsByType(enums)
	pureEnums = tgrouped["GLenum"]

	# the "original", non-featured enums are imported to the featured namespace
	importToNamespace = [ enumImportDefinition(e) for e in pureEnums if e.supported(feature, core)]

	with open(outputdir + of, 'w') as file:
		if not feature:

			definitions = [ enumDefinition(e) for e in pureEnums if e.supported(feature, core)]

			file.write(t % ((",\n" + tab).join(definitions), ("\n") .join(importToNamespace)))

		else:
			# the "original", non-featured enums are imported to the featured namespace
			file.write(t % (("\n") .join(importToNamespace)))
