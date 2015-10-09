
#include <glpbinding/Meta.h>

#include <glpbinding/glp/typeintegrations.h>
#include <glpbinding/glp/bitfield.h>
#include <glpbinding/glp/boolean.h>
#include <glpbinding/glp/enum.h>
#include <glpbinding/glp/extension.h>

#include <glpbinding/Version.h>

#include "revision.h"
#include "Meta_Maps.h"


using namespace glp;

namespace {

    static const auto none = std::string{};
    static const auto noneVersion = glpbinding::Version{};
    static const auto noneStringSet = std::set<std::string>{};
    static const auto noneExtensions = std::set<glp::GLextension>{};

}

namespace glpbinding
{

bool Meta::stringsByGL()
{
#ifdef STRINGS_BY_SYMBOLS
    return true;
#else
    return false;
#endif
}

bool Meta::glByStrings()
{
#ifdef SYMBOLS_BY_STRINGS
    return true;
#else
    return false;
#endif
}

int Meta::glRevision()
{
    return GLP_REVISION;
}

const std::string & Meta::getString(const GLboolean boolean)
{
    auto i = Meta_StringsByBoolean.find(boolean);

    if (i == Meta_StringsByBoolean.end())
    {
        return none;
    }

    return i->second;
}

const std::string & Meta::getString(const GLenum glenum)
{
    auto i = Meta_StringsByEnum.find(glenum);

    if (i == Meta_StringsByEnum.end())
    {
        return none;
    }

    return i->second;
}

GLenum Meta::getEnum(const std::string & glenum)
{
    auto i = Meta_EnumsByString.find(glenum);

    if (i == Meta_EnumsByString.end())
    {
        return static_cast<GLenum>(static_cast<unsigned int>(-1));
    }

    return i->second;
}

std::vector<GLenum> Meta::enums()
{
    auto enums = std::vector<GLenum>{};

    for (auto p : Meta_StringsByEnum)
    {
        enums.push_back(p.first);
    }

    return enums;
}

const std::string & Meta::getString(const GLextension extension)
{
    auto i = Meta_StringsByExtension.find(extension);

    if (i == Meta_StringsByExtension.end())
    {
        return none;
    }

    return i->second;
}   

GLextension Meta::getExtension(const std::string & extension)
{
    auto i = Meta_ExtensionsByString.find(extension);

    if (i == Meta_ExtensionsByString.end())
    {
        return GLextension::UNKNOWN;
    }

    return i->second;
}

std::set<GLextension> Meta::extensions()
{
    auto extensions = std::set<GLextension>{};

    for (auto p : Meta_StringsByExtension)
    {
        extensions.insert(p.first);
    }

    return extensions;
}

const Version & Meta::getRequiringVersion(const GLextension extension)
{
    auto i = Meta_ReqVersionsByExtension.find(extension);

    if (i == Meta_ReqVersionsByExtension.end())
    {
        return noneVersion;
    }

    return i->second;
}

const std::set<std::string> & Meta::getRequiredFunctions(const GLextension extension)
{
    auto i = Meta_FunctionStringsByExtension.find(extension);

    if (i == Meta_FunctionStringsByExtension.end())
    {
        return noneStringSet;
    }

    return i->second;
}

const std::set<GLextension> & Meta::getExtensionsRequiring(const std::string & function)
{
    auto i = Meta_ExtensionsByFunctionString.find(function);

    if (i == Meta_ExtensionsByFunctionString.end())
    {
        return noneExtensions;
    }

    return i->second;
}

const std::set<Version> & Meta::versions()
{
    return Version::versions();
}

} // namespace glpbinding
