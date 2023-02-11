
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glQueryCounter(GLuint id, GLenum target)
{
    return glbinding::Binding::QueryCounter(id, target);
}

GLbitfield glQueryMatrixxOES(GLfixed * mantissa, GLint * exponent)
{
    return glbinding::Binding::QueryMatrixxOES(mantissa, exponent);
}

void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, OcclusionQueryEventMaskAMD param)
{
    return glbinding::Binding::QueryObjectParameteruiAMD(target, id, pname, param);
}

GLint glQueryResourceNV(GLenum queryType, GLint tagId, GLuint count, GLint * buffer)
{
    return glbinding::Binding::QueryResourceNV(queryType, tagId, count, buffer);
}

void glQueryResourceTagNV(GLint tagId, const GLchar * tagString)
{
    return glbinding::Binding::QueryResourceTagNV(tagId, tagString);
}


} // namespace gl