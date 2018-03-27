
#include <eglbinding/State.h>

#include <eglbinding/Binding.h>


namespace eglbinding
{


void State::resolve(const char * name)
{
    if (m_initialized)
    {
        return;
    }

    m_address = Binding::resolveFunction(name);
    m_initialized = true;
}


} // namespace eglbinding
