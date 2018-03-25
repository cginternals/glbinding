
#include <glscbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <glscbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glscbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace glsc

namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glscbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace glsc

namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glscbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace glsc

namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << glscbinding::aux::bitfieldString<AttribMask>(value);
    return stream;
}


} // namespace glsc

namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << glscbinding::aux::bitfieldString<ClearBufferMask>(value);
    return stream;
}


} // namespace glsc



namespace glscbinding
{


std::ostream & operator<<(std::ostream & stream, const khrbinding::AbstractValue * value)
{
    if (typeid(*value) == typeid(khrbinding::AbstractValue))
    {
        stream << reinterpret_cast<const void*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLvoid *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLvoid *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLextension>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLextension>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLextension *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLextension *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLenum>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLenum>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLenum *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLenum *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLboolean>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLboolean>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLboolean *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLboolean *>*>(value);
    }


    // Omit glsc::GLbitfield


    // Omit glsc::GLvoid

    else if (typeid(*value) == typeid(Value<glsc::GLbyte>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLbyte>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLbyte *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLbyte *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLshort>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLshort>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLshort *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLshort *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLint>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLint>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLint *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLint *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLclampx>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLclampx>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLclampx *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLclampx *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLubyte>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLubyte>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLubyte *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLubyte *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLushort>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLushort>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLushort *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLushort *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLuint>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLuint>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLuint *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLuint *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLsizei>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLsizei>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLsizei *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLsizei *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLfloat>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLfloat>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLfloat *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLfloat *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLclampf>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLclampf>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLclampf *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLclampf *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLdouble>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLdouble>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLdouble *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLdouble *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLclampd>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLclampd>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLclampd *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLclampd *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLeglClientBufferEXT>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLeglClientBufferEXT>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLeglClientBufferEXT *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLeglClientBufferEXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLeglImageOES>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLeglImageOES>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLeglImageOES *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLeglImageOES *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLchar>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLchar>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLchar *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLchar *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLcharARB>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLcharARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLcharARB *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLcharARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLhandleARB>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLhandleARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLhandleARB *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLhandleARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLhalfARB>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLhalfARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLhalfARB *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLhalfARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLhalf>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLhalf>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLhalf *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLhalf *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLfixed>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLfixed>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLfixed *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLfixed *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLintptr>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLintptr>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLintptr *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLintptr *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLsizeiptr>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLsizeiptr>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLsizeiptr *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLsizeiptr *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLint64>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLint64>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLint64 *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLint64 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLuint64>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLuint64>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLuint64 *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLuint64 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLintptrARB>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLintptrARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLintptrARB *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLintptrARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLsizeiptrARB>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLsizeiptrARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLsizeiptrARB *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLsizeiptrARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLint64EXT>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLint64EXT>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLint64EXT *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLint64EXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLuint64EXT>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLuint64EXT>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLuint64EXT *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLuint64EXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLsync>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLsync>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLsync *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLsync *>*>(value);
    }


    // Omit glsc::_cl_context


    // Omit glsc::_cl_event

    else if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROC>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROC>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROC *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROC *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCARB>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCARB *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCKHR>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCKHR>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCKHR *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLubyte>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLubyte>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLubyte *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLubyte *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLfloat>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLfloat>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLfloat *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLfloat *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLintptr>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLintptr>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLintptr *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLintptr *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLsizeiptr>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLsizeiptr>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLsizeiptr *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLsizeiptr *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCAMD>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCAMD>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCAMD *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCAMD *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLhalfNV>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLhalfNV>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLhalfNV *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLhalfNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLvdpauSurfaceNV>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLvdpauSurfaceNV>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLvdpauSurfaceNV *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLvdpauSurfaceNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLVULKANPROCNV>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLVULKANPROCNV>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLVULKANPROCNV *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLVULKANPROCNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::GLuint_array_2>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLuint_array_2>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::GLuint_array_2 *>))
    {
        stream << *reinterpret_cast<const Value<glsc::GLuint_array_2 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::AttribMask>))
    {
        stream << *reinterpret_cast<const Value<glsc::AttribMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::AttribMask *>))
    {
        stream << *reinterpret_cast<const Value<glsc::AttribMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<glsc::ClearBufferMask>))
    {
        stream << *reinterpret_cast<const Value<glsc::ClearBufferMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<glsc::ClearBufferMask *>))
    {
        stream << *reinterpret_cast<const Value<glsc::ClearBufferMask *>*>(value);
    }

    else // expect an AbstractValue with a pointer in first member
    {
        stream << *reinterpret_cast<const Value<void *>*>(value);
    }

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLenum> & value)
{
    const auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLboolean> & value)
{
    auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLubyte *> & value)
{
    auto s = glscbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLchar *> & value)
{
    auto s = glscbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLuint_array_2> & value)
{
    std::stringstream ss;
    ss << "{ " << value.value()[0] << ", " << value.value()[1] << " }";
    stream << ss.str();

    return stream;
}


} // namespace glscbinding
