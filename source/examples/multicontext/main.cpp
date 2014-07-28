
#include <iostream>
#include <algorithm>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/Meta.h>
#include <glbinding/ContextInfo.h>
#include <glbinding/Version.h>

#include <glbinding/gl/gl.h>


using namespace gl;
using namespace glbinding;

void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

int main(int, char * [])
{
    if (!glfwInit())
        return 1;

    glfwSetErrorCallback(error);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, false);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow * window1 = glfwCreateWindow(320, 240, "Window 1", nullptr, nullptr);
    if (!window1)
    {
        glfwTerminate();
        return -1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, false);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow * window2 = glfwCreateWindow(320, 240, "Window 2", nullptr, nullptr);
    if (!window2)
    {
        glfwTerminate();
        return -1;
    }

    AbstractFunction::setUnresolvedCallback([](const AbstractFunction & f)
        { std::cout << "Calling unresolved function: " << f.name() << std::endl; });

    glfwMakeContextCurrent(window1);

    std::cout << std::endl
        << "Context 1" << std::endl
        << "OpenGL Version:  " << ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << ContextInfo::renderer() << std::endl << std::endl;

    std::cout << "Try to call glDispatchCompute(...);" << std::endl;
    uint program1 = glCreateProgram();
    glUseProgram(program1);
    glDispatchCompute(1, 1, 1);
    if (glGetError() != GL_NO_ERROR)
    {
        std::cout << "Failed" << std::endl;
    }
    else
    {
        std::cout << "Success" << std::endl;
    }

    glfwMakeContextCurrent(window2);

    std::cout << std::endl
        << "Context 2" << std::endl
        << "OpenGL Version:  " << ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << ContextInfo::vendor() << std::endl;

    std::cout << "Try to call glDispatchCompute(...);" << std::endl;
    uint program2 = glCreateProgram();
    glUseProgram(program2);
    glDispatchCompute(1, 1, 1);
    if (glGetError() != GL_NO_ERROR)
    {
        std::cout << "Failed" << std::endl;
    }
    else
    {
        std::cout << "Success" << std::endl;
    }

    glfwTerminate();
    return 0;
}
