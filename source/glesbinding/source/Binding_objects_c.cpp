
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, GLenum, GLenum> Binding::CheckFramebufferStatus("glCheckFramebufferStatus");
Function<Binding, void, ClearBufferMask> Binding::Clear("glClear");
Function<Binding, void, GLenum, GLint, GLfloat, GLint> Binding::ClearBufferfi("glClearBufferfi");
Function<Binding, void, GLenum, GLint, const GLfloat *> Binding::ClearBufferfv("glClearBufferfv");
Function<Binding, void, GLenum, GLint, const GLint *> Binding::ClearBufferiv("glClearBufferiv");
Function<Binding, void, GLenum, GLint, const GLuint *> Binding::ClearBufferuiv("glClearBufferuiv");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ClearColor("glClearColor");
Function<Binding, void, GLfloat> Binding::ClearDepthf("glClearDepthf");
Function<Binding, void, GLsizei, GLsizei, const GLuint *> Binding::ClearPixelLocalStorageuiEXT("glClearPixelLocalStorageuiEXT");
Function<Binding, void, GLint> Binding::ClearStencil("glClearStencil");
Function<Binding, void, GLuint, GLint, GLenum, GLenum, const void *> Binding::ClearTexImageEXT("glClearTexImageEXT");
Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ClearTexSubImageEXT("glClearTexSubImageEXT");
Function<Binding, GLenum, GLsync, SyncObjectMask, GLuint64> Binding::ClientWaitSync("glClientWaitSync");
Function<Binding, GLenum, GLsync, SyncObjectMask, GLuint64> Binding::ClientWaitSyncAPPLE("glClientWaitSyncAPPLE");
Function<Binding, void, GLenum, GLenum> Binding::ClipControlEXT("glClipControlEXT");
Function<Binding, void, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMask("glColorMask");
Function<Binding, void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaski("glColorMaski");
Function<Binding, void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaskiEXT("glColorMaskiEXT");
Function<Binding, void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaskiOES("glColorMaskiOES");
Function<Binding, void, GLuint> Binding::CompileShader("glCompileShader");
Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage2D("glCompressedTexImage2D");
Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage3D("glCompressedTexImage3D");
Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage3DOES("glCompressedTexImage3DOES");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage2D("glCompressedTexSubImage2D");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage3D("glCompressedTexSubImage3D");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage3DOES("glCompressedTexSubImage3DOES");
Function<Binding, void, GLenum, GLint> Binding::ConservativeRasterParameteriNV("glConservativeRasterParameteriNV");
Function<Binding, void, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr> Binding::CopyBufferSubData("glCopyBufferSubData");
Function<Binding, void, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr> Binding::CopyBufferSubDataNV("glCopyBufferSubDataNV");
Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubData("glCopyImageSubData");
Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubDataEXT("glCopyImageSubDataEXT");
Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubDataOES("glCopyImageSubDataOES");
Function<Binding, void, GLuint, GLuint> Binding::CopyPathNV("glCopyPathNV");
Function<Binding, void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyTexImage2D("glCopyTexImage2D");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage2D("glCopyTexSubImage2D");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage3D("glCopyTexSubImage3D");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage3DOES("glCopyTexSubImage3DOES");
Function<Binding, void, GLuint, GLuint, GLint, GLsizei> Binding::CopyTextureLevelsAPPLE("glCopyTextureLevelsAPPLE");
Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *> Binding::CoverFillPathInstancedNV("glCoverFillPathInstancedNV");
Function<Binding, void, GLuint, GLenum> Binding::CoverFillPathNV("glCoverFillPathNV");
Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *> Binding::CoverStrokePathInstancedNV("glCoverStrokePathInstancedNV");
Function<Binding, void, GLuint, GLenum> Binding::CoverStrokePathNV("glCoverStrokePathNV");
Function<Binding, void, GLboolean> Binding::CoverageMaskNV("glCoverageMaskNV");
Function<Binding, void, GLenum> Binding::CoverageModulationNV("glCoverageModulationNV");
Function<Binding, void, GLsizei, const GLfloat *> Binding::CoverageModulationTableNV("glCoverageModulationTableNV");
Function<Binding, void, GLenum> Binding::CoverageOperationNV("glCoverageOperationNV");
Function<Binding, void, GLsizei, GLuint *> Binding::CreateMemoryObjectsEXT("glCreateMemoryObjectsEXT");
Function<Binding, void, GLuint, GLuint *> Binding::CreatePerfQueryINTEL("glCreatePerfQueryINTEL");
Function<Binding, GLuint> Binding::CreateProgram("glCreateProgram");
Function<Binding, GLuint, GLenum> Binding::CreateShader("glCreateShader");
Function<Binding, GLuint, GLenum, GLsizei, const GLchar *const*> Binding::CreateShaderProgramv("glCreateShaderProgramv");
Function<Binding, void, GLenum> Binding::CullFace("glCullFace");



} // namespace glesbinding
