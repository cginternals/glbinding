#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>


namespace gl10
{

using namespace gl;

class GenericBitmask
{
public:
	GenericBitfield() : value(0) {}
	GenericBitfield(unsigned int v) : value(v) {}
	template <typename T> GenericBitfield(T v) : value(static_cast<unsigned int>(v)) {}
	
	operator unsigned int() { return value; }
protected:
	unsigned int value;
};



// import bitfields to namespace


} // namespace gl10
