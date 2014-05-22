#include <glbinding/meta.h>

#include "declarations.h"

#include <limits>
#include <sstream>

namespace gl {
namespace meta {

std::string getName(Extension extension)
{
    auto it = extension_to_name.find(extension);

    if (it == extension_to_name.end())
        return "UnknownExtension";

    return it->second;
}

Extension extensionFromString(const std::string & name)
{
    auto it = name_to_extension.find(name);

    if (it == name_to_extension.end())
        return Extension::Unknown;

    return it->second;
}

gl::GLenum getEnum(const std::string & name)
{
    auto it = name_to_enum.find(name);

    if (it == name_to_enum.end())
        return gl::GLenum(static_cast<unsigned int>(-1));

    return it->second;
}

std::string getName(gl::GLenum constant)
{
    auto it = enum_to_name.find(constant);

    if (it == enum_to_name.end())
    {
        std::stringstream ss;
        ss << "UnknownEnum(0x" << std::hex << static_cast<unsigned int>(constant) << ")";
        return ss.str();
    }

    return it->second;
}

std::pair<unsigned char, unsigned char> coreVersionForExtension(Extension extension)
{
    auto it = extension_core_versions.find(extension);
    if (it == extension_core_versions.end())
        return std::pair<unsigned char, unsigned char>(0, 0);

    return it->second;
}

std::vector<Extension> allExtensions()
{
    std::vector<Extension> extensions;

    for (auto & pair : extension_to_name)
    {
        if (pair.first == Extension::Unknown)
            continue;

        extensions.push_back(pair.first);
    }

    return extensions;
}

std::set<gl::GLenum> allEnums()
{
    std::set<gl::GLenum> values;

    for (auto & pair : enum_to_name)
    {
        values.insert(pair.first);
    }

    return values;
}

std::vector<std::string> getRequiredFunctions(Extension extension)
{
    auto it = extension_to_functions.find(extension);

    if (it == extension_to_functions.end())
        return std::vector<std::string>();

    return it->second;
}

std::vector<Extension> getExtensionsRequiring(const std::string & functionName)
{
    auto it = function_to_extensions.find(functionName);

    if (it == function_to_extensions.end())
        return std::vector<Extension>();

    return it->second;
}

} // namespace meta
} // namespace gl
