
#pragma once


#include <eglbinding/AbstractState.h>


namespace eglbinding
{


class State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};


} // namespace eglbinding
