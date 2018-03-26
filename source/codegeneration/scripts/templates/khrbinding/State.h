
#pragma once


#include <khrbinding/AbstractState.h>


namespace khrbinding
{


template <typename Binding>
class State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};


} // namespace khrbinding


#include <khrbinding/State.inl>
