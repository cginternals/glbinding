
#include <glbinding/gl/types.h>

#include <glbinding/Meta.h>




std::ostream & operator<<(std::ostream & stream, const gl::GLenum & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}


gl::GLenum operator+(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<gl::GLenum>(static_cast<std::underlying_type<gl::GLenum>::type>(a) + b);
}

gl::GLenum operator-(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<gl::GLenum>(static_cast<std::underlying_type<gl::GLenum>::type>(a) - b);
}


bool operator==(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) == b;
}

bool operator!=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) != b;
}

bool operator<(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) < b;
}

bool operator<=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) <= b;
}

bool operator>(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) > b;
}

bool operator>=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) >= b;
}

bool operator==(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a == static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator!=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a != static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator<(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a < static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator<=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a <= static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator>(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a > static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator>=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a >= static_cast<std::underlying_type<gl::GLenum>::type>(b);
}



std::ostream & operator<<(std::ostream & stream, const gl::GLboolean & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}



std::ostream & operator<<(std::ostream & stream, const gl::GLextension & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}


std::ostream & operator<<(std::ostream & stream, const gl::AttribMask & value)
{
    stream << static_cast<std::underlying_type<gl::AttribMask>::type>(value);
    return stream;
}


gl::AttribMask operator|(const gl::AttribMask & a, const gl::AttribMask & b)
{
	return static_cast<gl::AttribMask>(static_cast<std::underlying_type<gl::AttribMask>::type>(a) | static_cast<std::underlying_type<gl::AttribMask>::type>(b));
}

gl::AttribMask operator&(const gl::AttribMask & a, const gl::AttribMask & b)
{
	return static_cast<gl::AttribMask>(static_cast<std::underlying_type<gl::AttribMask>::type>(a) & static_cast<std::underlying_type<gl::AttribMask>::type>(b));
}

gl::AttribMask operator^(const gl::AttribMask & a, const gl::AttribMask & b)
{
	return static_cast<gl::AttribMask>(static_cast<std::underlying_type<gl::AttribMask>::type>(a) ^ static_cast<std::underlying_type<gl::AttribMask>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::ClearBufferMask & value)
{
    stream << static_cast<std::underlying_type<gl::ClearBufferMask>::type>(value);
    return stream;
}


gl::ClearBufferMask operator|(const gl::ClearBufferMask & a, const gl::ClearBufferMask & b)
{
	return static_cast<gl::ClearBufferMask>(static_cast<std::underlying_type<gl::ClearBufferMask>::type>(a) | static_cast<std::underlying_type<gl::ClearBufferMask>::type>(b));
}

gl::ClearBufferMask operator&(const gl::ClearBufferMask & a, const gl::ClearBufferMask & b)
{
	return static_cast<gl::ClearBufferMask>(static_cast<std::underlying_type<gl::ClearBufferMask>::type>(a) & static_cast<std::underlying_type<gl::ClearBufferMask>::type>(b));
}

gl::ClearBufferMask operator^(const gl::ClearBufferMask & a, const gl::ClearBufferMask & b)
{
	return static_cast<gl::ClearBufferMask>(static_cast<std::underlying_type<gl::ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<gl::ClearBufferMask>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::ClientAttribMask & value)
{
    stream << static_cast<std::underlying_type<gl::ClientAttribMask>::type>(value);
    return stream;
}


gl::ClientAttribMask operator|(const gl::ClientAttribMask & a, const gl::ClientAttribMask & b)
{
	return static_cast<gl::ClientAttribMask>(static_cast<std::underlying_type<gl::ClientAttribMask>::type>(a) | static_cast<std::underlying_type<gl::ClientAttribMask>::type>(b));
}

gl::ClientAttribMask operator&(const gl::ClientAttribMask & a, const gl::ClientAttribMask & b)
{
	return static_cast<gl::ClientAttribMask>(static_cast<std::underlying_type<gl::ClientAttribMask>::type>(a) & static_cast<std::underlying_type<gl::ClientAttribMask>::type>(b));
}

gl::ClientAttribMask operator^(const gl::ClientAttribMask & a, const gl::ClientAttribMask & b)
{
	return static_cast<gl::ClientAttribMask>(static_cast<std::underlying_type<gl::ClientAttribMask>::type>(a) ^ static_cast<std::underlying_type<gl::ClientAttribMask>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::ContextFlagMask & value)
{
    stream << static_cast<std::underlying_type<gl::ContextFlagMask>::type>(value);
    return stream;
}


gl::ContextFlagMask operator|(const gl::ContextFlagMask & a, const gl::ContextFlagMask & b)
{
	return static_cast<gl::ContextFlagMask>(static_cast<std::underlying_type<gl::ContextFlagMask>::type>(a) | static_cast<std::underlying_type<gl::ContextFlagMask>::type>(b));
}

gl::ContextFlagMask operator&(const gl::ContextFlagMask & a, const gl::ContextFlagMask & b)
{
	return static_cast<gl::ContextFlagMask>(static_cast<std::underlying_type<gl::ContextFlagMask>::type>(a) & static_cast<std::underlying_type<gl::ContextFlagMask>::type>(b));
}

gl::ContextFlagMask operator^(const gl::ContextFlagMask & a, const gl::ContextFlagMask & b)
{
	return static_cast<gl::ContextFlagMask>(static_cast<std::underlying_type<gl::ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<gl::ContextFlagMask>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::ContextProfileMask & value)
{
    stream << static_cast<std::underlying_type<gl::ContextProfileMask>::type>(value);
    return stream;
}


gl::ContextProfileMask operator|(const gl::ContextProfileMask & a, const gl::ContextProfileMask & b)
{
	return static_cast<gl::ContextProfileMask>(static_cast<std::underlying_type<gl::ContextProfileMask>::type>(a) | static_cast<std::underlying_type<gl::ContextProfileMask>::type>(b));
}

gl::ContextProfileMask operator&(const gl::ContextProfileMask & a, const gl::ContextProfileMask & b)
{
	return static_cast<gl::ContextProfileMask>(static_cast<std::underlying_type<gl::ContextProfileMask>::type>(a) & static_cast<std::underlying_type<gl::ContextProfileMask>::type>(b));
}

gl::ContextProfileMask operator^(const gl::ContextProfileMask & a, const gl::ContextProfileMask & b)
{
	return static_cast<gl::ContextProfileMask>(static_cast<std::underlying_type<gl::ContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<gl::ContextProfileMask>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::FfdMaskSGIX & value)
{
    stream << static_cast<std::underlying_type<gl::FfdMaskSGIX>::type>(value);
    return stream;
}


gl::FfdMaskSGIX operator|(const gl::FfdMaskSGIX & a, const gl::FfdMaskSGIX & b)
{
	return static_cast<gl::FfdMaskSGIX>(static_cast<std::underlying_type<gl::FfdMaskSGIX>::type>(a) | static_cast<std::underlying_type<gl::FfdMaskSGIX>::type>(b));
}

gl::FfdMaskSGIX operator&(const gl::FfdMaskSGIX & a, const gl::FfdMaskSGIX & b)
{
	return static_cast<gl::FfdMaskSGIX>(static_cast<std::underlying_type<gl::FfdMaskSGIX>::type>(a) & static_cast<std::underlying_type<gl::FfdMaskSGIX>::type>(b));
}

gl::FfdMaskSGIX operator^(const gl::FfdMaskSGIX & a, const gl::FfdMaskSGIX & b)
{
	return static_cast<gl::FfdMaskSGIX>(static_cast<std::underlying_type<gl::FfdMaskSGIX>::type>(a) ^ static_cast<std::underlying_type<gl::FfdMaskSGIX>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::FragmentShaderColorModMaskATI & value)
{
    stream << static_cast<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>(value);
    return stream;
}


gl::FragmentShaderColorModMaskATI operator|(const gl::FragmentShaderColorModMaskATI & a, const gl::FragmentShaderColorModMaskATI & b)
{
	return static_cast<gl::FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>(a) | static_cast<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>(b));
}

gl::FragmentShaderColorModMaskATI operator&(const gl::FragmentShaderColorModMaskATI & a, const gl::FragmentShaderColorModMaskATI & b)
{
	return static_cast<gl::FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>(a) & static_cast<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>(b));
}

gl::FragmentShaderColorModMaskATI operator^(const gl::FragmentShaderColorModMaskATI & a, const gl::FragmentShaderColorModMaskATI & b)
{
	return static_cast<gl::FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>(a) ^ static_cast<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::FragmentShaderDestMaskATI & value)
{
    stream << static_cast<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>(value);
    return stream;
}


gl::FragmentShaderDestMaskATI operator|(const gl::FragmentShaderDestMaskATI & a, const gl::FragmentShaderDestMaskATI & b)
{
	return static_cast<gl::FragmentShaderDestMaskATI>(static_cast<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>(a) | static_cast<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>(b));
}

gl::FragmentShaderDestMaskATI operator&(const gl::FragmentShaderDestMaskATI & a, const gl::FragmentShaderDestMaskATI & b)
{
	return static_cast<gl::FragmentShaderDestMaskATI>(static_cast<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>(a) & static_cast<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>(b));
}

gl::FragmentShaderDestMaskATI operator^(const gl::FragmentShaderDestMaskATI & a, const gl::FragmentShaderDestMaskATI & b)
{
	return static_cast<gl::FragmentShaderDestMaskATI>(static_cast<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>(a) ^ static_cast<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::FragmentShaderDestModMaskATI & value)
{
    stream << static_cast<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>(value);
    return stream;
}


gl::FragmentShaderDestModMaskATI operator|(const gl::FragmentShaderDestModMaskATI & a, const gl::FragmentShaderDestModMaskATI & b)
{
	return static_cast<gl::FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>(a) | static_cast<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>(b));
}

gl::FragmentShaderDestModMaskATI operator&(const gl::FragmentShaderDestModMaskATI & a, const gl::FragmentShaderDestModMaskATI & b)
{
	return static_cast<gl::FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>(a) & static_cast<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>(b));
}

gl::FragmentShaderDestModMaskATI operator^(const gl::FragmentShaderDestModMaskATI & a, const gl::FragmentShaderDestModMaskATI & b)
{
	return static_cast<gl::FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>(a) ^ static_cast<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::MapBufferUsageMask & value)
{
    stream << static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(value);
    return stream;
}


gl::MapBufferUsageMask operator|(const gl::MapBufferUsageMask & a, const gl::MapBufferUsageMask & b)
{
	return static_cast<gl::MapBufferUsageMask>(static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(a) | static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(b));
}

gl::MapBufferUsageMask operator&(const gl::MapBufferUsageMask & a, const gl::MapBufferUsageMask & b)
{
	return static_cast<gl::MapBufferUsageMask>(static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(a) & static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(b));
}

gl::MapBufferUsageMask operator^(const gl::MapBufferUsageMask & a, const gl::MapBufferUsageMask & b)
{
	return static_cast<gl::MapBufferUsageMask>(static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(a) ^ static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::MemoryBarrierMask & value)
{
    stream << static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(value);
    return stream;
}


gl::MemoryBarrierMask operator|(const gl::MemoryBarrierMask & a, const gl::MemoryBarrierMask & b)
{
	return static_cast<gl::MemoryBarrierMask>(static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(b));
}

gl::MemoryBarrierMask operator&(const gl::MemoryBarrierMask & a, const gl::MemoryBarrierMask & b)
{
	return static_cast<gl::MemoryBarrierMask>(static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(b));
}

gl::MemoryBarrierMask operator^(const gl::MemoryBarrierMask & a, const gl::MemoryBarrierMask & b)
{
	return static_cast<gl::MemoryBarrierMask>(static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::PathRenderingMaskNV & value)
{
    stream << static_cast<std::underlying_type<gl::PathRenderingMaskNV>::type>(value);
    return stream;
}


gl::PathRenderingMaskNV operator|(const gl::PathRenderingMaskNV & a, const gl::PathRenderingMaskNV & b)
{
	return static_cast<gl::PathRenderingMaskNV>(static_cast<std::underlying_type<gl::PathRenderingMaskNV>::type>(a) | static_cast<std::underlying_type<gl::PathRenderingMaskNV>::type>(b));
}

gl::PathRenderingMaskNV operator&(const gl::PathRenderingMaskNV & a, const gl::PathRenderingMaskNV & b)
{
	return static_cast<gl::PathRenderingMaskNV>(static_cast<std::underlying_type<gl::PathRenderingMaskNV>::type>(a) & static_cast<std::underlying_type<gl::PathRenderingMaskNV>::type>(b));
}

gl::PathRenderingMaskNV operator^(const gl::PathRenderingMaskNV & a, const gl::PathRenderingMaskNV & b)
{
	return static_cast<gl::PathRenderingMaskNV>(static_cast<std::underlying_type<gl::PathRenderingMaskNV>::type>(a) ^ static_cast<std::underlying_type<gl::PathRenderingMaskNV>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::PerformanceQueryCapsMaskINTEL & value)
{
    stream << static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(value);
    return stream;
}


gl::PerformanceQueryCapsMaskINTEL operator|(const gl::PerformanceQueryCapsMaskINTEL & a, const gl::PerformanceQueryCapsMaskINTEL & b)
{
	return static_cast<gl::PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(b));
}

gl::PerformanceQueryCapsMaskINTEL operator&(const gl::PerformanceQueryCapsMaskINTEL & a, const gl::PerformanceQueryCapsMaskINTEL & b)
{
	return static_cast<gl::PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(b));
}

gl::PerformanceQueryCapsMaskINTEL operator^(const gl::PerformanceQueryCapsMaskINTEL & a, const gl::PerformanceQueryCapsMaskINTEL & b)
{
	return static_cast<gl::PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::SyncObjectMask & value)
{
    stream << static_cast<std::underlying_type<gl::SyncObjectMask>::type>(value);
    return stream;
}


gl::SyncObjectMask operator|(const gl::SyncObjectMask & a, const gl::SyncObjectMask & b)
{
	return static_cast<gl::SyncObjectMask>(static_cast<std::underlying_type<gl::SyncObjectMask>::type>(a) | static_cast<std::underlying_type<gl::SyncObjectMask>::type>(b));
}

gl::SyncObjectMask operator&(const gl::SyncObjectMask & a, const gl::SyncObjectMask & b)
{
	return static_cast<gl::SyncObjectMask>(static_cast<std::underlying_type<gl::SyncObjectMask>::type>(a) & static_cast<std::underlying_type<gl::SyncObjectMask>::type>(b));
}

gl::SyncObjectMask operator^(const gl::SyncObjectMask & a, const gl::SyncObjectMask & b)
{
	return static_cast<gl::SyncObjectMask>(static_cast<std::underlying_type<gl::SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<gl::SyncObjectMask>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::TextureStorageMaskAMD & value)
{
    stream << static_cast<std::underlying_type<gl::TextureStorageMaskAMD>::type>(value);
    return stream;
}


gl::TextureStorageMaskAMD operator|(const gl::TextureStorageMaskAMD & a, const gl::TextureStorageMaskAMD & b)
{
	return static_cast<gl::TextureStorageMaskAMD>(static_cast<std::underlying_type<gl::TextureStorageMaskAMD>::type>(a) | static_cast<std::underlying_type<gl::TextureStorageMaskAMD>::type>(b));
}

gl::TextureStorageMaskAMD operator&(const gl::TextureStorageMaskAMD & a, const gl::TextureStorageMaskAMD & b)
{
	return static_cast<gl::TextureStorageMaskAMD>(static_cast<std::underlying_type<gl::TextureStorageMaskAMD>::type>(a) & static_cast<std::underlying_type<gl::TextureStorageMaskAMD>::type>(b));
}

gl::TextureStorageMaskAMD operator^(const gl::TextureStorageMaskAMD & a, const gl::TextureStorageMaskAMD & b)
{
	return static_cast<gl::TextureStorageMaskAMD>(static_cast<std::underlying_type<gl::TextureStorageMaskAMD>::type>(a) ^ static_cast<std::underlying_type<gl::TextureStorageMaskAMD>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::UseProgramStageMask & value)
{
    stream << static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(value);
    return stream;
}


gl::UseProgramStageMask operator|(const gl::UseProgramStageMask & a, const gl::UseProgramStageMask & b)
{
	return static_cast<gl::UseProgramStageMask>(static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(b));
}

gl::UseProgramStageMask operator&(const gl::UseProgramStageMask & a, const gl::UseProgramStageMask & b)
{
	return static_cast<gl::UseProgramStageMask>(static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(b));
}

gl::UseProgramStageMask operator^(const gl::UseProgramStageMask & a, const gl::UseProgramStageMask & b)
{
	return static_cast<gl::UseProgramStageMask>(static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::VertexHintsMaskPGI & value)
{
    stream << static_cast<std::underlying_type<gl::VertexHintsMaskPGI>::type>(value);
    return stream;
}


gl::VertexHintsMaskPGI operator|(const gl::VertexHintsMaskPGI & a, const gl::VertexHintsMaskPGI & b)
{
	return static_cast<gl::VertexHintsMaskPGI>(static_cast<std::underlying_type<gl::VertexHintsMaskPGI>::type>(a) | static_cast<std::underlying_type<gl::VertexHintsMaskPGI>::type>(b));
}

gl::VertexHintsMaskPGI operator&(const gl::VertexHintsMaskPGI & a, const gl::VertexHintsMaskPGI & b)
{
	return static_cast<gl::VertexHintsMaskPGI>(static_cast<std::underlying_type<gl::VertexHintsMaskPGI>::type>(a) & static_cast<std::underlying_type<gl::VertexHintsMaskPGI>::type>(b));
}

gl::VertexHintsMaskPGI operator^(const gl::VertexHintsMaskPGI & a, const gl::VertexHintsMaskPGI & b)
{
	return static_cast<gl::VertexHintsMaskPGI>(static_cast<std::underlying_type<gl::VertexHintsMaskPGI>::type>(a) ^ static_cast<std::underlying_type<gl::VertexHintsMaskPGI>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::PathFontStyle & value)
{
    stream << static_cast<std::underlying_type<gl::PathFontStyle>::type>(value);
    return stream;
}


gl::PathFontStyle operator|(const gl::PathFontStyle & a, const gl::PathFontStyle & b)
{
	return static_cast<gl::PathFontStyle>(static_cast<std::underlying_type<gl::PathFontStyle>::type>(a) | static_cast<std::underlying_type<gl::PathFontStyle>::type>(b));
}

gl::PathFontStyle operator&(const gl::PathFontStyle & a, const gl::PathFontStyle & b)
{
	return static_cast<gl::PathFontStyle>(static_cast<std::underlying_type<gl::PathFontStyle>::type>(a) & static_cast<std::underlying_type<gl::PathFontStyle>::type>(b));
}

gl::PathFontStyle operator^(const gl::PathFontStyle & a, const gl::PathFontStyle & b)
{
	return static_cast<gl::PathFontStyle>(static_cast<std::underlying_type<gl::PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<gl::PathFontStyle>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::UnusedMask & value)
{
    stream << static_cast<std::underlying_type<gl::UnusedMask>::type>(value);
    return stream;
}


gl::UnusedMask operator|(const gl::UnusedMask & a, const gl::UnusedMask & b)
{
	return static_cast<gl::UnusedMask>(static_cast<std::underlying_type<gl::UnusedMask>::type>(a) | static_cast<std::underlying_type<gl::UnusedMask>::type>(b));
}

gl::UnusedMask operator&(const gl::UnusedMask & a, const gl::UnusedMask & b)
{
	return static_cast<gl::UnusedMask>(static_cast<std::underlying_type<gl::UnusedMask>::type>(a) & static_cast<std::underlying_type<gl::UnusedMask>::type>(b));
}

gl::UnusedMask operator^(const gl::UnusedMask & a, const gl::UnusedMask & b)
{
	return static_cast<gl::UnusedMask>(static_cast<std::underlying_type<gl::UnusedMask>::type>(a) ^ static_cast<std::underlying_type<gl::UnusedMask>::type>(b));
}


std::ostream & operator<<(std::ostream & stream, const gl::BufferAccessMask & value)
{
    stream << static_cast<std::underlying_type<gl::BufferAccessMask>::type>(value);
    return stream;
}


gl::BufferAccessMask operator|(const gl::BufferAccessMask & a, const gl::BufferAccessMask & b)
{
	return static_cast<gl::BufferAccessMask>(static_cast<std::underlying_type<gl::BufferAccessMask>::type>(a) | static_cast<std::underlying_type<gl::BufferAccessMask>::type>(b));
}

gl::BufferAccessMask operator&(const gl::BufferAccessMask & a, const gl::BufferAccessMask & b)
{
	return static_cast<gl::BufferAccessMask>(static_cast<std::underlying_type<gl::BufferAccessMask>::type>(a) & static_cast<std::underlying_type<gl::BufferAccessMask>::type>(b));
}

gl::BufferAccessMask operator^(const gl::BufferAccessMask & a, const gl::BufferAccessMask & b)
{
	return static_cast<gl::BufferAccessMask>(static_cast<std::underlying_type<gl::BufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<gl::BufferAccessMask>::type>(b));
}

