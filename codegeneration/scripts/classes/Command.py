from classes.Feature import *
from classes.Extension import *


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

	def __init__(self, xml, features, extensions, api):

		self.api = api 

		proto = xml.find("proto")

		self.name       = proto.find("name").text
		self.returntype = " ".join([t.strip() for t in proto.itertext()][:-1]).strip()

		self.params = []

		for param in xml.iter("param"):
			self.params.append(Parameter(param))

		self.reqFeatures   = []
		self.remFeatures   = [] # len(remF) should always be < 2
		self.reqExtensions = []
		
		for feature in features:
			if feature.api == api and self.name in feature.reqCommandStrings:
				self.reqFeatures.append(feature)

		for feature in features:
			if feature.api == api and self.name in feature.remCommandStrings:
				self.remFeatures.append(feature)

		for extension in extensions:
			if extension.api == api and self.name in extension.reqCommandStrings:
				self.reqExtensions.append(extensions)


	def baseReturnType(self):

		return baseType(self.returntype)

		
	def __str__(self):

		return "%s %s ( %s )" % (self.returntype, self.name, ", ".join([str(p) for p in self.params]))


	def __lt__(self, other):

		return self.name < other.name

	# this compares the given feature with the lowest requiring feature
	def supported(self, feature, core):

		if feature is None:
			return True

		# Note: design decission:
		# every featured functions include should not contain commands from extensions.

		#if len(self.reqFeatures) == 0 and len(self.reqExtensions) > 0:
	 	#	return True
	 	if len(self.reqFeatures) == 0:
	 		return False

	 	if core:
	 		return min(self.reqFeatures) <= feature and (not self.remFeatures or min(self.remFeatures) > feature) 
	 	else:
	 		return min(self.reqFeatures) <= feature

		
def parseCommands(xml, features, extensions, api):

	commands = []

	for C in xml.iter("commands"):

		# only parse command if 
		# (1) at least one feature or extension requires this command of requested api

		for command in C.iter("command"):

			proto = command.find("proto")
			name = proto.find("name").text

			# enforce constraint (1)
			if not any(name in feature.reqCommandStrings \
			   for feature in features if len(feature.reqCommandStrings) > 0) \
			 and \
			   not any(name in extension.reqCommandStrings \
			   for extension in extensions if len(extension.reqCommandStrings) > 0):
				continue

			if "api" in command.attrib and command.attrib["api"] != api:
				continue

			commands.append(Command(command, features, extensions, api))

	return sorted(commands)
