from binding import *


def genRevision(api, revision, outputdir, outputfile):	
    status(outputdir + outputfile)

    t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    with open(outputdir + outputfile, 'w') as file:		
        file.write(t % (str(revision)))
