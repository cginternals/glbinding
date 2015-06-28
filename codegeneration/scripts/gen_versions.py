from binding import *
from classes.Feature import *


def version(feature):
	return '{ %s, %s }' % (feature.major, feature.minor)


def genVersions(api, features, outputdir, outputfile):
    status(outputdir + outputfile)

    t = template(outputfile).replace("%a", api).replace("%A", api.upper())

    with open(outputdir + outputfile, 'w') as file:
        file.write(t % (
            (",\n" + tab).join([ version(f) for f in features if f.api == api]),
            version([ f for f in features if f.api == api][-1])
        ))
