#include <glbinding/GetProcAddress.h>

#include <GLFW/glfw3.h>

namespace gl {

ProcAddress GetProcAddress(const char * name)
{
    return glfwGetProcAddress(name);
}

} // namespace gl
