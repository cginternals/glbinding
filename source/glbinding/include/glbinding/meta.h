#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/Extension.h>
#include <glbinding/types.h>

#include <string>
#include <vector>
#include <set>

namespace gl {
namespace meta {

GLBINDING_API std::string getName(gl::GLenum constant);
GLBINDING_API std::string getName(gl::GLuint64 constant);

GLBINDING_API gl::GLuint64 getValue(const std::string & name);
GLBINDING_API gl::GLenum getEnum(const std::string & name);

GLBINDING_API std::vector<std::string> getNames(gl::GLenum constant);
GLBINDING_API std::vector<std::string> getNames(gl::GLuint64 constant);

GLBINDING_API std::string getName(Extension extension);
GLBINDING_API Extension extensionFromString(const std::string & name);

GLBINDING_API std::pair<unsigned char, unsigned char> coreVersionForExtension(Extension extension);

GLBINDING_API std::vector<Extension> allExtensions();
GLBINDING_API std::set<gl::GLuint64> allValues();
GLBINDING_API std::set<gl::GLenum> allEnums();

GLBINDING_API std::vector<std::string> getRequiredFunctions(Extension extension);
GLBINDING_API std::vector<Extension> getExtensionsRequiring(const std::string & functionName);

} // namespace meta
} // namespace gl
