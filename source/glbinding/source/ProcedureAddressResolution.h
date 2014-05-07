#pragma once

namespace gl {

using FunctionPointer = void(*)();
using FunctionResolution = FunctionPointer(*)(const char *);

extern FunctionResolution getProcAddress;

} // namespace gl
