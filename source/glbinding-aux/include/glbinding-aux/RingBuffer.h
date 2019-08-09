#pragma once

#include <atomic>
#include <iterator>
#include <map>
#include <vector>


namespace glbinding { namespace aux
{


/**
*  @brief
*    A threadsafe queue with a single insertion and multiple extraction points
*
*  @tparam T
*    Data type stored within the buffer
*/
template <typename T>
class RingBuffer 
{

public:
    // Buffer is limited to (maxValue(sizeType)/2 - 1) entries
    using SizeType = unsigned int;       ///< Numeric type employed for indices, sizes and distances
    using TailIdentifier = unsigned int; ///< Identifier type for tails

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] maxSize
    *    Maximum size for the buffer
    */
    RingBuffer(SizeType maxSize);

    /**
    *  @brief
    *    Resize buffer
    *
    *  @param[in] newSize
    *    New maximum size for the buffer
    */
    void resize(SizeType newSize);

    /**
    *  @brief
    *    Retrieve element beyond current head
    *
    *  @param[out] available
    *    `true` if buffer has available space, `false` otherwise
    *
    *  @return
    *    Requested element if buffer has available space, nullptr otherwise
    */
    T nextHead(bool & available) const;

    /**
    *  @brief
    *    Add an element to the buffer, if possible
    *
    *  @param[in] entry
    *    Element to add
    *
    *  @return
    *    `true` if the element could be added, `false` otherwise
    */
    bool push(T && entry);

    /**
    *  @brief
    *    Add an element to the buffer, if possible
    *
    *  @param[in] entry
    *    Element to add
    *
    *  @return
    *    `true` if the element could be added, `false` otherwise
    */
    bool push(T & entry);

    /**
    *  @brief
    *    Add a new tail to the buffer
    *
    *  @return
    *    Identifier for the newly added tail
    */
    TailIdentifier addTail();

    /**
    *  @brief
    *    Remove a tail from the buffer
    *
    *  @param[in] key
    *    Identifier for the tail to be removed
    */
    void removeTail(TailIdentifier key);

    /**
    *  @brief
    *    Retrieve the iterator for a tail
    *
    *  @param[in] key
    *    Identifier for the tail
    *
    *  @return
    *    Iterator belonging to the tail
    *
    *  @remark
    *    Use RingBuffer::next() to advance the iterator
    */
    const typename std::vector<T>::const_iterator cbegin(TailIdentifier key) const;

    /**
    *  @brief
    *    Check if iterator is valid
    *
    *  @param[in] key
    *    Identifier for the tail
    *
    *  @param[in] it
    *    Iterator to check
    *
    *  @return
    *    `true` if iterator is valid, `false` otherwise
    */
    bool valid(TailIdentifier key, const typename std::vector<T>::const_iterator & it) const;

    /**
    *  @brief
    *    Advance the iterator of a tail
    *
    *  @param[in] key
    *    Identifier for the tail
    *
    *  @param[in] it
    *    Iterator to return in case of failure
    *
    *  @return
    *    Next iterator if tail could be advanced, \a it otherwise
    */
    const typename std::vector<T>::const_iterator next(TailIdentifier key, const typename std::vector<T>::const_iterator & it);

    /**
    *  @brief
    *    Calculate distance between tail and head
    *
    *  @param[in] key
    *    Identifier for tail
    *
    *  @return
    *    Distance between tail and head
    */
    SizeType size(TailIdentifier key);

    /**
    *  @brief
    *    Query maximum size
    *
    *  @return
    *    Maximum size
    */
    SizeType maxSize() const;

    /**
    *  @brief
    *    Query current size
    *
    *  @return
    *    Current size (= distance of the tail furthest behind the head)
    */
    SizeType size() const;

    /**
    *  @brief
    *    Query if buffer is full
    *
    *  @return
    *    `true` if buffer is full, `false` otherwise
    */
    bool isFull() const;

    /**
    *  @brief
    *    Query if buffer is empty
    *
    *  @return
    *    `true` if buffer is empty, `false` otherwise
    */
    bool isEmpty() const;

protected:
    /**
    *  @brief
    *    Calculate following index in internal buffer
    *
    *  @param[in] current
    *    Base index
    *
    *  @return
    *    Index following \a current
    */
    SizeType next(SizeType current) const;

    /**
    *  @brief
    *    Check if head can advance
    *
    *  @param[in] nextHead
    *    Index to check
    *
    *  @return
    *    `true` if \a nextHead is referenced by a tail, `false` otherwise
    */
    bool isFull(SizeType nextHead) const;

    /**
    *  @brief
    *    Determine last (furthest behind) index still in use
    *
    *  @return
    *    Last index
    */
    SizeType lastTail() const;

    /**
    *  @brief
    *    Calculate size of range between two indices
    *
    *  @param[in] head
    *    End of range
    *
    *  @param[in] tail
    *    Start of range
    *
    *  @return
    *    Size of range
    */
    SizeType size(SizeType head, SizeType tail) const;

protected:
    std::vector<T> m_buffer;                                 ///< Internal buffer
    SizeType m_size;                                         ///< Size of buffer
    std::atomic<SizeType> m_head;                            ///< Index of head (newest element)
    std::map<TailIdentifier, std::atomic<SizeType>> m_tails; ///< Map (identifier->index) of tails
};


} } // namespace glbinding::aux


#include <glbinding-aux/RingBuffer.inl>