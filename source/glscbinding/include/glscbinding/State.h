
#pragma once


#include <glscbinding/AbstractState.h>


namespace khrbinding
{


template <typename Binding>
class State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};


} // namespace glscbinding


#include <glscbinding/State.inl>
