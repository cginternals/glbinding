
#pragma once


#include <glscbinding/AbstractState.h>


namespace glscbinding
{


class State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};


} // namespace glscbinding
