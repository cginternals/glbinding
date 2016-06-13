
#include <glbinding/ContextInfo.h>

#include <sstream>
#include <iostream>

#include <glbinding/Meta.h>
#include <glbinding/Version.h>

#include <glbinding/gl/gl.h>

#include <glbinding/Binding.h>
#include <glbinding/Meta.h>

using namespace gl;


namespace
{


void insertExtension(
    const std::string & extensionName
,   std::set<GLextension> * extensions
,   std::set<std::string> * unknownExtensionNames)
{
    const auto extension = glbinding::Meta::getExtension(extensionName);

    if (GLextension::UNKNOWN != extension)
    {
        extensions->insert(extension);
    }
    else if (unknownExtensionNames)
    {
        unknownExtensionNames->insert(extensionName);
    }
}

// Implementation for functions with optional parameters (extensions, supported). 
// This design prefers a reference focussed interface over optional 
// parameters via pointers while maintaining a single implementation.

std::set<GLextension> extensions(std::set<std::string> * const unknown)
{
    const auto v = glbinding::ContextInfo::version();

    if (v <= glbinding::Version(1, 0)) // OpenGL 1.0 doesn't support extensions
    {
        return std::set<GLextension>{};
    }

    auto extensions = std::set<GLextension>{};

    if (v < glbinding::Version(3, 0))
    {
        const auto extensionString = glGetString(GL_EXTENSIONS);

        if (!extensionString)
        {
            return extensions;
        }

        std::istringstream stream{ reinterpret_cast<const char *>(extensionString) };
        auto extensionName = std::string{ };

        while (std::getline(stream, extensionName, ' '))
        {
            insertExtension(extensionName, &extensions, unknown);
        }
    }
    else
    {
        auto numExtensions = 0;
        glGetIntegerv(GL_NUM_EXTENSIONS, &numExtensions);

        for (GLuint i = 0; i < static_cast<GLuint>(numExtensions); ++i)
        {
            const auto name = glGetStringi(GL_EXTENSIONS, i);
            if (name)
            {
                insertExtension(reinterpret_cast<const char*>(name), &extensions, unknown);
            }
        }
    }

    return extensions;
}

bool supported(const std::set<gl::GLextension> & extensions, std::set<gl::GLextension> * unsupported)
{
    const auto supportedExtensions = ::extensions(nullptr);
    auto support = true;

    for (const auto ext : extensions)
    {
        if (supportedExtensions.find(ext) != supportedExtensions.end())
            continue;

        support &= false;
        if (unsupported)
            unsupported->insert(ext);
    }
    return support;
}

bool supported(const glbinding::Version & version, std::set<gl::GLextension> * unsupported)
{
    const auto required = glbinding::Meta::extensions(version);

    return supported(required, unsupported);
}

} // namespace


namespace glbinding
{

std::string ContextInfo::renderer()
{
    return std::string{reinterpret_cast<const char *>(glGetString(GL_RENDERER))};
}

std::string ContextInfo::vendor()
{
    return std::string{reinterpret_cast<const char *>(glGetString(GL_VENDOR))};
}

Version ContextInfo::version()
{
    auto majorVersion = 0;
    auto minorVersion = 0;

    Binding::GetIntegerv.directCall(GL_MAJOR_VERSION, &majorVersion);
    Binding::GetIntegerv.directCall(GL_MINOR_VERSION, &minorVersion);

    const auto version = Version(static_cast<unsigned char>(majorVersion & 255)
        , static_cast<unsigned char>(minorVersion & 255));

    // probably version below 3.0
    if (GL_INVALID_ENUM == Binding::GetError.directCall())
    {
        const auto versionString = Binding::GetString.directCall(GL_VERSION);
        return Version(versionString[0] - '0', versionString[2] - '0');
    }

    return version;
}

std::set<GLextension> ContextInfo::extensions()
{
    return ::extensions(nullptr);
}

std::set<GLextension> ContextInfo::extensions(std::set<std::string> & unknown)
{
    return ::extensions(&unknown);
}

bool ContextInfo::supported(const std::set<gl::GLextension> & extensions)
{
    return ::supported(extensions, nullptr);
}

bool ContextInfo::supported(const std::set<gl::GLextension> & extensions, std::set<gl::GLextension> & unsupported)
{
    return ::supported(extensions, &unsupported);
}

bool ContextInfo::supported(const Version & version)
{
    return ::supported(version, nullptr);
}

bool ContextInfo::supported(const Version & version, std::set<gl::GLextension> & unsupported)
{
    return ::supported(version, &unsupported);
}


} // namespace glbinding
