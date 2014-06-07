#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <utility>
#include <vector>
#include <unordered_map>

#include <glbinding/types.h>
#include <glbinding/Extension.h>
#include <glbinding/enums.h>

namespace gl 
{

class GLBINDING_API  Meta
{
public:
    Meta() = delete;

    static const std::string & getString(gl::GLenum glenum);
    static gl::GLenum getEnum(const std::string & glenum);

    static const std::string & getString(Extension extension);
    static Extension getExtension(const std::string & extension);

    static const std::vector<std::string> & getRequiredFunctions(Extension extension);
    static const std::vector<Extension> & getExtensionsRequiring(const std::string & function);

    using ucharpair = std::pair<unsigned char, unsigned char>;
    static const ucharpair & getRequiringVersion(Extension extension);
    //static const ucharpair & getRemovingVersion(Extension extension);

protected:
    static const std::unordered_map<std::string, GLenum> s_enumsByString;
    static const std::unordered_map<GLenum, std::string> s_stringsByEnum;

    static const std::unordered_map<std::string, Extension> s_extensionsByString;
    static const std::unordered_map<Extension, std::string> s_stringsByExtension;

    static const std::unordered_map<Extension, ucharpair> s_reqVersionsByExtension;
    //static const std::unordered_map<Extension, ucharpair> s_remVersionsByExtension;

    static const std::unordered_map<Extension, std::vector<std::string>> s_functionStringsByExtension;
    static const std::unordered_map<std::string, std::vector<Extension>> s_extensionsByFunctionString;
};

} // namespace gl
