#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/bitfield.h>


namespace gl10
{

using namespace gl;

<<<<<<< HEAD
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



=======
>>>>>>> c10220af1a77b4a4d9bb283bdde62eb9626266ad
// import bitfields to namespace


} // namespace gl10
