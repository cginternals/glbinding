#pragma once

#include <eglbinding/eglbinding_api.h>

#include <string>
#include <utility>
#include <vector>
#include <set>

#include <eglbinding/egl/types.h>


namespace eglbinding
{

class Version;


class EGLBINDING_API Meta
{
public:
    Meta() = delete;

    static bool stringsByGL();
    static bool glByStrings();

    static int eglRevision();

    static const std::string & getString(egl::EGLenum glenum);
    static egl::EGLenum getEnum(const std::string & glenum);
    static std::vector<egl::EGLenum> enums();

    static const std::string & getString(egl::EGLboolean boolean);
    static egl::EGLboolean getBoolean(const std::string & boolean);

    static const std::string & getString(egl::EGLextension extension);
    static egl::EGLextension getExtension(const std::string & extension);
    static std::set<egl::EGLextension> extensions();

    static const std::set<std::string> & getRequiredFunctions(egl::EGLextension extension);
    static const std::set<egl::EGLextension> & getExtensionsRequiring(const std::string & function);

    static const Version & getRequiringVersion(egl::EGLextension extension);
    static const std::set<Version> & versions();
};

} // namespace egl
