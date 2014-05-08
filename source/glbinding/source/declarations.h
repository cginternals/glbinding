#pragma once

#include <glbinding/types.h>
#include <glbinding/Extension.h>

#include <string>
#include <utility>
#include <unordered_map>

namespace gl {

extern const std::unordered_map<Extension, std::string> extensionNames;
extern const std::unordered_map<std::string, Extension> namesToExtension;
extern const std::unordered_map<Extension, std::pair<unsigned char, unsigned char>> extensionVersions;
extern const std::unordered_multimap<gl::GLuint64, std::string> constantsNames;
extern const std::unordered_map<std::string, gl::GLuint64> namesToConstants;

} // namespace gl
