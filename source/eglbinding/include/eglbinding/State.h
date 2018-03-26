
#pragma once


#include <eglbinding/AbstractState.h>


namespace khrbinding
{


template <typename Binding>
class State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};


} // namespace eglbinding


#include <eglbinding/State.inl>
