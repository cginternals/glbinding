
#include <glbinding/State.h>

#include <glbinding/Binding.h>


namespace glbinding
{


void State::resolve(const char * name) GLBINDING_NOEXCEPT
{
    if (m_initialized)
    {
        return;
    }

    m_address = Binding::resolveFunction(name);
    m_initialized = true;
}


} // namespace glbinding