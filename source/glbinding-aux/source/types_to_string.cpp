
#include <glbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <glbinding/Version.h>
#include <glbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace gl
{


std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    const auto strings = glbinding::aux::Meta::getStrings(value);

    if (strings.size() == 0)
    {
        return stream;
    }

    stream << strings[0];

    for (auto i = static_cast<std::size_t>(1); i < strings.size(); ++i)
        stream << " | " << strings[i];

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glbinding::aux::Meta::getString(value);

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glbinding::aux::Meta::getString(value);

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << glbinding::aux::bitfieldString<AttribMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << glbinding::aux::bitfieldString<BufferStorageMask>(value);
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

std::ostream & operator<<(std::ostream & stream, const MapBufferAccessMask & value)
{
    stream << glbinding::aux::bitfieldString<MapBufferAccessMask>(value);
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

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << glbinding::aux::bitfieldString<UnusedMask>(value);
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


} // namespace gl


namespace glbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLenum> & value)
{
    stream << value.value();

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLboolean> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<const char *> & value)
{
    auto s = aux::wrapString(value.value());
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}


template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLchar *> & value)
{
    auto s = aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLubyte *> & value)
{
    auto s = aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}


std::ostream & operator<<(std::ostream & stream, const Version & version)
{
    stream << version.toString();

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AbstractValue * value)
{
    if (typeid(*value) == typeid(AbstractValue))
    {
        return stream << reinterpret_cast<const void*>(value);
    }

    if (typeid(*value) == typeid(Value<char>))
    {
        return stream << *reinterpret_cast<const Value<char>*>(value);
    }

    if (typeid(*value) == typeid(Value<double>))
    {
        return stream << *reinterpret_cast<const Value<double>*>(value);
    }

    if (typeid(*value) == typeid(Value<float>))
    {
        return stream << *reinterpret_cast<const Value<float>*>(value);
    }

    if (typeid(*value) == typeid(Value<int>))
    {
        return stream << *reinterpret_cast<const Value<int>*>(value);
    }

    if (typeid(*value) == typeid(Value<long>))
    {
        return stream << *reinterpret_cast<const Value<long>*>(value);
    }

    if (typeid(*value) == typeid(Value<long long>))
    {
        return stream << *reinterpret_cast<const Value<long long>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned char>))
    {
        return stream << *reinterpret_cast<const Value<unsigned char>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned int>))
    {
        return stream << *reinterpret_cast<const Value<unsigned int>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned long>))
    {
        return stream << *reinterpret_cast<const Value<unsigned long>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned long long>))
    {
        return stream << *reinterpret_cast<const Value<unsigned long long>*>(value);
    }

    if (typeid(*value) == typeid(Value<gl::GLvoid *>))
    {
        return stream << *reinterpret_cast<const Value<gl::GLvoid *>*>(value);
    }
if (typeid(*value) == typeid(Value<const char *>))
    {
        return stream << *reinterpret_cast<const Value<const char *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gl::GLchar *>))
    {
        return stream << *reinterpret_cast<const Value<gl::GLchar *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gl::GLubyte *>))
    {
        return stream << *reinterpret_cast<const Value<gl::GLubyte *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::AttribMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::AttribMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::AttribMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::AttribMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::BufferStorageMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::BufferStorageMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::BufferStorageMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::BufferStorageMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::ClearBufferMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::ClearBufferMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::ClearBufferMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::ClearBufferMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::ClientAttribMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::ClientAttribMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::ClientAttribMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::ClientAttribMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::ContextFlagMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::ContextFlagMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::ContextFlagMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::ContextFlagMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::ContextProfileMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::ContextProfileMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::ContextProfileMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::ContextProfileMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::FfdMaskSGIX>))
    {
        return stream << *reinterpret_cast<const Value<gl::FfdMaskSGIX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::FfdMaskSGIX *>))
    {
        return stream << *reinterpret_cast<const Value<gl::FfdMaskSGIX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::FragmentShaderColorModMaskATI>))
    {
        return stream << *reinterpret_cast<const Value<gl::FragmentShaderColorModMaskATI>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::FragmentShaderColorModMaskATI *>))
    {
        return stream << *reinterpret_cast<const Value<gl::FragmentShaderColorModMaskATI *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::FragmentShaderDestMaskATI>))
    {
        return stream << *reinterpret_cast<const Value<gl::FragmentShaderDestMaskATI>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::FragmentShaderDestMaskATI *>))
    {
        return stream << *reinterpret_cast<const Value<gl::FragmentShaderDestMaskATI *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::FragmentShaderDestModMaskATI>))
    {
        return stream << *reinterpret_cast<const Value<gl::FragmentShaderDestModMaskATI>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::FragmentShaderDestModMaskATI *>))
    {
        return stream << *reinterpret_cast<const Value<gl::FragmentShaderDestModMaskATI *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::GLenum>))
    {
        return stream << *reinterpret_cast<const Value<gl::GLenum>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::GLenum *>))
    {
        return stream << *reinterpret_cast<const Value<gl::GLenum *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::GLextension>))
    {
        return stream << *reinterpret_cast<const Value<gl::GLextension>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::GLextension *>))
    {
        return stream << *reinterpret_cast<const Value<gl::GLextension *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::GLhandleARB>))
    {
        return stream << *reinterpret_cast<const Value<gl::GLhandleARB>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::GLhandleARB *>))
    {
        return stream << *reinterpret_cast<const Value<gl::GLhandleARB *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::MapBufferAccessMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::MapBufferAccessMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::MapBufferAccessMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::MapBufferAccessMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::MemoryBarrierMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::MemoryBarrierMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::MemoryBarrierMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::MemoryBarrierMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::OcclusionQueryEventMaskAMD>))
    {
        return stream << *reinterpret_cast<const Value<gl::OcclusionQueryEventMaskAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::OcclusionQueryEventMaskAMD *>))
    {
        return stream << *reinterpret_cast<const Value<gl::OcclusionQueryEventMaskAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::PathFontStyle>))
    {
        return stream << *reinterpret_cast<const Value<gl::PathFontStyle>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::PathFontStyle *>))
    {
        return stream << *reinterpret_cast<const Value<gl::PathFontStyle *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::PathMetricMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::PathMetricMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::PathMetricMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::PathMetricMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::PathRenderingMaskNV>))
    {
        return stream << *reinterpret_cast<const Value<gl::PathRenderingMaskNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::PathRenderingMaskNV *>))
    {
        return stream << *reinterpret_cast<const Value<gl::PathRenderingMaskNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::PerformanceQueryCapsMaskINTEL>))
    {
        return stream << *reinterpret_cast<const Value<gl::PerformanceQueryCapsMaskINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::PerformanceQueryCapsMaskINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<gl::PerformanceQueryCapsMaskINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::SyncObjectMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::SyncObjectMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::SyncObjectMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::SyncObjectMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::TextureStorageMaskAMD>))
    {
        return stream << *reinterpret_cast<const Value<gl::TextureStorageMaskAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::TextureStorageMaskAMD *>))
    {
        return stream << *reinterpret_cast<const Value<gl::TextureStorageMaskAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::UnusedMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::UnusedMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::UnusedMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::UnusedMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::UseProgramStageMask>))
    {
        return stream << *reinterpret_cast<const Value<gl::UseProgramStageMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::UseProgramStageMask *>))
    {
        return stream << *reinterpret_cast<const Value<gl::UseProgramStageMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gl::VertexHintsMaskPGI>))
    {
        return stream << *reinterpret_cast<const Value<gl::VertexHintsMaskPGI>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gl::VertexHintsMaskPGI *>))
    {
        return stream << *reinterpret_cast<const Value<gl::VertexHintsMaskPGI *>*>(value);
    }

    // expect an AbstractValue with a pointer in first member
    return stream << *reinterpret_cast<const Value<void *>*>(value);
}


} // namespace glbinding