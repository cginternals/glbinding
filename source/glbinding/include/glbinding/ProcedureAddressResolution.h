#pragma once

namespace glbinding {

using FunctionPointer = void(*)();
extern FunctionPointer (*getProcAddress) (const char*);

}
