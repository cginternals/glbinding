
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLenum, GLeglImageOES> Binding::EGLImageTargetRenderbufferStorageOES("glEGLImageTargetRenderbufferStorageOES");
Function<Binding, void, GLenum, GLeglImageOES, const GLint *> Binding::EGLImageTargetTexStorageEXT("glEGLImageTargetTexStorageEXT");
Function<Binding, void, GLenum, GLeglImageOES> Binding::EGLImageTargetTexture2DOES("glEGLImageTargetTexture2DOES");
Function<Binding, void, GLuint, GLeglImageOES, const GLint *> Binding::EGLImageTargetTextureStorageEXT("glEGLImageTargetTextureStorageEXT");
Function<Binding, void, GLenum> Binding::Enable("glEnable");
Function<Binding, void, GLuint> Binding::EnableDriverControlQCOM("glEnableDriverControlQCOM");
Function<Binding, void, GLuint> Binding::EnableVertexAttribArray("glEnableVertexAttribArray");
Function<Binding, void, GLenum, GLuint> Binding::Enablei("glEnablei");
Function<Binding, void, GLenum, GLuint> Binding::EnableiEXT("glEnableiEXT");
Function<Binding, void, GLenum, GLuint> Binding::EnableiNV("glEnableiNV");
Function<Binding, void, GLenum, GLuint> Binding::EnableiOES("glEnableiOES");
Function<Binding, void> Binding::EndConditionalRenderNV("glEndConditionalRenderNV");
Function<Binding, void, GLuint> Binding::EndPerfMonitorAMD("glEndPerfMonitorAMD");
Function<Binding, void, GLuint> Binding::EndPerfQueryINTEL("glEndPerfQueryINTEL");
Function<Binding, void, GLenum> Binding::EndQuery("glEndQuery");
Function<Binding, void, GLenum> Binding::EndQueryEXT("glEndQueryEXT");
Function<Binding, void, BufferBitQCOM> Binding::EndTilingQCOM("glEndTilingQCOM");
Function<Binding, void> Binding::EndTransformFeedback("glEndTransformFeedback");
Function<Binding, void, GLenum, void **> Binding::ExtGetBufferPointervQCOM("glExtGetBufferPointervQCOM");
Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetBuffersQCOM("glExtGetBuffersQCOM");
Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetFramebuffersQCOM("glExtGetFramebuffersQCOM");
Function<Binding, void, GLuint, GLenum, GLchar *, GLint *> Binding::ExtGetProgramBinarySourceQCOM("glExtGetProgramBinarySourceQCOM");
Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetProgramsQCOM("glExtGetProgramsQCOM");
Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetRenderbuffersQCOM("glExtGetRenderbuffersQCOM");
Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetShadersQCOM("glExtGetShadersQCOM");
Function<Binding, void, GLuint, GLenum, GLint, GLenum, GLint *> Binding::ExtGetTexLevelParameterivQCOM("glExtGetTexLevelParameterivQCOM");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void *> Binding::ExtGetTexSubImageQCOM("glExtGetTexSubImageQCOM");
Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetTexturesQCOM("glExtGetTexturesQCOM");
Function<Binding, GLboolean, GLuint> Binding::ExtIsProgramBinaryQCOM("glExtIsProgramBinaryQCOM");
Function<Binding, void, GLenum, GLenum, GLint> Binding::ExtTexObjectStateOverrideiQCOM("glExtTexObjectStateOverrideiQCOM");



} // namespace glesbinding
