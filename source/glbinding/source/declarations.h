#pragma once

#include <glbinding/types.h>
#include <glbinding/Extension.h>

#include <string>
#include <utility>
#include <unordered_map>
#include <vector>

namespace gl {

extern const std::unordered_map<gl::GLenum, std::string> enum_to_name;
extern const std::unordered_map<std::string, gl::GLenum> name_to_enum;

extern const std::unordered_map<Extension, std::string> extension_to_name;
extern const std::unordered_map<std::string, Extension> name_to_extension;

extern const std::unordered_map<Extension, std::pair<unsigned char, unsigned char>> extension_core_versions;

extern const std::unordered_map<std::string, std::vector<Extension>> function_to_extensions;
extern const std::unordered_map<Extension, std::vector<std::string>> extension_to_functions;

} // namespace gl
