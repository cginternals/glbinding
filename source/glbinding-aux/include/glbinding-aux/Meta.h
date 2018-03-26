
#pragma once


#include <string>
#include <utility>
#include <vector>
#include <set>
#include <cstdint>

#include <glbinding-aux/glbinding-aux_api.h>
#include <glbinding-aux/glbinding-aux_features.h>

#include <glbinding/gl/types.h>
#include <glbinding/AbstractFunction.h>


namespace glbinding
{


class Version;


namespace aux
{


/**
*  @brief
*    Provisioning of meta information about OpenGL extensions, functions and conversion of strings and symbols of the OpenGL API
*/
class GLBINDING_AUX_API Meta
{
public:
    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Meta() = delete;

    /**
    *  @brief
    *    Returns the revision of the parsed gl.xml file
    *
    *  @return
    *    The revision of the parsed gl.xml file
    */
    static int glRevision();

    /**
    *  @brief
    *    Converts a string into a bitfield symbol
    *
    *  @param[in] bitfield
    *     The string representation of the bitfield
    *
    *  @return
    *    The symbol identified through the bitfield string, 0 if failed
    */
    static gl::GLbitfield getBitfield(const std::string & bitfield);
    
    /**
    *  @brief
    *    Returns the list of all bitfields known by the gl.xml
    *
    *  @return
    *    The list of all bitfields known by the gl.xml
    */
    static std::vector<gl::GLbitfield> bitfields();

    /**
    *  @brief
    *    Converts a GLenum to a string
    *
    *  @param[in] enum
    *    The enum to convert
    *
    *  @return
    *    A string representation of the GLenum symbol name
    *
    *  @remarks
    *    Beware, that some enums in the OpenGL API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    static const std::string & getString(gl::GLenum glenum);
    
    /**
    *  @brief
    *    Converts a string to a enum symbol
    *
    *  @param[in] enum
    *    The string representation of the enum
    *
    *  @return
    *    The symbol identified through the enum string, 0 if failed
    */
    static gl::GLenum getEnum(const std::string & glenum);
    
    /**
    *  @brief
    *    Returns the list of all enums known by the gl.xml
    *
    *  @return
    *    The list of all enums known by the gl.xml
    */
    static std::vector<gl::GLenum> enums();

    /**
    *  @brief
    *    Converts a GLboolean to a string
    *
    *  @param[in] boolean
    *    The boolean to convert
    *
    *  @return
    *    A string representation of the GLboolean symbol name
    *
    *  @remarks
    *    Can either be 'GL_TRUE' or 'GL_FALSE'
    */
    static const std::string & getString(const gl::GLboolean & boolean);
    
    /**
    *  @brief
    *    Converts a string to a GLboolean symbol
    *
    *  @param[in] glboolean
    *    The string representation of the GLboolean
    *
    *  @return
    *    The symbol identified through the boolean string, 'GL_FALSE' if failed
    */
    static gl::GLboolean getBoolean(const std::string & boolean);

    /**
    *  @brief
    *    Converts a GLextension to its string representation
    *
    *  @param[in] extension
    *    The extension to convert
    *
    *  @return
    *    The string representation of the extension
    */
    static const std::string & getString(gl::GLextension extension);
    
    /**
    *  @brief
    *    Converts a string to an extension
    *
    *  @param[in] extension
    *    The string representation of the extension
    *
    *  @return
    *    The symbol identified through the extension string, 'UNKNOWN' if failed
    */
    static gl::GLextension getExtension(const std::string & extension);

    /**
    *  @brief
    *    Returns the set of all extensions known by the gl.xml
    *
    *  @return
    *    The set of all extensions known by the gl.xml
    */
    static std::set<gl::GLextension> extensions();
    
    /**
    *  @brief
    *    Returns the set of extensions that are required for by the given version
    *
    *  @param[in] version
    *    The version/feature to return the required extensions for.
    *    If an null version is given, all extensions that have no
    *    version/feature associated are returned instead
    *
    *  @return
    *    The set of extensions that should be supported for the given version.
    *    All non versioned extensions can be queried by providing the null version
    */
    static const std::set<gl::GLextension> extensions(const Version & version);

    /**
    *  @brief
    *    Returns the list of extensions that are requiring an OpenGL function
    *
    *  @param[in] function
    *    The name of the function, including the 'gl' prefix
    *
    *  @return
    *    The set of extensions that are requiring an OpenGL function
    */
    static const std::set<gl::GLextension> extensions(const std::string & glfunction);

    /**
    *  @brief
    *    Returns the list of features that are requiring an OpenGL function
    *
    *  @param[in] function
    *    The name of the function, including the 'gl' prefix
    *
    *  @return
    *    The set of features that are requiring an OpenGL function
    */
    static const std::set<Version> versions(const std::string & glfunction);
    
    /**
    *  @brief
    *    Returns the set of functions that are required for the version
    *
    *  @param[in] version
    *    The version to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the version
    *
    *  @remarks
    *    This is exclusive (preceeding versions are ignored)
    */
    static const std::set<AbstractFunction *> functions(const Version & version);

    /**
    *  @brief
    *    Returns the set of functions that are required for the extension
    *
    *  @param[in] extension
    *    The extension to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the extension
    */
    static const std::set<AbstractFunction *> functions(gl::GLextension extension);

    /**
    *  @brief
    *    Returns the first OpenGL Version (Feature) that required the extension
    *
    *  @param[in] extension
    *    The extension
    *
    *  @return
    *    The first GL Version (Feature) that required the extension
    */
    static const Version & version(gl::GLextension glextension);
    
    /**
    *  @brief
    *    Returns the list of all Versions (Features) known by the gl.xml
    *
    *  @return
    *    The list of all Versions (Features) known by the gl.xml
    */
    static const std::set<Version> & versions();

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::AttribMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::BufferAccessMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::BufferStorageMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::ClearBufferMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::ClientAttribMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::ContextFlagMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::ContextProfileMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::FfdMaskSGIX bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::FragmentShaderColorModMaskATI bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::FragmentShaderDestMaskATI bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::FragmentShaderDestModMaskATI bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::MapBufferUsageMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::MemoryBarrierMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::OcclusionQueryEventMaskAMD bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::PathFontStyle bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::PathMetricMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::PathRenderingMaskNV bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::PerformanceQueryCapsMaskINTEL bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::SyncObjectMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::TextureStorageMaskAMD bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::UnusedMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::UseProgramStageMask bitfield);

    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gl::VertexHintsMaskPGI bitfield);


private:
    /**
    *  @brief
    *    Returns the bucket index of an OpenGL identifier used for the actual lookup into the compile-time maps
    *
    *  @param[in] identifier
    *    The identifier for the bucket lookup
    *
    *  @param[in] prefixLength
    *    The length of the prefix (e.g., 'gl' or 'GL_') to omit to get the actual first character of the identifier
    *
    *  @return
    *    The bucket index of an OpenGL identifier
    */
    static size_t alphabeticalGroupIndex(const std::string & identifier, std::uint8_t prefixLength);
};


} } // namespace glbinding::aux
