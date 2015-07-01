from binding import *


def genRevision(api, prefix, libraryNamespace, revision, outputdir, outputfile):	
    status(outputdir + outputfile)

    t = template(outputfile).replace("%a", libraryNamespace).replace("%A", libraryNamespace.upper())

    with open(outputdir + outputfile, 'w') as file:		
        file.write(t % (str(revision)))
