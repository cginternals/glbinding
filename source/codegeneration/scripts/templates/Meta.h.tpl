
#pragma once


#include <string>
#include <utility>
#include <vector>
#include <set>
#include <cstdint>

#include <{{api}}binding-aux/{{api}}binding-aux_api.h>
#include <{{api}}binding-aux/{{api}}binding-aux_features.h>

#include <{{api}}binding/{{api}}/types.h>
#include <{{api}}binding/AbstractFunction.h>


namespace {{api}}binding
{


class Version;


namespace aux
{


/**
*  @brief
*    Provisioning of meta information about OpenGL extensions, functions and conversion of strings and symbols of the OpenGL API
*/
class {{ucapi}}BINDING_AUX_API Meta
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
    static int {{api}}Revision();

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
    static {{api}}::{{bitfieldType}} getBitfield(const std::string & bitfield);
    
    /**
    *  @brief
    *    Returns the list of all bitfields known by the gl.xml
    *
    *  @return
    *    The list of all bitfields known by the gl.xml
    */
    static std::vector<{{api}}::{{bitfieldType}}> bitfields();

    /**
    *  @brief
    *    Converts a {{enumType}} to a string
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
    static const std::string & getString({{api}}::{{enumType}} {{api}}enum);
    
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
    static {{api}}::{{enumType}} getEnum(const std::string & {{api}}enum);
    
    /**
    *  @brief
    *    Returns the list of all enums known by the {{api}}.xml
    *
    *  @return
    *    The list of all enums known by the {{api}}.xml
    */
    static std::vector<{{api}}::{{enumType}}> enums();

    /**
    *  @brief
    *    Converts a {{booleanType}} to a string
    *
    *  @param[in] boolean
    *    The boolean to convert
    *
    *  @return
    *    A string representation of the {{booleanType}} symbol name
    *
    *  @remarks
    *    Can either be '{{ucapi}}_TRUE' or '{{ucapi}}_FALSE'
    */
    static const std::string & getString(const {{api}}::{{booleanType}} & boolean);
    
    /**
    *  @brief
    *    Converts a string to a {{booleanType}} symbol
    *
    *  @param[in] glboolean
    *    The string representation of the {{booleanType}}
    *
    *  @return
    *    The symbol identified through the boolean string, '{{ucapi}}_FALSE' if failed
    */
    static {{api}}::{{booleanType}} getBoolean(const std::string & boolean);

    /**
    *  @brief
    *    Converts a {{extensionType}} to its string representation
    *
    *  @param[in] extension
    *    The extension to convert
    *
    *  @return
    *    The string representation of the extension
    */
    static const std::string & getString({{api}}::{{extensionType}} extension);
    
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
    static {{api}}::{{extensionType}} getExtension(const std::string & extension);

    /**
    *  @brief
    *    Returns the set of all extensions known by the {{api}}.xml
    *
    *  @return
    *    The set of all extensions known by the {{api}}.xml
    */
    static std::set<{{api}}::{{extensionType}}> extensions();
    
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
    static const std::set<{{api}}::{{extensionType}}> extensions(const Version & version);

    /**
    *  @brief
    *    Returns the list of extensions that are requiring an OpenGL function
    *
    *  @param[in] function
    *    The name of the function, including the '{{api}}' prefix
    *
    *  @return
    *    The set of extensions that are requiring an OpenGL function
    */
    static const std::set<{{api}}::{{extensionType}}> extensions(const std::string & {{api}}function);
    
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
    static const std::set<AbstractFunction *> functions({{api}}::{{extensionType}} extension);

    /**
    *  @brief
    *    Returns the first OpenGL Version (Feature) that required the extension
    *
    *  @param[in] extension
    *    The extension
    *
    *  @return
    *    The first {{ucapi}} Version (Feature) that required the extension
    */
    static const Version & version({{api}}::{{extensionType}} glextension);
    
    /**
    *  @brief
    *    Returns the list of all Versions (Features) known by the {{api}}.xml
    *
    *  @return
    *    The list of all Versions (Features) known by the {{api}}.xml
    */
    static const std::set<Version> & versions();

{{#bitfieldGroups.items}}
    /**
    *  @brief convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString({{api}}::{{item}} bitfield);

{{/bitfieldGroups.items}}

private:
    /**
    *  @brief
    *    Returns the bucket index of an OpenGL identifier used for the actual lookup into the compile-time maps
    *
    *  @param[in] identifier
    *    The identifier for the bucket lookup
    *
    *  @param[in] prefixLength
    *    The length of the prefix (e.g., '{{api}}' or '{{ucapi}}_') to omit to get the actual first character of the identifier
    *
    *  @return
    *    The bucket index of an OpenGL identifier
    */
    static size_t alphabeticalGroupIndex(const std::string & identifier, std::uint8_t prefixLength);
};


} } // namespace {{api}}binding::aux
