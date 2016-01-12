
#include "Binding_pch.h"

using namespace gl; // ToDo: multiple APIs?


namespace glbinding 
{


Function<void, GLenum, GLenum> Binding::Hint("glHint");
Function<void, GLenum, GLint> Binding::HintPGI("glHintPGI");
Function<void, GLenum, GLsizei, GLenum, GLboolean> Binding::Histogram("glHistogram");
Function<void, GLenum, GLsizei, GLenum, GLboolean> Binding::HistogramEXT("glHistogramEXT");


} // namespace glbinding
