from binding import *
from classes.Enum import *


def bitfieldDefinition(enum):
	return "%s = %s;" % (enumBID(enum), enum.value)

def bitfieldImportDefinition(enum):
	return "static const GLbitfield %s = GLbitfield::%s;" % (enumBID(enum), enumBID(enum))


def genBitfields(enums, outputdir, outputfile):
	tgrouped = groupEnumsByType(enums)
	
	pureBitfields    = tgrouped["GLbitfield"]
	groupedBitfields = groupEnumsByGroup(pureBitfields)

	a = sorted([ ("\n" + tab + "// %s\n" + tab + "%s") % (group, ("\n" + tab).join(
		[ bitfieldDefinition(e) for e in values ])) for group, values in groupedBitfields.items() ])

	b = sorted([ ("\n// %s\n" + "%s") % (group, "\n".join(
		[ bitfieldImportDefinition(e) for e in values ])) for group, values in groupedBitfields.items() ])

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % (
			(",\n").join(a), ("\n") .join(b)))
