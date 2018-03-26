#pragma once

#include <atomic>
#include <iterator>
#include <map>
#include <vector>


namespace glesbinding { namespace aux
{


template <typename T>
class RingBuffer 
{

public:
    // Buffer is limited to (maxValue(sizeType)/2 - 1) entries
    using SizeType = unsigned int;
    using TailIdentifier = unsigned int;

    RingBuffer(SizeType maxSize);

    void resize(SizeType newSize);

    T nextHead(bool & available) const;
    bool push(T && entry);
    bool push(T & entry);

    TailIdentifier addTail();
    void removeTail(TailIdentifier);
    const typename std::vector<T>::const_iterator cbegin(TailIdentifier key) const;
    bool valid(TailIdentifier key, const typename std::vector<T>::const_iterator & it) const;
    const typename std::vector<T>::const_iterator next(TailIdentifier key, const typename std::vector<T>::const_iterator & it);
    SizeType size(TailIdentifier);

    SizeType maxSize() const;
    SizeType size() const;
    bool isFull() const;
    bool isEmpty() const;

protected:
    SizeType next(SizeType current) const;
    bool isFull(SizeType nextHead) const;
    SizeType lastTail() const;
    SizeType size(SizeType, SizeType) const;

protected:
    std::vector<T> m_buffer;
    SizeType m_size;
    std::atomic<SizeType> m_head;
    std::map<TailIdentifier, std::atomic<SizeType>> m_tails;
};


} } // namespace glesbinding::aux


#include <glesbinding-aux/RingBuffer.inl>
