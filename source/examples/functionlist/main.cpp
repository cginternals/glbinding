#include <iostream>

#include <glbinding/initialize.h>
#include <impl.h>

#include <GLFW/glfw3.h>

#include <iostream>

void errorfun(int errnum, const char* errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

int main(int /*argc*/, char* /*argv*/[])
{
    if (!glfwInit())
    {
        return 1;
    }

    glfwSetErrorCallback(errorfun);

    GLFWwindow * window = glfwCreateWindow(640, 480, "Dummy Window", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gl::initialize())
    {
        glfwTerminate();
        return 1;
    }

    printFunctionsInfo();

    glfwTerminate();
    return 0;
}
