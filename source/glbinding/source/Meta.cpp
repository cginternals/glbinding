
#include <glbinding/Meta.h>

#include <sstream>
#include <unordered_map>

#include <glbinding/gl/bitfield.h>
#include <glbinding/gl/boolean.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/extension.h>

// ToDo: multiple APIs

#include <glbinding/Version.h>

#include "glrevision.h"
#include "Meta_Maps.h"


using namespace gl;

namespace glbinding
{

bool Meta::stringsByGL()
{
#ifdef STRINGS_BY_GL
    return true;
#else
    return false;
#endif
}

bool Meta::glByStrings()
{
#ifdef GL_BY_STRINGS
    return true;
#else
    return false;
#endif
}

int Meta::glRevision()
{
    return GL_REVISION;
}

const std::string & Meta::getString(const GLboolean boolean)
{
    auto i = Meta_StringsByBoolean.find(boolean);
    if (i == Meta_StringsByBoolean.end())
    {
        static const std::string none;
        return none;
    }
    return i->second;
}

const std::string & Meta::getString(const GLenum glenum)
{
    auto i = Meta_StringsByEnum.find(glenum);
    if (i == Meta_StringsByEnum.end())
    {
        static const std::string none;
        return none;
    }
    return i->second;
}

GLenum Meta::getEnum(const std::string & glenum)
{
    auto i = Meta_EnumsByString.find(glenum);
    if (i == Meta_EnumsByString.end())
        return static_cast<GLenum>(static_cast<unsigned int>(-1));

    return i->second;
}

std::vector<GLenum> Meta::enums()
{
    std::vector<GLenum> enums;
    for (auto p : Meta_StringsByEnum)
        enums.push_back(p.first);

    return enums;
}

const std::string & Meta::getString(const GLextension extension)
{
    auto i = Meta_StringsByExtension.find(extension);
    if (i == Meta_StringsByExtension.end())
    {
        static const std::string none;
        return none;
    }
    return i->second;
}   

GLextension Meta::getExtension(const std::string & extension)
{
    auto i = Meta_ExtensionsByString.find(extension);
    if (i == Meta_ExtensionsByString.end())
        return GLextension::UNKNOWN;

    return i->second;
}

std::set<GLextension> Meta::extensions()
{
    std::set<GLextension> extensions;
    for (auto p : Meta_StringsByExtension)
        extensions.insert(p.first);

    return extensions;
}

const Version & Meta::getRequiringVersion(const GLextension extension)
{
    auto i = Meta_ReqVersionsByExtension.find(extension);
    if (i == Meta_ReqVersionsByExtension.end())
    {
        static const Version none;
        return none;
    }
    return i->second;
}

const std::set<std::string> & Meta::getRequiredFunctions(const GLextension extension)
{
    auto i = Meta_FunctionStringsByExtension.find(extension);
    if (i == Meta_FunctionStringsByExtension.end())
    {
        static const std::set<std::string> none;
        return none;
    }
    return i->second;
}

const std::set<GLextension> & Meta::getExtensionsRequiring(const std::string & function)
{
    auto i = Meta_ExtensionsByFunctionString.find(function);
    if (i == Meta_ExtensionsByFunctionString.end())
    {
        static const std::set<GLextension> none;
        return none;
    }
    return i->second;
}

const std::set<Version> & Meta::versions()
{
    return Version::versions();
}

} // namespace glbinding
