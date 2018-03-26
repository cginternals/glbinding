#!/usr/bin/python

import os, sys, getopt, io, subprocess
import json

def update(url, outputfile):
    print("Retrieving latest revision of " + outputfile)

    os.system("curl " + url + " > " + outputfile)
    os.system("git diff " + outputfile)

def main(argv):
    try:
        opts, args = getopt.getopt(argv[1:], "p:", ["profile="])
    except getopt.GetoptError:
        print("usage: %s -p <profile JSON>" % argv[0])
        sys.exit(1)
    
    profile = None
    
    for opt, arg in opts:
        if opt in ("-p", "--profile"):
            profile = arg

    if profile == None:
        print("no profile given")
        sys.exit(1)

    if not os.path.isfile(profile):
        print("Profile not readable")
        sys.exit(1)

    p = json.load(open(profile))
    update(p["sourceUrl"], p["sourceFile"])

if __name__ == "__main__":
    main(sys.argv)
