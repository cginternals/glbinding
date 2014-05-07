import sys

class Enum:
	def __init__(self, xml):
		self.name = xml.attrib["name"]
		self.value = xml.attrib["value"]
		
	def __str__(self):
		return "Enum(%s, %s)" % (self.name, self.value)
		
	def __lt__(self, other):
		return self.name < other.name
		
	def baseName(self):
		first = self.name[3]
		n = self.name[3:]
		
		if n == "DOMAIN":
			return "_DOMAIN"
		if n == "MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB":
			return "_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB"
		
		if first.isalpha():
			return n
		else:
			return "_" + n
		
def parseEnums(xml):
	enums = set()
	
	for enumGroup in xml.iter("enums"):
		#~ if enumGroup.attrib.get("namespace", "") == "GL":
			for enum in enumGroup.findall("enum"):
				if "api" in enum.attrib and enum.attrib["api"] != "gl":
					continue
				enums.add(Enum(enum))

	return enums
