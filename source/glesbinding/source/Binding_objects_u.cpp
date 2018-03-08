
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLint, GLfloat> Binding::Uniform1f("glUniform1f");
Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform1fv("glUniform1fv");
Function<void, GLint, GLint> Binding::Uniform1i("glUniform1i");
Function<void, GLint, GLint64EXT> Binding::Uniform1i64NV("glUniform1i64NV");
Function<void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform1i64vNV("glUniform1i64vNV");
Function<void, GLint, GLsizei, const GLint *> Binding::Uniform1iv("glUniform1iv");
Function<void, GLint, GLuint> Binding::Uniform1ui("glUniform1ui");
Function<void, GLint, GLuint64EXT> Binding::Uniform1ui64NV("glUniform1ui64NV");
Function<void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform1ui64vNV("glUniform1ui64vNV");
Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform1uiv("glUniform1uiv");
Function<void, GLint, GLfloat, GLfloat> Binding::Uniform2f("glUniform2f");
Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform2fv("glUniform2fv");
Function<void, GLint, GLint, GLint> Binding::Uniform2i("glUniform2i");
Function<void, GLint, GLint64EXT, GLint64EXT> Binding::Uniform2i64NV("glUniform2i64NV");
Function<void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform2i64vNV("glUniform2i64vNV");
Function<void, GLint, GLsizei, const GLint *> Binding::Uniform2iv("glUniform2iv");
Function<void, GLint, GLuint, GLuint> Binding::Uniform2ui("glUniform2ui");
Function<void, GLint, GLuint64EXT, GLuint64EXT> Binding::Uniform2ui64NV("glUniform2ui64NV");
Function<void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform2ui64vNV("glUniform2ui64vNV");
Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform2uiv("glUniform2uiv");
Function<void, GLint, GLfloat, GLfloat, GLfloat> Binding::Uniform3f("glUniform3f");
Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform3fv("glUniform3fv");
Function<void, GLint, GLint, GLint, GLint> Binding::Uniform3i("glUniform3i");
Function<void, GLint, GLint64EXT, GLint64EXT, GLint64EXT> Binding::Uniform3i64NV("glUniform3i64NV");
Function<void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform3i64vNV("glUniform3i64vNV");
Function<void, GLint, GLsizei, const GLint *> Binding::Uniform3iv("glUniform3iv");
Function<void, GLint, GLuint, GLuint, GLuint> Binding::Uniform3ui("glUniform3ui");
Function<void, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::Uniform3ui64NV("glUniform3ui64NV");
Function<void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform3ui64vNV("glUniform3ui64vNV");
Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform3uiv("glUniform3uiv");
Function<void, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Uniform4f("glUniform4f");
Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform4fv("glUniform4fv");
Function<void, GLint, GLint, GLint, GLint, GLint> Binding::Uniform4i("glUniform4i");
Function<void, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT> Binding::Uniform4i64NV("glUniform4i64NV");
Function<void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform4i64vNV("glUniform4i64vNV");
Function<void, GLint, GLsizei, const GLint *> Binding::Uniform4iv("glUniform4iv");
Function<void, GLint, GLuint, GLuint, GLuint, GLuint> Binding::Uniform4ui("glUniform4ui");
Function<void, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::Uniform4ui64NV("glUniform4ui64NV");
Function<void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform4ui64vNV("glUniform4ui64vNV");
Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform4uiv("glUniform4uiv");
Function<void, GLuint, GLuint, GLuint> Binding::UniformBlockBinding("glUniformBlockBinding");
Function<void, GLint, GLuint64> Binding::UniformHandleui64IMG("glUniformHandleui64IMG");
Function<void, GLint, GLuint64> Binding::UniformHandleui64NV("glUniformHandleui64NV");
Function<void, GLint, GLsizei, const GLuint64 *> Binding::UniformHandleui64vIMG("glUniformHandleui64vIMG");
Function<void, GLint, GLsizei, const GLuint64 *> Binding::UniformHandleui64vNV("glUniformHandleui64vNV");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2fv("glUniformMatrix2fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x3fv("glUniformMatrix2x3fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x3fvNV("glUniformMatrix2x3fvNV");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x4fv("glUniformMatrix2x4fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x4fvNV("glUniformMatrix2x4fvNV");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3fv("glUniformMatrix3fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x2fv("glUniformMatrix3x2fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x2fvNV("glUniformMatrix3x2fvNV");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x4fv("glUniformMatrix3x4fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x4fvNV("glUniformMatrix3x4fvNV");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4fv("glUniformMatrix4fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x2fv("glUniformMatrix4x2fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x2fvNV("glUniformMatrix4x2fvNV");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x3fv("glUniformMatrix4x3fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x3fvNV("glUniformMatrix4x3fvNV");
Function<GLboolean, GLenum> Binding::UnmapBuffer("glUnmapBuffer");
Function<GLboolean, GLenum> Binding::UnmapBufferOES("glUnmapBufferOES");
Function<void, GLuint> Binding::UseProgram("glUseProgram");
Function<void, GLuint, UseProgramStageMask, GLuint> Binding::UseProgramStages("glUseProgramStages");



} // namespace glesbinding
