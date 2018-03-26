
#pragma once


#include <glbinding/AbstractState.h>


namespace glbinding
{


template <typename Binding>
class State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};


} // namespace glbinding


#include <glbinding/State.inl>
