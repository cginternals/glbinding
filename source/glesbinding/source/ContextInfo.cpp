
#include <glesbinding/ContextInfo.h>

#include <sstream>
#include <iostream>

#include <glesbinding/Meta.h>
#include <glesbinding/Version.h>

#include <glesbinding/gles/gles.h>

#include <glesbinding/Binding.h>

using namespace gles;

namespace
{

void insertExtension(const std::string extensionName, std::set<GLextension> * extensions, std::set<std::string> * unknownExtensionNames)
{
    const auto extension = glesbinding::Meta::getExtension(extensionName);
    if (GLextension::UNKNOWN != extension)
    {
        extensions->insert(extension);
    }
    else if (unknownExtensionNames)
    {
        unknownExtensionNames->insert(extensionName);
    }
}

}

namespace glesbinding
{

std::set<GLextension> ContextInfo::extensions(std::set<std::string> * unknown)
{
    auto extensions = std::set<GLextension>{};

    const auto extensionString = glGetString(GL_EXTENSIONS);

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
    auto version = Version{};

    const auto versionString = Binding::GetString.directCall(GL_VERSION);
    version.m_major = versionString[0] - '0';
    version.m_minor = versionString[2] - '0';

    return version;
}

} // namespace glesbinding
