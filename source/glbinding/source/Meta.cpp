
#include <glbinding/Meta.h>

#include <sstream>
#include <unordered_map>

#include <glbinding/bitfield.h>
#include <glbinding/boolean.h>
#include <glbinding/enum.h>

#include <glbinding/extension.h>

#include <glbinding/Version.h>

#include "Meta_Maps.h"


namespace gl
{

const std::string & Meta::getString(const GLbitfield bitfield)
{
    auto i = Meta_StringsByBitfield.find(bitfield);
    if (i == Meta_StringsByBitfield.end())
    {
        static const std::string none;
        return none;
    }
    return i->second;
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
        return static_cast<GLenum>(-1);

    return i->second;
}

std::vector<GLenum> Meta::getEnums()
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

std::vector<GLextension> Meta::getExtensions()
{
    std::vector<GLextension> extensions;
    for (auto p : Meta_StringsByExtension)
        extensions.push_back(p.first);

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

const std::vector<std::string> & Meta::getRequiredFunctions(const GLextension extension)
{
    auto i = Meta_FunctionStringsByExtension.find(extension);
    if (i == Meta_FunctionStringsByExtension.end())
    {
        static const std::vector<std::string> none;
        return none;
    }
    return i->second;
}

const std::vector<GLextension> & Meta::getExtensionsRequiring(const std::string & function)
{
    auto i = Meta_ExtensionsByFunctionString.find(function);
    if (i == Meta_ExtensionsByFunctionString.end())
    {
        static const std::vector<GLextension> none;
        return none;
    }
    return i->second;
}

} // namespace gl
