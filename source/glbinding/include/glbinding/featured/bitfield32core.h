#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>


namespace gl32core
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

enum class AttribMask : unsigned int
{
	GL_DEPTH_BUFFER_BIT = 0x00000100,
	GL_STENCIL_BUFFER_BIT = 0x00000400,
	GL_COLOR_BUFFER_BIT = 0x00004000,
};

enum class MapBufferUsageMask : unsigned int
{
	GL_MAP_READ_BIT = 0x0001,
	GL_MAP_WRITE_BIT = 0x0002,
	GL_MAP_INVALIDATE_RANGE_BIT = 0x0004,
	GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008,
	GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010,
	GL_MAP_UNSYNCHRONIZED_BIT = 0x0020,
};

enum class ContextFlagMask : unsigned int
{
	GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001,
};

enum class SyncObjectMask : unsigned int
{
	GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001,
};

enum class ContextProfileMask : unsigned int
{
	GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001,
	GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002,
};


// import bitfields to namespace

// AttribMask

static const AttribMask GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
static const AttribMask GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
static const AttribMask GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;

// ContextFlagMask

static const ContextFlagMask GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = ContextFlagMask::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;

// ContextProfileMask

static const ContextProfileMask GL_CONTEXT_CORE_PROFILE_BIT = ContextProfileMask::GL_CONTEXT_CORE_PROFILE_BIT;
static const ContextProfileMask GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = ContextProfileMask::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;

// MapBufferUsageMask

static const MapBufferUsageMask GL_MAP_READ_BIT = MapBufferUsageMask::GL_MAP_READ_BIT;
static const MapBufferUsageMask GL_MAP_WRITE_BIT = MapBufferUsageMask::GL_MAP_WRITE_BIT;
static const MapBufferUsageMask GL_MAP_INVALIDATE_RANGE_BIT = MapBufferUsageMask::GL_MAP_INVALIDATE_RANGE_BIT;
static const MapBufferUsageMask GL_MAP_INVALIDATE_BUFFER_BIT = MapBufferUsageMask::GL_MAP_INVALIDATE_BUFFER_BIT;
static const MapBufferUsageMask GL_MAP_FLUSH_EXPLICIT_BIT = MapBufferUsageMask::GL_MAP_FLUSH_EXPLICIT_BIT;
static const MapBufferUsageMask GL_MAP_UNSYNCHRONIZED_BIT = MapBufferUsageMask::GL_MAP_UNSYNCHRONIZED_BIT;

// SyncObjectMask

static const SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT = SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT;

} // namespace gl32core
