#pragma once

#include <khrapi/State.h>

namespace khrapi
{

template <typename Binding>
void State<Binding>::resolve(const char * name)
{
    if (m_initialized)
    {
        return;
    }

    m_address = Binding::getProcAddress(name);
    m_initialized = true;
}

} // namespace khrapi
