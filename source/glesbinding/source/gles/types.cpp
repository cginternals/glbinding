
#include <glesbinding/gles/types.h>

#include <glesbinding/Meta.h>

#include <bitset>
#include <sstream>
#include <unordered_map>

#include "../Meta_Maps.h"

template <typename T>
std::string bitfieldString(T value, const std::unordered_map<T, std::string> & map)
{
	using U = typename std::underlying_type<T>::type;
	
	std::bitset<sizeof(U)*8> bits(static_cast<U>(value));
	
	std::stringstream ss;
	bool first = true;
	
	for (size_t i = 0; i<sizeof(U)*8; ++i)
	{
		if (bits.test(i))
		{
			if (first)
			{
				first = false;
			}
			else
			{
				ss << " | ";
			}
			
			U bit = 1 << i;
			auto it = map.find(static_cast<T>(bit));
			if (it == map.end())
			{
				ss << "1 << " << i;
			}
			else
			{
				ss << it->second;
			}
		}
	}
	
	return ss.str();
};




namespace gles
{

std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glesbinding::Meta::getString(value);
    return stream;
}

} // namespace gles


namespace gles
{

GLenum operator+(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) + b);
}

GLenum operator-(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) - b);
}

} // namespace gles

namespace gles
{

bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) == b;
}

bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) != b;
}

bool operator<(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) < b;
}

bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) <= b;
}

bool operator>(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) > b;
}

bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) >= b;
}

bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a == static_cast<std::underlying_type<GLenum>::type>(b);
}

bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a != static_cast<std::underlying_type<GLenum>::type>(b);
}

bool operator<(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a < static_cast<std::underlying_type<GLenum>::type>(b);
}

bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a <= static_cast<std::underlying_type<GLenum>::type>(b);
}

bool operator>(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a > static_cast<std::underlying_type<GLenum>::type>(b);
}

bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a >= static_cast<std::underlying_type<GLenum>::type>(b);
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glesbinding::Meta::getString(value);
    return stream;
}

} // namespace gles


namespace gles
{

bool operator!(const GLboolean & a)
{
    return !static_cast<bool>(static_cast<std::underlying_type<GLboolean>::type>(a));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glesbinding::Meta::getString(value);
    return stream;
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << bitfieldString<AttribMask>(value, glesbinding::Meta_StringsByAttribMask);
    return stream;
}

} // namespace gles


namespace gles
{

AttribMask operator|(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));
}

AttribMask operator&(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));
}

AttribMask operator^(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const BufferBitQCOM & value)
{
    stream << bitfieldString<BufferBitQCOM>(value, glesbinding::Meta_StringsByBufferBitQCOM);
    return stream;
}

} // namespace gles


namespace gles
{

BufferBitQCOM operator|(const BufferBitQCOM & a, const BufferBitQCOM & b)
{
    return static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) | static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
}

BufferBitQCOM operator&(const BufferBitQCOM & a, const BufferBitQCOM & b)
{
    return static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) & static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
}

BufferBitQCOM operator^(const BufferBitQCOM & a, const BufferBitQCOM & b)
{
    return static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) ^ static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << bitfieldString<ClearBufferMask>(value, glesbinding::Meta_StringsByClearBufferMask);
    return stream;
}

} // namespace gles


namespace gles
{

ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << bitfieldString<ContextFlagMask>(value, glesbinding::Meta_StringsByContextFlagMask);
    return stream;
}

} // namespace gles


namespace gles
{

ContextFlagMask operator|(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value)
{
    stream << bitfieldString<MapBufferUsageMask>(value, glesbinding::Meta_StringsByMapBufferUsageMask);
    return stream;
}

} // namespace gles


namespace gles
{

MapBufferUsageMask operator|(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) | static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

MapBufferUsageMask operator&(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) & static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

MapBufferUsageMask operator^(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << bitfieldString<MemoryBarrierMask>(value, glesbinding::Meta_StringsByMemoryBarrierMask);
    return stream;
}

} // namespace gles


namespace gles
{

MemoryBarrierMask operator|(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << bitfieldString<PathRenderingMaskNV>(value, glesbinding::Meta_StringsByPathRenderingMaskNV);
    return stream;
}

} // namespace gles


namespace gles
{

PathRenderingMaskNV operator|(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) | static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

PathRenderingMaskNV operator&(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) & static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

PathRenderingMaskNV operator^(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) ^ static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << bitfieldString<PerformanceQueryCapsMaskINTEL>(value, glesbinding::Meta_StringsByPerformanceQueryCapsMaskINTEL);
    return stream;
}

} // namespace gles


namespace gles
{

PerformanceQueryCapsMaskINTEL operator|(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << bitfieldString<SyncObjectMask>(value, glesbinding::Meta_StringsBySyncObjectMask);
    return stream;
}

} // namespace gles


namespace gles
{

SyncObjectMask operator|(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << bitfieldString<UseProgramStageMask>(value, glesbinding::Meta_StringsByUseProgramStageMask);
    return stream;
}

} // namespace gles


namespace gles
{

UseProgramStageMask operator|(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << bitfieldString<UnusedMask>(value, glesbinding::Meta_StringsByUnusedMask);
    return stream;
}

} // namespace gles


namespace gles
{

UnusedMask operator|(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));
}

UnusedMask operator&(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));
}

UnusedMask operator^(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value)
{
    stream << bitfieldString<BufferAccessMask>(value, glesbinding::Meta_StringsByBufferAccessMask);
    return stream;
}

} // namespace gles


namespace gles
{

BufferAccessMask operator|(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) | static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

BufferAccessMask operator&(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) & static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

BufferAccessMask operator^(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << bitfieldString<BufferStorageMask>(value, glesbinding::Meta_StringsByBufferStorageMask);
    return stream;
}

} // namespace gles


namespace gles
{

BufferStorageMask operator|(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

} // namespace gles



namespace gles
{

std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << bitfieldString<PathFontStyle>(value, glesbinding::Meta_StringsByPathFontStyle);
    return stream;
}

} // namespace gles


namespace gles
{

PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

} // namespace gles

