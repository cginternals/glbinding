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
    Timer() : m_msg(nullptr) {}

    void start(const char * msg)
    {
        m_msg = msg;
        time = std::chrono::system_clock::now();
    }

    void stop()
    {
        auto delta = std::chrono::system_clock::now() - time;

        float ms = std::chrono::duration_cast<std::chrono::duration<float, std::milli>>(delta).count();

        std::cout << m_msg << ": " << ms << " ms" << std::endl;
    }

    void restart(const char * msg)
    {
        stop();
        start(msg);
    }

protected:
    const char * m_msg;
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

    timer.restart("sleep");
    std::this_thread::sleep_for(std::chrono::seconds(1));

    timer.restart("glew calls");

    for (int i = 0; i < ITERATIONS; ++i)
        glewTest();

    timer.restart("glbinding calls");

    for (int i = 0; i < ITERATIONS; ++i)
        glbindingTest();

    timer.stop();

    glewEnableErrorCheck(true);

    timer.start("glew calls with check error");

    for (int i = 0; i < ITERATIONS; ++i)
        glewTest();

    timer.restart("glbinding calls with check error (by after-callback)");

    glbindingEnableErrorCheck(true);

    for (int i = 0; i < ITERATIONS; ++i)
        glbindingTest();

    timer.stop();
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
