#include <GLFW/glfw3.h>

#include <iostream>
#include <chrono>
#include <ratio>
#include <thread>

#include "glbinding.h"
#include "glew.h"

class Timer
{
public:
    Timer() : m_msg(nullptr), m_steps(1) {}

    void start(const char * msg)
    {
        m_msg = msg;
        time = std::chrono::system_clock::now();
    }

    void setSteps(int steps)
    {
        m_steps = steps;
    }

    float stop()
    {
        auto delta = std::chrono::system_clock::now() - time;

        float us = std::chrono::duration_cast<std::chrono::duration<float, std::micro>>(delta / m_steps).count();

        std::cout << m_msg << ": " << us << " micro seconds" << std::endl;

        return us;
    }

    float restart(const char * msg)
    {
        float us = stop();
        start(msg);

        return us;
    }

protected:
    const char * m_msg;
    int m_steps;
    std::chrono::time_point<std::chrono::system_clock> time;
};

void compare()
{
    const int ITERATIONS = 10000;

    Timer timer;

    timer.start("glewInit()");

    glewInitialize();

    timer.restart("gl::initialize()");

    glbindingInitialize();

    timer.stop();

    std::cout << "sleep" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "glew warmup" << std::endl;
    for (int i = 0; i < ITERATIONS; ++i)
        glewTest();

    std::cout << "glbinding warmup" << std::endl;
    for (int i = 0; i < ITERATIONS; ++i)
        glbindingTest();

    timer.setSteps(25 * ITERATIONS);

    timer.start("glew average call");

    for (int i = 0; i < ITERATIONS; ++i)
        glewTest();

    float glewTime = timer.restart("glbinding average call");

    for (int i = 0; i < ITERATIONS; ++i)
        glbindingTest();

    float glbindingTime = timer.stop();

    glewEnableErrorCheck(true);

    std::cout << "enable error checks after each OpenGL call" << std::endl;

    timer.start("glew average call");

    for (int i = 0; i < ITERATIONS; ++i)
        glewTest();

    float glewWithErrorCheckTime = timer.restart("glbinding average call");

    glbindingEnableErrorCheck(true);

    for (int i = 0; i < ITERATIONS; ++i)
        glbindingTest();

    float glbindingWithErrorCheckTime = timer.stop();

    std::cout << "glbinding/glew performance decrease: " << (glbindingTime / glewTime - 1.0) * 100 << "%" << std::endl;
    std::cout << "glbinding/glew with error check performance decrease: " << (glbindingWithErrorCheckTime / glewWithErrorCheckTime - 1.0) * 100 << "%" << std::endl;
}

void errorfun(int errnum, const char * errmsg)
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
