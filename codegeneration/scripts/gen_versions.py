from binding import *
from classes.Feature import *

def genVersions(features, path):
    glFeatures = [ f for f in features if f.api == "gl"]
    context = {"features": [{"major": f.major,
							 "minor": f.minor,
							 "last": f == glFeatures[-1]} for f in glFeatures],
               "latest": {"major": glFeatures[-1].major, "minor": glFeatures[-1].minor}}

    Generator.generate(context, path)
