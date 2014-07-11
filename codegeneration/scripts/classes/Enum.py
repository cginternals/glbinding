from classes.Feature import *
from classes.Extension import *


def translateType(t, name):

	if name in [ "GL_TRUE", "GL_FALSE" ]:
		return "GLboolean"

	return { "u" : "GLuint", "ull" : "GLuint64"	}.get(t, "GLenum")


class Enum:

	def __init__(self, xml, features, extensions, group, groupType, api):

		self.api   = api

		self.name  = xml.attrib["name"]
		self.value = xml.attrib["value"]
		self.type  = "GLenum"

		self.aliasString = ""
		self.alias = None

		if "alias" in xml.attrib:
			self.aliasString = xml.attrib["alias"]

		self.groups = set()

		self.group     = group
		self.groupType = groupType

		if group == "SpecialNumbers":
			self.type = translateType(xml.attrib.get("type", ""), self.name)
		elif groupType == "bitmask":
			self.type = "GLbitfield"

		self.reqFeatures   = []
		self.remFeatures   = [] # len(remF) should always be < 2
		self.reqExtensions = []

		for feature in features:
		 	if feature.api == api and self.name in feature.reqEnumStrings:
		 		self.reqFeatures.append(feature)

		for feature in features:
			if feature.api == api and self.name in feature.remEnumStrings:
				self.remFeatures.append(feature)
			
		for extension in extensions:
			if extension.api == api and self.name in extension.reqEnumStrings:
				self.reqExtensions.append(extensions)


	def __str__(self):
		
		return "Enum(%s, %s)" % (self.name, self.value)
		

	def __lt__(self, other):

		return self.value < other.value or (self.value == other.value and self.name < other.name)


	# this compares the given feature with the lowest requiring feature
	def supported(self, feature, core):

		if feature is None:
			return True

		# ToDo: this might create a cyclic recursion if glm is errorneuos
		aliasSupported = self.alias.supported(feature, core) if self.alias else False

		# Note: design decission:
		# every featured functions include should not contain enums from extensions.

		#if len(self.reqFeatures) == 0 and len(self.reqExtensions) > 0:
		#	return True
		
		if len(self.reqFeatures) == 0:
			return aliasSupported

		if core:
			sSelf = min(self.reqFeatures) <= feature and (not self.remFeatures or min(self.remFeatures) > feature) 
			return sSelf or aliasSupported
		else:
			sSelf = min(self.reqFeatures) <= feature
			return sSelf or aliasSupported

class Group:	
	def __init__(self, xml):
		self.enums = []
		if isinstance (xml, basestring):
			self.name = xml
			return
			
		self.name = xml.attrib["name"]
		for e in xml.iter("enum"):
			self.enums.append(e.attrib["name"])
				
	def __str__(self):
		return "Group(%s, %s)" % (self.name, str(len(self.enums)))

	def __lt__(self, other):
		return self.name < other.name
		
def parseGroups(xml, enums):
	groups = []
	groupByName = dict()
	
	for G in xml.iter("groups"):
		for g in G.iter("group"):
			group = Group(g)
			groups.append(group)
			groupByName[group.name] = group
			
	for e in enums:
		if e.group is None:
			continue
		if e.group not in groupByName:
			group = Group(e.group)
			groupByName[group.name] = group			
		groupByName[group.name].enums.append(e.name)
		
	return sorted(groupByName.values())

def parseEnums(xml, features, extensions, commands, api):

	enums = set()
	
	for E in xml.iter("enums"):

		group     = E.attrib.get("group", None)
		groupType = E.attrib.get("type", None)

		# only parse enum if 
		# (1) no comment attribute exists for <enum> starting with "Not an API enum. ..."
		# (2) at least one feature or extension of the requested api requires the enum of requested api
		# (3) if the enum has a group and at least one command has a parameter in that group

		for enum in E.findall("enum"):

			# enorce constraint (1)
			if "comment" in enum.attrib and enum.attrib["comment"].startswith("Not an API enum."):
				continue

			name = enum.attrib["name"]

			# enorce constraint (2)
			if not any(name in feature.reqEnumStrings \
			   for feature in features if len(feature.reqEnumStrings) > 0) \
			 and \
			   not any(name in extension.reqEnumStrings \
			   for extension in extensions if len(extension.reqEnumStrings) > 0):
			    continue

			if "api" in enum.attrib and enum.attrib["api"] != api:
				continue

			enums.add(Enum(enum, features, extensions, group, groupType, api))

	return sorted(enums)

def resolveGroups(groups, enumsByName):
	for g in groups:
		g.enums = [ enumsByName[e] for e in g.enums if e in enumsByName ]
		for e in g.enums:
			e.groups.add(g)

def resolveEnums(enums, enumsByName):
	for e in enums:
		# aliases might be from other api?
		if e.aliasString != "" and e.aliasString in enumsByName:
			e.alias = enumsByName[e.aliasString]
		


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
