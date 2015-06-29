
def inner(xml):
    return str("".join([ t for t in xml.itertext() ]))

class Type:

    def __init__(self, xml, isGroup):

        self.isGroup = isGroup
        
        if isGroup:
            self.name = xml.attrib["name"]
            self.value = inner(xml)
        else:
            self.name = xml.find("name").text
            self.value = "".join([ t for t in xml.itertext() if t != self.name ])

        if self.name.startswith("struct "):
            self.name = self.name[7:]
            self.value = "struct"

        # ToDo: required and removed ... for now glbinding discards this


    def __str__(self):

        return "%s: %s" % (self.name, self.value)


    def __lt__(self, other):

        return self.name < other.name


def parseTypes(xml, api):

    types = []
    for T in xml.iter("types"):

        # only parse type if 
        # (1) api attribute is not given or if its equal to requested api
        # (2) starts with typedef or struct and or is exception, e.g., GLhandleARB 

        for type in T.findall("type"):

            # enorce constraint (1)
            if "api" in type.attrib and type.attrib["api"] != api:
                continue

            # enorce constraint (2)
            if not inner(type).startswith("typedef ") and \
               not inner(type).startswith("struct ") \
               and ("name" not in type.attrib):
                continue

            types.append(Type(type, "name" in type.attrib))

    return types


def patchTypes(types, patches):

    # currently only adding types is supported

    for patch in patches:
        types.append(patch)

# returns the type of a typedef, e.g., 
# "typedef unsigned int" returns "unsigned int"

def parseType(type):

    if type.value.startswith("typedef"):
        return type.value[8:-1]
    else: 
        return type.value
