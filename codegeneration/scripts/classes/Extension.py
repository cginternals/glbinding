from classes.Feature import *

class Extension:

	suffixes = ["ARB","EXT","NV","AMD","ATI","KHR","SGIS","SGIX","IBM","INGR","APPLE","PGI","QCOM","OES","INTEL","IMG","WEBGL"]

	def __init__(self, xml):

		self.name      = xml.attrib["name"] 	 # e.g., GL_ARB_compute_variable_group_size
		self.supported = xml.attrib["supported"] # e.g., gl, gles2, gl|glcore
		self.incore    = None	# the lates feature by which all requires are in core

		# required enums and commands (only identifier for now)
		self.enums     = []
		self.commands  = []

		self.requires  = [] # enums and commands

		for require in xml.findall("require"):
			for child in require:
				if child.tag in ("enum", "command"):
					self.requires.append(child.attrib["name"])
					if child.tag == "enum":
						self.enums.append(child.attrib["name"])
					else:
						self.commands.append(child.attrib["name"])

	def __str__(self):
		return "Extension(%s)" % (self.name)
		
	def __lt__(self, other):
		return self.name < other.name


def resolveInCore(extensions, features):
	# note: remove/outcore is not a thing to do here, since
	# after beeing added to gl/glcore the extension is no more

	glFeaturesByRequires = dict() # dict<(enum or command), feature>

	# initialize 
	for f in filter(lambda f: f.api == "gl", features):
		
		for r in f.requires:
			if not r in glFeaturesByRequires:
				glFeaturesByRequires[r] = set()
			glFeaturesByRequires[r].add(f)

	for e in extensions:

		requires = dict()

		# find for every extension matching features based on its 
		# required enums and commands

		for r in e.requires:
			requires[r] = glFeaturesByRequires.get(r, None)
			# if enum or command not found and ends with ARB, try without
			if requires[r] == None and r.endswith("ARB"):
				requires[r] = glFeaturesByRequires.get(r[:-3].rstrip("_"), None)
			
		# features were found and every extensions enum or command is a core
		# (inverted: no enum or core has yet no feature)
		if len(requires) > 0 and not any(v is None for v in requires.values()):
			s = set()
			# in the case were some requires are already featured earlier, 
			# take latest feature of all requiries
			for fs in requires.values():
				for f in fs:
					s.add(f)
			e.incore = max(s)


def parseExtensions(xml, features):
	extensions = []

	for extensionGroup in xml.iter("extensions"):
		for extension in xml.iter("extension"):
			extensions.append(Extension(extension))

	resolveInCore(extensions, features)
			
	return extensions
