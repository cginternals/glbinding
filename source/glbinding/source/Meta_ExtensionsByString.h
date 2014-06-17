#pragma once

#include <unordered_map>

enum class GLextension : int;

extern const std::unordered_map<std::string, GLextension> GLMeta_ExtensionsByString;
