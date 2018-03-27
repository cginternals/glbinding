
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLenum, GLeglImageOES> Binding::EGLImageTargetRenderbufferStorageOES("glEGLImageTargetRenderbufferStorageOES");
Function<void, GLenum, GLeglImageOES, const GLint *> Binding::EGLImageTargetTexStorageEXT("glEGLImageTargetTexStorageEXT");
Function<void, GLenum, GLeglImageOES> Binding::EGLImageTargetTexture2DOES("glEGLImageTargetTexture2DOES");
Function<void, GLuint, GLeglImageOES, const GLint *> Binding::EGLImageTargetTextureStorageEXT("glEGLImageTargetTextureStorageEXT");
Function<void, GLenum> Binding::Enable("glEnable");
Function<void, GLuint> Binding::EnableDriverControlQCOM("glEnableDriverControlQCOM");
Function<void, GLuint> Binding::EnableVertexAttribArray("glEnableVertexAttribArray");
Function<void, GLenum, GLuint> Binding::Enablei("glEnablei");
Function<void, GLenum, GLuint> Binding::EnableiEXT("glEnableiEXT");
Function<void, GLenum, GLuint> Binding::EnableiNV("glEnableiNV");
Function<void, GLenum, GLuint> Binding::EnableiOES("glEnableiOES");
Function<void> Binding::EndConditionalRenderNV("glEndConditionalRenderNV");
Function<void, GLuint> Binding::EndPerfMonitorAMD("glEndPerfMonitorAMD");
Function<void, GLuint> Binding::EndPerfQueryINTEL("glEndPerfQueryINTEL");
Function<void, GLenum> Binding::EndQuery("glEndQuery");
Function<void, GLenum> Binding::EndQueryEXT("glEndQueryEXT");
Function<void, BufferBitQCOM> Binding::EndTilingQCOM("glEndTilingQCOM");
Function<void> Binding::EndTransformFeedback("glEndTransformFeedback");
Function<void, GLenum, void **> Binding::ExtGetBufferPointervQCOM("glExtGetBufferPointervQCOM");
Function<void, GLuint *, GLint, GLint *> Binding::ExtGetBuffersQCOM("glExtGetBuffersQCOM");
Function<void, GLuint *, GLint, GLint *> Binding::ExtGetFramebuffersQCOM("glExtGetFramebuffersQCOM");
Function<void, GLuint, GLenum, GLchar *, GLint *> Binding::ExtGetProgramBinarySourceQCOM("glExtGetProgramBinarySourceQCOM");
Function<void, GLuint *, GLint, GLint *> Binding::ExtGetProgramsQCOM("glExtGetProgramsQCOM");
Function<void, GLuint *, GLint, GLint *> Binding::ExtGetRenderbuffersQCOM("glExtGetRenderbuffersQCOM");
Function<void, GLuint *, GLint, GLint *> Binding::ExtGetShadersQCOM("glExtGetShadersQCOM");
Function<void, GLuint, GLenum, GLint, GLenum, GLint *> Binding::ExtGetTexLevelParameterivQCOM("glExtGetTexLevelParameterivQCOM");
Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void *> Binding::ExtGetTexSubImageQCOM("glExtGetTexSubImageQCOM");
Function<void, GLuint *, GLint, GLint *> Binding::ExtGetTexturesQCOM("glExtGetTexturesQCOM");
Function<GLboolean, GLuint> Binding::ExtIsProgramBinaryQCOM("glExtIsProgramBinaryQCOM");
Function<void, GLenum, GLenum, GLint> Binding::ExtTexObjectStateOverrideiQCOM("glExtTexObjectStateOverrideiQCOM");



} // namespace glesbinding
