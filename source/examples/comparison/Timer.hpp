#pragma once

#include <chrono>

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
