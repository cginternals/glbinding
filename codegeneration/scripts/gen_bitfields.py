from binding import *
from classes.Enum import *
from classes.Feature import *

bitfieldGroupTemplate = """enum class %s : unsigned int
{
	%s
};
"""


def bitfieldDefinition(enum, maxlen):

	spaces = " " * (maxlen - len(enumBID(enum)))
	return "%s %s= %s," % (enumBID(enum), spaces, enum.value)


def bitfieldImportDefinition(enum):

	return "static const %s %s = %s::%s;" % (enum.groupString, enumBID(enum), enum.groupString, enumBID(enum))


def bitfieldGroup(group, enums, maxlen):

	return bitfieldGroupTemplate % (group, "\n\t".join([ bitfieldDefinition(e, maxlen) for e in enums ]))


def genBitfieldsAll(enums, outputdir, outputfile):

	genFeatureBitfields(enums, None, outputdir, outputfile, None)


def genBitfieldsFeatureGrouped(enums, features, outputdir, outputfile):

	# gen bitfields feature grouped
	for f in features:
		if f.api == "gl": # ToDo: probably seperate for all apis
			genFeatureBitfields(enums, f, outputdir, outputfile, False)
			if f.major > 3 or (f.major == 3 and f.minor >= 2):
				genFeatureBitfields(enums, f, outputdir, outputfile, True)


def genFeatureBitfields(enums, feature, outputdir, outputfile, core):

	of_all = outputfile.replace("?", "F")

	version = ""
	if feature:
		version = str(feature.major) + str(feature.minor) + ("core" if core else "")

	t = template(of_all).replace("%f", version)
	of = outputfile.replace("?", version)

	status(outputdir + of)

	tgrouped = groupEnumsByType(enums)

	pureBitfields    = [ b for b in tgrouped["GLbitfield"] if b.supported(feature, core) ]
	groupedBitfields = groupEnumsByGroup(pureBitfields)

	importToNamespace = sorted([ ("\n// %s\n\n" + "%s") % (group, "\n".join(
		[ bitfieldImportDefinition(e) for e in values ])) 
			for group, values in groupedBitfields.items() ])

	with open(outputdir + of, 'w') as file:

		if not feature:

			maxlen = max([len(enum.name) for enum in pureBitfields]) if len(pureBitfields) > 0 else 0
			definitions = [ bitfieldGroup(group, enums, maxlen) for group, enums in groupedBitfields.items()  ]

			file.write(t % (("\n") .join(definitions), ("\n") .join(importToNamespace)))

		else:
			# the "original", non-featured bitfields are imported to the featured namespace
			file.write(t % (("\n") .join(importToNamespace)))
