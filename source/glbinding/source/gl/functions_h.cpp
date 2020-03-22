
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glHint(GLenum target, GLenum mode)
{
    return glbinding::Binding::Hint(target, mode);
}

void glHintPGI(GLenum target, GLint mode)
{
    return glbinding::Binding::HintPGI(target, mode);
}

void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return glbinding::Binding::Histogram(target, width, internalformat, sink);
}

void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return glbinding::Binding::HistogramEXT(target, width, internalformat, sink);
}


} // namespace gl