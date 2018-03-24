
#include <glbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <glbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace gl
{


std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value)
{
    stream << glbinding::aux::bitfieldString<BufferAccessMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << glbinding::aux::bitfieldString<ClearBufferMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value)
{
    stream << glbinding::aux::bitfieldString<ClientAttribMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << glbinding::aux::bitfieldString<ContextFlagMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value)
{
    stream << glbinding::aux::bitfieldString<ContextProfileMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value)
{
    stream << glbinding::aux::bitfieldString<FfdMaskSGIX>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value)
{
    stream << glbinding::aux::bitfieldString<FragmentShaderColorModMaskATI>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value)
{
    stream << glbinding::aux::bitfieldString<FragmentShaderDestMaskATI>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value)
{
    stream << glbinding::aux::bitfieldString<FragmentShaderDestModMaskATI>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value)
{
    stream << glbinding::aux::bitfieldString<MapBufferUsageMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << glbinding::aux::bitfieldString<MemoryBarrierMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const OcclusionQueryEventMaskAMD & value)
{
    stream << glbinding::aux::bitfieldString<OcclusionQueryEventMaskAMD>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << glbinding::aux::bitfieldString<PathFontStyle>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value)
{
    stream << glbinding::aux::bitfieldString<PathMetricMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << glbinding::aux::bitfieldString<PathRenderingMaskNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << glbinding::aux::bitfieldString<PerformanceQueryCapsMaskINTEL>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << glbinding::aux::bitfieldString<SyncObjectMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value)
{
    stream << glbinding::aux::bitfieldString<TextureStorageMaskAMD>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << glbinding::aux::bitfieldString<UseProgramStageMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value)
{
    stream << glbinding::aux::bitfieldString<VertexHintsMaskPGI>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << glbinding::aux::bitfieldString<UnusedMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << glbinding::aux::bitfieldString<BufferStorageMask>(value);
    return stream;
}


} // namespace gl


namespace glbinding
{


std::ostream & operator<<(std::ostream & stream, const AbstractValue * value)
{
    if (typeid(*value) == typeid(Value<gl::GLint>))
    {
        stream << *reinterpret_cast<const Value<gl::GLint>*>(value);
    }
    else if (typeid(*value) == typeid(Value<gl::GLfloat>))
    {
        stream << *reinterpret_cast<const Value<gl::GLfloat>*>(value);
    }
    else if (typeid(*value) == typeid(Value<gl::GLenum>))
    {
        stream << *reinterpret_cast<const Value<gl::GLenum>*>(value);
    }
    else if (typeid(*value) == typeid(Value<gl::GLbitfield>))
    {
        stream << *reinterpret_cast<const Value<gl::GLbitfield>*>(value);
    }
    else if (typeid(*value) == typeid(Value<gl::GLboolean>))
    {
        stream << *reinterpret_cast<const Value<gl::GLboolean>*>(value);
    }
    else if (typeid(*value) == typeid(Value<gl::GLubyte *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLubyte *>*>(value);
    }
    else if (typeid(*value) == typeid(Value<gl::GLchar *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLchar *>*>(value);
    }
    else if (typeid(*value) == typeid(Value<gl::GLuint_array_2>))
    {
        stream << *reinterpret_cast<const Value<gl::GLuint_array_2>*>(value);
    }
    else
    {
        stream << "___";
    }

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLenum> & value)
{
    const auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLboolean> & value)
{
    auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLubyte *> & value)
{
    auto s = glbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLchar *> & value)
{
    auto s = glbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLuint_array_2> & value)
{
    std::stringstream ss;
    ss << "{ " << value.value()[0] << ", " << value.value()[1] << " }";
    stream << ss.str();

    return stream;
}


} // namespace glbinding
