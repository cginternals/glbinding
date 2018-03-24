
#include <glbinding-aux/types_to_string.h>

#include <glbinding-aux/Meta.h>

#include <ostream>
#include <bitset>
#include <sstream>


namespace
{


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

    const auto identifier = glbinding::aux::Meta::getString(static_cast<T>(bit));
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

std::string wrapString(const char * value)
{
    std::stringstream ss;
    ss << "\"";
    ss << (value == nullptr ? "nullptr" : value);
    ss << "\"";
    return ss.str();
}


} // namespace


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
    stream << bitfieldString<BufferAccessMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << bitfieldString<ClearBufferMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value)
{
    stream << bitfieldString<ClientAttribMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << bitfieldString<ContextFlagMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value)
{
    stream << bitfieldString<ContextProfileMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value)
{
    stream << bitfieldString<FfdMaskSGIX>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value)
{
    stream << bitfieldString<FragmentShaderColorModMaskATI>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value)
{
    stream << bitfieldString<FragmentShaderDestMaskATI>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value)
{
    stream << bitfieldString<FragmentShaderDestModMaskATI>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value)
{
    stream << bitfieldString<MapBufferUsageMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << bitfieldString<MemoryBarrierMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const OcclusionQueryEventMaskAMD & value)
{
    stream << bitfieldString<OcclusionQueryEventMaskAMD>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << bitfieldString<PathFontStyle>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value)
{
    stream << bitfieldString<PathMetricMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << bitfieldString<PathRenderingMaskNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << bitfieldString<PerformanceQueryCapsMaskINTEL>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << bitfieldString<SyncObjectMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value)
{
    stream << bitfieldString<TextureStorageMaskAMD>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << bitfieldString<UseProgramStageMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value)
{
    stream << bitfieldString<VertexHintsMaskPGI>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << bitfieldString<UnusedMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << bitfieldString<BufferStorageMask>(value);
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
    auto s = wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLchar *> & value)
{
    auto s = wrapString(reinterpret_cast<const char*>(value.value()));
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
