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

    GLFWwindow* window = glfwCreateWindow(640, 480, "Dummy Window", NULL, NULL);
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

    unsigned int validFunctionCount = 0;
    std::set<const gl::AbstractFunction*> invalidFunctions;
    for (const gl::AbstractFunction* function : gl::AbstractFunction::functions())
    {
        if (function->isValid())
        {
            std::cout << reinterpret_cast<void*>(function->address()) << " " << function->name() << std::endl;
            validFunctionCount++;
        }
        else
        {
            invalidFunctions.insert(function);
        }
    }

    if (invalidFunctions.size() > 0)
    {
        std::cout << std::endl << "Unresolved functions:" << std::endl;
        for (const gl::AbstractFunction* invalidFunction : invalidFunctions)
        {
            std::cout << invalidFunction->name() << std::endl;
        }
    }

    std::cout << std::endl << "Valid: " << validFunctionCount << "\tInvalid: " << invalidFunctions.size() << std::endl;

    glfwTerminate();
    return 0;
}
