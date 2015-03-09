#pragma once

#include <glbinding/AbstractValue.h> 
#include <glbinding/callbacks.h>


namespace glbinding 
{

template <typename T>
class RingBuffer;


namespace logging
{
    GLBINDING_API void start();
    GLBINDING_API void start(const std::string & filepath);
    GLBINDING_API void stop();
    GLBINDING_API void pause();
    GLBINDING_API void resume();
    GLBINDING_API void log(bool enable);

    using BufferType = FunctionCall*;
    GLBINDING_API void log(BufferType  call);


    using TailIdentifier = unsigned int;
    GLBINDING_API TailIdentifier addTail();
    GLBINDING_API void removeTail(TailIdentifier);
    GLBINDING_API const std::vector<BufferType>::const_iterator cbegin(TailIdentifier key);
    GLBINDING_API bool valid(TailIdentifier key, const std::vector<BufferType>::const_iterator & it);
    GLBINDING_API const std::vector<BufferType>::const_iterator next(TailIdentifier key, const std::vector<BufferType>::const_iterator & it);
    GLBINDING_API unsigned int size(TailIdentifier key);
}


} // namespace glbinding
