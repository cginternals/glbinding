
#pragma once


namespace glscbinding 
{


class AbstractFunction;
struct FunctionCall;

void unresolved(const AbstractFunction * function);
void before(const FunctionCall & call);
void after(const FunctionCall & call);


} // namespace glscbinding
