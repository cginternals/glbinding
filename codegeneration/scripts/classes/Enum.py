from classes.Extension import *

def translateType(t, name):

	if name in [ "GL_TRUE", "GL_FALSE" ]:
		return "GLboolean"

	return { "u" : "GLuint", "ull" : "GLuint64"	}.get(t, "GLenum")


class Enum:

	def __init__(self, xml, group, groupType):

		self.name  = xml.attrib["name"]
		self.value = xml.attrib["value"]
		self.type  = "GLenum"

		self.group     = group
		self.groupType = groupType
		
		if group == "SpecialNumbers":
			self.type = translateType(xml.attrib.get("type", ""), self.name)
		elif groupType == "bitmask":
			self.type = "GLbitfield"


	def __str__(self):
		return "Enum(%s, %s)" % (self.name, self.value)
		
	def __lt__(self, other):
		return self.name < other.name


def parseEnums(xml):
	enums = set()
	
	for enumGroup in xml.iter("enums"):
		group     = enumGroup.attrib.get("group", "")
		groupType = enumGroup.attrib.get("type", "")

		for enum in enumGroup.findall("enum"):
			if "api" in enum.attrib and enum.attrib["api"] != "gl":
				continue
			enums.add(Enum(enum, group, groupType))

	return enums

	
#def groupByType(enums):
#	d = dict()
#	
#	for e in enums:
#		if not e.type in d:
#			d[e.type] = []
#		d[e.type].append(e)
#		
#	return d
#
#def groupByGroup(enums):
#	d = dict()
#	
#	for e in enums:
#		if not e.group in d:
#			d[e.group] = []
#		d[e.group].append(e)
#	
#	
#	for key in d.keys():
#		d[key] = sorted(d[key], key = lambda e: e.value)
#		
#	return d
#
#def groupByValue(enums):
#	d = dict()
#	
#	for e in enums:
#		v = int(e.value, 0)
#		if not v in d:
#			d[v] = []
#		d[v].append(e)
#	
#	for key in d.keys():
#		d[key] = sortBySuffix(d[key])
#		
#	return d
#
#
#def suffixPriority(name):
#	index = name.rfind("_")
#	if index < 0:
#		return -1
#
#	ext = name[index + 1:]
#
#	if ext not in Extension.suffixes:
#		return -1
#	
#	return Extension.suffixes.index(ext)
#
#
#def sortBySuffix(enums):
#	return sorted(enums, key = lambda e : suffixPriority(e.name))
#