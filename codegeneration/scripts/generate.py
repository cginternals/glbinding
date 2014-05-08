#!/usr/bin/python

import sys, getopt
from classes.generation import *

def main(argv):
	try:
		opts, args = getopt.getopt(argv[1:], "s:d:", ["spec=", "directory="])
	except getopt.GetoptError:
		print("usage: %s -s <GL spec> [-d <output directory>]" % argv[0])
		sys.exit(1)
		
	directory = "."
	inputfile = None
	
	for opt, arg in opts:
		if opt in ("-s", "--spec"):
			inputfile = arg
			
		if opt in ("-d", "--directory"):
			directory = arg
			
	if inputfile == None:
		print("No GL spec file given")
		sys.exit(1)

	generate(inputfile, directory)

if __name__ == "__main__":
	main(sys.argv)
