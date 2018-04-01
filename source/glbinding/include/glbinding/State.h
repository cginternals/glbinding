
#pragma once


#include <glbinding/AbstractState.h>


namespace glbinding
{


class GLBINDING_API State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};


} // namespace glbinding
