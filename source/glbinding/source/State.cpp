
#include <glbinding/State.h>

#include <glbinding/glbinding.h>


namespace glbinding
{


void State::resolve(const char * name)
{
    if (m_initialized)
    {
        return;
    }

    m_address = glbinding::resolveFunction(name);
    m_initialized = true;
}


} // namespace glbinding
