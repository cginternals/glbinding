#pragma once

#include <glbinding/Extension.h>

#include <string>
#include <utility>
#include <unordered_map>

namespace gl {

extern const std::unordered_map<Extension, std::string> extensionNames;
extern const std::unordered_map<std::string, Extension> namesToExtension;
extern const std::unordered_map<Extension, std::pair<unsigned char, unsigned char>> extensionVersions;

} // namespace gl
