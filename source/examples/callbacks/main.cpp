
#include <iostream>
#include <algorithm>
#include <thread>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/callbacks.h>
#include <glbinding/Meta.h>
#include <glbinding/ContextInfo.h>
#include <glbinding/Version.h>

#include <glbinding/Binding.h>

#include <glbinding/gl/gl32.h>


using namespace gl32;
using namespace glbinding;

void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}


#include "../comparison/gltest_data.inl"

void doGLStuff(GLFWwindow * window)
{
    glViewport(0, 0, 320, 240);

    #include "../comparison/gltest.inl"

    glfwSwapBuffers(window);
}

int main()
{
    if (!glfwInit())
        return 1;

    glfwSetErrorCallback(error);

    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);

    GLFWwindow * window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // print some gl infos (query)

    Binding::initialize(false);

    std::cout << std::endl
        << "OpenGL Version:  " << ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << ContextInfo::renderer() << std::endl
        << "OpenGL Revision: " << Meta::glRevision() << " (gl.xml)" << std::endl << std::endl;

    setCallbackMask(CallbackMask::After | CallbackMask::ParametersAndReturnValue);

    setAfterCallback([](const FunctionCall & call) {
        std::cout << call.function.name() << "(";

        for (unsigned i = 0; i < call.parameters.size(); ++i)
        {
            std::cout << call.parameters[i]->asString();
            if (i < call.parameters.size() - 1)
                std::cout << ", ";
        }

        std::cout << ")";

        if (call.returnValue)
        {
            std::cout << " -> " << call.returnValue->asString();
        }

        std::cout << std::endl;
    });

    doGLStuff(window);

    std::cout << std::endl;

    /*for (auto f : Binding::current())
    {
        std::cout << f->name() << std::endl;
    }*/

    glfwTerminate();
    return 0;
}
