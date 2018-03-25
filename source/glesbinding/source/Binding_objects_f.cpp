
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, GLsync, GLenum, UnusedMask> Binding::FenceSync("glFenceSync");
Function<Binding, GLsync, GLenum, GLbitfield> Binding::FenceSyncAPPLE("glFenceSyncAPPLE");
Function<Binding, void> Binding::Finish("glFinish");
Function<Binding, void, GLuint> Binding::FinishFenceNV("glFinishFenceNV");
Function<Binding, void> Binding::Flush("glFlush");
Function<Binding, void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRange("glFlushMappedBufferRange");
Function<Binding, void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRangeEXT("glFlushMappedBufferRangeEXT");
Function<Binding, void, GLuint> Binding::FragmentCoverageColorNV("glFragmentCoverageColorNV");
Function<Binding, void> Binding::FramebufferFetchBarrierEXT("glFramebufferFetchBarrierEXT");
Function<Binding, void> Binding::FramebufferFetchBarrierQCOM("glFramebufferFetchBarrierQCOM");
Function<Binding, void, GLuint, GLuint, GLuint, GLuint, GLuint *> Binding::FramebufferFoveationConfigQCOM("glFramebufferFoveationConfigQCOM");
Function<Binding, void, GLuint, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::FramebufferFoveationParametersQCOM("glFramebufferFoveationParametersQCOM");
Function<Binding, void, GLenum, GLenum, GLint> Binding::FramebufferParameteri("glFramebufferParameteri");
Function<Binding, void, GLuint, GLsizei> Binding::FramebufferPixelLocalStorageSizeEXT("glFramebufferPixelLocalStorageSizeEXT");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbuffer("glFramebufferRenderbuffer");
Function<Binding, void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::FramebufferSampleLocationsfvNV("glFramebufferSampleLocationsfvNV");
Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture("glFramebufferTexture");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2D("glFramebufferTexture2D");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLint, GLint> Binding::FramebufferTexture2DDownsampleIMG("glFramebufferTexture2DDownsampleIMG");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLsizei> Binding::FramebufferTexture2DMultisampleEXT("glFramebufferTexture2DMultisampleEXT");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLsizei> Binding::FramebufferTexture2DMultisampleIMG("glFramebufferTexture2DMultisampleIMG");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3DOES("glFramebufferTexture3DOES");
Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureEXT("glFramebufferTextureEXT");
Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayer("glFramebufferTextureLayer");
Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint, GLint, GLint> Binding::FramebufferTextureLayerDownsampleIMG("glFramebufferTextureLayerDownsampleIMG");
Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLsizei, GLint, GLsizei> Binding::FramebufferTextureMultisampleMultiviewOVR("glFramebufferTextureMultisampleMultiviewOVR");
Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint, GLsizei> Binding::FramebufferTextureMultiviewOVR("glFramebufferTextureMultiviewOVR");
Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureOES("glFramebufferTextureOES");
Function<Binding, void, GLenum> Binding::FrontFace("glFrontFace");



} // namespace glesbinding
