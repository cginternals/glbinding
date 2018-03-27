
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLuint, GLuint64, GLenum, GLint> Binding::ImportMemoryFdEXT("glImportMemoryFdEXT");
Function<void, GLuint, GLuint64, GLenum, void *> Binding::ImportMemoryWin32HandleEXT("glImportMemoryWin32HandleEXT");
Function<void, GLuint, GLuint64, GLenum, const void *> Binding::ImportMemoryWin32NameEXT("glImportMemoryWin32NameEXT");
Function<void, GLuint, GLenum, GLint> Binding::ImportSemaphoreFdEXT("glImportSemaphoreFdEXT");
Function<void, GLuint, GLenum, void *> Binding::ImportSemaphoreWin32HandleEXT("glImportSemaphoreWin32HandleEXT");
Function<void, GLuint, GLenum, const void *> Binding::ImportSemaphoreWin32NameEXT("glImportSemaphoreWin32NameEXT");
Function<void, GLsizei, const GLchar *> Binding::InsertEventMarkerEXT("glInsertEventMarkerEXT");
Function<void, GLuint, GLuint, GLuint, GLfloat> Binding::InterpolatePathsNV("glInterpolatePathsNV");
Function<void, GLenum, GLsizei, const GLenum *> Binding::InvalidateFramebuffer("glInvalidateFramebuffer");
Function<void, GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei> Binding::InvalidateSubFramebuffer("glInvalidateSubFramebuffer");
Function<GLboolean, GLuint> Binding::IsBuffer("glIsBuffer");
Function<GLboolean, GLenum> Binding::IsEnabled("glIsEnabled");
Function<GLboolean, GLenum, GLuint> Binding::IsEnabledi("glIsEnabledi");
Function<GLboolean, GLenum, GLuint> Binding::IsEnablediEXT("glIsEnablediEXT");
Function<GLboolean, GLenum, GLuint> Binding::IsEnablediNV("glIsEnablediNV");
Function<GLboolean, GLenum, GLuint> Binding::IsEnablediOES("glIsEnablediOES");
Function<GLboolean, GLuint> Binding::IsFenceNV("glIsFenceNV");
Function<GLboolean, GLuint> Binding::IsFramebuffer("glIsFramebuffer");
Function<GLboolean, GLuint64> Binding::IsImageHandleResidentNV("glIsImageHandleResidentNV");
Function<GLboolean, GLuint> Binding::IsMemoryObjectEXT("glIsMemoryObjectEXT");
Function<GLboolean, GLuint> Binding::IsPathNV("glIsPathNV");
Function<GLboolean, GLuint, GLuint, GLfloat, GLfloat> Binding::IsPointInFillPathNV("glIsPointInFillPathNV");
Function<GLboolean, GLuint, GLfloat, GLfloat> Binding::IsPointInStrokePathNV("glIsPointInStrokePathNV");
Function<GLboolean, GLuint> Binding::IsProgram("glIsProgram");
Function<GLboolean, GLuint> Binding::IsProgramPipeline("glIsProgramPipeline");
Function<GLboolean, GLuint> Binding::IsQuery("glIsQuery");
Function<GLboolean, GLuint> Binding::IsQueryEXT("glIsQueryEXT");
Function<GLboolean, GLuint> Binding::IsRenderbuffer("glIsRenderbuffer");
Function<GLboolean, GLuint> Binding::IsSampler("glIsSampler");
Function<GLboolean, GLuint> Binding::IsSemaphoreEXT("glIsSemaphoreEXT");
Function<GLboolean, GLuint> Binding::IsShader("glIsShader");
Function<GLboolean, GLsync> Binding::IsSync("glIsSync");
Function<GLboolean, GLsync> Binding::IsSyncAPPLE("glIsSyncAPPLE");
Function<GLboolean, GLuint> Binding::IsTexture("glIsTexture");
Function<GLboolean, GLuint64> Binding::IsTextureHandleResidentNV("glIsTextureHandleResidentNV");
Function<GLboolean, GLuint> Binding::IsTransformFeedback("glIsTransformFeedback");
Function<GLboolean, GLuint> Binding::IsVertexArray("glIsVertexArray");
Function<GLboolean, GLuint> Binding::IsVertexArrayOES("glIsVertexArrayOES");



} // namespace glesbinding
