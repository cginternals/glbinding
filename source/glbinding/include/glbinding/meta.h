#pragma once

#include <glbinding/Extension.h>
#include <glbinding/types.h>

#include <string>
#include <vector>
#include <set>

namespace gl {
namespace meta {

std::string getName(gl::GLenum constant);
std::string getName(gl::GLuint64 constant);

gl::GLuint64 getValue(const std::string & name);
gl::GLenum getEnum(const std::string & name);

std::vector<std::string> getNames(gl::GLenum constant);
std::vector<std::string> getNames(gl::GLuint64 constant);

std::string getName(Extension extension);
Extension extensionFromString(const std::string & name);

std::pair<unsigned char, unsigned char> coreVersionForExtension(Extension extension);

std::vector<Extension> allExtensions();
std::set<gl::GLuint64> allValues();
std::set<gl::GLenum> allEnums();

} // namespace meta
} // namespace gl
