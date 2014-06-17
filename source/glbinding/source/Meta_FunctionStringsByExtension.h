#pragma once

#include <unordered_map>
#include <vector>

enum class GLextension : int;

extern const std::unordered_map<GLextension, std::vector<std::string>> GLMeta_FunctionStringsByExtension;
