
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLsizei, GLenum, GLfloat *> Binding::FeedbackBuffer("glFeedbackBuffer");
Function<Binding, void, GLsizei, GLenum, const GLfixed *> Binding::FeedbackBufferxOES("glFeedbackBufferxOES");
Function<Binding, GLsync, GLenum, UnusedMask> Binding::FenceSync("glFenceSync");
Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::FinalCombinerInputNV("glFinalCombinerInputNV");
Function<Binding, void> Binding::Finish("glFinish");
Function<Binding, GLint, GLuint *> Binding::FinishAsyncSGIX("glFinishAsyncSGIX");
Function<Binding, void, GLuint> Binding::FinishFenceAPPLE("glFinishFenceAPPLE");
Function<Binding, void, GLuint> Binding::FinishFenceNV("glFinishFenceNV");
Function<Binding, void, GLenum, GLint> Binding::FinishObjectAPPLE("glFinishObjectAPPLE");
Function<Binding, void> Binding::FinishTextureSUNX("glFinishTextureSUNX");
Function<Binding, void> Binding::Flush("glFlush");
Function<Binding, void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRange("glFlushMappedBufferRange");
Function<Binding, void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRangeAPPLE("glFlushMappedBufferRangeAPPLE");
Function<Binding, void, GLuint, GLintptr, GLsizeiptr> Binding::FlushMappedNamedBufferRange("glFlushMappedNamedBufferRange");
Function<Binding, void, GLuint, GLintptr, GLsizeiptr> Binding::FlushMappedNamedBufferRangeEXT("glFlushMappedNamedBufferRangeEXT");
Function<Binding, void, GLenum> Binding::FlushPixelDataRangeNV("glFlushPixelDataRangeNV");
Function<Binding, void> Binding::FlushRasterSGIX("glFlushRasterSGIX");
Function<Binding, void, GLenum> Binding::FlushStaticDataIBM("glFlushStaticDataIBM");
Function<Binding, void, GLsizei, void *> Binding::FlushVertexArrayRangeAPPLE("glFlushVertexArrayRangeAPPLE");
Function<Binding, void> Binding::FlushVertexArrayRangeNV("glFlushVertexArrayRangeNV");
Function<Binding, void, GLenum, GLsizei> Binding::FogCoordFormatNV("glFogCoordFormatNV");
Function<Binding, void, GLenum, GLsizei, const void *> Binding::FogCoordPointer("glFogCoordPointer");
Function<Binding, void, GLenum, GLsizei, const void *> Binding::FogCoordPointerEXT("glFogCoordPointerEXT");
Function<Binding, void, GLenum, GLint, const void **, GLint> Binding::FogCoordPointerListIBM("glFogCoordPointerListIBM");
Function<Binding, void, GLdouble> Binding::FogCoordd("glFogCoordd");
Function<Binding, void, GLdouble> Binding::FogCoorddEXT("glFogCoorddEXT");
Function<Binding, void, const GLdouble *> Binding::FogCoorddv("glFogCoorddv");
Function<Binding, void, const GLdouble *> Binding::FogCoorddvEXT("glFogCoorddvEXT");
Function<Binding, void, GLfloat> Binding::FogCoordf("glFogCoordf");
Function<Binding, void, GLfloat> Binding::FogCoordfEXT("glFogCoordfEXT");
Function<Binding, void, const GLfloat *> Binding::FogCoordfv("glFogCoordfv");
Function<Binding, void, const GLfloat *> Binding::FogCoordfvEXT("glFogCoordfvEXT");
Function<Binding, void, GLhalfNV> Binding::FogCoordhNV("glFogCoordhNV");
Function<Binding, void, const GLhalfNV *> Binding::FogCoordhvNV("glFogCoordhvNV");
Function<Binding, void, GLsizei, const GLfloat *> Binding::FogFuncSGIS("glFogFuncSGIS");
Function<Binding, void, GLenum, GLfloat> Binding::Fogf("glFogf");
Function<Binding, void, GLenum, const GLfloat *> Binding::Fogfv("glFogfv");
Function<Binding, void, GLenum, GLint> Binding::Fogi("glFogi");
Function<Binding, void, GLenum, const GLint *> Binding::Fogiv("glFogiv");
Function<Binding, void, GLenum, GLfixed> Binding::FogxOES("glFogxOES");
Function<Binding, void, GLenum, const GLfixed *> Binding::FogxvOES("glFogxvOES");
Function<Binding, void, GLenum, GLenum> Binding::FragmentColorMaterialSGIX("glFragmentColorMaterialSGIX");
Function<Binding, void, GLuint> Binding::FragmentCoverageColorNV("glFragmentCoverageColorNV");
Function<Binding, void, GLenum, GLfloat> Binding::FragmentLightModelfSGIX("glFragmentLightModelfSGIX");
Function<Binding, void, GLenum, const GLfloat *> Binding::FragmentLightModelfvSGIX("glFragmentLightModelfvSGIX");
Function<Binding, void, GLenum, GLint> Binding::FragmentLightModeliSGIX("glFragmentLightModeliSGIX");
Function<Binding, void, GLenum, const GLint *> Binding::FragmentLightModelivSGIX("glFragmentLightModelivSGIX");
Function<Binding, void, GLenum, GLenum, GLfloat> Binding::FragmentLightfSGIX("glFragmentLightfSGIX");
Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::FragmentLightfvSGIX("glFragmentLightfvSGIX");
Function<Binding, void, GLenum, GLenum, GLint> Binding::FragmentLightiSGIX("glFragmentLightiSGIX");
Function<Binding, void, GLenum, GLenum, const GLint *> Binding::FragmentLightivSGIX("glFragmentLightivSGIX");
Function<Binding, void, GLenum, GLenum, GLfloat> Binding::FragmentMaterialfSGIX("glFragmentMaterialfSGIX");
Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::FragmentMaterialfvSGIX("glFragmentMaterialfvSGIX");
Function<Binding, void, GLenum, GLenum, GLint> Binding::FragmentMaterialiSGIX("glFragmentMaterialiSGIX");
Function<Binding, void, GLenum, GLenum, const GLint *> Binding::FragmentMaterialivSGIX("glFragmentMaterialivSGIX");
Function<Binding, void> Binding::FrameTerminatorGREMEDY("glFrameTerminatorGREMEDY");
Function<Binding, void, GLint> Binding::FrameZoomSGIX("glFrameZoomSGIX");
Function<Binding, void, GLuint, GLenum> Binding::FramebufferDrawBufferEXT("glFramebufferDrawBufferEXT");
Function<Binding, void, GLuint, GLsizei, const GLenum *> Binding::FramebufferDrawBuffersEXT("glFramebufferDrawBuffersEXT");
Function<Binding, void> Binding::FramebufferFetchBarrierEXT("glFramebufferFetchBarrierEXT");
Function<Binding, void, GLenum, GLenum, GLint> Binding::FramebufferParameteri("glFramebufferParameteri");
Function<Binding, void, GLuint, GLenum> Binding::FramebufferReadBufferEXT("glFramebufferReadBufferEXT");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbuffer("glFramebufferRenderbuffer");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbufferEXT("glFramebufferRenderbufferEXT");
Function<Binding, void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::FramebufferSampleLocationsfvARB("glFramebufferSampleLocationsfvARB");
Function<Binding, void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::FramebufferSampleLocationsfvNV("glFramebufferSampleLocationsfvNV");
Function<Binding, void, GLenum, GLuint, GLuint, const GLfloat *> Binding::FramebufferSamplePositionsfvAMD("glFramebufferSamplePositionsfvAMD");
Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture("glFramebufferTexture");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture1D("glFramebufferTexture1D");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture1DEXT("glFramebufferTexture1DEXT");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2D("glFramebufferTexture2D");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2DEXT("glFramebufferTexture2DEXT");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3D("glFramebufferTexture3D");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3DEXT("glFramebufferTexture3DEXT");
Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureARB("glFramebufferTextureARB");
Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureEXT("glFramebufferTextureEXT");
Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLenum> Binding::FramebufferTextureFaceARB("glFramebufferTextureFaceARB");
Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLenum> Binding::FramebufferTextureFaceEXT("glFramebufferTextureFaceEXT");
Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayer("glFramebufferTextureLayer");
Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayerARB("glFramebufferTextureLayerARB");
Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayerEXT("glFramebufferTextureLayerEXT");
Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint, GLsizei> Binding::FramebufferTextureMultiviewOVR("glFramebufferTextureMultiviewOVR");
Function<Binding, void, GLuint> Binding::FreeObjectBufferATI("glFreeObjectBufferATI");
Function<Binding, void, GLenum> Binding::FrontFace("glFrontFace");
Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Frustum("glFrustum");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::FrustumfOES("glFrustumfOES");
Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed> Binding::FrustumxOES("glFrustumxOES");



} // namespace glbinding
