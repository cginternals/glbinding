
#include <glesbinding/gles/types.h>

#include <glesbinding/Meta.h>

#include <bitset>
#include <sstream>


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(gles::GLbitfield) * 8> bits(static_cast<gles::GLbitfield>(value));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(gles::GLbitfield) * 8; ++i)
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

    const gles::GLbitfield bit = 1 << i;

    const auto identifier = glesbinding::Meta::getString(static_cast<T>(bit));
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


std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glesbinding::Meta::getString(value);
    return stream;
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


std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << bitfieldString<AttribMask>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value)
{
    stream << bitfieldString<BufferAccessMask>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const BufferBitQCOM & value)
{
    stream << bitfieldString<BufferBitQCOM>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << bitfieldString<ClearBufferMask>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << bitfieldString<ContextFlagMask>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const FoveationConfigBitQCOM & value)
{
    stream << bitfieldString<FoveationConfigBitQCOM>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value)
{
    stream << bitfieldString<MapBufferUsageMask>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << bitfieldString<MemoryBarrierMask>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << bitfieldString<PathFontStyle>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value)
{
    stream << bitfieldString<PathMetricMask>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << bitfieldString<PathRenderingMaskNV>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << bitfieldString<PerformanceQueryCapsMaskINTEL>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << bitfieldString<SyncObjectMask>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << bitfieldString<UseProgramStageMask>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << bitfieldString<UnusedMask>(value);
    return stream;
}


} // namespace gles




namespace gles
{


std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << bitfieldString<BufferStorageMask>(value);
    return stream;
}


} // namespace gles




