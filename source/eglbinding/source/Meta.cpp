
#include <eglbinding/Meta.h>

#include <eglbinding/egl/bitfield.h>
#include <eglbinding/egl/boolean.h>
#include <eglbinding/egl/enum.h>
#include <eglbinding/egl/extension.h>

// ToDo: multiple APIs

#include <eglbinding/Version.h>

#include "revision.h"
#include "Meta_Maps.h"


using namespace egl;

namespace {

    static const auto none = std::string{};
    static const auto noneVersion = eglbinding::Version{};
    static const auto noneStringSet = std::set<std::string>{};
    static const auto noneExtensions = std::set<egl::EGLextension>{};

}

namespace eglbinding
{

bool Meta::stringsByGL()
{
#ifdef STRINGS_BY_GL
    return true;
#else
    return false;
#endif
}

bool Meta::glByStrings()
{
#ifdef SYMBOLS_BY_STRINGS
    return true;
#else
    return false;
#endif
}

int Meta::eglRevision()
{
    return EGL_REVISION;
}

const std::string & Meta::getString(const EGLboolean boolean)
{
    auto i = Meta_StringsByBoolean.find(boolean);

    if (i == Meta_StringsByBoolean.end())
    {
        return none;
    }

    return i->second;
}

const std::string & Meta::getString(const EGLenum glenum)
{
    auto i = Meta_StringsByEnum.find(glenum);

    if (i == Meta_StringsByEnum.end())
    {
        return none;
    }

    return i->second;
}

EGLenum Meta::getEnum(const std::string & glenum)
{
    auto i = Meta_EnumsByString.find(glenum);

    if (i == Meta_EnumsByString.end())
    {
        return static_cast<EGLenum>(static_cast<unsigned int>(-1));
    }

    return i->second;
}

std::vector<EGLenum> Meta::enums()
{
    auto enums = std::vector<EGLenum>{};

    for (auto p : Meta_StringsByEnum)
    {
        enums.push_back(p.first);
    }

    return enums;
}

const std::string & Meta::getString(const EGLextension extension)
{
    auto i = Meta_StringsByExtension.find(extension);

    if (i == Meta_StringsByExtension.end())
    {
        return none;
    }

    return i->second;
}

EGLextension Meta::getExtension(const std::string & extension)
{
    auto i = Meta_ExtensionsByString.find(extension);

    if (i == Meta_ExtensionsByString.end())
    {
        return EGLextension::UNKNOWN;
    }

    return i->second;
}

std::set<EGLextension> Meta::extensions()
{
    auto extensions = std::set<EGLextension>{};

    for (auto p : Meta_StringsByExtension)
    {
        extensions.insert(p.first);
    }

    return extensions;
}

const Version & Meta::getRequiringVersion(const EGLextension extension)
{
    auto i = Meta_ReqVersionsByExtension.find(extension);

    if (i == Meta_ReqVersionsByExtension.end())
    {
        return noneVersion;
    }

    return i->second;
}

const std::set<std::string> & Meta::getRequiredFunctions(const EGLextension extension)
{
    auto i = Meta_FunctionStringsByExtension.find(extension);

    if (i == Meta_FunctionStringsByExtension.end())
    {
        return noneStringSet;
    }

    return i->second;
}

const std::set<EGLextension> & Meta::getExtensionsRequiring(const std::string & function)
{
    auto i = Meta_ExtensionsByFunctionString.find(function);

    if (i == Meta_ExtensionsByFunctionString.end())
    {
        return noneExtensions;
    }

    return i->second;
}

const std::set<Version> & Meta::versions()
{
    return Version::versions();
}

} // namespace eglbinding
