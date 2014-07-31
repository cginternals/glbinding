#pragma once

#include <vector>
#include <glbinding/callbacks.h>

namespace glbinding 
{

void unresolved(const AbstractFunction * function);
void before(const FunctionCall & call);
void after(const FunctionCall & call);

} // namespace glbinding

