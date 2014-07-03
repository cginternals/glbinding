from classes.Feature import *
from classes.Extension import *


def translateType(t, name):

	if name in [ "GL_TRUE", "GL_FALSE" ]:
		return "GLboolean"

	return { "u" : "GLuint", "ull" : "GLuint64"	}.get(t, "GLenum")


class Enum:

	def __init__(self, xml, features, group, groupType):

		self.name  = xml.attrib["name"]
		self.value = xml.attrib["value"]
		self.type  = "GLenum"

		self.group     = group
		self.groupType = groupType

		if group == "SpecialNumbers":
			self.type = translateType(xml.attrib.get("type", ""), self.name)
		elif groupType == "bitmask":
			self.type = "GLbitfield"

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


	def __str__(self):
		return "Enum(%s, %s)" % (self.name, self.value)
		
	def __lt__(self, other):
		return self.name < other.name

	def supported(self, feature, core):
		if feature == None:
			return True
		if core:
			return self.required <= feature and (not self.removed or self.removed > feature) 
		else:
			return self.required <= feature


def parseEnums(xml, features):
	enums = set()
	
	for enumGroup in xml.iter("enums"):
		group     = enumGroup.attrib.get("group", "")
		groupType = enumGroup.attrib.get("type", "")

		for enum in enumGroup.findall("enum"):
			if "api" in enum.attrib and enum.attrib["api"] != "gl":
				continue
			enums.add(Enum(enum, features, group, groupType))

	return enums


def groupEnumsByType(enums):
	d = dict()
	
	for e in enums:
		if not e.type in d:
			d[e.type] = []
		d[e.type].append(e)
		
	return d

def groupEnumsByGroup(enums):
	d = dict()
	
	for e in enums:
		if not e.group in d:
			d[e.group] = []
		d[e.group].append(e)

	for key in d.keys():
		d[key] = sorted(d[key], key = lambda e: e.value)

	return d	
