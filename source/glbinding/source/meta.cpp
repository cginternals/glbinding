
#include <glbinding/Meta.h>

#include <sstream>

#include <glbinding/enums.h>
#include <glbinding/Extension.h>


namespace gl 
{

const std::string & Meta::getString(const gl::GLenum glenum)
{
    auto i = s_stringsByEnum.find(glenum);

    if (i == s_stringsByEnum.end())
    {
        static const std::string none;
        return none;
    }
    return i->second;
}

gl::GLenum Meta::getEnum(const std::string & glenum)
{
    auto i = s_enumsByString.find(glenum);

    if (i == s_enumsByString.end())
        return static_cast<GLenum>(-1);

    return i->second;
}

const std::string & Meta::getString(const Extension extension)
{
    auto i = s_stringsByExtension.find(extension);

    if (i == s_stringsByExtension.end())
    {
        static const std::string none;
        return none;
    }
    return i->second;
}

Extension Meta::getExtension(const std::string & extension)
{
    auto i = s_extensionsByString.find(extension);

    if (i == s_extensionsByString.end())
        return Extension::UNKNOWN;

    return i->second;
}

const Meta::ucharpair & Meta::getRequiringVersion(const Extension extension)
{
    auto i = s_reqVersionsByExtension.find(extension);
    if (i == s_reqVersionsByExtension.end())
    {
        static const ucharpair none(0, 0);
        return none;
    }
    return i->second;
}

//const Meta::ucharpair & Meta::getRemovingVersion(const Extension extension)
//{
//    //auto i = s_remVersionsByExtension.find(extension);
//    //if (i == s_remVersionsByExtension.end())
//    //    return ucharpair(0, 0);
//
//    //return i->second;
//    return ucharpair(0, 0);
//}

const std::vector<std::string> & Meta::getRequiredFunctions(const Extension extension)
{
    auto i = s_functionStringsByExtension.find(extension);

    if (i == s_functionStringsByExtension.end())
    {
        static const std::vector<std::string> none;
        return none;
    }
    return i->second;
}

const std::vector<Extension> & Meta::getExtensionsRequiring(const std::string & function)
{
    auto i = s_extensionsByFunctionString.find(function);

    if (i == s_extensionsByFunctionString.end())
    {
        static const std::vector<Extension> none;
        return none;
    }
    return i->second;
}

} // namespace gl
