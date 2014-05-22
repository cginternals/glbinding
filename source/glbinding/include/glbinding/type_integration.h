#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/types.h>

#include <functional>
#include <ostream>
#include <string>

namespace std {

template<>
struct hash<gl::GLenum>
{
    hash<unsigned int>::result_type operator()(const gl::GLenum & e) const
    {
        return hash<unsigned int>()(static_cast<unsigned int>(e));
    }
};

}

bool operator==(const gl::GLenum & a, unsigned int b);
bool operator!=(const gl::GLenum & a, unsigned int b);
bool operator<(const gl::GLenum & a, unsigned int b);
bool operator<=(const gl::GLenum & a, unsigned int b);
bool operator>(const gl::GLenum & a, unsigned int b);
bool operator>=(const gl::GLenum & a, unsigned int b);

bool operator==(unsigned int a, const gl::GLenum & b);
bool operator!=(unsigned int a, const gl::GLenum & b);
bool operator<(unsigned int a, const gl::GLenum & b);
bool operator<=(unsigned int a, const gl::GLenum & b);
bool operator>(unsigned int a, const gl::GLenum & b);
bool operator>=(unsigned int a, const gl::GLenum & b);

gl::GLenum operator+(const gl::GLenum & a, unsigned int b);
gl::GLenum operator-(const gl::GLenum & a, unsigned int b);

std::ostream & operator<<(std::ostream & stream, const gl::GLenum & value);
