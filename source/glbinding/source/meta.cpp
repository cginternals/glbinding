#include <glbinding/meta.h>
#include <glbinding/GLenum.h>

#include "declarations.h"

#include <limits>

namespace gl {
namespace meta {

std::string getName(Extension extension)
{
    auto it = extensionNames.find(extension);
    if (it == extensionNames.end())
        return "Unknown";

    return it->second;
}

Extension extensionFromString(const std::string & name)
{
    auto it = namesToExtension.find(name);
    if (it == namesToExtension.end())
        return Extension::Unknown;

    return it->second;
}

gl::GLenum getEnum(const std::string & name)
{
    auto it = namesToConstants.find(name);
    if (it == namesToConstants.end())
        return static_cast<gl::GLenum>(static_cast<unsigned int>(-1));

    return it->second;
}

std::string getName(gl::GLenum constant)
{
    auto it = constantsNames.find(constant);
    if (it == constantsNames.end())
        return "Unknown";

    return it->second;
}

std::pair<unsigned char, unsigned char> coreVersionForExtension(Extension extension)
{
    auto it = extensionVersions.find(extension);
    if (it == extensionVersions.end())
        return std::pair<unsigned char, unsigned char>(0, 0);

    return it->second;
}

std::vector<Extension> allExtensions()
{
    std::vector<Extension> extensions;

    for (auto & pair : extensionNames)
    {
        if (pair.first == Extension::Unknown)
            continue;

        extensions.push_back(pair.first);
    }

    return extensions;
}

//std::set<gl::GLuint64> allValues()
//{
//    std::set<gl::GLuint64> values;

//    for (auto & pair : constantsNames)
//    {
//        values.insert(pair.first);
//    }

//    return values;
//}

std::set<gl::GLenum> allEnums()
{
    std::set<gl::GLenum> values;

    for (auto & pair : constantsNames)
    {
        gl::GLenum value = pair.first;
//        if (value > std::numeric_limits<gl::GLenum>::max())
//            continue;

        values.insert(static_cast<gl::GLenum>(value));
    }

    return values;
}

std::set<std::string> getRequiredFunctions(Extension extension)
{
    auto it = requiredFunctionsByExtension.find(extension);
    if (it == requiredFunctionsByExtension.end())
        return std::set<std::string>();

    return it->second;
}

std::set<Extension> getExtensionsRequiring(const std::string & functionName)
{
    auto it = extensionsRequiringFunction.find(functionName);
    if (it == extensionsRequiringFunction.end())
        return std::set<Extension>();

    return it->second;
}

} // namespace meta
} // namespace gl
