from binding import *
from classes.Enum import *

def enumDefinition(enum):
	if not enum.value.startswith("-"):
		t = enum.value
	else:
		t = "static_cast<unsigned int>(%s)" % enum.value
	return "%s = %s" % (enumBID(enum), t)

def enumImportDefinition(enum):
	return "static const GLenum %s = GLenum::%s;" % (enumBID(enum), enumBID(enum))

def groupEnumsByType(enums):
	d = dict()
	
	for e in enums:
		if not e.type in d:
			d[e.type] = []
		d[e.type].append(e)
		
	return d

def genEnums(enums, outputdir, outputfile):
	d = groupEnumsByType(enums)
	pureEnums = d["GLenum"]

	with open(outputdir + outputfile, 'w') as file:
		file.write(template(outputfile) % (
			(",\n" + tab).join([ enumDefinition(e) for e in pureEnums ]),
			("\n") .join([ enumImportDefinition(e) for e in pureEnums ])))
