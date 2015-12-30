from binding import *


def genRevision(renderer, revision, outputdir, outputfile):
	status(outputdir + outputfile)

	with open(outputdir + outputfile, 'w') as file:
		file.write(renderer.render_name("glrevision.h", {"revision": revision}))
