
#include <glbinding/gl/types.h>

#include <glbinding/Meta.h>

#include <bitset>
#include <sstream>


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(gl::GLbitfield) * 8> bits(static_cast<gl::GLbitfield>(value));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(gl::GLbitfield) * 8; ++i)
    {
    if (!bits.test(i))
        continue;

    if (first)
        {
            first = false;
        }
        else
        {
            ss << " | ";
        }

    const gl::GLbitfield bit = 1 << i;

    const auto identifier = glbinding::Meta::getString(static_cast<T>(bit));
    if (identifier.empty())
    {
        ss << "1 << " << i;
    }
    else
    {
        ss << identifier;
    }
    }
    return ss.str();
}

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


std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
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


std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << bitfieldString<AttribMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << bitfieldString<ClearBufferMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value)
{
    stream << bitfieldString<ClientAttribMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << bitfieldString<ContextFlagMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value)
{
    stream << bitfieldString<ContextProfileMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value)
{
    stream << bitfieldString<FfdMaskSGIX>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value)
{
    stream << bitfieldString<FragmentShaderColorModMaskATI>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value)
{
    stream << bitfieldString<FragmentShaderDestMaskATI>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value)
{
    stream << bitfieldString<FragmentShaderDestModMaskATI>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value)
{
    stream << bitfieldString<MapBufferUsageMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << bitfieldString<MemoryBarrierMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << bitfieldString<PathFontStyle>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value)
{
    stream << bitfieldString<PathMetricMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << bitfieldString<PathRenderingMaskNV>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << bitfieldString<PerformanceQueryCapsMaskINTEL>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << bitfieldString<SyncObjectMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value)
{
    stream << bitfieldString<TextureStorageMaskAMD>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << bitfieldString<UseProgramStageMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value)
{
    stream << bitfieldString<VertexHintsMaskPGI>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << bitfieldString<UnusedMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value)
{
    stream << bitfieldString<BufferAccessMask>(value);
    return stream;
}


} // namespace gl




namespace gl
{


std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << bitfieldString<BufferStorageMask>(value);
    return stream;
}


} // namespace gl




