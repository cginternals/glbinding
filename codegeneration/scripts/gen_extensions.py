from binding import *
from classes.Extension import *


def genExtensions(api, extensions, outputdir, outputfile):

    of = outputfile
    t = template(of).replace("%a", api)

    status(outputdir + of)

    with open(outputdir + of, 'w') as file:
        file.write(t % (",\n" + tab).join(
            [ extensionBID(e) for e in extensions ]))
