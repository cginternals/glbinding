
# near and far are deinfes by windows.h ... :( 
exceptions = ["getProcAddress", "near", "far"]

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


class Function:

	def __init__(self, xml):

		proto = xml.find("proto")

		self.returntype = " ".join([t.strip() for t in proto.itertext()][:-1]).strip()
		self.name = proto.find("name").text
				
		self.params = []		
		for param in xml.iter("param"):								
			self.params.append(Parameter(param))


	def baseReturnType(self):
		return baseType(self.returntype)

		
	def __str__(self):
		return "%s %s ( %s )" % (self.returntype, self.baseName(), ", ".join([str(p) for p in self.params]))

		
	def __lt__(self, other):
		return self.name < other.name

		
def parseFunctions(xml):
	functions = set()
	
	for commands in xml.iter("commands"):
		for command in commands.iter("command"):
			functions.add(Function(command))

	return functions
