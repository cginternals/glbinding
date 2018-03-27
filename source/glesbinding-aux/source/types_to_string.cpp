
#include <glesbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <glesbinding/AbstractVersion.h>
#include <glesbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace gles
{


std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glesbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glesbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glesbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << glesbinding::aux::bitfieldString<AttribMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value)
{
    stream << glesbinding::aux::bitfieldString<BufferAccessMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const BufferBitQCOM & value)
{
    stream << glesbinding::aux::bitfieldString<BufferBitQCOM>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << glesbinding::aux::bitfieldString<ClearBufferMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << glesbinding::aux::bitfieldString<ContextFlagMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const FoveationConfigBitQCOM & value)
{
    stream << glesbinding::aux::bitfieldString<FoveationConfigBitQCOM>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value)
{
    stream << glesbinding::aux::bitfieldString<MapBufferUsageMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << glesbinding::aux::bitfieldString<MemoryBarrierMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << glesbinding::aux::bitfieldString<PathFontStyle>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value)
{
    stream << glesbinding::aux::bitfieldString<PathMetricMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << glesbinding::aux::bitfieldString<PathRenderingMaskNV>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << glesbinding::aux::bitfieldString<PerformanceQueryCapsMaskINTEL>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << glesbinding::aux::bitfieldString<SyncObjectMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << glesbinding::aux::bitfieldString<UseProgramStageMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << glesbinding::aux::bitfieldString<UnusedMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << glesbinding::aux::bitfieldString<BufferStorageMask>(value);
    return stream;
}


} // namespace gles



namespace glesbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLenum> & value)
{
    const auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLboolean> & value)
{
    auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLubyte *> & value)
{
    auto s = glesbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLchar *> & value)
{
    auto s = glesbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLuint_array_2> & value)
{
    std::stringstream ss;
    ss << "{ " << value.value()[0] << ", " << value.value()[1] << " }";
    stream << ss.str();

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version)
{
    stream << version.toString();

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AbstractValue * value)
{
    if (typeid(*value) == typeid(AbstractValue))
    {
        stream << reinterpret_cast<const void*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLvoid *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLvoid *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLextension>))
    {
        stream << *reinterpret_cast<const Value<gles::GLextension>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLextension *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLextension *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLenum>))
    {
        stream << *reinterpret_cast<const Value<gles::GLenum>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLenum *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLenum *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLboolean>))
    {
        stream << *reinterpret_cast<const Value<gles::GLboolean>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLboolean *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLboolean *>*>(value);
    }


    // Omit gles::GLbitfield


    // Omit gles::GLvoid

    else if (typeid(*value) == typeid(Value<gles::GLbyte>))
    {
        stream << *reinterpret_cast<const Value<gles::GLbyte>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLbyte *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLbyte *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLshort>))
    {
        stream << *reinterpret_cast<const Value<gles::GLshort>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLshort *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLshort *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLint>))
    {
        stream << *reinterpret_cast<const Value<gles::GLint>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLint *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLint *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLclampx>))
    {
        stream << *reinterpret_cast<const Value<gles::GLclampx>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLclampx *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLclampx *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLubyte>))
    {
        stream << *reinterpret_cast<const Value<gles::GLubyte>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLubyte *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLubyte *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLushort>))
    {
        stream << *reinterpret_cast<const Value<gles::GLushort>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLushort *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLushort *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLsizei>))
    {
        stream << *reinterpret_cast<const Value<gles::GLsizei>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLsizei *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLsizei *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLfloat>))
    {
        stream << *reinterpret_cast<const Value<gles::GLfloat>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLfloat *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLfloat *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLclampf>))
    {
        stream << *reinterpret_cast<const Value<gles::GLclampf>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLclampf *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLclampf *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLdouble>))
    {
        stream << *reinterpret_cast<const Value<gles::GLdouble>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLdouble *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLdouble *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLclampd>))
    {
        stream << *reinterpret_cast<const Value<gles::GLclampd>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLclampd *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLclampd *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLeglClientBufferEXT>))
    {
        stream << *reinterpret_cast<const Value<gles::GLeglClientBufferEXT>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLeglClientBufferEXT *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLeglClientBufferEXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLeglImageOES>))
    {
        stream << *reinterpret_cast<const Value<gles::GLeglImageOES>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLeglImageOES *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLeglImageOES *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLchar>))
    {
        stream << *reinterpret_cast<const Value<gles::GLchar>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLchar *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLchar *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLcharARB>))
    {
        stream << *reinterpret_cast<const Value<gles::GLcharARB>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLcharARB *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLcharARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLhandleARB>))
    {
        stream << *reinterpret_cast<const Value<gles::GLhandleARB>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLhandleARB *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLhandleARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLhalfARB>))
    {
        stream << *reinterpret_cast<const Value<gles::GLhalfARB>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLhalfARB *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLhalfARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLhalf>))
    {
        stream << *reinterpret_cast<const Value<gles::GLhalf>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLhalf *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLhalf *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLfixed>))
    {
        stream << *reinterpret_cast<const Value<gles::GLfixed>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLfixed *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLfixed *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLintptr>))
    {
        stream << *reinterpret_cast<const Value<gles::GLintptr>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLintptr *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLintptr *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLsizeiptr>))
    {
        stream << *reinterpret_cast<const Value<gles::GLsizeiptr>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLsizeiptr *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLsizeiptr *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLint64>))
    {
        stream << *reinterpret_cast<const Value<gles::GLint64>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLint64 *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLint64 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint64>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint64>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint64 *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint64 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLintptrARB>))
    {
        stream << *reinterpret_cast<const Value<gles::GLintptrARB>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLintptrARB *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLintptrARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLsizeiptrARB>))
    {
        stream << *reinterpret_cast<const Value<gles::GLsizeiptrARB>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLsizeiptrARB *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLsizeiptrARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLint64EXT>))
    {
        stream << *reinterpret_cast<const Value<gles::GLint64EXT>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLint64EXT *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLint64EXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint64EXT>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint64EXT>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint64EXT *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint64EXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLsync>))
    {
        stream << *reinterpret_cast<const Value<gles::GLsync>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLsync *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLsync *>*>(value);
    }


    // Omit gles::_cl_context


    // Omit gles::_cl_event

    else if (typeid(*value) == typeid(Value<gles::GLDEBUGPROC>))
    {
        stream << *reinterpret_cast<const Value<gles::GLDEBUGPROC>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLDEBUGPROC *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLDEBUGPROC *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCARB>))
    {
        stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCARB>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCARB *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCKHR>))
    {
        stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCKHR *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLbyte>))
    {
        stream << *reinterpret_cast<const Value<gles::GLbyte>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLbyte *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLbyte *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLubyte>))
    {
        stream << *reinterpret_cast<const Value<gles::GLubyte>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLubyte *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLubyte *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLfloat>))
    {
        stream << *reinterpret_cast<const Value<gles::GLfloat>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLfloat *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLfloat *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLclampf>))
    {
        stream << *reinterpret_cast<const Value<gles::GLclampf>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLclampf *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLclampf *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLfixed>))
    {
        stream << *reinterpret_cast<const Value<gles::GLfixed>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLfixed *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLfixed *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLint64>))
    {
        stream << *reinterpret_cast<const Value<gles::GLint64>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLint64 *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLint64 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint64>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint64>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint64 *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint64 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLint64EXT>))
    {
        stream << *reinterpret_cast<const Value<gles::GLint64EXT>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLint64EXT *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLint64EXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint64EXT>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint64EXT>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint64EXT *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint64EXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLintptr>))
    {
        stream << *reinterpret_cast<const Value<gles::GLintptr>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLintptr *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLintptr *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLsizeiptr>))
    {
        stream << *reinterpret_cast<const Value<gles::GLsizeiptr>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLsizeiptr *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLsizeiptr *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCAMD>))
    {
        stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCAMD>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCAMD *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCAMD *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLhalfNV>))
    {
        stream << *reinterpret_cast<const Value<gles::GLhalfNV>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLhalfNV *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLhalfNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLvdpauSurfaceNV>))
    {
        stream << *reinterpret_cast<const Value<gles::GLvdpauSurfaceNV>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLvdpauSurfaceNV *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLvdpauSurfaceNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLVULKANPROCNV>))
    {
        stream << *reinterpret_cast<const Value<gles::GLVULKANPROCNV>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLVULKANPROCNV *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLVULKANPROCNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint_array_2>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint_array_2>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::GLuint_array_2 *>))
    {
        stream << *reinterpret_cast<const Value<gles::GLuint_array_2 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::AttribMask>))
    {
        stream << *reinterpret_cast<const Value<gles::AttribMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::AttribMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::AttribMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::BufferAccessMask>))
    {
        stream << *reinterpret_cast<const Value<gles::BufferAccessMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::BufferAccessMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::BufferAccessMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::BufferBitQCOM>))
    {
        stream << *reinterpret_cast<const Value<gles::BufferBitQCOM>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::BufferBitQCOM *>))
    {
        stream << *reinterpret_cast<const Value<gles::BufferBitQCOM *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::ClearBufferMask>))
    {
        stream << *reinterpret_cast<const Value<gles::ClearBufferMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::ClearBufferMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::ClearBufferMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::ContextFlagMask>))
    {
        stream << *reinterpret_cast<const Value<gles::ContextFlagMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::ContextFlagMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::ContextFlagMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::FoveationConfigBitQCOM>))
    {
        stream << *reinterpret_cast<const Value<gles::FoveationConfigBitQCOM>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::FoveationConfigBitQCOM *>))
    {
        stream << *reinterpret_cast<const Value<gles::FoveationConfigBitQCOM *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::MapBufferUsageMask>))
    {
        stream << *reinterpret_cast<const Value<gles::MapBufferUsageMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::MapBufferUsageMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::MapBufferUsageMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::MemoryBarrierMask>))
    {
        stream << *reinterpret_cast<const Value<gles::MemoryBarrierMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::MemoryBarrierMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::MemoryBarrierMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::PathFontStyle>))
    {
        stream << *reinterpret_cast<const Value<gles::PathFontStyle>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::PathFontStyle *>))
    {
        stream << *reinterpret_cast<const Value<gles::PathFontStyle *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::PathMetricMask>))
    {
        stream << *reinterpret_cast<const Value<gles::PathMetricMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::PathMetricMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::PathMetricMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::PathRenderingMaskNV>))
    {
        stream << *reinterpret_cast<const Value<gles::PathRenderingMaskNV>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::PathRenderingMaskNV *>))
    {
        stream << *reinterpret_cast<const Value<gles::PathRenderingMaskNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::PerformanceQueryCapsMaskINTEL>))
    {
        stream << *reinterpret_cast<const Value<gles::PerformanceQueryCapsMaskINTEL>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::PerformanceQueryCapsMaskINTEL *>))
    {
        stream << *reinterpret_cast<const Value<gles::PerformanceQueryCapsMaskINTEL *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::SyncObjectMask>))
    {
        stream << *reinterpret_cast<const Value<gles::SyncObjectMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::SyncObjectMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::SyncObjectMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::UseProgramStageMask>))
    {
        stream << *reinterpret_cast<const Value<gles::UseProgramStageMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::UseProgramStageMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::UseProgramStageMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::UnusedMask>))
    {
        stream << *reinterpret_cast<const Value<gles::UnusedMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::UnusedMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::UnusedMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::BufferStorageMask>))
    {
        stream << *reinterpret_cast<const Value<gles::BufferStorageMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gles::BufferStorageMask *>))
    {
        stream << *reinterpret_cast<const Value<gles::BufferStorageMask *>*>(value);
    }

    else // expect an AbstractValue with a pointer in first member
    {
        stream << *reinterpret_cast<const Value<void *>*>(value);
    }

    return stream;
}


} // namespace glesbinding
