
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLuint> Binding::ValidateProgram("glValidateProgram");
Function<Binding, void, GLuint> Binding::ValidateProgramPipeline("glValidateProgramPipeline");
Function<Binding, void, GLuint, GLfloat> Binding::VertexAttrib1f("glVertexAttrib1f");
Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib1fv("glVertexAttrib1fv");
Function<Binding, void, GLuint, GLfloat, GLfloat> Binding::VertexAttrib2f("glVertexAttrib2f");
Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib2fv("glVertexAttrib2fv");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib3f("glVertexAttrib3f");
Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib3fv("glVertexAttrib3fv");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib4f("glVertexAttrib4f");
Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib4fv("glVertexAttrib4fv");
Function<Binding, void, GLuint, GLuint> Binding::VertexAttribBinding("glVertexAttribBinding");
Function<Binding, void, GLuint, GLuint> Binding::VertexAttribDivisor("glVertexAttribDivisor");
Function<Binding, void, GLuint, GLuint> Binding::VertexAttribDivisorANGLE("glVertexAttribDivisorANGLE");
Function<Binding, void, GLuint, GLuint> Binding::VertexAttribDivisorEXT("glVertexAttribDivisorEXT");
Function<Binding, void, GLuint, GLuint> Binding::VertexAttribDivisorNV("glVertexAttribDivisorNV");
Function<Binding, void, GLuint, GLint, GLenum, GLboolean, GLuint> Binding::VertexAttribFormat("glVertexAttribFormat");
Function<Binding, void, GLuint, GLint, GLint, GLint, GLint> Binding::VertexAttribI4i("glVertexAttribI4i");
Function<Binding, void, GLuint, const GLint *> Binding::VertexAttribI4iv("glVertexAttribI4iv");
Function<Binding, void, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI4ui("glVertexAttribI4ui");
Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttribI4uiv("glVertexAttribI4uiv");
Function<Binding, void, GLuint, GLint, GLenum, GLuint> Binding::VertexAttribIFormat("glVertexAttribIFormat");
Function<Binding, void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribIPointer("glVertexAttribIPointer");
Function<Binding, void, GLuint, GLint, GLenum, GLboolean, GLsizei, const void *> Binding::VertexAttribPointer("glVertexAttribPointer");
Function<Binding, void, GLuint, GLuint> Binding::VertexBindingDivisor("glVertexBindingDivisor");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei> Binding::Viewport("glViewport");
Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::ViewportArrayvNV("glViewportArrayvNV");
Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::ViewportArrayvOES("glViewportArrayvOES");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ViewportIndexedfNV("glViewportIndexedfNV");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ViewportIndexedfOES("glViewportIndexedfOES");
Function<Binding, void, GLuint, const GLfloat *> Binding::ViewportIndexedfvNV("glViewportIndexedfvNV");
Function<Binding, void, GLuint, const GLfloat *> Binding::ViewportIndexedfvOES("glViewportIndexedfvOES");
Function<Binding, void, GLuint, GLfloat, GLfloat> Binding::ViewportPositionWScaleNV("glViewportPositionWScaleNV");
Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::ViewportSwizzleNV("glViewportSwizzleNV");



} // namespace glesbinding
