
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<GLsync, GLenum, UnusedMask> Binding::FenceSync("glFenceSync");
Function<GLsync, GLenum, GLbitfield> Binding::FenceSyncAPPLE("glFenceSyncAPPLE");
Function<void> Binding::Finish("glFinish");
Function<void, GLuint> Binding::FinishFenceNV("glFinishFenceNV");
Function<void> Binding::Flush("glFlush");
Function<void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRange("glFlushMappedBufferRange");
Function<void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRangeEXT("glFlushMappedBufferRangeEXT");
Function<void, GLuint> Binding::FragmentCoverageColorNV("glFragmentCoverageColorNV");
Function<void> Binding::FramebufferFetchBarrierEXT("glFramebufferFetchBarrierEXT");
Function<void> Binding::FramebufferFetchBarrierQCOM("glFramebufferFetchBarrierQCOM");
Function<void, GLuint, GLuint, GLuint, GLuint, GLuint *> Binding::FramebufferFoveationConfigQCOM("glFramebufferFoveationConfigQCOM");
Function<void, GLuint, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::FramebufferFoveationParametersQCOM("glFramebufferFoveationParametersQCOM");
Function<void, GLenum, GLenum, GLint> Binding::FramebufferParameteri("glFramebufferParameteri");
Function<void, GLuint, GLsizei> Binding::FramebufferPixelLocalStorageSizeEXT("glFramebufferPixelLocalStorageSizeEXT");
Function<void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbuffer("glFramebufferRenderbuffer");
Function<void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::FramebufferSampleLocationsfvNV("glFramebufferSampleLocationsfvNV");
Function<void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture("glFramebufferTexture");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2D("glFramebufferTexture2D");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint, GLint, GLint> Binding::FramebufferTexture2DDownsampleIMG("glFramebufferTexture2DDownsampleIMG");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint, GLsizei> Binding::FramebufferTexture2DMultisampleEXT("glFramebufferTexture2DMultisampleEXT");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint, GLsizei> Binding::FramebufferTexture2DMultisampleIMG("glFramebufferTexture2DMultisampleIMG");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3DOES("glFramebufferTexture3DOES");
Function<void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureEXT("glFramebufferTextureEXT");
Function<void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayer("glFramebufferTextureLayer");
Function<void, GLenum, GLenum, GLuint, GLint, GLint, GLint, GLint> Binding::FramebufferTextureLayerDownsampleIMG("glFramebufferTextureLayerDownsampleIMG");
Function<void, GLenum, GLenum, GLuint, GLint, GLsizei, GLint, GLsizei> Binding::FramebufferTextureMultisampleMultiviewOVR("glFramebufferTextureMultisampleMultiviewOVR");
Function<void, GLenum, GLenum, GLuint, GLint, GLint, GLsizei> Binding::FramebufferTextureMultiviewOVR("glFramebufferTextureMultiviewOVR");
Function<void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureOES("glFramebufferTextureOES");
Function<void, GLenum> Binding::FrontFace("glFrontFace");



} // namespace glesbinding
