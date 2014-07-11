#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/bitfield.h>


namespace gl43core
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

enum class MapBufferUsageMask : unsigned int
{
	GL_MAP_READ_BIT = 0x0001,
	GL_MAP_WRITE_BIT = 0x0002,
	GL_MAP_INVALIDATE_RANGE_BIT = 0x0004,
	GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008,
	GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010,
	GL_MAP_UNSYNCHRONIZED_BIT = 0x0020,
};

enum class SyncObjectMask : unsigned int
{
	GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001,
};

enum class AttribMask : unsigned int
{
	GL_DEPTH_BUFFER_BIT = 0x00000100,
	GL_STENCIL_BUFFER_BIT = 0x00000400,
	GL_COLOR_BUFFER_BIT = 0x00004000,
};

enum class UseProgramStageMask : unsigned int
{
	GL_VERTEX_SHADER_BIT = 0x00000001,
	GL_FRAGMENT_SHADER_BIT = 0x00000002,
	GL_GEOMETRY_SHADER_BIT = 0x00000004,
	GL_TESS_CONTROL_SHADER_BIT = 0x00000008,
	GL_TESS_EVALUATION_SHADER_BIT = 0x00000010,
	GL_COMPUTE_SHADER_BIT = 0x00000020,
	GL_ALL_SHADER_BITS = 0xFFFFFFFF,
};

enum class MemoryBarrierMask : unsigned int
{
	GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001,
	GL_ELEMENT_ARRAY_BARRIER_BIT = 0x00000002,
	GL_UNIFORM_BARRIER_BIT = 0x00000004,
	GL_TEXTURE_FETCH_BARRIER_BIT = 0x00000008,
	GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020,
	GL_COMMAND_BARRIER_BIT = 0x00000040,
	GL_PIXEL_BUFFER_BARRIER_BIT = 0x00000080,
	GL_TEXTURE_UPDATE_BARRIER_BIT = 0x00000100,
	GL_BUFFER_UPDATE_BARRIER_BIT = 0x00000200,
	GL_FRAMEBUFFER_BARRIER_BIT = 0x00000400,
	GL_TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800,
	GL_ATOMIC_COUNTER_BARRIER_BIT = 0x00001000,
	GL_SHADER_STORAGE_BARRIER_BIT = 0x00002000,
	GL_ALL_BARRIER_BITS = 0xFFFFFFFF,
};

enum class ContextFlagMask : unsigned int
{
	GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001,
	GL_CONTEXT_FLAG_DEBUG_BIT = 0x00000002,
};

enum class ContextProfileMask : unsigned int
{
	GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001,
	GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002,
};


=======
>>>>>>> c10220af1a77b4a4d9bb283bdde62eb9626266ad
// import bitfields to namespace

// AttribMask

static const AttribMask GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
static const AttribMask GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
static const AttribMask GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;

// ContextFlagMask

static const ContextFlagMask GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = ContextFlagMask::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;
static const ContextFlagMask GL_CONTEXT_FLAG_DEBUG_BIT = ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT;

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

// MemoryBarrierMask

static const MemoryBarrierMask GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
static const MemoryBarrierMask GL_ELEMENT_ARRAY_BARRIER_BIT = MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT;
static const MemoryBarrierMask GL_UNIFORM_BARRIER_BIT = MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT;
static const MemoryBarrierMask GL_TEXTURE_FETCH_BARRIER_BIT = MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT;
static const MemoryBarrierMask GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
static const MemoryBarrierMask GL_COMMAND_BARRIER_BIT = MemoryBarrierMask::GL_COMMAND_BARRIER_BIT;
static const MemoryBarrierMask GL_PIXEL_BUFFER_BARRIER_BIT = MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT;
static const MemoryBarrierMask GL_TEXTURE_UPDATE_BARRIER_BIT = MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT;
static const MemoryBarrierMask GL_BUFFER_UPDATE_BARRIER_BIT = MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT;
static const MemoryBarrierMask GL_FRAMEBUFFER_BARRIER_BIT = MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT;
static const MemoryBarrierMask GL_TRANSFORM_FEEDBACK_BARRIER_BIT = MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
static const MemoryBarrierMask GL_ATOMIC_COUNTER_BARRIER_BIT = MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT;
static const MemoryBarrierMask GL_SHADER_STORAGE_BARRIER_BIT = MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT;
static const MemoryBarrierMask GL_ALL_BARRIER_BITS = MemoryBarrierMask::GL_ALL_BARRIER_BITS;

// SyncObjectMask

static const SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT = SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT;

// UseProgramStageMask

static const UseProgramStageMask GL_VERTEX_SHADER_BIT = UseProgramStageMask::GL_VERTEX_SHADER_BIT;
static const UseProgramStageMask GL_FRAGMENT_SHADER_BIT = UseProgramStageMask::GL_FRAGMENT_SHADER_BIT;
static const UseProgramStageMask GL_GEOMETRY_SHADER_BIT = UseProgramStageMask::GL_GEOMETRY_SHADER_BIT;
static const UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT = UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT;
static const UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT = UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT;
static const UseProgramStageMask GL_COMPUTE_SHADER_BIT = UseProgramStageMask::GL_COMPUTE_SHADER_BIT;
static const UseProgramStageMask GL_ALL_SHADER_BITS = UseProgramStageMask::GL_ALL_SHADER_BITS;

} // namespace gl43core
