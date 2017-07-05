
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<void, GLsizei, GLenum, GLfloat *> Binding::FeedbackBuffer("glFeedbackBuffer");
Function<void, GLsizei, GLenum, const GLfixed *> Binding::FeedbackBufferxOES("glFeedbackBufferxOES");
Function<GLsync, GLenum, UnusedMask> Binding::FenceSync("glFenceSync");
Function<void, GLenum, GLenum, GLenum, GLenum> Binding::FinalCombinerInputNV("glFinalCombinerInputNV");
Function<void> Binding::Finish("glFinish");
Function<GLint, GLuint *> Binding::FinishAsyncSGIX("glFinishAsyncSGIX");
Function<void, GLuint> Binding::FinishFenceAPPLE("glFinishFenceAPPLE");
Function<void, GLuint> Binding::FinishFenceNV("glFinishFenceNV");
Function<void, GLenum, GLint> Binding::FinishObjectAPPLE("glFinishObjectAPPLE");
Function<void> Binding::FinishTextureSUNX("glFinishTextureSUNX");
Function<void> Binding::Flush("glFlush");
Function<void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRange("glFlushMappedBufferRange");
Function<void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRangeAPPLE("glFlushMappedBufferRangeAPPLE");
Function<void, GLuint, GLintptr, GLsizeiptr> Binding::FlushMappedNamedBufferRange("glFlushMappedNamedBufferRange");
Function<void, GLuint, GLintptr, GLsizeiptr> Binding::FlushMappedNamedBufferRangeEXT("glFlushMappedNamedBufferRangeEXT");
Function<void, GLenum> Binding::FlushPixelDataRangeNV("glFlushPixelDataRangeNV");
Function<void> Binding::FlushRasterSGIX("glFlushRasterSGIX");
Function<void, GLenum> Binding::FlushStaticDataIBM("glFlushStaticDataIBM");
Function<void, GLsizei, void *> Binding::FlushVertexArrayRangeAPPLE("glFlushVertexArrayRangeAPPLE");
Function<void> Binding::FlushVertexArrayRangeNV("glFlushVertexArrayRangeNV");
Function<void, GLenum, GLsizei> Binding::FogCoordFormatNV("glFogCoordFormatNV");
Function<void, GLenum, GLsizei, const void *> Binding::FogCoordPointer("glFogCoordPointer");
Function<void, GLenum, GLsizei, const void *> Binding::FogCoordPointerEXT("glFogCoordPointerEXT");
Function<void, GLenum, GLint, const void **, GLint> Binding::FogCoordPointerListIBM("glFogCoordPointerListIBM");
Function<void, GLdouble> Binding::FogCoordd("glFogCoordd");
Function<void, GLdouble> Binding::FogCoorddEXT("glFogCoorddEXT");
Function<void, const GLdouble *> Binding::FogCoorddv("glFogCoorddv");
Function<void, const GLdouble *> Binding::FogCoorddvEXT("glFogCoorddvEXT");
Function<void, GLfloat> Binding::FogCoordf("glFogCoordf");
Function<void, GLfloat> Binding::FogCoordfEXT("glFogCoordfEXT");
Function<void, const GLfloat *> Binding::FogCoordfv("glFogCoordfv");
Function<void, const GLfloat *> Binding::FogCoordfvEXT("glFogCoordfvEXT");
Function<void, GLhalfNV> Binding::FogCoordhNV("glFogCoordhNV");
Function<void, const GLhalfNV *> Binding::FogCoordhvNV("glFogCoordhvNV");
Function<void, GLsizei, const GLfloat *> Binding::FogFuncSGIS("glFogFuncSGIS");
Function<void, GLenum, GLfloat> Binding::Fogf("glFogf");
Function<void, GLenum, const GLfloat *> Binding::Fogfv("glFogfv");
Function<void, GLenum, GLint> Binding::Fogi("glFogi");
Function<void, GLenum, const GLint *> Binding::Fogiv("glFogiv");
Function<void, GLenum, GLfixed> Binding::FogxOES("glFogxOES");
Function<void, GLenum, const GLfixed *> Binding::FogxvOES("glFogxvOES");
Function<void, GLenum, GLenum> Binding::FragmentColorMaterialSGIX("glFragmentColorMaterialSGIX");
Function<void, GLuint> Binding::FragmentCoverageColorNV("glFragmentCoverageColorNV");
Function<void, GLenum, GLfloat> Binding::FragmentLightModelfSGIX("glFragmentLightModelfSGIX");
Function<void, GLenum, const GLfloat *> Binding::FragmentLightModelfvSGIX("glFragmentLightModelfvSGIX");
Function<void, GLenum, GLint> Binding::FragmentLightModeliSGIX("glFragmentLightModeliSGIX");
Function<void, GLenum, const GLint *> Binding::FragmentLightModelivSGIX("glFragmentLightModelivSGIX");
Function<void, GLenum, GLenum, GLfloat> Binding::FragmentLightfSGIX("glFragmentLightfSGIX");
Function<void, GLenum, GLenum, const GLfloat *> Binding::FragmentLightfvSGIX("glFragmentLightfvSGIX");
Function<void, GLenum, GLenum, GLint> Binding::FragmentLightiSGIX("glFragmentLightiSGIX");
Function<void, GLenum, GLenum, const GLint *> Binding::FragmentLightivSGIX("glFragmentLightivSGIX");
Function<void, GLenum, GLenum, GLfloat> Binding::FragmentMaterialfSGIX("glFragmentMaterialfSGIX");
Function<void, GLenum, GLenum, const GLfloat *> Binding::FragmentMaterialfvSGIX("glFragmentMaterialfvSGIX");
Function<void, GLenum, GLenum, GLint> Binding::FragmentMaterialiSGIX("glFragmentMaterialiSGIX");
Function<void, GLenum, GLenum, const GLint *> Binding::FragmentMaterialivSGIX("glFragmentMaterialivSGIX");
Function<void> Binding::FrameTerminatorGREMEDY("glFrameTerminatorGREMEDY");
Function<void, GLint> Binding::FrameZoomSGIX("glFrameZoomSGIX");
Function<void, GLuint, GLenum> Binding::FramebufferDrawBufferEXT("glFramebufferDrawBufferEXT");
Function<void, GLuint, GLsizei, const GLenum *> Binding::FramebufferDrawBuffersEXT("glFramebufferDrawBuffersEXT");
Function<void, GLenum, GLenum, GLint> Binding::FramebufferParameteri("glFramebufferParameteri");
Function<void, GLuint, GLenum> Binding::FramebufferReadBufferEXT("glFramebufferReadBufferEXT");
Function<void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbuffer("glFramebufferRenderbuffer");
Function<void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbufferEXT("glFramebufferRenderbufferEXT");
Function<void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::FramebufferSampleLocationsfvARB("glFramebufferSampleLocationsfvARB");
Function<void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::FramebufferSampleLocationsfvNV("glFramebufferSampleLocationsfvNV");
Function<void, GLenum, GLuint, GLuint, const GLfloat *> Binding::FramebufferSamplePositionsfvAMD("glFramebufferSamplePositionsfvAMD");
Function<void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture("glFramebufferTexture");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture1D("glFramebufferTexture1D");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture1DEXT("glFramebufferTexture1DEXT");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2D("glFramebufferTexture2D");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2DEXT("glFramebufferTexture2DEXT");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3D("glFramebufferTexture3D");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3DEXT("glFramebufferTexture3DEXT");
Function<void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureARB("glFramebufferTextureARB");
Function<void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureEXT("glFramebufferTextureEXT");
Function<void, GLenum, GLenum, GLuint, GLint, GLenum> Binding::FramebufferTextureFaceARB("glFramebufferTextureFaceARB");
Function<void, GLenum, GLenum, GLuint, GLint, GLenum> Binding::FramebufferTextureFaceEXT("glFramebufferTextureFaceEXT");
Function<void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayer("glFramebufferTextureLayer");
Function<void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayerARB("glFramebufferTextureLayerARB");
Function<void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayerEXT("glFramebufferTextureLayerEXT");
Function<void, GLenum, GLenum, GLuint, GLint, GLint, GLsizei> Binding::FramebufferTextureMultiviewOVR("glFramebufferTextureMultiviewOVR");
Function<void, GLuint> Binding::FreeObjectBufferATI("glFreeObjectBufferATI");
Function<void, GLenum> Binding::FrontFace("glFrontFace");
Function<void, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Frustum("glFrustum");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::FrustumfOES("glFrustumfOES");
Function<void, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed> Binding::FrustumxOES("glFrustumxOES");



} // namespace glbinding
