#include <glbinding/meta.h>

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

gl::GLuint64 getValue(const std::string & name)
{
    auto it = namesToConstants.find(name);
    if (it == namesToConstants.end())
        return -1;

    return it->second;
}

gl::GLenum getEnum(const std::string & name)
{
    gl::GLuint64 value = getValue(name);

    if (value > std::numeric_limits<gl::GLenum>::max())
    {
        return -1;
    }

    return static_cast<gl::GLenum>(value);
}

std::string getName(gl::GLenum constant)
{
    return getName(static_cast<gl::GLuint64>(constant));
}

std::string getName(gl::GLuint64 constant)
{
    auto it = constantsNames.find(constant);
    if (it == constantsNames.end())
        return "Unknown";

    return it->second;
}

std::vector<std::string> getNames(gl::GLenum constant)
{
    return getNames(static_cast<gl::GLuint64>(constant));
}

std::vector<std::string> getNames(gl::GLuint64 constant)
{
    std::vector<std::string> names;

    auto range = constantsNames.equal_range(constant);

    for (auto it = range.first; it != range.second; ++it)
    {
        names.push_back(it->second);
    }

    return names;
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
        extensions.push_back(pair.first);
    }

    return extensions;
}

} // namespace meta
} // namespace gl
