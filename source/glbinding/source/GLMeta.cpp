
#include <glbinding/GLMeta.h>

#include <sstream>
#include <unordered_map>

#include <glbinding/GLenum.h>
#include <glbinding/GLextension.h>


#include "GLMeta_StringsByEnum.h"
#include "GLMeta_EnumsByString.h"

#include "GLMeta_StringsByExtension.h"
#include "GLMeta_ExtensionsByString.h"

#include "GLMeta_ExtensionsByFunctionString.h"
#include "GLMeta_FunctionStringsByExtension.h"

#include "GLMeta_ReqVersionsByExtension.h"


const std::string & GLMeta::getString(const GLenum glenum)
{
    auto i = GLMeta_StringsByEnum.find(glenum);
    if (i == GLMeta_StringsByEnum.end())
    {
        static const std::string none;
        return none;
    }
    return i->second;

}

GLenum GLMeta::getEnum(const std::string & glenum)
{

    auto i = GLMeta_EnumsByString.find(glenum);
    if (i == GLMeta_EnumsByString.end())
        return static_cast<GLenum>(-1);

    return i->second;
}

const std::string & GLMeta::getString(const GLextension extension)
{
    auto i = GLMeta_StringsByExtension.find(extension);
    if (i == GLMeta_StringsByExtension.end())
    {
        static const std::string none;
        return none;
    }
    return i->second;
}   

GLextension GLMeta::getExtension(const std::string & extension)
{
    auto i = GLMeta_ExtensionsByString.find(extension);
    if (i == GLMeta_ExtensionsByString.end())
        return GLextension::UNKNOWN;

    return i->second;
}

const GLMeta::ucharpair & GLMeta::getRequiringVersion(const GLextension extension)
{
    auto i = GLMeta_ReqVersionsByExtension.find(extension);
    if (i == GLMeta_ReqVersionsByExtension.end())
    {
        static const ucharpair none(0, 0);
        return none;
    }
    return i->second;
}

const std::vector<std::string> & GLMeta::getRequiredFunctions(const GLextension extension)
{
    auto i = GLMeta_FunctionStringsByExtension.find(extension);
    if (i == GLMeta_FunctionStringsByExtension.end())
    {
        static const std::vector<std::string> none;
        return none;
    }
    return i->second;
}

const std::vector<GLextension> & GLMeta::getExtensionsRequiring(const std::string & function)
{
    auto i = GLMeta_ExtensionsByFunctionString.find(function);
    if (i == GLMeta_ExtensionsByFunctionString.end())
    {
        static const std::vector<GLextension> none;
        return none;
    }
    return i->second;
}
