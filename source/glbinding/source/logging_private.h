#pragma once

#include <glbinding/callbacks.h>


namespace glbinding 
{

namespace logging
{
    using BufferType = FunctionCall*;

    using TailIdentifier = unsigned int;
    TailIdentifier addTail();
    void removeTail(TailIdentifier);
    const std::vector<BufferType>::const_iterator cbegin(TailIdentifier key);
    bool valid(TailIdentifier key, const std::vector<BufferType>::const_iterator & it);
    const std::vector<BufferType>::const_iterator next(TailIdentifier key, const std::vector<BufferType>::const_iterator & it);
    unsigned int size(TailIdentifier key);
}


} // namespace glbinding