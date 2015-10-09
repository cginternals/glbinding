
def inner(xml):
    return str("".join([ t for t in xml.itertext() ]))

class Type:

    def __init__(self, xml):

        self.isGroup = "name" in xml.attrib and sum(1 for l in inner(xml).splitlines()) > 1
        
        if self.isGroup: # groups
            self.name = xml.attrib["name"]
            self.value = inner(xml)
            self.ignoreName = False
            self.isInclude = False
        elif "name" in xml.attrib and not inner(xml): # foreign declarations; ignore
            self.name = ""
            self.value = ""
            self.ignoreName = False
            self.isInclude = False
        elif "name" in xml.attrib and inner(xml): # includes; ignore all except khr includes
            if inner(xml).startswith("#include <KHR/"):
                self.name = ""
                self.value = inner(xml)
                self.ignoreName = True
                self.isInclude = True
            else:
                self.name = ""
                self.value = ""
                self.ignoreName = False
                self.isInclude = False
        else: # normal declarations
            self.name = xml.find("name").text
            self.isInclude = False
            if inner(xml).startswith("struct") and not self.name.startswith("struct"):
                self.value = "".join([ t for t in xml.itertext() ])
                self.ignoreName = True
            else:
                self.value = "".join([ t for t in xml.itertext() if t != self.name ])
                self.ignoreName = False
            
            if self.name.startswith("struct "):
                self.name = self.name[7:]
                self.value = "struct"

        # ToDo: required and removed ... for now glbinding discards this


    def __str__(self):

        return "%s: %s" % (self.name, self.value)


    def __lt__(self, other):

        return self.name < other.name


def parseTypes(xml, api, prefix):

    types = []
    for T in xml.iter("types"):

        # only parse type if 
        # (1) api attribute is not given or if its equal to requested api
        # (2) starts with typedef or struct and or is exception, e.g., GLhandleARB 

        for type in T.findall("type"):

            # enforce constraint (1)
            if "api" in type.attrib and type.attrib["api"] != api:
                continue

            # enforce constraint (2)
            if not inner(type).startswith("typedef ") and \
               not inner(type).startswith("struct ") \
               and ("name" not in type.attrib):
                continue

            types.append(Type(type))

    return types


def patchTypes(types, patches):

    # currently only adding types is supported

    for patch in patches:
        if (patch.name.endswith("int")): #TODO: seems like a hack, needed for EGL
            types.insert(0, patch)
        else:
            types.append(patch)

# returns the type of a typedef, e.g., 
# "typedef unsigned int" returns "unsigned int"

def parseType(type):

    if type.value.startswith("typedef"):
        return type.value[8:-1]
    else: 
        return type.value
