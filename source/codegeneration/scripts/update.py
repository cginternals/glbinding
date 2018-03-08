#!/usr/bin/python

import os, sys, getopt, io, subprocess

def update(outputfile):
    url = "https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/master/xml/" + outputfile
    
    print("Retrieving latest revision of " + outputfile)

    os.system("curl " + url + " > " + outputfile)
    os.system("git diff " + outputfile)


def main(argv):
    try:
        opts, args = getopt.getopt(argv[1:], "f:", ["file="])
    except getopt.GetoptError:
        print("usage: %s -f <XML>" % argv[0])
        sys.exit(1)
    
    outputfile = None
    
    for opt, arg in opts:
        if opt in ("-f", "--file"):
            outputfile = arg

    if outputfile == None:
        print("no XML file given")
        sys.exit(1)

    update(outputfile)


if __name__ == "__main__":
    main(sys.argv)
