#pragma once

#include <thread>
#include <fstream>

#include <glbinding/AbstractValue.h> 
#include <glbinding/callbacks.h>


namespace glbinding 
{

template <typename T>
class RingBuffer;


class GLBINDING_API Logging
{

public:
    static void start();
    static void start(const std::string & filepath);
    static void stop();
    static void pause();
    static void resume();

    using BufferType = FunctionCall*;
    static void log(BufferType  call);


    using TailIdentifier = unsigned int;
    static TailIdentifier addTail();
    static void removeTail(TailIdentifier);
    static const std::vector<BufferType>::const_iterator cbegin(TailIdentifier key);
    static bool valid(TailIdentifier key, const std::vector<BufferType>::const_iterator & it);
    static const std::vector<BufferType>::const_iterator next(TailIdentifier key, const std::vector<BufferType>::const_iterator & it);
    static void release(TailIdentifier key, const std::vector<BufferType>::const_iterator & it);
    static unsigned int size(TailIdentifier key);

private:
    Logging() = delete;
    ~Logging() = delete;

private:
    static bool s_stop;
    static bool s_persisted;
    static std::mutex s_lockfinish;
    static std::condition_variable s_finishcheck;


    using FunctionCallBuffer = glbinding::RingBuffer<BufferType>;
    static FunctionCallBuffer s_buffer;


};


} // namespace glbinding
