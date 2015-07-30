
#include <glpbinding/glp/typeintegrations.h>

#include <glpbinding/Meta.h>

#include <bitset>
#include <sstream>
#include <unordered_map>

#include "Meta_Maps.h"

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




namespace glp
{

std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glpbinding::Meta::getString(value);
    return stream;
}

} // namespace glp


namespace glp
{

GLenum operator+(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) + b);
}

GLenum operator-(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) - b);
}

} // namespace glp

namespace glp
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

} // namespace glp



namespace glp
{

std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glpbinding::Meta::getString(value);
    return stream;
}

} // namespace glp


namespace glp
{

bool operator!(const GLboolean & a)
{
    return !static_cast<bool>(static_cast<std::underlying_type<GLboolean>::type>(a));
}

} // namespace glp



namespace glp
{

std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glpbinding::Meta::getString(value);
    return stream;
}

} // namespace glp



namespace glp
{

std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << bitfieldString<AttribMask>(value, glpbinding::Meta_StringsByAttribMask);
    return stream;
}

} // namespace glp

namespace glp
{

AttribMask operator|(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));
}

AttribMask & operator|=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));
    
    return a;
}

AttribMask operator&(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));
}

AttribMask & operator&=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));
    
    return a;
}

AttribMask operator^(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));
}

AttribMask & operator^=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const BufferBitQCOM & value)
{
    stream << bitfieldString<BufferBitQCOM>(value, glpbinding::Meta_StringsByBufferBitQCOM);
    return stream;
}

} // namespace glp

namespace glp
{

BufferBitQCOM operator|(const BufferBitQCOM & a, const BufferBitQCOM & b)
{
    return static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) | static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
}

BufferBitQCOM & operator|=(BufferBitQCOM & a, const BufferBitQCOM & b)
{
    a = static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) | static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
    
    return a;
}

BufferBitQCOM operator&(const BufferBitQCOM & a, const BufferBitQCOM & b)
{
    return static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) & static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
}

BufferBitQCOM & operator&=(BufferBitQCOM & a, const BufferBitQCOM & b)
{
    a = static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) & static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
    
    return a;
}

BufferBitQCOM operator^(const BufferBitQCOM & a, const BufferBitQCOM & b)
{
    return static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) ^ static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
}

BufferBitQCOM & operator^=(BufferBitQCOM & a, const BufferBitQCOM & b)
{
    a = static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) ^ static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << bitfieldString<ClearBufferMask>(value, glpbinding::Meta_StringsByClearBufferMask);
    return stream;
}

} // namespace glp

namespace glp
{

ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

ClearBufferMask & operator|=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));
    
    return a;
}

ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

ClearBufferMask & operator&=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));
    
    return a;
}

ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

ClearBufferMask & operator^=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << bitfieldString<ContextFlagMask>(value, glpbinding::Meta_StringsByContextFlagMask);
    return stream;
}

} // namespace glp

namespace glp
{

ContextFlagMask operator|(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

ContextFlagMask & operator|=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));
    
    return a;
}

ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

ContextFlagMask & operator&=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));
    
    return a;
}

ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

ContextFlagMask & operator^=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value)
{
    stream << bitfieldString<MapBufferUsageMask>(value, glpbinding::Meta_StringsByMapBufferUsageMask);
    return stream;
}

} // namespace glp

namespace glp
{

MapBufferUsageMask operator|(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) | static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

MapBufferUsageMask & operator|=(MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    a = static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) | static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
    
    return a;
}

MapBufferUsageMask operator&(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) & static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

MapBufferUsageMask & operator&=(MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    a = static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) & static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
    
    return a;
}

MapBufferUsageMask operator^(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

MapBufferUsageMask & operator^=(MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    a = static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << bitfieldString<MemoryBarrierMask>(value, glpbinding::Meta_StringsByMemoryBarrierMask);
    return stream;
}

} // namespace glp

namespace glp
{

MemoryBarrierMask operator|(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

MemoryBarrierMask & operator|=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
    
    return a;
}

MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

MemoryBarrierMask & operator&=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
    
    return a;
}

MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

MemoryBarrierMask & operator^=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << bitfieldString<PathRenderingMaskNV>(value, glpbinding::Meta_StringsByPathRenderingMaskNV);
    return stream;
}

} // namespace glp

namespace glp
{

PathRenderingMaskNV operator|(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) | static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

PathRenderingMaskNV & operator|=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    a = static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) | static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
    
    return a;
}

PathRenderingMaskNV operator&(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) & static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

PathRenderingMaskNV & operator&=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    a = static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) & static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
    
    return a;
}

PathRenderingMaskNV operator^(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) ^ static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

PathRenderingMaskNV & operator^=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    a = static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) ^ static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << bitfieldString<PerformanceQueryCapsMaskINTEL>(value, glpbinding::Meta_StringsByPerformanceQueryCapsMaskINTEL);
    return stream;
}

} // namespace glp

namespace glp
{

PerformanceQueryCapsMaskINTEL operator|(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

PerformanceQueryCapsMaskINTEL & operator|=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
    
    return a;
}

PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

PerformanceQueryCapsMaskINTEL & operator&=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
    
    return a;
}

PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

PerformanceQueryCapsMaskINTEL & operator^=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << bitfieldString<SyncObjectMask>(value, glpbinding::Meta_StringsBySyncObjectMask);
    return stream;
}

} // namespace glp

namespace glp
{

SyncObjectMask operator|(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

SyncObjectMask & operator|=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));
    
    return a;
}

SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

SyncObjectMask & operator&=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));
    
    return a;
}

SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

SyncObjectMask & operator^=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << bitfieldString<UseProgramStageMask>(value, glpbinding::Meta_StringsByUseProgramStageMask);
    return stream;
}

} // namespace glp

namespace glp
{

UseProgramStageMask operator|(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

UseProgramStageMask & operator|=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
    
    return a;
}

UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

UseProgramStageMask & operator&=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
    
    return a;
}

UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

UseProgramStageMask & operator^=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << bitfieldString<UnusedMask>(value, glpbinding::Meta_StringsByUnusedMask);
    return stream;
}

} // namespace glp

namespace glp
{

UnusedMask operator|(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));
}

UnusedMask & operator|=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));
    
    return a;
}

UnusedMask operator&(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));
}

UnusedMask & operator&=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));
    
    return a;
}

UnusedMask operator^(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));
}

UnusedMask & operator^=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value)
{
    stream << bitfieldString<BufferAccessMask>(value, glpbinding::Meta_StringsByBufferAccessMask);
    return stream;
}

} // namespace glp

namespace glp
{

BufferAccessMask operator|(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) | static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

BufferAccessMask & operator|=(BufferAccessMask & a, const BufferAccessMask & b)
{
    a = static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) | static_cast<std::underlying_type<BufferAccessMask>::type>(b));
    
    return a;
}

BufferAccessMask operator&(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) & static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

BufferAccessMask & operator&=(BufferAccessMask & a, const BufferAccessMask & b)
{
    a = static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) & static_cast<std::underlying_type<BufferAccessMask>::type>(b));
    
    return a;
}

BufferAccessMask operator^(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

BufferAccessMask & operator^=(BufferAccessMask & a, const BufferAccessMask & b)
{
    a = static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<BufferAccessMask>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << bitfieldString<BufferStorageMask>(value, glpbinding::Meta_StringsByBufferStorageMask);
    return stream;
}

} // namespace glp

namespace glp
{

BufferStorageMask operator|(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

BufferStorageMask & operator|=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));
    
    return a;
}

BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

BufferStorageMask & operator&=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));
    
    return a;
}

BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

BufferStorageMask & operator^=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));
    
    return a;
}

} // namespace glp


namespace glp
{

std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << bitfieldString<PathFontStyle>(value, glpbinding::Meta_StringsByPathFontStyle);
    return stream;
}

} // namespace glp

namespace glp
{

PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

PathFontStyle & operator|=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));
    
    return a;
}

PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

PathFontStyle & operator&=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));
    
    return a;
}

PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

PathFontStyle & operator^=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));
    
    return a;
}

} // namespace glp
