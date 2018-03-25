
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLenum, GLint> Binding::PatchParameteri("glPatchParameteri");
Function<Binding, void, GLenum, GLint> Binding::PatchParameteriEXT("glPatchParameteriEXT");
Function<Binding, void, GLenum, GLint> Binding::PatchParameteriOES("glPatchParameteriOES");
Function<Binding, void, GLuint, GLsizei, const GLubyte *, GLsizei, GLenum, const void *> Binding::PathCommandsNV("glPathCommandsNV");
Function<Binding, void, GLuint, GLsizei, GLenum, const void *> Binding::PathCoordsNV("glPathCoordsNV");
Function<Binding, void, GLenum> Binding::PathCoverDepthFuncNV("glPathCoverDepthFuncNV");
Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::PathDashArrayNV("glPathDashArrayNV");
Function<Binding, GLenum, GLuint, GLenum, const void *, PathFontStyle, GLuint, GLsizei, GLuint, GLfloat> Binding::PathGlyphIndexArrayNV("glPathGlyphIndexArrayNV");
Function<Binding, GLenum, GLenum, const void *, PathFontStyle, GLuint, GLfloat, GLuint_array_2> Binding::PathGlyphIndexRangeNV("glPathGlyphIndexRangeNV");
Function<Binding, void, GLuint, GLenum, const void *, PathFontStyle, GLuint, GLsizei, GLenum, GLuint, GLfloat> Binding::PathGlyphRangeNV("glPathGlyphRangeNV");
Function<Binding, void, GLuint, GLenum, const void *, PathFontStyle, GLsizei, GLenum, const void *, GLenum, GLuint, GLfloat> Binding::PathGlyphsNV("glPathGlyphsNV");
Function<Binding, GLenum, GLuint, GLenum, GLsizeiptr, const void *, GLsizei, GLuint, GLsizei, GLuint, GLfloat> Binding::PathMemoryGlyphIndexArrayNV("glPathMemoryGlyphIndexArrayNV");
Function<Binding, void, GLuint, GLenum, GLfloat> Binding::PathParameterfNV("glPathParameterfNV");
Function<Binding, void, GLuint, GLenum, const GLfloat *> Binding::PathParameterfvNV("glPathParameterfvNV");
Function<Binding, void, GLuint, GLenum, GLint> Binding::PathParameteriNV("glPathParameteriNV");
Function<Binding, void, GLuint, GLenum, const GLint *> Binding::PathParameterivNV("glPathParameterivNV");
Function<Binding, void, GLfloat, GLfloat> Binding::PathStencilDepthOffsetNV("glPathStencilDepthOffsetNV");
Function<Binding, void, GLenum, GLint, GLuint> Binding::PathStencilFuncNV("glPathStencilFuncNV");
Function<Binding, void, GLuint, GLenum, GLsizei, const void *> Binding::PathStringNV("glPathStringNV");
Function<Binding, void, GLuint, GLsizei, GLsizei, GLsizei, const GLubyte *, GLsizei, GLenum, const void *> Binding::PathSubCommandsNV("glPathSubCommandsNV");
Function<Binding, void, GLuint, GLsizei, GLsizei, GLenum, const void *> Binding::PathSubCoordsNV("glPathSubCoordsNV");
Function<Binding, void> Binding::PauseTransformFeedback("glPauseTransformFeedback");
Function<Binding, void, GLenum, GLint> Binding::PixelStorei("glPixelStorei");
Function<Binding, GLboolean, GLuint, GLsizei, GLsizei, GLfloat, GLfloat *, GLfloat *, GLfloat *, GLfloat *> Binding::PointAlongPathNV("glPointAlongPathNV");
Function<Binding, void, GLenum, GLenum> Binding::PolygonModeNV("glPolygonModeNV");
Function<Binding, void, GLfloat, GLfloat> Binding::PolygonOffset("glPolygonOffset");
Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::PolygonOffsetClampEXT("glPolygonOffsetClampEXT");
Function<Binding, void> Binding::PopDebugGroup("glPopDebugGroup");
Function<Binding, void> Binding::PopGroupMarkerEXT("glPopGroupMarkerEXT");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::PrimitiveBoundingBox("glPrimitiveBoundingBox");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::PrimitiveBoundingBoxEXT("glPrimitiveBoundingBoxEXT");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::PrimitiveBoundingBoxOES("glPrimitiveBoundingBoxOES");
Function<Binding, void, GLuint, GLenum, const void *, GLsizei> Binding::ProgramBinary("glProgramBinary");
Function<Binding, void, GLuint, GLenum, const void *, GLint> Binding::ProgramBinaryOES("glProgramBinaryOES");
Function<Binding, void, GLuint, GLenum, GLint> Binding::ProgramParameteri("glProgramParameteri");
Function<Binding, void, GLuint, GLint, GLenum, GLint, const GLfloat *> Binding::ProgramPathFragmentInputGenNV("glProgramPathFragmentInputGenNV");
Function<Binding, void, GLuint, GLint, GLfloat> Binding::ProgramUniform1f("glProgramUniform1f");
Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform1fv("glProgramUniform1fv");
Function<Binding, void, GLuint, GLint, GLint> Binding::ProgramUniform1i("glProgramUniform1i");
Function<Binding, void, GLuint, GLint, GLint64EXT> Binding::ProgramUniform1i64NV("glProgramUniform1i64NV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform1i64vNV("glProgramUniform1i64vNV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform1iv("glProgramUniform1iv");
Function<Binding, void, GLuint, GLint, GLuint> Binding::ProgramUniform1ui("glProgramUniform1ui");
Function<Binding, void, GLuint, GLint, GLuint64EXT> Binding::ProgramUniform1ui64NV("glProgramUniform1ui64NV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform1ui64vNV("glProgramUniform1ui64vNV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform1uiv("glProgramUniform1uiv");
Function<Binding, void, GLuint, GLint, GLfloat, GLfloat> Binding::ProgramUniform2f("glProgramUniform2f");
Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform2fv("glProgramUniform2fv");
Function<Binding, void, GLuint, GLint, GLint, GLint> Binding::ProgramUniform2i("glProgramUniform2i");
Function<Binding, void, GLuint, GLint, GLint64EXT, GLint64EXT> Binding::ProgramUniform2i64NV("glProgramUniform2i64NV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform2i64vNV("glProgramUniform2i64vNV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform2iv("glProgramUniform2iv");
Function<Binding, void, GLuint, GLint, GLuint, GLuint> Binding::ProgramUniform2ui("glProgramUniform2ui");
Function<Binding, void, GLuint, GLint, GLuint64EXT, GLuint64EXT> Binding::ProgramUniform2ui64NV("glProgramUniform2ui64NV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform2ui64vNV("glProgramUniform2ui64vNV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform2uiv("glProgramUniform2uiv");
Function<Binding, void, GLuint, GLint, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform3f("glProgramUniform3f");
Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform3fv("glProgramUniform3fv");
Function<Binding, void, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramUniform3i("glProgramUniform3i");
Function<Binding, void, GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT> Binding::ProgramUniform3i64NV("glProgramUniform3i64NV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform3i64vNV("glProgramUniform3i64vNV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform3iv("glProgramUniform3iv");
Function<Binding, void, GLuint, GLint, GLuint, GLuint, GLuint> Binding::ProgramUniform3ui("glProgramUniform3ui");
Function<Binding, void, GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::ProgramUniform3ui64NV("glProgramUniform3ui64NV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform3ui64vNV("glProgramUniform3ui64vNV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform3uiv("glProgramUniform3uiv");
Function<Binding, void, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform4f("glProgramUniform4f");
Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform4fv("glProgramUniform4fv");
Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLint> Binding::ProgramUniform4i("glProgramUniform4i");
Function<Binding, void, GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT> Binding::ProgramUniform4i64NV("glProgramUniform4i64NV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform4i64vNV("glProgramUniform4i64vNV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform4iv("glProgramUniform4iv");
Function<Binding, void, GLuint, GLint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramUniform4ui("glProgramUniform4ui");
Function<Binding, void, GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::ProgramUniform4ui64NV("glProgramUniform4ui64NV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform4ui64vNV("glProgramUniform4ui64vNV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform4uiv("glProgramUniform4uiv");
Function<Binding, void, GLuint, GLint, GLuint64> Binding::ProgramUniformHandleui64IMG("glProgramUniformHandleui64IMG");
Function<Binding, void, GLuint, GLint, GLuint64> Binding::ProgramUniformHandleui64NV("glProgramUniformHandleui64NV");
Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniformHandleui64vIMG("glProgramUniformHandleui64vIMG");
Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniformHandleui64vNV("glProgramUniformHandleui64vNV");
Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2fv("glProgramUniformMatrix2fv");
Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x3fv("glProgramUniformMatrix2x3fv");
Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x4fv("glProgramUniformMatrix2x4fv");
Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3fv("glProgramUniformMatrix3fv");
Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x2fv("glProgramUniformMatrix3x2fv");
Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x4fv("glProgramUniformMatrix3x4fv");
Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4fv("glProgramUniformMatrix4fv");
Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x2fv("glProgramUniformMatrix4x2fv");
Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x3fv("glProgramUniformMatrix4x3fv");
Function<Binding, void, GLenum, GLuint, GLsizei, const GLchar *> Binding::PushDebugGroup("glPushDebugGroup");
Function<Binding, void, GLsizei, const GLchar *> Binding::PushGroupMarkerEXT("glPushGroupMarkerEXT");



} // namespace glesbinding
