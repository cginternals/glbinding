#pragma once

#include <unordered_map>
#include <vector>

enum class GLextension : int;


extern const std::unordered_map<std::string, std::vector<GLextension>> GLMeta_ExtensionsByFunctionString;
