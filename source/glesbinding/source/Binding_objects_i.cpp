
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLuint, GLuint64, GLenum, GLint> Binding::ImportMemoryFdEXT("glImportMemoryFdEXT");
Function<Binding, void, GLuint, GLuint64, GLenum, void *> Binding::ImportMemoryWin32HandleEXT("glImportMemoryWin32HandleEXT");
Function<Binding, void, GLuint, GLuint64, GLenum, const void *> Binding::ImportMemoryWin32NameEXT("glImportMemoryWin32NameEXT");
Function<Binding, void, GLuint, GLenum, GLint> Binding::ImportSemaphoreFdEXT("glImportSemaphoreFdEXT");
Function<Binding, void, GLuint, GLenum, void *> Binding::ImportSemaphoreWin32HandleEXT("glImportSemaphoreWin32HandleEXT");
Function<Binding, void, GLuint, GLenum, const void *> Binding::ImportSemaphoreWin32NameEXT("glImportSemaphoreWin32NameEXT");
Function<Binding, void, GLsizei, const GLchar *> Binding::InsertEventMarkerEXT("glInsertEventMarkerEXT");
Function<Binding, void, GLuint, GLuint, GLuint, GLfloat> Binding::InterpolatePathsNV("glInterpolatePathsNV");
Function<Binding, void, GLenum, GLsizei, const GLenum *> Binding::InvalidateFramebuffer("glInvalidateFramebuffer");
Function<Binding, void, GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei> Binding::InvalidateSubFramebuffer("glInvalidateSubFramebuffer");
Function<Binding, GLboolean, GLuint> Binding::IsBuffer("glIsBuffer");
Function<Binding, GLboolean, GLenum> Binding::IsEnabled("glIsEnabled");
Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnabledi("glIsEnabledi");
Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnablediEXT("glIsEnablediEXT");
Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnablediNV("glIsEnablediNV");
Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnablediOES("glIsEnablediOES");
Function<Binding, GLboolean, GLuint> Binding::IsFenceNV("glIsFenceNV");
Function<Binding, GLboolean, GLuint> Binding::IsFramebuffer("glIsFramebuffer");
Function<Binding, GLboolean, GLuint64> Binding::IsImageHandleResidentNV("glIsImageHandleResidentNV");
Function<Binding, GLboolean, GLuint> Binding::IsMemoryObjectEXT("glIsMemoryObjectEXT");
Function<Binding, GLboolean, GLuint> Binding::IsPathNV("glIsPathNV");
Function<Binding, GLboolean, GLuint, GLuint, GLfloat, GLfloat> Binding::IsPointInFillPathNV("glIsPointInFillPathNV");
Function<Binding, GLboolean, GLuint, GLfloat, GLfloat> Binding::IsPointInStrokePathNV("glIsPointInStrokePathNV");
Function<Binding, GLboolean, GLuint> Binding::IsProgram("glIsProgram");
Function<Binding, GLboolean, GLuint> Binding::IsProgramPipeline("glIsProgramPipeline");
Function<Binding, GLboolean, GLuint> Binding::IsQuery("glIsQuery");
Function<Binding, GLboolean, GLuint> Binding::IsQueryEXT("glIsQueryEXT");
Function<Binding, GLboolean, GLuint> Binding::IsRenderbuffer("glIsRenderbuffer");
Function<Binding, GLboolean, GLuint> Binding::IsSampler("glIsSampler");
Function<Binding, GLboolean, GLuint> Binding::IsSemaphoreEXT("glIsSemaphoreEXT");
Function<Binding, GLboolean, GLuint> Binding::IsShader("glIsShader");
Function<Binding, GLboolean, GLsync> Binding::IsSync("glIsSync");
Function<Binding, GLboolean, GLsync> Binding::IsSyncAPPLE("glIsSyncAPPLE");
Function<Binding, GLboolean, GLuint> Binding::IsTexture("glIsTexture");
Function<Binding, GLboolean, GLuint64> Binding::IsTextureHandleResidentNV("glIsTextureHandleResidentNV");
Function<Binding, GLboolean, GLuint> Binding::IsTransformFeedback("glIsTransformFeedback");
Function<Binding, GLboolean, GLuint> Binding::IsVertexArray("glIsVertexArray");
Function<Binding, GLboolean, GLuint> Binding::IsVertexArrayOES("glIsVertexArrayOES");



} // namespace glesbinding
