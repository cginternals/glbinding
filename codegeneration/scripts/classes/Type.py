import sys

class Type:
	def __init__(self, xml):
		self.value = "".join([ t for t in xml.itertext() ])
		if "name" in xml.attrib:
			self.name = xml.attrib["name"]
		else:
			self.name = xml.find("name").text
		self.typevalue = "".join([ t for t in xml.itertext() if t != self.name ])

	def __str__(self):
		return "%s: %s" % (self.name, self.value)

	def __lt__(self, other):
		return self.name < other.name


def parseTypes(xml):
	types = []
	
	for typeGroup in xml.iter("types"):
		for t in typeGroup.findall("type"):
			if "name" in t.attrib and t.attrib["name"] != "GLhandleARB":
				continue
			if "requires" in t.attrib and t.attrib["requires"] == "khrplatform":
				continue
				
			types.append(Type(t))

	return types
