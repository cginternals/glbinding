from binding import *
from classes.Enum import *


def valueDefinition(enum):
	return "static const %s %s = %s;" % (enum.type, enumBID(enum), enum.value)

def genValues(enums, outputdir, outputfile):
	status(outputdir + outputfile)

	tgrouped = groupEnumsByType(enums)
	del tgrouped["GLboolean"]
	del tgrouped["GLenum"]
	del tgrouped["GLbitfield"]

	groups = []	
	for t in sorted(tgrouped.keys()):
		groups.append("\n".join([ valueDefinition(c) for c in tgrouped[t] ]))

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % ("\n\n".join(groups)))
