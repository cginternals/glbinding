#include <iostream>

#include <GLFW/glfw3.h>

#include <glbinding/glbinding.h>

#include <glbinding/AbstractFunction.h>

int main(int /*argc*/, char* /*argv*/[])
{
    if (!glfwInit())
    {
        return 1;
    }

    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
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

    for (const gl::AbstractFunction* function : gl::AbstractFunction::functions())
    {
        if (function->isValid())
        {
            std::cout << reinterpret_cast<void*>(function->functionPointer()) << " " << function->name() << std::endl;
        }
    }

    glfwTerminate();
    return 0;
}
