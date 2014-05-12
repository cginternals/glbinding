import xml.etree.ElementTree as ET
from classes.Type import *

def generateTypes(inputfile):
	tree = ET.parse(inputfile)
	registry = tree.getroot()

	types = sorted(parseTypes(registry))
	
	for type in types:
		print(type.value)
		
	