import sys
import xml.etree.ElementTree as ET

def baseType(type):
	return type[2].upper() + type[3:] 

class Parameter:
	def __init__(self, xml):
		self.name = xml.find("name").text
		self.type = " ".join([t.strip() for t in xml.itertext()][:-1]).strip()
		
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
			
	def baseName(self):
		return self.name[2].lower() + self.name[3:]
		
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
