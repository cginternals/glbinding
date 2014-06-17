#include <GL/glew.h>

#include <GLFW/glfw3.h>

#include <glbinding/initialize.h>

#include <iostream>
#include <chrono>
#include <ratio>
#include <thread>

#include "impl.h"
#include "Timer.hpp"

void errorfun(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

void compare()
{
    const int ITERATIONS = 10000;

    Timer timer;

    timer.start("glewInit()");

    if (glewInit() != GLEW_OK)
        return;

    timer.restart("gl::initialize()");

    if (!gl::initialize())
        return;

    timer.restart("sleep");
    std::this_thread::sleep_for(std::chrono::seconds(1));

    timer.restart("glew calls");

    for (int i = 0; i < ITERATIONS; ++i)
        glewExample();

    timer.restart("glbinding calls");

    for (int i = 0; i < ITERATIONS; ++i)
        glbindingExample();

    timer.stop();

    glbindingSetErrorChecking(true);

    timer.start("glew calls with check error");

    for (int i = 0; i < ITERATIONS; ++i)
        glewExampleWithErrorChecking();

    timer.restart("glbinding calls with check error (by after-callback)");

    for (int i = 0; i < ITERATIONS; ++i)
        glbindingExample();

    timer.stop();
}

int main(int /*argc*/, char* /*argv*/[])
{
    if (!glfwInit())
    {
        return 1;
    }

    glfwSetErrorCallback(errorfun);

    glfwDefaultWindowHints();
    GLFWwindow * window = glfwCreateWindow(640, 480, "Dummy Window", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    compare();

    glfwTerminate();
    return 0;
}
