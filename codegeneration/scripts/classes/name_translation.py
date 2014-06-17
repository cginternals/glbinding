
enum_name_exceptions = [ "DOMAIN", "MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB", "FALSE", "TRUE", "NO_ERROR", "WAIT_FAILED" ]

def enumBaseName(name):
	#~ first = name[3]
	#~ n = name[3:]
	
	#~ if n in enum_name_exceptions:
		#~ return n + "_" 
	
	#~ if first.isalpha():
		#~ return n
	#~ else:
		#~ return "_" + n
	return name
		
def functionBaseName(name):
	#~ return name[2:]
	return name