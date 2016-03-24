
#pragma once

#include <string>
#include <utility>
#include <vector>
#include <set>
#include <cstdint>

#include <glbinding/glbinding_api.h>

#include <glbinding/gl/types.h>


namespace glbinding
{


class Version;

/**
 * @brief
 *  Provisioning of meta information about OpenGL extensions, functions and conversion of strings and symbols of the OpenGL API.
 */
class GLBINDING_API Meta
{
public:
    /**
     * @brief
     *   Deleted Constructor as all functions are static.
     */
    Meta() = delete;

    /**
     * @brief
     *   Returns the revision of the parsed gl.xml file.
     *
     * @return
     *   The revision of the parsed gl.xml file.
     */
    static int glRevision();

    /**
     * @brief
     *   Converts a string into a bitfield symbol.
     *
     * @param[in] glbitfield
     *    The string representation of the bitfield.
     *
     * @return
     *   The symbol identified through the bitfield string, 0 if failed.
     */
    static gl::GLbitfield getBitfield(const std::string & glbitfield);
    
    /**
     * @brief
     *   Returns the list of all bitfields known by the gl.xml.
     *
     * @return
     *   The list of all bitfields known by the gl.xml.
     */
    static std::vector<gl::GLbitfield> bitfields();

    /**
     * @brief
     *   Converts a GLenum to a string.
     *
     * @param[in] glenum
     *   The enum to convert.
     *
     * @return
     *   A string representation of the GLenum symbol name.
     *
     * Beware, that some enums in the OpenGL API have different symbol names but identical enum values and that this function cannot differentiate between them.
     */
    static const std::string & getString(gl::GLenum glenum);
    
    /**
     * @brief
     *   Converts a string to a GLenum symbol.
     *
     * @param[in] glenum
     *   The string representation of the enum.
     *
     * @return
     *   The symbol identified through the enum string, 0 if failed.
     */
    static gl::GLenum getEnum(const std::string & glenum);
    
    /**
     * @brief
     *   Returns the list of all enums known by the gl.xml.
     *
     * @return
     *   The list of all enums known by the gl.xml.
     */
    static std::vector<gl::GLenum> enums();

    /**
     * @brief
     *   Converts a GLboolean to a string.
     *
     * @param[in] glboolean
     *   The boolean to convert.
     *
     * @return
     *   A string representation of the GLboolean symbol name.
     *
     * Can either be 'GL_TRUE' or 'GL_FALSE'.
     */
    static const std::string & getString(gl::GLboolean glboolean);
    
    /**
     * @brief
     *   Converts a string to a GLboolean symbol.
     *
     * @param[in] glboolean
     *   The string representation of the GLboolean.
     *
     * @return
     *   The symbol identified through the boolean string, 'GL_FALSE' if failed.
     */
    static gl::GLboolean getBoolean(const std::string & glboolean);

    /**
     * @brief
     *   Converts a GLextension to its string representation.
     *
     * @param[in] glextension
     *   The extension to convert.
     *
     * @return
     *   The string representation of the extension.
     */
    static const std::string & getString(gl::GLextension glextension);
    
    /**
     * @brief
     *   Converts a string to an extension.
     *
     * @param[in] glextension
     *   The string representation of the extension.
     *
     * @return
     *   The symbol identified through the extension string, 'UNKNOWN' if failed.
     */
    static gl::GLextension getExtension(const std::string & glextension);
    
    /**
     * @brief
     *   Returns the list of all extensions known by the gl.xml.
     *
     * @return
     *   The list of all extensions known by the gl.xml.
     */
    static std::set<gl::GLextension> extensions();

    /**
     * @brief
     *   Returns the list of function names that are required for the extension.
     *
     * @param[in] glextension
     *   The extension to return the required functions from.
     *
     * @return
     *   The list of function names that are required for the extension.
     */
    static const std::set<std::string> & getRequiredFunctions(gl::GLextension glextension);
    
    /**
     * @brief
     *   Returns the list of extensions that are requiring an OpenGL function.
     *
     * @param[in] glfunction
     *   The name of the function, including the 'gl' prefix.
     *
     * @return
     *   The list of extensions that are requiring an OpenGL function.
     */
    static const std::set<gl::GLextension> & getExtensionsRequiring(const std::string & glfunction);
    
    /**
     * @brief
     *   Returns the first OpenGL Version (Feature) that required the extension.
     *
     * @param[in] glextension
     *   The extension.
     *
     * @return
     *   The first OpenGL Version (Feature) that required the extension.
     */
    static const Version & getRequiringVersion(gl::GLextension glextension);
    
    /**
     * @brief
     *   Returns the list of all Versions (Features) known by the gl.xml.
     *
     * @return
     *   The list of all Versions (Features) known by the gl.xml.
     */
    static const std::set<Version> & versions();

    static const std::string & getString(gl::AttribMask glbitfield);
    static const std::string & getString(gl::BufferAccessMask glbitfield);
    static const std::string & getString(gl::BufferStorageMask glbitfield);
    static const std::string & getString(gl::ClearBufferMask glbitfield);
    static const std::string & getString(gl::ClientAttribMask glbitfield);
    static const std::string & getString(gl::ContextFlagMask glbitfield);
    static const std::string & getString(gl::ContextProfileMask glbitfield);
    static const std::string & getString(gl::FfdMaskSGIX glbitfield);
    static const std::string & getString(gl::FragmentShaderColorModMaskATI glbitfield);
    static const std::string & getString(gl::FragmentShaderDestMaskATI glbitfield);
    static const std::string & getString(gl::FragmentShaderDestModMaskATI glbitfield);
    static const std::string & getString(gl::MapBufferUsageMask glbitfield);
    static const std::string & getString(gl::MemoryBarrierMask glbitfield);
    static const std::string & getString(gl::PathFontStyle glbitfield);
    static const std::string & getString(gl::PathRenderingMaskNV glbitfield);
    static const std::string & getString(gl::PerformanceQueryCapsMaskINTEL glbitfield);
    static const std::string & getString(gl::SyncObjectMask glbitfield);
    static const std::string & getString(gl::TextureStorageMaskAMD glbitfield);
    static const std::string & getString(gl::UnusedMask glbitfield);
    static const std::string & getString(gl::UseProgramStageMask glbitfield);
    static const std::string & getString(gl::VertexHintsMaskPGI glbitfield);

private:
    /**
     * @brief
     *   Returns the bucket index of an OpenGL identifier used for the actual lookup into the compile-time maps.
     *
     * @param[in] identifier
     *   The identifier for the bucket lookup.
     *
     * @param[in] prefixLength
     *   The length of the prefix (e.g., 'gl' or 'GL_') to omit to get the actual first character of the identifier.
     *
     * @return
     *   The bucket index of an OpenGL identifier.
     */
    static size_t alphabeticalGroupIndex(const std::string & identifier, std::uint8_t prefixLength);
};


} // namespace gl
