#!/usr/bin/python

import sys, getopt
from classes.constants_generation import *

def main(argv):
	inputfile = "gl.xml"
	outputfile = "gl_constants.h"

	try:
		opts, args = getopt.getopt(argv[1:], "i:o:", ["input=","output="])
	except getopt.GetoptError:
		print("usage: %s [-i <input>] [-o <output>]" % argv[0])
		sys.exit(1)
		
	for opt, arg in opts:
		if opt in ("-i", "--input"):
			inputfile = arg
		elif opt in ("-o", "--output"):
			outputfile = arg

	generateConstantsHeader(inputfile, outputfile)

if __name__ == "__main__":
	main(sys.argv)
