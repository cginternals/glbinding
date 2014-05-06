import sys

class Enum:
	def __init__(self, xml):
		self.name = xml.attrib["name"]
		
	def __str__(self):
		return "Enum(%s)" % self.name
		
	def __lt__(self, other):
		return self.name < other.name
		
		
def parseEnums(xml):
	enums = set()
	
	for enumGroup in xml.iter("enums"):
		if enumGroup.attrib.get("namespace", "") == "GL":
			for enum in enumGroup.findall("enum"):
				enums.add(Enum(enum))

	return enums
