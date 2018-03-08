
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glFinish()
{
    return Binding::Finish();
}

void glFlush()
{
    return Binding::Flush();
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return Binding::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return Binding::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFrontFace(GLenum mode)
{
    return Binding::FrontFace(mode);
}




} // namespace glsc
