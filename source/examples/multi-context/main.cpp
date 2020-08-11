
#include <iostream>

#include <GLFW/glfw3.h>

#include <glbinding/glbinding.h>
#include <glbinding/Version.h>
#include <glbinding/FunctionCall.h>
#include <glbinding/CallbackMask.h>

#include <glbinding/gl/gl.h>
#include <glbinding/getProcAddress.h>

#include <glbinding-aux/ContextInfo.h>
#include <glbinding-aux/Meta.h>
#include <glbinding-aux/types_to_string.h>
#include <glbinding-aux/ValidVersions.h>
#include <glbinding-aux/debug.h>


using namespace gl;
using namespace glbinding;


void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}


void key_callback(GLFWwindow * window, int key, int /*scancode*/, int action, int /*mods*/)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, 1);
    }
}


int main(int, char *[])
{
    glfwSetErrorCallback(error);

    if (!glfwInit())
        return 1;

    glfwDefaultWindowHints();

#ifdef SYSTEM_DARWIN
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, true);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#endif

    // Initialize window 1

    GLFWwindow * window1 = glfwCreateWindow(640, 480, "", nullptr, nullptr);
    if (!window1)
    {
        glfwTerminate();
        return -1;
    }

    glfwSetKeyCallback(window1, key_callback);

    glfwMakeContextCurrent(window1);

    glbinding::initialize(0, glfwGetProcAddress, false); // only resolve functions that are actually used (lazy)
    glbinding::aux::enableGetErrorCallback();

    // Initialize window 2

    GLFWwindow * window2 = glfwCreateWindow(640, 480, "", nullptr, nullptr);
    if (!window2)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window2);

    glfwSetKeyCallback(window2, key_callback);

    glbinding::initialize(1, glfwGetProcAddress, false); // only resolve functions that are actually used (lazy)
    glbinding::aux::enableGetErrorCallback();

    // print some gl infos (query)

    std::cout << std::endl
        << "OpenGL Version:  " << aux::ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << aux::ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << aux::ContextInfo::renderer() << std::endl;

    // Rendering Loop

    int width, height;

    int activeWindow = 0;
    while (!glfwWindowShouldClose(window1) && !glfwWindowShouldClose(window2))
    {
        glfwPollEvents();

        if ((activeWindow % 2) == 0)
        {
            glfwGetFramebufferSize(window1, &width, &height);

            glfwMakeContextCurrent(window1);
            glbinding::useContext(0);
            glClearColor(1.0f, 0.0f, activeWindow / 15.0f, 0.0f);
            glViewport(0, 0, width, height);

            glClear(GL_COLOR_BUFFER_BIT);

            glfwSwapBuffers(window1);
        }
        else if ((activeWindow % 2) == 1)
        {
            glfwGetFramebufferSize(window2, &width, &height);

            glfwMakeContextCurrent(window2);
            glbinding::useContext(1);
            glClearColor(0.0f, 1.0f, activeWindow / 15.0f, 0.0f);
            glViewport(0, 0, width, height);

            glClear(GL_COLOR_BUFFER_BIT);

            glfwSwapBuffers(window2);
        }

        activeWindow = (activeWindow + 1) % 16;
    }

    glfwTerminate();
    return 0;
}
