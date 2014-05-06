#!/usr/bin/python

import sys, getopt

from classes.extensions_generation import *

def main(argv):
	inputfile = "gl.xml"
	outputfile = "gl_extensions.h"
	outputfile2 = "gl_extension_info.h"

	try:
		opts, args = getopt.getopt(argv[1:], "i:e:o:", ["input=","extension=", "output="])
	except getopt.GetoptError:
		print("usage: %s [-i <input>] [-e <extension>] [-o <output>]" % argv[0])
		sys.exit(1)
		
	for opt, arg in opts:
		if opt in ("-i", "--input"):
			inputfile = arg
		elif opt in ("-e", "--extension"):
			outputfile = arg
		elif opt in ("-o", "--output"):
			outputfile2 = arg

	generateExtensionFiles(inputfile, outputfile, outputfile2)

if __name__ == "__main__":
	main(sys.argv)