
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLenum, GLenum> Binding::Hint("glHint");
Function<Binding, void, GLenum, GLint> Binding::HintPGI("glHintPGI");
Function<Binding, void, GLenum, GLsizei, GLenum, GLboolean> Binding::Histogram("glHistogram");
Function<Binding, void, GLenum, GLsizei, GLenum, GLboolean> Binding::HistogramEXT("glHistogramEXT");



} // namespace glbinding
