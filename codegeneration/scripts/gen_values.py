from binding import *
from classes.Enum import *


def valueDefinition(enum):

    return "static const %s %s = %s;" % (enum.type, enumBID(enum), enum.value)


def genValuesForwards(enums, outputdir, outputfile):

    genValues(enums, outputdir, outputfile, True)


def genValues(enums, outputdir, outputfile, forward = False):

    of_all = outputfile.replace("?", "F")

    t = template(of_all)
    of = outputfile.replace("?", "")

    status(outputdir + of)


    tgrouped = groupEnumsByType(enums)
    del tgrouped["GLboolean"]
    del tgrouped["GLenum"]
    del tgrouped["GLbitfield"]

    groups = []    
    for type in sorted(tgrouped.keys()):
        groups.append("\n".join([ valueDefinition(c) for c in tgrouped[type] ]))

    with open(outputdir + of, 'w') as file:
        file.write(t % ("\n\n".join(groups)))
