
#include <eglbinding/ContextInfo.h>

#include <sstream>
#include <iostream>

#include <eglbinding/Meta.h>
#include <eglbinding/Version.h>

#include <eglbinding/egl/egl.h>

#include <eglbinding/Binding.h>

using namespace egl;

namespace
{

void insertExtension(const std::string & extensionName, std::set<EGLextension> * extensions, std::set<std::string> * unknownExtensionNames)
{
    const auto extension = eglbinding::Meta::getExtension(extensionName);
    if (EGLextension::UNKNOWN != extension)
    {
        extensions->insert(extension);
    }
    else if (unknownExtensionNames)
    {
        unknownExtensionNames->insert(extensionName);
    }
}

}

namespace eglbinding
{

std::set<EGLextension> ContextInfo::extensions(std::set<std::string> * unknown)
{
    auto extensions = std::set<EGLextension>{};

    const auto extensionString = eglQueryString(nullptr, static_cast<EGLint>(EGL_EXTENSIONS));

    if (extensionString)
    {
        std::istringstream stream{reinterpret_cast<const char *>(extensionString)};
        auto extensionName = std::string{};
        while (std::getline(stream, extensionName, ' '))
        {
            insertExtension(extensionName, &extensions, unknown);
        }
    }

    return extensions;
}

std::string ContextInfo::vendor()
{
    return std::string{reinterpret_cast<const char *>(eglQueryString(nullptr, static_cast<EGLint>(EGL_VENDOR)))};
}

Version ContextInfo::version()
{
    auto version = Version{};

    const auto versionString = eglQueryString(nullptr, static_cast<EGLint>(EGL_VERSION));
    version.m_major = versionString[0] - '0';
    version.m_minor = versionString[2] - '0';

    return version;
}

} // namespace eglbinding
