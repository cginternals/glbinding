class Feature:
	def __init__(self, xml):
		self.name = xml.attrib["name"]
		
		self.prefix = self.name[:-4]
		self.major = self.name[-3:-2]
		self.minor = self.name[-1:]
		
		self.requirements = []
		for req in xml.findall("require"):
			for child in req:
				if child.tag in ("enum", "command"):
					self.requirements.append(child.attrib["name"])
					
		self.deprecates = []
		for rem in xml.findall("remove"):
			for child in rem:
				if child.tag in ("enum", "command"):
					self.deprecates.append(child.attrib["name"])
		
	def __str__(self):
		return "Feature(%s:%s.%s)" % (self.prefix, self.major, self.minor)
		
	def __lt__(self, other):
		return self.major<other.major or (self.major==other.major and self.minor<other.minor)
		
def parseFeatures(xml):
	features = []
	for feature in xml.iter("feature"):
		features.append(Feature(feature))
		
	return features