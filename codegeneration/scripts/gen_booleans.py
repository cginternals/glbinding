from binding import *
from classes.Enum import *


def booleanDefinition(enum):
	return "%s = %s" % (enumBID(enum), enum.value)

def booleanImportDefinition(enum):
	return "static const GLboolean %s = GLboolean::%s;" % (enumBID(enum), enumBID(enum))


def genBooleans(enums, outputdir, outputfile):
	status(outputdir + outputfile)

	tgrouped = groupEnumsByType(enums)
	pureBooleans = tgrouped["GLboolean"]

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % (
			(",\n" + tab).join([ booleanDefinition(e) for e in pureBooleans ]),
			("\n") .join([ booleanImportDefinition(e) for e in pureBooleans ])))
