class Extension:
	def __init__(self, xml):
		self.name = xml.attrib["name"]
		self.incore = None
		
		self.requirements = []
		for req in xml.findall("require"):
			for child in req:
				if child.tag in ("enum", "command"):
					self.requirements.append(child.attrib["name"])
		
	def __str__(self):
		return "Extension(%s)" % (self.name)
		
	def enumName(self):
		return "GLOW_"+ self.name[3:]
		
def parseExtensions(xml):
	extensions = []
	
	for extensionGroup in xml.iter("extensions"):
		for extension in xml.iter("extension"):
			extensions.append(Extension(extension))
			
	return extensions