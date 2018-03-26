
#include <glesbinding-aux/logging.h>

#include <array>
#include <atomic>
#include <chrono>
#include <fstream>
#include <sstream>

#ifdef GLBINDING_USE_BOOST_THREAD
#include <boost/chrono.hpp>
#include <boost/thread.hpp>
namespace std_boost = boost;
#else
#include <condition_variable>
#include <mutex>
#include <thread>
namespace std_boost = std;
#endif

#include <glesbinding-aux/RingBuffer.h>

#include <glesbinding/AbstractFunction.h>
#include <glesbinding/Binding.h>
#include <glesbinding/CallbackMask.h>

#include <glesbinding-aux/types_to_string.h>

#include "logging_private.h"

namespace
{


const unsigned int LOG_BUFFER_SIZE = 5000;

std::atomic<bool> g_stop{false};
std::atomic<bool> g_persisted{true};
std_boost::mutex g_lockfinish;
std_boost::condition_variable g_finishcheck;

using FunctionCallBuffer = glesbinding::aux::RingBuffer<glesbinding::aux::LogEntry>;
FunctionCallBuffer g_buffer{LOG_BUFFER_SIZE};


} // namespace


namespace glesbinding { namespace aux
{


std::ostream & operator<<(std::ostream & stream, const glesbinding::FunctionCall * call)
{
    using microseconds = std::chrono::microseconds;
    using milliseconds = std::chrono::milliseconds;

    const auto now_micros = std::chrono::duration_cast<microseconds>(call->timestamp.time_since_epoch());
    const auto micros = static_cast<std::size_t>(now_micros.count() % 1000);
    std::ostringstream micros_os;
    micros_os << std::setfill('0') << std::setw(3) << micros;

    const auto now_millis = std::chrono::duration_cast<milliseconds>(now_micros);
    const auto millis = static_cast<std::size_t>(now_millis.count() % 1000);
    std::ostringstream millis_os;
    millis_os << std::setfill('0') << std::setw(3) << millis;

    const auto t = std::chrono::system_clock::to_time_t(call->timestamp);
    std::array<char, 20> time_string;
    std::strftime(time_string.data(), time_string.size(), "%Y-%m-%d_%H-%M-%S", std::localtime(&t));

    stream << time_string.data() << ":" << millis_os.str() << ":" << micros_os.str() << " ";
    stream << call->function->name() << "(";

    for (size_t i = 0; i < call->parameters.size(); ++i)
    {
        stream << call->parameters[i].get();
        if (i < call->parameters.size() - 1)
            stream << ", ";
    }

    stream << ")";

    if (call->returnValue)
    {
        stream << " -> " << call->returnValue.get();
    }

    stream << std::endl;

    return stream;
}


void resize(const unsigned int newSize)
{
    g_buffer.resize(newSize);
}

void start()
{
    const auto filepath = getStandardFilepath();

    start(filepath);
}

void start(const std::string & filepath)
{
    Binding::setLogCallback(glesbinding::aux::log);
    Binding::addCallbackMask(CallbackMask::Timestamp | CallbackMask::Logging);
    startWriter(filepath);
}

void startExcept(const std::set<std::string> & blackList)
{
    const auto filepath = getStandardFilepath();

    startExcept(filepath, blackList);
}

void startExcept(const std::string & filepath, const std::set<std::string> & blackList)
{
    Binding::addCallbackMaskExcept(CallbackMask::Timestamp | CallbackMask::Logging, blackList);
    startWriter(filepath);
}

void stop()
{
    Binding::removeCallbackMask(CallbackMask::Timestamp | CallbackMask::Logging);

    g_stop = true;
    std_boost::unique_lock<std_boost::mutex> locker(g_lockfinish);

    // Spurious wake-ups: http://www.codeproject.com/Articles/598695/Cplusplus-threads-locks-and-condition-variables
    while(!g_persisted)
    {
        g_finishcheck.wait(locker);
    }
}

void pause()
{
    Binding::removeCallbackMask(CallbackMask::Timestamp | CallbackMask::Logging);
}

void resume()
{
    Binding::addCallbackMask(CallbackMask::Timestamp | CallbackMask::Logging);
}

void log(FunctionCall * call)
{
    auto available = false;
    auto next = g_buffer.nextHead(available);

    while (!available)
    {
        std_boost::this_thread::sleep_for(std_boost::chrono::milliseconds(1));
        next = g_buffer.nextHead(available);
    }

    assert(!g_buffer.isFull());

    delete next;
    g_buffer.push(call);
}

void startWriter(const std::string & filepath)
{
    g_stop = false;
    g_persisted = false;

    std_boost::thread writer([filepath]()
    {
        const auto key = g_buffer.addTail();
        std::ofstream logfile;
        logfile.open (filepath, std::ios::out);

        while (!g_stop || (g_buffer.size(key) != 0))
        {
            auto i = g_buffer.cbegin(key);

            while (g_buffer.valid(key, i))
            {
                logfile << *i;
                i = g_buffer.next(key, i);
            }

            logfile.flush();

            std_boost::this_thread::sleep_for(std_boost::chrono::milliseconds(1));
        }

        logfile.close();
        g_buffer.removeTail(key);
        g_persisted = true;
        g_finishcheck.notify_all();
    });

    writer.detach();
}

const std::string getStandardFilepath()
{
    const auto now = std::chrono::system_clock::now();

    const auto now_ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch());
    const auto ms = now_ms.count() % 1000;

    const auto now_c = std::chrono::system_clock::to_time_t(now);

    std::array<char, 20> time_string;
    std::strftime(time_string.data(), time_string.size(), "%Y-%m-%d_%H-%M-%S", std::localtime(&now_c));

    std::ostringstream ms_os;
    ms_os << std::setfill('0') << std::setw(3) << ms;

    std::ostringstream os;
    os << "";
    os << time_string.data() << "-" << ms_os.str();
    os << ".log";

    return os.str();
}

TailIdentifier addTail()
{
    return g_buffer.addTail();
}

void removeTail(TailIdentifier key)
{
    g_buffer.removeTail(key);
}

const std::vector<LogEntry>::const_iterator cbegin(TailIdentifier key)
{
    return g_buffer.cbegin(key);
}

bool valid(TailIdentifier key, const std::vector<LogEntry>::const_iterator & it)
{
    return g_buffer.valid(key, it);
}

const std::vector<LogEntry>::const_iterator next(TailIdentifier key, const std::vector<LogEntry>::const_iterator & it)
{
    return g_buffer.next(key, it);
}

unsigned int size(TailIdentifier key)
{
    return g_buffer.size(key);
}


} } // namespace glesbinding::aux
