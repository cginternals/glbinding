from classes.name_translation import *

def translateType(t, name):
	if name in [ "GL_TRUE", "GL_FALSE" ]:
		return "GLboolean"
		
	return {
		"u" : "GLuint",
		"ull" : "GLuint64"
	}.get(t, "GLuint")

extensionSuffixes =  ["ARB","EXT","NV","AMD","ATI","KHR","SGIS","SGIX","IBM","INGR","APPLE","PGI","QCOM","OES","INTEL","IMG","WEBGL"]

class Enum:
	def __init__(self, xml, group, groupType):
		self.name = xml.attrib["name"]
		self.value = xml.attrib["value"]
		self.type = "GLenum"
		self.group = group
		self.groupType = groupType
		
		if group == "SpecialNumbers":
			self.type = translateType(xml.attrib.get("type", ""), self.name)
		elif groupType == "bitmask":
			self.type = "GLbitfield"
		
	def __str__(self):
		return "Enum(%s, %s)" % (self.name, self.value)
		
	def __lt__(self, other):
		return self.name < other.name
			
	def baseName(self):
		return enumBaseName(self.name)
		
def parseEnums(xml):
	enums = set()
	
	for enumGroup in xml.iter("enums"):
		for enum in enumGroup.findall("enum"):
			if "api" in enum.attrib and enum.attrib["api"] != "gl":
				continue
			group = enumGroup.attrib.get("group", "")
			groupType = enumGroup.attrib.get("type", "")
			enums.add(Enum(enum, group, groupType))

	return enums
	
def groupByType(enums):
	d = dict()
	
	for e in enums:
		if not e.type in d:
			d[e.type] = []
		d[e.type].append(e)
		
	return d

def extPriority(name):
	index = name.rfind("_")
	if index<0:
		return -1
		
	ext = name[index+1:]
	
	if ext not in extensionSuffixes:
		return -1
	
	return extensionSuffixes.index(ext)
	
def groupByValue(enums):
	d = dict()
	
	for e in enums:
		v = int(e.value, 0)
		if not v in d:
			d[v] = []
		d[v].append(e)
	
	for key in d.keys():
		d[key] = sortByExtension(d[key])
		
	return d

def sortByExtension(enums):
	return sorted(enums, key = lambda e : extPriority(e.name))

