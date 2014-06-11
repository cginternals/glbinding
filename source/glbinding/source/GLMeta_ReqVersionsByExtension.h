#pragma once

#include <unordered_map>
#include <utility>


using ucharpair = std::pair<unsigned char, unsigned char>;
extern const std::unordered_map<GLextension, ucharpair> GLMeta_ReqVersionsByExtension;
