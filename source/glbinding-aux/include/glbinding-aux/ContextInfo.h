
#pragma once


#include <set>
#include <string>

#include <glbinding/Version.h>
#include <glbinding/AbstractFunction.h>

#include <glbinding-aux/glbinding-aux_api.h>
#include <glbinding-aux/glbinding-aux_features.h>


namespace gl
{
    enum class GLextension : int;
}


namespace glbinding
{


namespace aux
{


/**
 * @brief
 *   The ContextInfo class allows for access to metainformation about a context.
 *   The information is only valid for the currently active context
*/
class GLBINDING_AUX_API ContextInfo
{
public:
    /**
    *  @brief
    *    Deleted Constructor; this class is intended to be used without instantiation
    */
    ContextInfo() = delete;

    /**
    *  @brief
    *    Gathers information about the available extensions in the current context
    *
    *  @return
    *    The list of available extensions known by glbinding
    */
    static std::set<gl::GLextension> extensions();

    /**
    *  @brief
    *    Gathers information about the available extensions in the current context
    *
    *  @param[out] unknown
    *    The list of extension names for available extensions not known by glbinding
    *
    *  @return
    *    The list of available extensions known by glbinding
    */
    static std::set<gl::GLextension> extensions(std::set<std::string> & unknown);

    /**
    *  @brief
    *    Queries the renderer string
    *
    *  @return
    *    The renderer string
    */
    static std::string renderer();

    /**
    *  @brief
    *    Queries the vendor string
    *
    *  @return
    *    The vendor string
    */
    static std::string vendor();

    /**
    *  @brief
    *    Queries the OpenGL feature number
    *
    *  @return
    *    The version encoding the OpenGL feature
    */
    static Version version();

    /**
    * @brief
    *   Queries if all given extensions are supported
    *
    * @param[in] extensions
    *   A set of extensions that are tested for availability in the current context
    *
    * @return
    *   `true` if all given extensions are supported by the current context, else `false`
    */
    static bool supported(const std::set<gl::GLextension> & extensions);

    /**
    *  @brief
    *    Queries if all given extensions are supported
    *
    *  @param[in] extensions
    *    A set of extensions that are tested for availability in the current context
    *
    *  @param[out] unsupported
    *    The subset of extensions (based on the given extensions) not supported by the current context
    *
    *  @return
    *    `true` if all given extensions are supported by the current context, else `false`
    */
    static bool supported(const std::set<gl::GLextension> & extensions , std::set<gl::GLextension> & unsupported);

    /**
    *  @brief
    *    Queries all missing extensions and unresolved functions for the given OpenGL feature
    *
    *  @param[in] version
    *    The version for which all functions and extensions are checked
    *  @param[in] resolve (optional)
    *    Specifies whether or not functions shall be explicitly resolved before querrying their status
    *
    *  @return
    *    `true` if all extensions required for the given feature are supported, else `false`
    */
    static bool supported(const Version & version, bool resolve = false);

    /**
    *  @brief
    *    Queries all missing extensions for the given OpenGL feature
    *
    *  @param[in] version
    *    The version for which all functions and extensions are checked
    *  @param[out] unsupportedExtensions
    *    The set of extensions missing by the current context for full feature support
    *  @param[out] unsupportedFunctions
    *    The set of functions that could not be resolved in the current context
    *  @param[in] resolve (optional)
    *    Specifies whether or not functions shall be explicitly resolved before querrying their status
    *
    *  @return
    *   `true` if all extensions required for the given feature are supported, else `false`
    */
    static bool supported(const Version & version
        , std::set<gl::GLextension> & unsupportedExtensions
        , std::set<AbstractFunction *> & unsupportedFunctions
        , bool resolve = false);
};


} } // namespace glbinding::aux
