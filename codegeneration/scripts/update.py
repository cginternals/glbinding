#!/usr/bin/python

import os, sys, getopt, io, subprocess
import xml.etree.ElementTree

def update(outputfile, revisionfile):
    url = "https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/gl.xml"
    user = "anonymous"
    password = "anonymous"
    
    revision = 0

    if os.path.isfile(revisionfile):

        revisionfilehandle = open(revisionfile, "rt")
    
        if not revisionfilehandle.closed:
            revision = int(revisionfilehandle.readline())
    
        revisionfilehandle.close()

        print("Local revision of " + outputfile + " is " + str(revision))
    
    else:
        print("Local revision file not found")

        

    print("Retrieving latest revision of gl.xml")

    svninfo = subprocess.Popen(["svn", "info", "--xml", "--username", user, "--password", password, url], stdout=subprocess.PIPE)
    newrevisioninfo = svninfo.communicate()[0]
    
    if sys.version_info < (3,):
        root = xml.etree.ElementTree.fromstring(unicode(newrevisioninfo))
    else:
        root = xml.etree.ElementTree.fromstring(str(newrevisioninfo, 'utf-8'))
    
    commit = root.findall(".//commit")

    newrevision = int(commit[0].attrib["revision"])
    
    if newrevision <= revision:
        print (outputfile + " is up to date, skipping update")
        sys.exit(0)
    
    print ("Updating " + outputfile + " to " + str(newrevision))
    
    revisionfilehandle = open(revisionfile, "wt")
    revisionfilehandle.write(str(newrevision))
    
    print ("Local revision of " + outputfile + " is now " + str(newrevision))
    
    os.system("svn export --username " + user + " --password " + password + " --force --quiet " + url + " " + outputfile)
    os.system("git diff " + outputfile)


def main(argv):
    try:
        opts, args = getopt.getopt(argv[1:], "f:r:", ["file=", "revision="])
    except getopt.GetoptError:
        print("usage: %s -f <GL XML> -r <revision file>" % argv[0])
        sys.exit(1)
    
    outputfile = None
    revisionfile = None
    
    for opt, arg in opts:
        if opt in ("-f", "--file"):
            outputfile = arg

        if opt in ("-r", "--revision"):
            revisionfile = arg

    if outputfile == None:
        print("no GL XML file given")
        sys.exit(1)

    if revisionfile == None:
        print("no revision file given")
        sys.exit(1)

    update(outputfile, revisionfile)


if __name__ == "__main__":
    main(sys.argv)
