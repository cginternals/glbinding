
template_dir = "templates/"
tab  = "    "
tab2 = tab + tab

# enum_binding_name_exceptions = [ "DOMAIN", "MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB", "FALSE", "TRUE", "NO_ERROR", "WAIT_FAILED" ]

def enumBindingIdentifier(enum):
	return enum.name

# extension_binding_name_exceptions = [ ]

# ToDo: discuss - just use name for glbinding?
def extensionBindingIdentifier(extension):
	return extension.name	


def functionBindingIdentifier(function):
	return function.name[2:]