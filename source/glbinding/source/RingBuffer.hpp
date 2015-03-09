#pragma once

#include <iomanip>
#include <thread>
#include <iterator>
#include <cassert>

#include "RingBuffer.h"

namespace glbinding
{

template <typename T>
RingBuffer<T>::RingBuffer(const unsigned int maxSize)
:   m_size{maxSize+1}
,   m_head{0}
,   m_tail{0}
{
    m_buffer.resize(m_size);
}

template <typename T>
bool RingBuffer<T>::push(T && object)
{
    auto head = m_head.load(std::memory_order_relaxed);
    auto nextHead = next(head);

    if (nextHead == m_tail.load(std::memory_order_acquire))
    {
        return false;
    }

    assert(head < m_size);
    if (m_buffer.size() <= head)
    {
        // This should never happen because m_buffer is reserving m_size
        m_buffer.push_back(object);
    }
    else
        m_buffer[head] = object;

    m_head.store(nextHead, std::memory_order_release);

    return true;
}

template <typename T>
bool RingBuffer<T>::push(T & object)
{
    auto head = m_head.load(std::memory_order_relaxed);
    auto nextHead = next(head);

    if (nextHead == m_tail.load(std::memory_order_acquire))
    {
        return false;
    }

    assert(head < m_size);

    if (m_buffer.size() <= head)
    {
        m_buffer.push_back(object);
    }
    else
    {
        m_buffer[head] = object;
    }

    m_head.store(nextHead, std::memory_order_release);

    return true;
}

template <typename T>
T RingBuffer<T>::hat()
{
    auto head = m_head.load(std::memory_order_relaxed);
    auto nextHead = next(head);

    if (nextHead == m_tail.load(std::memory_order_acquire))
    {
        return nullptr;
    }

    return m_buffer[nextHead];
}

template <typename T>
typename RingBuffer<T>::TailIdentifier RingBuffer<T>::addTail()
{
    auto i = TailIdentifier{0};

    while(m_tails.find(i) != m_tails.end())
    {
        ++i;
    }

    m_tails[i] = m_tail.load(std::memory_order_acquire);

    return i;
}

template <typename T>
void RingBuffer<T>::removeTail(TailIdentifier key)
{
    m_tails.erase(key);

    updateTail();
}

template <typename T>
const typename std::vector<T>::const_iterator RingBuffer<T>::cbegin(TailIdentifier key)
{
    auto tail = m_tails[key].load(std::memory_order_relaxed);
    auto i = m_buffer.cbegin();

    std::advance(i, tail);

    return i;
}

template <typename T>
bool RingBuffer<T>::valid(TailIdentifier /*key*/, const typename std::vector<T>::const_iterator & it)
{
    auto pos = std::abs(std::distance(m_buffer.cbegin(), it));
    auto head = m_head.load(std::memory_order_acquire);

    return (pos != head);
}

template <typename T>
const typename std::vector<T>::const_iterator RingBuffer<T>::next(TailIdentifier key, const typename std::vector<T>::const_iterator & it)
{
    auto tail = m_tails[key].load(std::memory_order_acquire);

    if (tail == m_head.load(std::memory_order_acquire))
    {
        return it;
    }

    auto nextTail = next(tail);

    m_tails[key].store(nextTail, std::memory_order_release);
    updateTail();

    return cbegin(key);
}

template <typename T>
void RingBuffer<T>::release(TailIdentifier key, const typename std::vector<T>::const_iterator & it)
{
    auto newTail = std::distance(m_buffer.begin(), it);

    m_tails[key].store(newTail, std::memory_order_release);
    updateTail();    
}

template <typename T>
typename RingBuffer<T>::SizeType RingBuffer<T>::size(TailIdentifier key)
{
    auto head = m_head.load(std::memory_order_acquire);
    auto tail = m_tails[key].load(std::memory_order_acquire);

    return size(head, tail);
}

template <typename T>
typename RingBuffer<T>::SizeType RingBuffer<T>::maxSize()
{
    return m_size - 1;
}

template <typename T>
typename RingBuffer<T>::SizeType RingBuffer<T>::size()
{
    auto head = m_head.load(std::memory_order_acquire);
    auto tail = m_tail.load(std::memory_order_acquire);

    return size(head, tail);
}

template <typename T>
bool RingBuffer<T>::isFull()
{
    auto head = m_head.load(std::memory_order_relaxed);
    auto nextHead = next(head);

    return nextHead == m_tail.load(std::memory_order_acquire);
}

template <typename T>
bool RingBuffer<T>::isEmpty()
{
    auto tail = m_tail.load(std::memory_order_relaxed);

    return tail == m_head.load(std::memory_order_acquire);
}


//protected

template <typename T>
typename RingBuffer<T>::SizeType RingBuffer<T>::next(RingBuffer::SizeType current)
{
    return (current + 1) % m_size;
}

template <typename T>
void RingBuffer<T>::updateTail()
{
    m_tail_mutex.lock();

    auto tail = m_tail.load(std::memory_order_acquire);
    auto currentMin = 2 * m_size;

    for (auto it = m_tails.cbegin(); it != m_tails.cend(); ++it)
    {
        auto tailPos = it->second.load(std::memory_order_acquire);

        if (tailPos == tail)
        {
            m_tail_mutex.unlock();

            return;
        }

        if (tailPos < tail)
        {
            tailPos += m_size;
        }

        if (tailPos < currentMin)
        {
            currentMin = tailPos;
        }
    }

    if (currentMin == 2 * m_size)
    {
        m_tail_mutex.unlock();
        return;
    }

    if (currentMin >= m_size)
    {
        currentMin = currentMin % m_size;
    }

    m_tail.store(currentMin, std::memory_order_release);
    m_tail_mutex.unlock();
}

template <typename T>
typename RingBuffer<T>::SizeType RingBuffer<T>::size(SizeType head, SizeType tail)
{
    if (head < tail)
    {
        return m_size - tail + head;
    }
    else
    {
        return head - tail;
    }
}

} // namespace glbinding
