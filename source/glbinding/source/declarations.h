#pragma once

#include <glbinding/types.h>
#include <glbinding/Extension.h>

#include <string>
#include <utility>
#include <unordered_map>
#include <set>

namespace gl {

extern const std::unordered_map<Extension, std::string> extensionNames;
extern const std::unordered_map<std::string, Extension> namesToExtension;
extern const std::unordered_map<Extension, std::pair<unsigned char, unsigned char>> extensionVersions;
extern const std::unordered_map<gl::GLenum, std::string> constantsNames;
extern const std::unordered_map<std::string, gl::GLenum> namesToConstants;
extern const std::unordered_map<Extension, std::set<std::string>> requiredFunctionsByExtension;
extern const std::unordered_map<std::string, std::set<Extension>> extensionsRequiringFunction;

} // namespace gl
