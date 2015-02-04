#pragma once
#include <atomic>
#include <iterator>
#include <map>
#include <vector>

namespace glbinding
{

template <typename T>
class RingBuffer 
{

public:
    // Buffer is limited to (maxValue(sizeType)/2 - 1) entries
    using sizeType = unsigned int;
    RingBuffer(sizeType maxSize);

    T hat();
    bool push(T &&);
    bool push(T &);

    using TailIdentifier = unsigned int;

    TailIdentifier addTail();
    void removeTail(TailIdentifier);
    const typename std::vector<T>::const_iterator cbegin(TailIdentifier key);
    bool valid(TailIdentifier key, const typename std::vector<T>::const_iterator & it);
    const typename std::vector<T>::const_iterator next(TailIdentifier key, const typename std::vector<T>::const_iterator & it);
    void release(TailIdentifier key, const typename std::vector<T>::const_iterator & it);
    sizeType size(TailIdentifier);

    sizeType maxSize();
    sizeType size();
    bool isFull();
    bool isEmpty();

protected:
    sizeType next(sizeType current);
    void updateTail();
    sizeType size(sizeType, sizeType);

protected:
    std::vector<T> m_buffer;
    const uint64_t m_size;
    std::atomic<uint64_t> m_head;
    std::atomic<uint64_t> m_tail;
    std::map<TailIdentifier, std::atomic<uint64_t>> m_tails;
    std::mutex m_tail_mutex;
};

} // namespace glbinding

#include "RingBuffer.hpp"
