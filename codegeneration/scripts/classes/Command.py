from classes.Feature import *


# near and far are deinfes by windows.h ... :( 
exceptions = ["GetProcAddress", "near", "far"]

def baseType(type):
	return type

class Parameter:

	def __init__(self, xml):

		self.name = xml.find("name").text
		self.type = " ".join([t.strip() for t in xml.itertext()][:-1]).strip()
		if self.name in exceptions:
			self.name += "_"
		
	def __str__(self):
		return "%s %s" % (self.type, self.name)
		
	def baseType(self):
		return baseType(self.type)


class Command:

	def __init__(self, xml, features):

		proto = xml.find("proto")

		self.returntype = " ".join([t.strip() for t in proto.itertext()][:-1]).strip()
		self.name = proto.find("name").text

		self.params = []		
		for param in xml.iter("param"):								
			self.params.append(Parameter(param))

		self.required = None
		for feature in features:
			if self.name in feature.requires:
				self.required = feature
				break
		self.removed = None
		for feature in features:
			if self.name in feature.removes:
				self.removed = feature
				break


	def baseReturnType(self):
		return baseType(self.returntype)

		
	def __str__(self):
		return "%s %s ( %s )" % (self.returntype, self.baseName(), ", ".join([str(p) for p in self.params]))


	def __lt__(self, other):
		return self.name < other.name


	def supported(self, feature, core):
		if feature == None:
			return True
		if core:
			return self.required <= feature and (not self.removed or self.removed > feature) 
		else:
			return self.required <= feature

		
def parseCommands(xml, features):
	commands = set()

	for cs in xml.iter("commands"):
		for c in cs.iter("command"):
			commands.add(Command(c, features))

	return commands
