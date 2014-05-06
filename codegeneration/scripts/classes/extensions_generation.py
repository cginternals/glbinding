import xml.etree.ElementTree as ET

from Feature import *
from Extension import *


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
			#print("\tsince: %s" % max(s))
			e.incore = max(s)
			"""
			if len(deprecated)>0:
				d = set()
				for k,v in deprecated.items():
					d.add("%s -> %s" % (k,min(v)))
				print("\tdeprecated: %s" % list(d))
			"""

def generateExtensionFiles(inputfile, outputfile, outputfile2):
	tree = ET.parse(inputfile)
	registry = tree.getroot()

	extensions = parseExtensions(registry)
	features = parseFeatures(registry)
	
	findExtensionVersions(extensions, features)
	
	enumDecl = "enum Extension\n{\n"
	namesMap = "const std::unordered_map<glow::Extension, std::string, std::hash<unsigned int>> extensionStrings = {\n"
	extensionMap = "const std::unordered_map<std::string, glow::Extension> extensions = {\n"
	incoreMap = "const std::unordered_map<glow::Extension, glow::Version, std::hash<unsigned int>> extensionVersions = {\n"

	for e in extensions:
		enumDecl += "\t%s,\n" % e.enumName()
		namesMap += '\t{ glow::%s, "%s" },\n' % (e.enumName(), e.name)
		extensionMap += '\t{ "%s", glow::%s },\n' % (e.name, e.enumName())
		if e.incore:
			incoreMap += "\t{ glow::%s, glow::Version(%s, %s) },\n" % (e.enumName(), e.incore.major, e.incore.minor)
		
	enumDecl += "\tGLOW_Unknown_Extension\n};"
	namesMap += "};\n"
	extensionMap += "};\n"
	incoreMap += "};\n"
			
	pre = \
"""#pragma once

namespace glow {

"""
	post = \
"""

} // namespace glow
"""

	with open(outputfile, 'w') as file:
		file.write(pre)
		file.write(enumDecl)
		file.write(post)
		
	pre = \
"""#include <string>
#include <unordered_map>

#include <glow/Extension.h>
#include <glow/Version.h>

"""
	post = ""
			
	with open(outputfile2, 'w') as file:
		file.write(pre)
		file.write(namesMap)
		file.write("\n")
		file.write(extensionMap)
		file.write("\n")
		file.write(incoreMap)
		file.write(post)
			
