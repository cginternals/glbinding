#pragma once

namespace glbinding {

using ContextId = long long;

void initialize();

void initialize(ContextId contextId, bool use = true);

void useContext(ContextId contextId);
//void releaseContext();

} // namespace glbinding
