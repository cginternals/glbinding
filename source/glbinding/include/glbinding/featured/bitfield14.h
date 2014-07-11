#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>


namespace gl14
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

enum class ClientAttribMask : unsigned int
{
	GL_CLIENT_PIXEL_STORE_BIT = 0x00000001,
	GL_CLIENT_VERTEX_ARRAY_BIT = 0x00000002,
	GL_CLIENT_ALL_ATTRIB_BITS = 0xFFFFFFFF,
};

enum class AttribMask : unsigned int
{
	GL_CURRENT_BIT = 0x00000001,
	GL_POINT_BIT = 0x00000002,
	GL_LINE_BIT = 0x00000004,
	GL_POLYGON_BIT = 0x00000008,
	GL_POLYGON_STIPPLE_BIT = 0x00000010,
	GL_PIXEL_MODE_BIT = 0x00000020,
	GL_LIGHTING_BIT = 0x00000040,
	GL_FOG_BIT = 0x00000080,
	GL_DEPTH_BUFFER_BIT = 0x00000100,
	GL_ACCUM_BUFFER_BIT = 0x00000200,
	GL_STENCIL_BUFFER_BIT = 0x00000400,
	GL_VIEWPORT_BIT = 0x00000800,
	GL_TRANSFORM_BIT = 0x00001000,
	GL_ENABLE_BIT = 0x00002000,
	GL_COLOR_BUFFER_BIT = 0x00004000,
	GL_HINT_BIT = 0x00008000,
	GL_EVAL_BIT = 0x00010000,
	GL_LIST_BIT = 0x00020000,
	GL_TEXTURE_BIT = 0x00040000,
	GL_SCISSOR_BIT = 0x00080000,
	GL_MULTISAMPLE_BIT = 0x20000000,
	GL_ALL_ATTRIB_BITS = 0xFFFFFFFF,
};


// import bitfields to namespace

// AttribMask

static const AttribMask GL_CURRENT_BIT = AttribMask::GL_CURRENT_BIT;
static const AttribMask GL_POINT_BIT = AttribMask::GL_POINT_BIT;
static const AttribMask GL_LINE_BIT = AttribMask::GL_LINE_BIT;
static const AttribMask GL_POLYGON_BIT = AttribMask::GL_POLYGON_BIT;
static const AttribMask GL_POLYGON_STIPPLE_BIT = AttribMask::GL_POLYGON_STIPPLE_BIT;
static const AttribMask GL_PIXEL_MODE_BIT = AttribMask::GL_PIXEL_MODE_BIT;
static const AttribMask GL_LIGHTING_BIT = AttribMask::GL_LIGHTING_BIT;
static const AttribMask GL_FOG_BIT = AttribMask::GL_FOG_BIT;
static const AttribMask GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
static const AttribMask GL_ACCUM_BUFFER_BIT = AttribMask::GL_ACCUM_BUFFER_BIT;
static const AttribMask GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
static const AttribMask GL_VIEWPORT_BIT = AttribMask::GL_VIEWPORT_BIT;
static const AttribMask GL_TRANSFORM_BIT = AttribMask::GL_TRANSFORM_BIT;
static const AttribMask GL_ENABLE_BIT = AttribMask::GL_ENABLE_BIT;
static const AttribMask GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;
static const AttribMask GL_HINT_BIT = AttribMask::GL_HINT_BIT;
static const AttribMask GL_EVAL_BIT = AttribMask::GL_EVAL_BIT;
static const AttribMask GL_LIST_BIT = AttribMask::GL_LIST_BIT;
static const AttribMask GL_TEXTURE_BIT = AttribMask::GL_TEXTURE_BIT;
static const AttribMask GL_SCISSOR_BIT = AttribMask::GL_SCISSOR_BIT;
static const AttribMask GL_MULTISAMPLE_BIT = AttribMask::GL_MULTISAMPLE_BIT;
static const AttribMask GL_ALL_ATTRIB_BITS = AttribMask::GL_ALL_ATTRIB_BITS;

// ClientAttribMask

static const ClientAttribMask GL_CLIENT_PIXEL_STORE_BIT = ClientAttribMask::GL_CLIENT_PIXEL_STORE_BIT;
static const ClientAttribMask GL_CLIENT_VERTEX_ARRAY_BIT = ClientAttribMask::GL_CLIENT_VERTEX_ARRAY_BIT;
static const ClientAttribMask GL_CLIENT_ALL_ATTRIB_BITS = ClientAttribMask::GL_CLIENT_ALL_ATTRIB_BITS;

} // namespace gl14
