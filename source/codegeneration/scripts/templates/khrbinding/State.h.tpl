
#pragma once


#include <{{binding}}/AbstractState.h>


namespace {{binding}}
{


template <typename Binding>
class State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};


} // namespace {{binding}}


#include <{{binding}}/State.inl>
