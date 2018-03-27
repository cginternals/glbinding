
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<GLenum, GLenum> Binding::CheckFramebufferStatus("glCheckFramebufferStatus");
Function<void, ClearBufferMask> Binding::Clear("glClear");
Function<void, GLenum, GLint, GLfloat, GLint> Binding::ClearBufferfi("glClearBufferfi");
Function<void, GLenum, GLint, const GLfloat *> Binding::ClearBufferfv("glClearBufferfv");
Function<void, GLenum, GLint, const GLint *> Binding::ClearBufferiv("glClearBufferiv");
Function<void, GLenum, GLint, const GLuint *> Binding::ClearBufferuiv("glClearBufferuiv");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ClearColor("glClearColor");
Function<void, GLfloat> Binding::ClearDepthf("glClearDepthf");
Function<void, GLsizei, GLsizei, const GLuint *> Binding::ClearPixelLocalStorageuiEXT("glClearPixelLocalStorageuiEXT");
Function<void, GLint> Binding::ClearStencil("glClearStencil");
Function<void, GLuint, GLint, GLenum, GLenum, const void *> Binding::ClearTexImageEXT("glClearTexImageEXT");
Function<void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ClearTexSubImageEXT("glClearTexSubImageEXT");
Function<GLenum, GLsync, SyncObjectMask, GLuint64> Binding::ClientWaitSync("glClientWaitSync");
Function<GLenum, GLsync, SyncObjectMask, GLuint64> Binding::ClientWaitSyncAPPLE("glClientWaitSyncAPPLE");
Function<void, GLenum, GLenum> Binding::ClipControlEXT("glClipControlEXT");
Function<void, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMask("glColorMask");
Function<void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaski("glColorMaski");
Function<void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaskiEXT("glColorMaskiEXT");
Function<void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaskiOES("glColorMaskiOES");
Function<void, GLuint> Binding::CompileShader("glCompileShader");
Function<void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage2D("glCompressedTexImage2D");
Function<void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage3D("glCompressedTexImage3D");
Function<void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage3DOES("glCompressedTexImage3DOES");
Function<void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage2D("glCompressedTexSubImage2D");
Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage3D("glCompressedTexSubImage3D");
Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage3DOES("glCompressedTexSubImage3DOES");
Function<void, GLenum, GLint> Binding::ConservativeRasterParameteriNV("glConservativeRasterParameteriNV");
Function<void, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr> Binding::CopyBufferSubData("glCopyBufferSubData");
Function<void, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr> Binding::CopyBufferSubDataNV("glCopyBufferSubDataNV");
Function<void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubData("glCopyImageSubData");
Function<void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubDataEXT("glCopyImageSubDataEXT");
Function<void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubDataOES("glCopyImageSubDataOES");
Function<void, GLuint, GLuint> Binding::CopyPathNV("glCopyPathNV");
Function<void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyTexImage2D("glCopyTexImage2D");
Function<void, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage2D("glCopyTexSubImage2D");
Function<void, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage3D("glCopyTexSubImage3D");
Function<void, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage3DOES("glCopyTexSubImage3DOES");
Function<void, GLuint, GLuint, GLint, GLsizei> Binding::CopyTextureLevelsAPPLE("glCopyTextureLevelsAPPLE");
Function<void, GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *> Binding::CoverFillPathInstancedNV("glCoverFillPathInstancedNV");
Function<void, GLuint, GLenum> Binding::CoverFillPathNV("glCoverFillPathNV");
Function<void, GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *> Binding::CoverStrokePathInstancedNV("glCoverStrokePathInstancedNV");
Function<void, GLuint, GLenum> Binding::CoverStrokePathNV("glCoverStrokePathNV");
Function<void, GLboolean> Binding::CoverageMaskNV("glCoverageMaskNV");
Function<void, GLenum> Binding::CoverageModulationNV("glCoverageModulationNV");
Function<void, GLsizei, const GLfloat *> Binding::CoverageModulationTableNV("glCoverageModulationTableNV");
Function<void, GLenum> Binding::CoverageOperationNV("glCoverageOperationNV");
Function<void, GLsizei, GLuint *> Binding::CreateMemoryObjectsEXT("glCreateMemoryObjectsEXT");
Function<void, GLuint, GLuint *> Binding::CreatePerfQueryINTEL("glCreatePerfQueryINTEL");
Function<GLuint> Binding::CreateProgram("glCreateProgram");
Function<GLuint, GLenum> Binding::CreateShader("glCreateShader");
Function<GLuint, GLenum, GLsizei, const GLchar *const*> Binding::CreateShaderProgramv("glCreateShaderProgramv");
Function<void, GLenum> Binding::CullFace("glCullFace");



} // namespace glesbinding
