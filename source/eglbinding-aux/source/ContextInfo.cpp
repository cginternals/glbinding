
#include <eglbinding-aux/ContextInfo.h>

#include <sstream>
#include <iostream>

#include <eglbinding/AbstractFunction.h>

#include <eglbinding/Version.h>
#include <eglbinding/egl/egl.h>
#include <eglbinding/Binding.h>

#include <eglbinding-aux/Meta.h>


using namespace egl;


namespace
{


void insertExtension(
    const std::string & extensionName
,   std::set<EGLextension> * extensions
,   std::set<std::string> * unknownExtensionNames)
{
    const auto extension = eglbinding::aux::Meta::getExtension(extensionName);

    if (EGLextension::UNKNOWN != extension)
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

std::set<EGLextension> extensions(std::set<std::string> * const unknown)
{
    std::set<EGLextension> extensions;

    const auto egl_display = eglGetDisplay( (EGLNativeDisplayType) EGL_DEFAULT_DISPLAY );
    const auto extensionString = eglQueryString(egl_display, (EGLint)EGL_EXTENSIONS);

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

bool supported(const std::set<egl::EGLextension> & extensions, std::set<egl::EGLextension> * unsupported)
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
    const std::set<eglbinding::AbstractFunction *> & functions
,   std::set<eglbinding::AbstractFunction *> * unsupported
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

bool supported(const eglbinding::Version & version
    , const bool resolve
    , std::set<egl::EGLextension> * unsupportedExtensions
    , std::set<eglbinding::AbstractFunction *> * unsupportedFunctions)
{
    const auto requiredExtensions = eglbinding::aux::Meta::extensions(version);
    const auto requiredFunctions = eglbinding::aux::Meta::functions(version);

    auto support = true;

    support &= supported(requiredExtensions, unsupportedExtensions);
    support &= supported(requiredFunctions, unsupportedFunctions, resolve);

    return support;
}

} // namespace


namespace eglbinding { namespace aux
{

std::string ContextInfo::vendor()
{
    const auto egl_display = eglGetDisplay( (EGLNativeDisplayType) EGL_DEFAULT_DISPLAY );

    auto s = reinterpret_cast<const char *>(eglQueryString(egl_display, (EGLint)EGL_VENDOR));

    if (!s)
    {
        return "";
    }

    return std::string{ s };
}

Version ContextInfo::version()
{
    const auto egl_display = eglGetDisplay( (EGLNativeDisplayType) EGL_DEFAULT_DISPLAY );

    const auto versionString = eglQueryString(egl_display, (EGLint)EGL_VERSION);

    if (versionString == nullptr)
    {
        return Version();
    }

    return Version(versionString[0] - '0', versionString[2] - '0');
}

std::set<EGLextension> ContextInfo::extensions()
{
    return ::extensions(nullptr);
}

std::set<EGLextension> ContextInfo::extensions(std::set<std::string> & unknown)
{
    return ::extensions(&unknown);
}

bool ContextInfo::supported(const std::set<egl::EGLextension> & extensions)
{
    return ::supported(extensions, nullptr);
}

bool ContextInfo::supported(const std::set<egl::EGLextension> & extensions, std::set<egl::EGLextension> & unsupported)
{
    return ::supported(extensions, &unsupported);
}

bool ContextInfo::supported(const Version & version, const bool resolve)
{
    return ::supported(version, resolve, nullptr, nullptr);
}

bool ContextInfo::supported(const Version & version
    , std::set<egl::EGLextension> & unsupportedExtensions
    , std::set<AbstractFunction *> & unsupportedFunctions
    , const bool resolve)
{
    return ::supported(version, resolve, &unsupportedExtensions, &unsupportedFunctions);
}


} } // namespace eglbinding::aux
