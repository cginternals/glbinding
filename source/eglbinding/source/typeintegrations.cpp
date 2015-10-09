
#include <eglbinding/egl/typeintegrations.h>

#include <eglbinding/Meta.h>

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




namespace egl
{

std::ostream & operator<<(std::ostream & stream, const EGLenum & value)
{
    stream << eglbinding::Meta::getString(value);
    return stream;
}

} // namespace egl


namespace egl
{

EGLenum operator+(const EGLenum & a, std::underlying_type<EGLenum>::type b)
{
    return static_cast<EGLenum>(static_cast<std::underlying_type<EGLenum>::type>(a) + b);
}

EGLenum operator-(const EGLenum & a, std::underlying_type<EGLenum>::type b)
{
    return static_cast<EGLenum>(static_cast<std::underlying_type<EGLenum>::type>(a) - b);
}

} // namespace egl

namespace egl
{

bool operator==(const EGLenum & a, std::underlying_type<EGLenum>::type b)
{
    return static_cast<std::underlying_type<EGLenum>::type>(a) == b;
}

bool operator!=(const EGLenum & a, std::underlying_type<EGLenum>::type b)
{
    return static_cast<std::underlying_type<EGLenum>::type>(a) != b;
}

bool operator<(const EGLenum & a, std::underlying_type<EGLenum>::type b)
{
    return static_cast<std::underlying_type<EGLenum>::type>(a) < b;
}

bool operator<=(const EGLenum & a, std::underlying_type<EGLenum>::type b)
{
    return static_cast<std::underlying_type<EGLenum>::type>(a) <= b;
}

bool operator>(const EGLenum & a, std::underlying_type<EGLenum>::type b)
{
    return static_cast<std::underlying_type<EGLenum>::type>(a) > b;
}

bool operator>=(const EGLenum & a, std::underlying_type<EGLenum>::type b)
{
    return static_cast<std::underlying_type<EGLenum>::type>(a) >= b;
}

bool operator==(std::underlying_type<EGLenum>::type a, const EGLenum & b)
{
    return a == static_cast<std::underlying_type<EGLenum>::type>(b);
}

bool operator!=(std::underlying_type<EGLenum>::type a, const EGLenum & b)
{
    return a != static_cast<std::underlying_type<EGLenum>::type>(b);
}

bool operator<(std::underlying_type<EGLenum>::type a, const EGLenum & b)
{
    return a < static_cast<std::underlying_type<EGLenum>::type>(b);
}

bool operator<=(std::underlying_type<EGLenum>::type a, const EGLenum & b)
{
    return a <= static_cast<std::underlying_type<EGLenum>::type>(b);
}

bool operator>(std::underlying_type<EGLenum>::type a, const EGLenum & b)
{
    return a > static_cast<std::underlying_type<EGLenum>::type>(b);
}

bool operator>=(std::underlying_type<EGLenum>::type a, const EGLenum & b)
{
    return a >= static_cast<std::underlying_type<EGLenum>::type>(b);
}

} // namespace egl



namespace egl
{

std::ostream & operator<<(std::ostream & stream, const EGLboolean & value)
{
    stream << eglbinding::Meta::getString(value);
    return stream;
}

} // namespace egl


namespace egl
{

bool operator!(const EGLboolean & a)
{
    return !static_cast<bool>(static_cast<std::underlying_type<EGLboolean>::type>(a));
}

} // namespace egl



namespace egl
{

std::ostream & operator<<(std::ostream & stream, const EGLextension & value)
{
    stream << eglbinding::Meta::getString(value);
    return stream;
}

} // namespace egl



namespace egl
{

std::ostream & operator<<(std::ostream & stream, const EGLContextFlagMask & value)
{
    stream << bitfieldString<EGLContextFlagMask>(value, eglbinding::Meta_StringsByEGLContextFlagMask);
    return stream;
}

} // namespace egl

namespace egl
{

EGLContextFlagMask operator|(const EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    return static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) | static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));
}

EGLContextFlagMask & operator|=(EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    a = static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) | static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));
    
    return a;
}

EGLContextFlagMask operator&(const EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    return static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) & static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));
}

EGLContextFlagMask & operator&=(EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    a = static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) & static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));
    
    return a;
}

EGLContextFlagMask operator^(const EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    return static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));
}

EGLContextFlagMask & operator^=(EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    a = static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));
    
    return a;
}

} // namespace egl


namespace egl
{

std::ostream & operator<<(std::ostream & stream, const EGLContextProfileMask & value)
{
    stream << bitfieldString<EGLContextProfileMask>(value, eglbinding::Meta_StringsByEGLContextProfileMask);
    return stream;
}

} // namespace egl

namespace egl
{

EGLContextProfileMask operator|(const EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    return static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) | static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));
}

EGLContextProfileMask & operator|=(EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    a = static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) | static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));
    
    return a;
}

EGLContextProfileMask operator&(const EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    return static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) & static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));
}

EGLContextProfileMask & operator&=(EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    a = static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) & static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));
    
    return a;
}

EGLContextProfileMask operator^(const EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    return static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));
}

EGLContextProfileMask & operator^=(EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    a = static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));
    
    return a;
}

} // namespace egl


namespace egl
{

std::ostream & operator<<(std::ostream & stream, const EGLDRMBufferUseMESAMask & value)
{
    stream << bitfieldString<EGLDRMBufferUseMESAMask>(value, eglbinding::Meta_StringsByEGLDRMBufferUseMESAMask);
    return stream;
}

} // namespace egl

namespace egl
{

EGLDRMBufferUseMESAMask operator|(const EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    return static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) | static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));
}

EGLDRMBufferUseMESAMask & operator|=(EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    a = static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) | static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));
    
    return a;
}

EGLDRMBufferUseMESAMask operator&(const EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    return static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) & static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));
}

EGLDRMBufferUseMESAMask & operator&=(EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    a = static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) & static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));
    
    return a;
}

EGLDRMBufferUseMESAMask operator^(const EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    return static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) ^ static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));
}

EGLDRMBufferUseMESAMask & operator^=(EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    a = static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) ^ static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));
    
    return a;
}

} // namespace egl


namespace egl
{

std::ostream & operator<<(std::ostream & stream, const EGLLockUsageHintKHRMask & value)
{
    stream << bitfieldString<EGLLockUsageHintKHRMask>(value, eglbinding::Meta_StringsByEGLLockUsageHintKHRMask);
    return stream;
}

} // namespace egl

namespace egl
{

EGLLockUsageHintKHRMask operator|(const EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    return static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) | static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));
}

EGLLockUsageHintKHRMask & operator|=(EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    a = static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) | static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));
    
    return a;
}

EGLLockUsageHintKHRMask operator&(const EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    return static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) & static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));
}

EGLLockUsageHintKHRMask & operator&=(EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    a = static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) & static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));
    
    return a;
}

EGLLockUsageHintKHRMask operator^(const EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    return static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) ^ static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));
}

EGLLockUsageHintKHRMask & operator^=(EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    a = static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) ^ static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));
    
    return a;
}

} // namespace egl


namespace egl
{

std::ostream & operator<<(std::ostream & stream, const EGLRenderableTypeMask & value)
{
    stream << bitfieldString<EGLRenderableTypeMask>(value, eglbinding::Meta_StringsByEGLRenderableTypeMask);
    return stream;
}

} // namespace egl

namespace egl
{

EGLRenderableTypeMask operator|(const EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    return static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) | static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));
}

EGLRenderableTypeMask & operator|=(EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    a = static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) | static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));
    
    return a;
}

EGLRenderableTypeMask operator&(const EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    return static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) & static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));
}

EGLRenderableTypeMask & operator&=(EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    a = static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) & static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));
    
    return a;
}

EGLRenderableTypeMask operator^(const EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    return static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) ^ static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));
}

EGLRenderableTypeMask & operator^=(EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    a = static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) ^ static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));
    
    return a;
}

} // namespace egl


namespace egl
{

std::ostream & operator<<(std::ostream & stream, const EGLSurfaceTypeMask & value)
{
    stream << bitfieldString<EGLSurfaceTypeMask>(value, eglbinding::Meta_StringsByEGLSurfaceTypeMask);
    return stream;
}

} // namespace egl

namespace egl
{

EGLSurfaceTypeMask operator|(const EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    return static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) | static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));
}

EGLSurfaceTypeMask & operator|=(EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    a = static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) | static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));
    
    return a;
}

EGLSurfaceTypeMask operator&(const EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    return static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) & static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));
}

EGLSurfaceTypeMask & operator&=(EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    a = static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) & static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));
    
    return a;
}

EGLSurfaceTypeMask operator^(const EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    return static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) ^ static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));
}

EGLSurfaceTypeMask & operator^=(EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    a = static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) ^ static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));
    
    return a;
}

} // namespace egl


namespace egl
{

std::ostream & operator<<(std::ostream & stream, const EGLSyncFlagsKHR & value)
{
    stream << bitfieldString<EGLSyncFlagsKHR>(value, eglbinding::Meta_StringsByEGLSyncFlagsKHR);
    return stream;
}

} // namespace egl

namespace egl
{

EGLSyncFlagsKHR operator|(const EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    return static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) | static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));
}

EGLSyncFlagsKHR & operator|=(EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    a = static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) | static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));
    
    return a;
}

EGLSyncFlagsKHR operator&(const EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    return static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) & static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));
}

EGLSyncFlagsKHR & operator&=(EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    a = static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) & static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));
    
    return a;
}

EGLSyncFlagsKHR operator^(const EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    return static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));
}

EGLSyncFlagsKHR & operator^=(EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    a = static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));
    
    return a;
}

} // namespace egl
