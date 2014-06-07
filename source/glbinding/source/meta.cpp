
#include <glbinding/Meta.h>

#include <sstream>
#include <unordered_map>

#include <glbinding/enums.h>
#include <glbinding/Extension.h>

#include "Meta_StringsByEnum.hpp"
#include "Meta_EnumsByString.hpp"

#include "Meta_StringsByExtension.hpp"
#include "Meta_ExtensionsByString.hpp"

#include "Meta_ExtensionsByFunctionString.hpp"
#include "Meta_FunctionStringsByExtension.hpp"

#include "Meta_ReqVersionsByExtension.hpp"
//#include "Meta_RemVersionsByExtension.hpp"


namespace gl 
{


const std::string & Meta::getString(const gl::GLenum glenum)
{
    return Meta_StringsByEnum::get(glenum);
}

GLenum Meta::getEnum(const std::string & glenum)
{
    return Meta_EnumsByString::get(glenum);
}

const std::string & Meta::getString(const Extension extension)
{
    return Meta_StringsByExtension::get(extension);
}

Extension Meta::getExtension(const std::string & extension)
{
    return Meta_ExtensionsByString::get(extension);
}

const Meta::ucharpair & Meta::getRequiringVersion(const Extension extension)
{
    return Meta_ReqVersionsByExtension::get(extension);
}

//const Meta::ucharpair & Meta::getRemovingVersion(const Extension extension)
//{
//    return Meta_RemVersionsByExtension::get(extension);
//}


const std::vector<std::string> & Meta::getRequiredFunctions(const Extension extension)
{
    return Meta_FunctionStringsByExtension::get(extension);
}

const std::vector<Extension> & Meta::getExtensionsRequiring(const std::string & function)
{
    return Meta_ExtensionsByFunctionString::get(function);
}

} // namespace gl
