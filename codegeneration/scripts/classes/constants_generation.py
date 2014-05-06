import xml.etree.ElementTree as ET
from Enum import *

from Type import *

pre = \
"""#include <GL/glew.h>
#include <unordered_map>

const std::unordered_multimap<GLuint64, const char*> GLconstants = {
"""
post = "};\n"

def generateConstants(inputfile):
	tree = ET.parse(inputfile)
	registry = tree.getroot()

	#~ enums = sorted(parseEnums(registry))
		
	#~ for enum in enums:
		#~ print(str(enum))
		
	types = parseTypes(registry)
		
	for type in types:
		print(str(type))

	#~ outputfile = "enums.h"

	#~ with open(outputfile, 'w') as file:
		#~ file.write(pre)
		#~ for enum in enums:
			#~ file.write("#ifdef %s\n" % enum.name)
			#~ file.write('\t{ %s, "%s" },\n' % (enum.name, enum.name))
			#~ file.write("#endif\n")
		#~ file.write(post)