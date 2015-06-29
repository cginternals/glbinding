#pragma once

#include <khrapi/AbstractState.h>

namespace khrapi
{

template <typename Binding>
class State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};

} // namespace khrapi

#include <khrapi/State.hpp>
