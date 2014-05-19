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

GLBINDING_API gl::GLenum getEnum(const std::string & name);

GLBINDING_API std::string getName(Extension extension);
GLBINDING_API Extension extensionFromString(const std::string & name);

GLBINDING_API std::pair<unsigned char, unsigned char> coreVersionForExtension(Extension extension);

GLBINDING_API std::vector<Extension> allExtensions();
GLBINDING_API std::set<gl::GLenum> allEnums();

GLBINDING_API std::set<std::string> getRequiredFunctions(Extension extension);
GLBINDING_API std::set<Extension> getExtensionsRequiring(const std::string & functionName);

} // namespace meta
} // namespace gl
