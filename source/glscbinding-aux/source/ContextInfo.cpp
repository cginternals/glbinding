
#include <glscbinding-aux/ContextInfo.h>

#include <sstream>
#include <iostream>

#include <glscbinding/AbstractFunction.h>

#include <glscbinding/Version.h>
#include <glscbinding/glsc/glsc.h>
#include <glscbinding/Binding.h>

#include <glscbinding-aux/Meta.h>


using namespace glsc;


namespace
{


void insertExtension(
    const std::string & extensionName
,   std::set<GLextension> * extensions
,   std::set<std::string> * unknownExtensionNames)
{
    const auto extension = glscbinding::aux::Meta::getExtension(extensionName);

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
    auto extensions = std::set<GLextension>{};

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

    return extensions;
}

bool supported(const std::set<glsc::GLextension> & extensions, std::set<glsc::GLextension> * unsupported)
{
    const auto supportedExtensions = ::extensions(nullptr);
    auto support = true;

    for (const auto extension : extensions)
    {
        if (supportedExtensions.find(extension) != supportedExtensions.cend())
        {
            continue;
        }

        support &= false;
        if (unsupported)
        {
            unsupported->insert(extension);
        }
    }

    return support;
}

bool supported(
    const std::set<glscbinding::AbstractFunction *> & functions
,   std::set<glscbinding::AbstractFunction *> * unsupported
,   const bool resolve)
{
    auto support = true;

    for (const auto function : functions)
    {
        if(resolve)
        {
            function->resolveAddress();
        }

        if (function->isResolved())
        {
            continue;
        }

        support &= false;
        if (unsupported)
        {
            unsupported->insert(function);
        }
    }

    return support;
}

bool supported(const glscbinding::Version & version
    , const bool resolve
    , std::set<glsc::GLextension> * unsupportedExtensions
    , std::set<glscbinding::AbstractFunction *> * unsupportedFunctions)
{
    const auto requiredExtensions = glscbinding::aux::Meta::extensions(version);
    const auto requiredFunctions = glscbinding::aux::Meta::functions(version);

    auto support = true;

    support &= supported(requiredExtensions, unsupportedExtensions);
    support &= supported(requiredFunctions, unsupportedFunctions, resolve);

    return support;
}

} // namespace


namespace glscbinding { namespace aux
{

std::string ContextInfo::renderer()
{
    auto s = reinterpret_cast<const char *>(glGetString(GL_RENDERER));

    if (!s)
    {
        return "";
    }

    return std::string{ s };
}

std::string ContextInfo::vendor()
{
    auto s = reinterpret_cast<const char *>(glGetString(GL_VENDOR));

    if (!s)
    {
        return "";
    }

    return std::string{ s };
}

Version ContextInfo::version()
{
    const auto versionString = Binding::GetString.directCall(GL_VERSION);

    if (versionString == nullptr)
    {
        return Version();
    }

    return Version(versionString[0] - '0', versionString[2] - '0');
}

std::set<GLextension> ContextInfo::extensions()
{
    return ::extensions(nullptr);
}

std::set<GLextension> ContextInfo::extensions(std::set<std::string> & unknown)
{
    return ::extensions(&unknown);
}

bool ContextInfo::supported(const std::set<glsc::GLextension> & extensions)
{
    return ::supported(extensions, nullptr);
}

bool ContextInfo::supported(const std::set<glsc::GLextension> & extensions, std::set<glsc::GLextension> & unsupported)
{
    return ::supported(extensions, &unsupported);
}

bool ContextInfo::supported(const Version & version, const bool resolve)
{
    return ::supported(version, resolve, nullptr, nullptr);
}

bool ContextInfo::supported(const Version & version
    , std::set<glsc::GLextension> & unsupportedExtensions
    , std::set<AbstractFunction *> & unsupportedFunctions
    , const bool resolve)
{
    return ::supported(version, resolve, &unsupportedExtensions, &unsupportedFunctions);
}


} } // namespace glscbinding::aux
