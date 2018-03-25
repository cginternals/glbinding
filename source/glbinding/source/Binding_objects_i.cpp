
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLenum, const void *> Binding::IglooInterfaceSGIX("glIglooInterfaceSGIX");
Function<Binding, void, GLenum, GLenum, GLfloat> Binding::ImageTransformParameterfHP("glImageTransformParameterfHP");
Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::ImageTransformParameterfvHP("glImageTransformParameterfvHP");
Function<Binding, void, GLenum, GLenum, GLint> Binding::ImageTransformParameteriHP("glImageTransformParameteriHP");
Function<Binding, void, GLenum, GLenum, const GLint *> Binding::ImageTransformParameterivHP("glImageTransformParameterivHP");
Function<Binding, void, GLuint, GLuint64, GLenum, GLint> Binding::ImportMemoryFdEXT("glImportMemoryFdEXT");
Function<Binding, void, GLuint, GLuint64, GLenum, void *> Binding::ImportMemoryWin32HandleEXT("glImportMemoryWin32HandleEXT");
Function<Binding, void, GLuint, GLuint64, GLenum, const void *> Binding::ImportMemoryWin32NameEXT("glImportMemoryWin32NameEXT");
Function<Binding, void, GLuint, GLenum, GLint> Binding::ImportSemaphoreFdEXT("glImportSemaphoreFdEXT");
Function<Binding, void, GLuint, GLenum, void *> Binding::ImportSemaphoreWin32HandleEXT("glImportSemaphoreWin32HandleEXT");
Function<Binding, void, GLuint, GLenum, const void *> Binding::ImportSemaphoreWin32NameEXT("glImportSemaphoreWin32NameEXT");
Function<Binding, GLsync, GLenum, GLintptr, UnusedMask> Binding::ImportSyncEXT("glImportSyncEXT");
Function<Binding, void, GLenum, GLsizei> Binding::IndexFormatNV("glIndexFormatNV");
Function<Binding, void, GLenum, GLclampf> Binding::IndexFuncEXT("glIndexFuncEXT");
Function<Binding, void, GLuint> Binding::IndexMask("glIndexMask");
Function<Binding, void, GLenum, GLenum> Binding::IndexMaterialEXT("glIndexMaterialEXT");
Function<Binding, void, GLenum, GLsizei, const void *> Binding::IndexPointer("glIndexPointer");
Function<Binding, void, GLenum, GLsizei, GLsizei, const void *> Binding::IndexPointerEXT("glIndexPointerEXT");
Function<Binding, void, GLenum, GLint, const void **, GLint> Binding::IndexPointerListIBM("glIndexPointerListIBM");
Function<Binding, void, GLdouble> Binding::Indexd("glIndexd");
Function<Binding, void, const GLdouble *> Binding::Indexdv("glIndexdv");
Function<Binding, void, GLfloat> Binding::Indexf("glIndexf");
Function<Binding, void, const GLfloat *> Binding::Indexfv("glIndexfv");
Function<Binding, void, GLint> Binding::Indexi("glIndexi");
Function<Binding, void, const GLint *> Binding::Indexiv("glIndexiv");
Function<Binding, void, GLshort> Binding::Indexs("glIndexs");
Function<Binding, void, const GLshort *> Binding::Indexsv("glIndexsv");
Function<Binding, void, GLubyte> Binding::Indexub("glIndexub");
Function<Binding, void, const GLubyte *> Binding::Indexubv("glIndexubv");
Function<Binding, void, GLfixed> Binding::IndexxOES("glIndexxOES");
Function<Binding, void, const GLfixed *> Binding::IndexxvOES("glIndexxvOES");
Function<Binding, void> Binding::InitNames("glInitNames");
Function<Binding, void, GLuint, GLuint, GLuint> Binding::InsertComponentEXT("glInsertComponentEXT");
Function<Binding, void, GLsizei, const GLchar *> Binding::InsertEventMarkerEXT("glInsertEventMarkerEXT");
Function<Binding, void, GLsizei, GLint *> Binding::InstrumentsBufferSGIX("glInstrumentsBufferSGIX");
Function<Binding, void, GLenum, GLsizei, const void *> Binding::InterleavedArrays("glInterleavedArrays");
Function<Binding, void, GLuint, GLuint, GLuint, GLfloat> Binding::InterpolatePathsNV("glInterpolatePathsNV");
Function<Binding, void, GLuint> Binding::InvalidateBufferData("glInvalidateBufferData");
Function<Binding, void, GLuint, GLintptr, GLsizeiptr> Binding::InvalidateBufferSubData("glInvalidateBufferSubData");
Function<Binding, void, GLenum, GLsizei, const GLenum *> Binding::InvalidateFramebuffer("glInvalidateFramebuffer");
Function<Binding, void, GLuint, GLsizei, const GLenum *> Binding::InvalidateNamedFramebufferData("glInvalidateNamedFramebufferData");
Function<Binding, void, GLuint, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei> Binding::InvalidateNamedFramebufferSubData("glInvalidateNamedFramebufferSubData");
Function<Binding, void, GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei> Binding::InvalidateSubFramebuffer("glInvalidateSubFramebuffer");
Function<Binding, void, GLuint, GLint> Binding::InvalidateTexImage("glInvalidateTexImage");
Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::InvalidateTexSubImage("glInvalidateTexSubImage");
Function<Binding, GLboolean, GLuint> Binding::IsAsyncMarkerSGIX("glIsAsyncMarkerSGIX");
Function<Binding, GLboolean, GLuint> Binding::IsBuffer("glIsBuffer");
Function<Binding, GLboolean, GLuint> Binding::IsBufferARB("glIsBufferARB");
Function<Binding, GLboolean, GLenum> Binding::IsBufferResidentNV("glIsBufferResidentNV");
Function<Binding, GLboolean, GLuint> Binding::IsCommandListNV("glIsCommandListNV");
Function<Binding, GLboolean, GLenum> Binding::IsEnabled("glIsEnabled");
Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnabledIndexedEXT("glIsEnabledIndexedEXT");
Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnabledi("glIsEnabledi");
Function<Binding, GLboolean, GLuint> Binding::IsFenceAPPLE("glIsFenceAPPLE");
Function<Binding, GLboolean, GLuint> Binding::IsFenceNV("glIsFenceNV");
Function<Binding, GLboolean, GLuint> Binding::IsFramebuffer("glIsFramebuffer");
Function<Binding, GLboolean, GLuint> Binding::IsFramebufferEXT("glIsFramebufferEXT");
Function<Binding, GLboolean, GLuint64> Binding::IsImageHandleResidentARB("glIsImageHandleResidentARB");
Function<Binding, GLboolean, GLuint64> Binding::IsImageHandleResidentNV("glIsImageHandleResidentNV");
Function<Binding, GLboolean, GLuint> Binding::IsList("glIsList");
Function<Binding, GLboolean, GLuint> Binding::IsMemoryObjectEXT("glIsMemoryObjectEXT");
Function<Binding, GLboolean, GLenum, GLuint> Binding::IsNameAMD("glIsNameAMD");
Function<Binding, GLboolean, GLuint> Binding::IsNamedBufferResidentNV("glIsNamedBufferResidentNV");
Function<Binding, GLboolean, GLint, const GLchar *> Binding::IsNamedStringARB("glIsNamedStringARB");
Function<Binding, GLboolean, GLuint> Binding::IsObjectBufferATI("glIsObjectBufferATI");
Function<Binding, GLboolean, GLuint> Binding::IsOcclusionQueryNV("glIsOcclusionQueryNV");
Function<Binding, GLboolean, GLuint> Binding::IsPathNV("glIsPathNV");
Function<Binding, GLboolean, GLuint, GLuint, GLfloat, GLfloat> Binding::IsPointInFillPathNV("glIsPointInFillPathNV");
Function<Binding, GLboolean, GLuint, GLfloat, GLfloat> Binding::IsPointInStrokePathNV("glIsPointInStrokePathNV");
Function<Binding, GLboolean, GLuint> Binding::IsProgram("glIsProgram");
Function<Binding, GLboolean, GLuint> Binding::IsProgramARB("glIsProgramARB");
Function<Binding, GLboolean, GLuint> Binding::IsProgramNV("glIsProgramNV");
Function<Binding, GLboolean, GLuint> Binding::IsProgramPipeline("glIsProgramPipeline");
Function<Binding, GLboolean, GLuint> Binding::IsQuery("glIsQuery");
Function<Binding, GLboolean, GLuint> Binding::IsQueryARB("glIsQueryARB");
Function<Binding, GLboolean, GLuint> Binding::IsRenderbuffer("glIsRenderbuffer");
Function<Binding, GLboolean, GLuint> Binding::IsRenderbufferEXT("glIsRenderbufferEXT");
Function<Binding, GLboolean, GLuint> Binding::IsSampler("glIsSampler");
Function<Binding, GLboolean, GLuint> Binding::IsSemaphoreEXT("glIsSemaphoreEXT");
Function<Binding, GLboolean, GLuint> Binding::IsShader("glIsShader");
Function<Binding, GLboolean, GLuint> Binding::IsStateNV("glIsStateNV");
Function<Binding, GLboolean, GLsync> Binding::IsSync("glIsSync");
Function<Binding, GLboolean, GLuint> Binding::IsTexture("glIsTexture");
Function<Binding, GLboolean, GLuint> Binding::IsTextureEXT("glIsTextureEXT");
Function<Binding, GLboolean, GLuint64> Binding::IsTextureHandleResidentARB("glIsTextureHandleResidentARB");
Function<Binding, GLboolean, GLuint64> Binding::IsTextureHandleResidentNV("glIsTextureHandleResidentNV");
Function<Binding, GLboolean, GLuint> Binding::IsTransformFeedback("glIsTransformFeedback");
Function<Binding, GLboolean, GLuint> Binding::IsTransformFeedbackNV("glIsTransformFeedbackNV");
Function<Binding, GLboolean, GLuint, GLenum> Binding::IsVariantEnabledEXT("glIsVariantEnabledEXT");
Function<Binding, GLboolean, GLuint> Binding::IsVertexArray("glIsVertexArray");
Function<Binding, GLboolean, GLuint> Binding::IsVertexArrayAPPLE("glIsVertexArrayAPPLE");
Function<Binding, GLboolean, GLuint, GLenum> Binding::IsVertexAttribEnabledAPPLE("glIsVertexAttribEnabledAPPLE");



} // namespace glbinding
