
#pragma once

#include <set>
#include <string>

#include <glbinding/glbinding_api.h>


namespace gl
{
    enum class GLextension : int;
}


namespace glbinding
{


class Version;

/**
 * @brief
 *   The ContextInfo class allows for access to metainformation about a context.
 *   The information is only valid for the currently active context.
 */
class GLBINDING_API ContextInfo
{
public:
    /**
     * @brief
     *   Deleted Constructor; this class is intended to be used without instantiation.
     */
    ContextInfo() = delete;

    /**
     * @brief
     *   Gathers information about the available extensions in the current context.
     *
     * @param[out] unknown (optional)
     *   The list of extension names for available extensions not known by glbinding.
     *
     * @return
     *   The list of available extensions known by glbinding.
     */
    static std::set<gl::GLextension> extensions(std::set<std::string> * unknown = nullptr);

    /**
     * @brief
     *   Queries the renderer string.
     *
     * @return
     *   The renderer string.
     */
    static std::string renderer();

    /**
     * @brief
     *   Queries the vendor string.
     *
     * @return
     *   The vendor string.
     */
    static std::string vendor();

    /**
     * @brief
     *   Queries the OpenGL feature number.
     *
     * @return
     *   The version encoding the OpenGL feature.
     */
    static Version version();
};


} // namespace glbinding
