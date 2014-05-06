import sys

class Type:
	def __init__(self, xml):
		self.value = "".join([t for t in xml.itertext() ])
		if "name" in xml.attrib:
			self.name = xml.attrib["name"]
		else:
			self.name = xml.find("name").text
		
	def __str__(self):
		return "%s: %s" % (self.name, self.value)
		
	#~ def __lt__(self, other):
		#~ return self.name < other.name
		
		
def parseTypes(xml):
	types = []
	
	for typeGroup in xml.iter("types"):
		for type in typeGroup.findall("type"):
			if "name" in type.attrib and type.attrib["name"] != "GLhandleARB":
				continue
			if "requires" in type.attrib and type.attrib["requires"] == "khrplatform":
				continue

			t = Type(type)
			
			if "struct _cl_" in t.name:
				continue
				
			types.append(t)

	return types
