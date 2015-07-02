
#include <glbinding/gl/types.h>

#include <glbinding/Meta.h>

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




namespace gl
{

std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}

} // namespace gl


namespace gl
{

GLenum operator+(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) + b);
}

GLenum operator-(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) - b);
}

} // namespace gl

namespace gl
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

} // namespace gl



namespace gl
{

std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}

} // namespace gl


namespace gl
{

bool operator!(const GLboolean & a)
{
    return !static_cast<bool>(static_cast<std::underlying_type<GLboolean>::type>(a));
}

} // namespace gl



namespace gl
{

std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}

} // namespace gl



namespace gl
{

std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << bitfieldString<AttribMask>(value, glbinding::Meta_StringsByAttribMask);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << bitfieldString<ClearBufferMask>(value, glbinding::Meta_StringsByClearBufferMask);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value)
{
    stream << bitfieldString<ClientAttribMask>(value, glbinding::Meta_StringsByClientAttribMask);
    return stream;
}

} // namespace gl

namespace gl
{

ClientAttribMask operator|(const ClientAttribMask & a, const ClientAttribMask & b)
{
    return static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) | static_cast<std::underlying_type<ClientAttribMask>::type>(b));
}

ClientAttribMask & operator|=(ClientAttribMask & a, const ClientAttribMask & b)
{
    a = static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) | static_cast<std::underlying_type<ClientAttribMask>::type>(b));
    
    return a;
}

ClientAttribMask operator&(const ClientAttribMask & a, const ClientAttribMask & b)
{
    return static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) & static_cast<std::underlying_type<ClientAttribMask>::type>(b));
}

ClientAttribMask & operator&=(ClientAttribMask & a, const ClientAttribMask & b)
{
    a = static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) & static_cast<std::underlying_type<ClientAttribMask>::type>(b));
    
    return a;
}

ClientAttribMask operator^(const ClientAttribMask & a, const ClientAttribMask & b)
{
    return static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) ^ static_cast<std::underlying_type<ClientAttribMask>::type>(b));
}

ClientAttribMask & operator^=(ClientAttribMask & a, const ClientAttribMask & b)
{
    a = static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) ^ static_cast<std::underlying_type<ClientAttribMask>::type>(b));
    
    return a;
}

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << bitfieldString<ContextFlagMask>(value, glbinding::Meta_StringsByContextFlagMask);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value)
{
    stream << bitfieldString<ContextProfileMask>(value, glbinding::Meta_StringsByContextProfileMask);
    return stream;
}

} // namespace gl

namespace gl
{

ContextProfileMask operator|(const ContextProfileMask & a, const ContextProfileMask & b)
{
    return static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) | static_cast<std::underlying_type<ContextProfileMask>::type>(b));
}

ContextProfileMask & operator|=(ContextProfileMask & a, const ContextProfileMask & b)
{
    a = static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) | static_cast<std::underlying_type<ContextProfileMask>::type>(b));
    
    return a;
}

ContextProfileMask operator&(const ContextProfileMask & a, const ContextProfileMask & b)
{
    return static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) & static_cast<std::underlying_type<ContextProfileMask>::type>(b));
}

ContextProfileMask & operator&=(ContextProfileMask & a, const ContextProfileMask & b)
{
    a = static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) & static_cast<std::underlying_type<ContextProfileMask>::type>(b));
    
    return a;
}

ContextProfileMask operator^(const ContextProfileMask & a, const ContextProfileMask & b)
{
    return static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<ContextProfileMask>::type>(b));
}

ContextProfileMask & operator^=(ContextProfileMask & a, const ContextProfileMask & b)
{
    a = static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<ContextProfileMask>::type>(b));
    
    return a;
}

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value)
{
    stream << bitfieldString<FfdMaskSGIX>(value, glbinding::Meta_StringsByFfdMaskSGIX);
    return stream;
}

} // namespace gl

namespace gl
{

FfdMaskSGIX operator|(const FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    return static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) | static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
}

FfdMaskSGIX & operator|=(FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    a = static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) | static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
    
    return a;
}

FfdMaskSGIX operator&(const FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    return static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) & static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
}

FfdMaskSGIX & operator&=(FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    a = static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) & static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
    
    return a;
}

FfdMaskSGIX operator^(const FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    return static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) ^ static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
}

FfdMaskSGIX & operator^=(FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    a = static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) ^ static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
    
    return a;
}

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value)
{
    stream << bitfieldString<FragmentShaderColorModMaskATI>(value, glbinding::Meta_StringsByFragmentShaderColorModMaskATI);
    return stream;
}

} // namespace gl

namespace gl
{

FragmentShaderColorModMaskATI operator|(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    return static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
}

FragmentShaderColorModMaskATI & operator|=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    a = static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
    
    return a;
}

FragmentShaderColorModMaskATI operator&(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    return static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
}

FragmentShaderColorModMaskATI & operator&=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    a = static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
    
    return a;
}

FragmentShaderColorModMaskATI operator^(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    return static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
}

FragmentShaderColorModMaskATI & operator^=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    a = static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
    
    return a;
}

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value)
{
    stream << bitfieldString<FragmentShaderDestMaskATI>(value, glbinding::Meta_StringsByFragmentShaderDestMaskATI);
    return stream;
}

} // namespace gl

namespace gl
{

FragmentShaderDestMaskATI operator|(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

FragmentShaderDestMaskATI & operator|=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
    
    return a;
}

FragmentShaderDestMaskATI operator&(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

FragmentShaderDestMaskATI & operator&=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
    
    return a;
}

FragmentShaderDestMaskATI operator^(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

FragmentShaderDestMaskATI & operator^=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
    
    return a;
}

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value)
{
    stream << bitfieldString<FragmentShaderDestModMaskATI>(value, glbinding::Meta_StringsByFragmentShaderDestModMaskATI);
    return stream;
}

} // namespace gl

namespace gl
{

FragmentShaderDestModMaskATI operator|(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

FragmentShaderDestModMaskATI & operator|=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
    
    return a;
}

FragmentShaderDestModMaskATI operator&(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

FragmentShaderDestModMaskATI & operator&=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
    
    return a;
}

FragmentShaderDestModMaskATI operator^(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

FragmentShaderDestModMaskATI & operator^=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
    
    return a;
}

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value)
{
    stream << bitfieldString<MapBufferUsageMask>(value, glbinding::Meta_StringsByMapBufferUsageMask);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << bitfieldString<MemoryBarrierMask>(value, glbinding::Meta_StringsByMemoryBarrierMask);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << bitfieldString<PathRenderingMaskNV>(value, glbinding::Meta_StringsByPathRenderingMaskNV);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << bitfieldString<PerformanceQueryCapsMaskINTEL>(value, glbinding::Meta_StringsByPerformanceQueryCapsMaskINTEL);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << bitfieldString<SyncObjectMask>(value, glbinding::Meta_StringsBySyncObjectMask);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value)
{
    stream << bitfieldString<TextureStorageMaskAMD>(value, glbinding::Meta_StringsByTextureStorageMaskAMD);
    return stream;
}

} // namespace gl

namespace gl
{

TextureStorageMaskAMD operator|(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    return static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) | static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
}

TextureStorageMaskAMD & operator|=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    a = static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) | static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
    
    return a;
}

TextureStorageMaskAMD operator&(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    return static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) & static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
}

TextureStorageMaskAMD & operator&=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    a = static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) & static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
    
    return a;
}

TextureStorageMaskAMD operator^(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    return static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) ^ static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
}

TextureStorageMaskAMD & operator^=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    a = static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) ^ static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
    
    return a;
}

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << bitfieldString<UseProgramStageMask>(value, glbinding::Meta_StringsByUseProgramStageMask);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value)
{
    stream << bitfieldString<VertexHintsMaskPGI>(value, glbinding::Meta_StringsByVertexHintsMaskPGI);
    return stream;
}

} // namespace gl

namespace gl
{

VertexHintsMaskPGI operator|(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    return static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) | static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
}

VertexHintsMaskPGI & operator|=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    a = static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) | static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
    
    return a;
}

VertexHintsMaskPGI operator&(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    return static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) & static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
}

VertexHintsMaskPGI & operator&=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    a = static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) & static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
    
    return a;
}

VertexHintsMaskPGI operator^(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    return static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) ^ static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
}

VertexHintsMaskPGI & operator^=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    a = static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) ^ static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
    
    return a;
}

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << bitfieldString<UnusedMask>(value, glbinding::Meta_StringsByUnusedMask);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value)
{
    stream << bitfieldString<BufferAccessMask>(value, glbinding::Meta_StringsByBufferAccessMask);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << bitfieldString<BufferStorageMask>(value, glbinding::Meta_StringsByBufferStorageMask);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl


namespace gl
{

std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << bitfieldString<PathFontStyle>(value, glbinding::Meta_StringsByPathFontStyle);
    return stream;
}

} // namespace gl

namespace gl
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

} // namespace gl
