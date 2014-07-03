class Feature:

	def __init__(self, xml):

		self.api    = xml.attrib["api"]	   # e.g., gl, gles1, gles2
		self.name   = xml.attrib["name"]   # e.g., GL_VERSION_1_1
		self.number = xml.attrib["number"] # e.g., 1.1

		self.major  = int(self.number[-3:-2])
		self.minor  = int(self.number[-1:])

		self.requires = [] # enums and commands
		self.removes  = [] # enums and commands

		for r in xml.findall("require"):
			for child in r:
				if child.tag in ("enum", "command"):
					self.requires.append(child.attrib["name"])

		for r in xml.findall("remove"):
			for child in r:
				if child.tag in ("enum", "command"):
					self.removes.append(child.attrib["name"])

	def __str__(self):
		return "Feature(%s:%s.%s)" % (self.api, self.major, self.minor)

	def __lt__(self, other):
		if not other:
			return False
		else:
			return self.major < other.major or (self.major == other.major and self.minor < other.minor)

	def __ge__(self, other):
		if not other:
			return False
		else:
			return self.major > other.major or (self.major == other.major and self.minor >= other.minor)



def parseFeatures(xml):
	features = []
	for feature in xml.iter("feature"):
		features.append(Feature(feature))
		
	return features
