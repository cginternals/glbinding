
#include <iostream>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/ContextInfo.h>
#include <glbinding/Version.h>

#include <glbinding/gl/gl.h>

#include "cubescape.h"


using namespace gl;
using namespace glbinding;


namespace
{
    CubeScape * cubescape(nullptr);
}


void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}


void framebuffer_size_callback(GLFWwindow * window, int width, int height)
{
    cubescape->resize(width, height);
}

void key_callback(GLFWwindow * window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, 1);
}


int main(int, char *[])
{
    if (!glfwInit())
        return 1;

    glfwSetErrorCallback(error);

    GLFWwindow * window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwSetKeyCallback(window, key_callback);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);


    glfwMakeContextCurrent(window);

    AbstractFunction::setAfterCallback([](const AbstractFunction &) 
    {
        gl::GLenum error = glGetError();
        if (error != GL_NO_ERROR)
            std::cout << "error: " << error << std::endl;
    });

    initialize();

    // print some gl infos (query)

    std::cout << std::endl
        << "OpenGL Version:  " << ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << ContextInfo::renderer() << std::endl << std::endl;

    cubescape = new CubeScape();
    cubescape->resize(320, 240);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        cubescape->draw();

        glfwSwapBuffers(window);
    }

    delete cubescape;
    cubescape = nullptr;

    glfwTerminate();
    return 0;
}
