#pragma once

#include <unordered_map>

enum class GLextension : int;


extern const std::unordered_map<GLextension, std::string> GLMeta_StringsByExtension;
