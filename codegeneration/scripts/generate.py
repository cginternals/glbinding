#!/usr/bin/python

from classes.constants_generation import *
from classes.extensions_generation import *

generateConstantsHeader("../gl.xml", "../generated/gl_constants.h")
generateExtensionFiles("../gl.xml", "../generated/gl_extensions.h", "../generated/gl_extension_info.h")