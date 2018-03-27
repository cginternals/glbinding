
#pragma once


#include <{{binding}}/AbstractState.h>


namespace {{binding}}
{


class State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};


} // namespace {{binding}}
