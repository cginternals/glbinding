
#include <glbinding/Meta.h>

#include <glbinding/gl/bitfield.h>
#include <glbinding/gl/boolean.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/extension.h>

// ToDo: multiple APIs

#include <glbinding/Version.h>

#include "glrevision.h"
#include "Meta_Maps.h"

using namespace gl;


namespace 
{


static const auto none = std::string{};
static const auto noneVersion = glbinding::Version{};
static const auto noneStringSet = std::set<std::string>{};
static const auto noneExtensions = std::set<gl::GLextension>{};


} // namespace


namespace glbinding
{


bool Meta::extensive()
{
#ifdef EXTENSIVE_META
    return true;
#else
    return false;
#endif
}

int Meta::glRevision()
{
    return GL_REVISION;
}

size_t Meta::alphabeticalGroupIndex(const std::string & identifier, const std::uint8_t prefixLength)
{
    auto index = static_cast<size_t>(identifier[prefixLength]); // ignore prefix ('GL_' or 'gl')

    // bold uppercase conversion -> non letters are discarded in next step
    if (index > 96)
        index -= 32;

    // every non upper case letter is assigned to index 0
    if (index < 65 || index > 90)
        index = 64;

    index -= 64;

    return index;
}

std::vector<GLbitfield> Meta::bitfields()
{
    auto bitfields = std::vector<GLbitfield>{};

// this does not just work with EXTENSIVE_META since bitfields are grouped
#ifdef EXTENSIVE_META 

    for(auto map : Meta_BitfieldsByStringMaps)
        for (auto p : map)
        {
            bitfields.push_back(p.second);
        }

#endif // EXTENSIVE_META

    return bitfields;    
}


std::vector<GLenum> Meta::enums()
{
    auto enums = std::vector<GLenum>{};

#ifdef EXTENSIVE_META

    for (auto p : Meta_StringsByEnum)
    {
        enums.push_back(p.first);
    }

#endif // EXTENSIVE_META

    return enums;
}


GLextension Meta::getExtension(const std::string & glextension)
{
    // NOTE: this is intended to work irrespective of a EXTENSIVE_META definition.

    const auto index = alphabeticalGroupIndex(glextension, 3);
    const auto & map = Meta_ExtensionsByStringMaps[index];
    const auto i = map.find(glextension);

    if (i != map.end())
    {
        return i->second;
    }

    return GLextension::UNKNOWN;
}

std::set<GLextension> Meta::extensions()
{
    auto extensions = std::set<GLextension>{};

    for (auto m : Meta_ExtensionsByStringMaps)
        for (auto p : m)
        {
            extensions.insert(p.second);
        }

    return extensions;
}


#ifdef EXTENSIVE_META

const std::string & Meta::getString(const GLboolean glboolean)
{
    const auto i = Meta_StringsByBoolean.find(glboolean);
    if (i == Meta_StringsByBoolean.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const GLenum glenum)
{
    const auto i = Meta_StringsByEnum.find(glenum);
    if (i != Meta_StringsByEnum.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const GLextension glextension)
{
    const auto i = Meta_StringsByExtension.find(glextension);
    if (i != Meta_StringsByExtension.end())
    {
        return i->second;
    }
    return none;
}

const std::set<std::string> & Meta::getRequiredFunctions(const GLextension extension)
{
    const auto i = Meta_FunctionStringsByExtension.find(extension);
    if (i != Meta_FunctionStringsByExtension.end())
    {
        return i->second;
    }
    return noneStringSet;
}

#else

const std::string & Meta::getString(const GLboolean)
{
    return none;
}

const std::string & Meta::getString(const GLenum)
{
    return none;
}

const std::string & Meta::getString(const GLextension)
{
    return none;
}

const std::set<std::string> & Meta::getRequiredFunctions(const GLextension)
{
    return noneStringSet;
}

#endif // EXTENSIVE_META


#ifdef EXTENSIVE_META

GLbitfield Meta::getBitfield(const std::string & glbitfield)
{
    const auto index = alphabeticalGroupIndex(glbitfield, 3);
    const auto & map = Meta_BitfieldsByStringMaps[index];
    const auto i = map.find(glbitfield);

    if (i != map.end())
    {
        return i->second;
    }
    return static_cast<GLbitfield>(-1);
}

GLenum Meta::getEnum(const std::string & glenum)
{
    const auto index = alphabeticalGroupIndex(glenum, 3);
    const auto & map = Meta_EnumsByStringMaps[index];
    const auto i = map.find(glenum);

    if (i != map.end())
    {
        return i->second;
    }
    return static_cast<GLenum>(static_cast<unsigned int>(-1));
}

const std::set<GLextension> & Meta::getExtensionsRequiring(const std::string & glfunction)
{
    const auto index = alphabeticalGroupIndex(glfunction, 2);
    const auto & map = Meta_ExtensionsByFunctionStringMaps[index];
    const auto i = map.find(glfunction);

    if (i != map.end())
    {
        return i->second;
    }

    return noneExtensions;
}

#else

GLbitfield Meta::getBitfield(const std::string &)
{
    return static_cast<GLbitfield>(-1);
}

GLenum Meta::getEnum(const std::string &)
{
    return static_cast<GLenum>(static_cast<unsigned int>(-1));
}

const std::set<GLextension> & Meta::getExtensionsRequiring(const std::string &)
{
    return noneExtensions;
}

#endif // EXTENSIVE_META

const Version & Meta::getRequiringVersion(const GLextension extension)
{
    const auto i = Meta_ReqVersionsByExtension.find(extension);
    if (i == Meta_ReqVersionsByExtension.end())
    {
        return noneVersion;
    }

    return i->second;
}

const std::set<Version> & Meta::versions()
{
    return Version::versions();
}


} // namespace glbinding
