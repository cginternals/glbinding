#define NOMINMAX

#include <iostream>
#include <algorithm>

#include <GLFW/glfw3.h>

#include "impl.h"

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

    GLFWwindow* window = glfwCreateWindow(640, 480, "Dummy Window", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    /*if (!gl::initialize())
    {
        glfwTerminate();
        return 1;
    }*/


    void setCallbacks();
    void doSomeOpenGLStuff();

    glfwTerminate();
    return 0;
}
