
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLuint> Binding::ValidateProgram("glValidateProgram");
Function<void, GLuint> Binding::ValidateProgramPipeline("glValidateProgramPipeline");
Function<void, GLuint, GLfloat> Binding::VertexAttrib1f("glVertexAttrib1f");
Function<void, GLuint, const GLfloat *> Binding::VertexAttrib1fv("glVertexAttrib1fv");
Function<void, GLuint, GLfloat, GLfloat> Binding::VertexAttrib2f("glVertexAttrib2f");
Function<void, GLuint, const GLfloat *> Binding::VertexAttrib2fv("glVertexAttrib2fv");
Function<void, GLuint, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib3f("glVertexAttrib3f");
Function<void, GLuint, const GLfloat *> Binding::VertexAttrib3fv("glVertexAttrib3fv");
Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib4f("glVertexAttrib4f");
Function<void, GLuint, const GLfloat *> Binding::VertexAttrib4fv("glVertexAttrib4fv");
Function<void, GLuint, GLuint> Binding::VertexAttribBinding("glVertexAttribBinding");
Function<void, GLuint, GLuint> Binding::VertexAttribDivisor("glVertexAttribDivisor");
Function<void, GLuint, GLuint> Binding::VertexAttribDivisorANGLE("glVertexAttribDivisorANGLE");
Function<void, GLuint, GLuint> Binding::VertexAttribDivisorEXT("glVertexAttribDivisorEXT");
Function<void, GLuint, GLuint> Binding::VertexAttribDivisorNV("glVertexAttribDivisorNV");
Function<void, GLuint, GLint, GLenum, GLboolean, GLuint> Binding::VertexAttribFormat("glVertexAttribFormat");
Function<void, GLuint, GLint, GLint, GLint, GLint> Binding::VertexAttribI4i("glVertexAttribI4i");
Function<void, GLuint, const GLint *> Binding::VertexAttribI4iv("glVertexAttribI4iv");
Function<void, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI4ui("glVertexAttribI4ui");
Function<void, GLuint, const GLuint *> Binding::VertexAttribI4uiv("glVertexAttribI4uiv");
Function<void, GLuint, GLint, GLenum, GLuint> Binding::VertexAttribIFormat("glVertexAttribIFormat");
Function<void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribIPointer("glVertexAttribIPointer");
Function<void, GLuint, GLint, GLenum, GLboolean, GLsizei, const void *> Binding::VertexAttribPointer("glVertexAttribPointer");
Function<void, GLuint, GLuint> Binding::VertexBindingDivisor("glVertexBindingDivisor");
Function<void, GLint, GLint, GLsizei, GLsizei> Binding::Viewport("glViewport");
Function<void, GLuint, GLsizei, const GLfloat *> Binding::ViewportArrayvNV("glViewportArrayvNV");
Function<void, GLuint, GLsizei, const GLfloat *> Binding::ViewportArrayvOES("glViewportArrayvOES");
Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ViewportIndexedfNV("glViewportIndexedfNV");
Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ViewportIndexedfOES("glViewportIndexedfOES");
Function<void, GLuint, const GLfloat *> Binding::ViewportIndexedfvNV("glViewportIndexedfvNV");
Function<void, GLuint, const GLfloat *> Binding::ViewportIndexedfvOES("glViewportIndexedfvOES");
Function<void, GLuint, GLfloat, GLfloat> Binding::ViewportPositionWScaleNV("glViewportPositionWScaleNV");
Function<void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::ViewportSwizzleNV("glViewportSwizzleNV");



} // namespace glesbinding
