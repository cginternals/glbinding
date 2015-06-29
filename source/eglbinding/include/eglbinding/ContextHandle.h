#pragma once

#include <eglbinding/eglbinding_api.h>

namespace eglbinding
{

using ContextHandle = long long;

EGLBINDING_API ContextHandle getCurrentContext();

} // namespace eglbinding
