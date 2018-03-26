
#pragma once


namespace glesbinding
{


template <typename Binding>
void State<Binding>::resolve(const char * name)
{
    if (m_initialized)
    {
        return;
    }

    m_address = Binding::resolveFunction(name);
    m_initialized = true;
}


} // namespace glesbinding
