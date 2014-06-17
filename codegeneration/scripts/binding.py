
import os, sys

template_dir = "templates/"
tab          = "    "
tab2         = tab + tab
exec_dir     = os.path.dirname(os.path.abspath(sys.argv[0])) + "/"

def template(outputfile):
	with open (exec_dir + template_dir + outputfile + ".in", "r") as file:
		return file.read()

# enum_binding_name_exceptions = [ "DOMAIN", "MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB", "FALSE", "TRUE", "NO_ERROR", "WAIT_FAILED" ]

def enumBindingIdentifier(enum):
	return enum.name

# extension_binding_name_exceptions = [ ]

# ToDo: discuss - just use name for glbinding?
def extensionBindingIdentifier(extension):
	return extension.name	


def functionBindingIdentifier(function):
	return function.name[2:]
