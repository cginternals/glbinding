#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <utility>
#include <vector>

#include <glbinding/types.h>

enum class GLenum : unsigned int;
enum class GLextension : int;


class GLBINDING_API  GLMeta
{
public:
    GLMeta() = delete;

    static const std::string & getString(GLenum glenum);
    static GLenum getEnum(const std::string & glenum);

    static const std::string & getString(GLextension extension);
    static GLextension getExtension(const std::string & extension);

    static const std::vector<std::string> & getRequiredFunctions(GLextension extension);
    static const std::vector<GLextension> & getExtensionsRequiring(const std::string & function);

    using ucharpair = std::pair<unsigned char, unsigned char>;
    static const ucharpair & getRequiringVersion(GLextension extension);
};