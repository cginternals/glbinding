
#pragma once


#include <string>
#include <utility>
#include <vector>
#include <set>
#include <cstdint>

#include <glxbinding/glxbinding_api.h>
#include <glxbinding/glxbinding_features.h>

#include <glxbinding/glx/types.h>


namespace glxbinding
{


class AbstractFunction;
class Version;


/**
*  @brief
*    Provisioning of meta information about OpenGL extensions, functions and conversion of strings and symbols of the OpenGL API
*/
class GLXBINDING_API Meta
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
    *  @param[in] glbitfield
    *     The string representation of the bitfield
    *
    *  @return
    *    The symbol identified through the bitfield string, 0 if failed
    */
    static glx::GLbitfield getBitfield(const std::string & bitfield);
    
    /**
    *  @brief
    *    Returns the list of all bitfields known by the gl.xml
    *
    *  @return
    *    The list of all bitfields known by the gl.xml
    */
    static std::vector<glx::GLbitfield> bitfields();

    /**
    *  @brief
    *    Converts a GLenum to a string
    *
    *  @param[in] glenum
    *    The enum to convert
    *
    *  @return
    *    A string representation of the GLenum symbol name
    *
    *  @remarks
    *    Beware, that some enums in the OpenGL API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    static const std::string & getString(glx::GLenum glenum);
    
    /**
    *  @brief
    *    Converts a string to a GLenum symbol
    *
    *  @param[in] glenum
    *    The string representation of the enum
    *
    *  @return
    *    The symbol identified through the enum string, 0 if failed
    */
    static glx::GLenum getEnum(const std::string & glenum);
    
    /**
    *  @brief
    *    Returns the list of all enums known by the gl.xml
    *
    *  @return
    *    The list of all enums known by the gl.xml
    */
    static std::vector<glx::GLenum> enums();

    /**
    *  @brief
    *    Converts a GLboolean to a string
    *
    *  @param[in] glboolean
    *    The boolean to convert
    *
    *  @return
    *    A string representation of the GLboolean symbol name
    *
    *  @remarks
    *    Can either be 'GL_TRUE' or 'GL_FALSE'
    */
    static const std::string & getString(const glx::GLboolean & glboolean);
    
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
    static glx::GLboolean getBoolean(const std::string & glboolean);

    /**
    *  @brief
    *    Converts a GLextension to its string representation
    *
    *  @param[in] glextension
    *    The extension to convert
    *
    *  @return
    *    The string representation of the extension
    */
    static const std::string & getString(glx::GLextension glextension);
    
    /**
    *  @brief
    *    Converts a string to an extension
    *
    *  @param[in] glextension
    *    The string representation of the extension
    *
    *  @return
    *    The symbol identified through the extension string, 'UNKNOWN' if failed
    */
    static glx::GLextension getExtension(const std::string & glextension);

    /**
    *  @brief
    *    Returns the set of all extensions known by the gl.xml
    *
    *  @return
    *    The set of all extensions known by the gl.xml
    */
    static std::set<glx::GLextension> extensions();
    
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
    static const std::set<glx::GLextension> extensions(const Version & version);

    /**
    *  @brief
    *    Returns the list of extensions that are requiring an OpenGL function
    *
    *  @param[in] glfunction
    *    The name of the function, including the 'gl' prefix
    *
    *  @return
    *    The set of extensions that are requiring an OpenGL function
    */
    static const std::set<glx::GLextension> extensions(const std::string & glfunction);
    
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
    *  @param[in] glextension
    *    The extension to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the extension
    */
    static const std::set<AbstractFunction *> functions(glx::GLextension glextension);

    /**
    *  @brief
    *    Returns the first OpenGL Version (Feature) that required the extension
    *
    *  @param[in] glextension
    *    The extension
    *
    *  @return
    *    The first OpenGL Version (Feature) that required the extension
    */
    static const Version & version(glx::GLextension glextension);
    
    /**
    *  @brief
    *    Returns the list of all Versions (Features) known by the gl.xml
    *
    *  @return
    *    The list of all Versions (Features) known by the gl.xml
    */
    static const std::set<Version> & versions();


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


} // namespace glxbinding