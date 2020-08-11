
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glQueryCounter(GLuint id, GLenum target) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::QueryCounter(id, target);
}

GLbitfield glQueryMatrixxOES(GLfixed * mantissa, GLint * exponent) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::QueryMatrixxOES(mantissa, exponent);
}

void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, OcclusionQueryEventMaskAMD param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::QueryObjectParameteruiAMD(target, id, pname, param);
}

GLint glQueryResourceNV(GLenum queryType, GLint tagId, GLuint count, GLint * buffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::QueryResourceNV(queryType, tagId, count, buffer);
}

void glQueryResourceTagNV(GLint tagId, const GLchar * tagString) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::QueryResourceTagNV(tagId, tagString);
}


} // namespace gl