import xml.etree.ElementTree as ET
from Enum import *

#==========================================
constantsHeaderTemplate = """#pragma once

#include <glbinding/types.h>

namespace gl {

%s

} // namespace gl
"""
#==========================================

def enumDefinition(enum):
	return "const %s %s = %s;" % (enum.type, enum.baseName(), enum.value)

def generateConstantsHeader(enums, outputfile):		
	with open(outputfile, 'w') as file:
		file.write(constantsHeaderTemplate % "\n".join([ enumDefinition(e) for e in enums ]))