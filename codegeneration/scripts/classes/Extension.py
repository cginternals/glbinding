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

class Extension:
	def __init__(self, xml):
		self.name = xml.attrib["name"]
		self.incore = None
		
		self.requiredEnums = []
		self.requiredFunctions = []
		
		self.requirements = []
		for req in xml.findall("require"):
			for child in req:
				if child.tag in ("enum", "command"):
					self.requirements.append(child.attrib["name"])
					if child.tag == "enum":
						self.requiredEnums.append(child.attrib["name"])
					else:
						self.requiredFunctions.append(child.attrib["name"])
		
	def __str__(self):
		return "Extension(%s)" % (self.name)
		
	def __lt__(self, other):
		return self.name < other.name

	exceptions = [ ]
		
	def baseName(self):
		first = self.name[3]
		n = self.name[3:]
		
		if n in Extension.exceptions:
			return "_" + n
		
		if first.isalpha():
			return n
		else:
			return "_" + n
		
def findExtensionVersions(extensions, features):
	featureMap = dict()
	deprecatedMap = dict()

	for f in filter(lambda f: f.prefix=="GL_VERSION", features):
		for req in f.requirements:
			if not req in featureMap:
				featureMap[req] = set()
			featureMap[req].add(f)
		for dep in f.deprecates:
			if not dep in deprecatedMap:
				deprecatedMap[dep] = set()
			deprecatedMap[dep].add(f)

	for e in extensions:
		required = dict()
		deprecated = dict()
		for r in e.requirements:
			required[r] = featureMap.get(r, None)
			if required[r] == None and r.endswith("ARB"):
				required[r] = featureMap.get(r[:-3].rstrip("_"), None)
				
			if r in deprecatedMap:
				deprecated[r] = deprecatedMap[r]
			
		if len(required)>0 and not any(v is None for v in required.values()):
			s = set()
			for fs in required.values():
				for f in fs:
					s.add(f) 
			e.incore = max(s)
		
def parseFeatures(xml):
	features = []
	for feature in xml.iter("feature"):
		features.append(Feature(feature))
		
	return features
		
def parseExtensions(xml):
	features = parseFeatures(xml)
	extensions = []
	
	for extensionGroup in xml.iter("extensions"):
		for extension in xml.iter("extension"):
			extensions.append(Extension(extension))
			
	findExtensionVersions(extensions, features)
			
	return extensions
