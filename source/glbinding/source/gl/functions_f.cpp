
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
    return Binding::FeedbackBuffer(size, type, buffer);
}

void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer)
{
    return Binding::FeedbackBufferxOES(n, type, buffer);
}

GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return Binding::FenceSync(condition, flags);
}

void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return Binding::FinalCombinerInputNV(variable, input, mapping, componentUsage);
}

void glFinish()
{
    return Binding::Finish();
}

GLint glFinishAsyncSGIX(GLuint * markerp)
{
    return Binding::FinishAsyncSGIX(markerp);
}

void glFinishFenceAPPLE(GLuint fence)
{
    return Binding::FinishFenceAPPLE(fence);
}

void glFinishFenceNV(GLuint fence)
{
    return Binding::FinishFenceNV(fence);
}

void glFinishObjectAPPLE(GLenum object, GLint name)
{
    return Binding::FinishObjectAPPLE(object, name);
}

void glFinishTextureSUNX()
{
    return Binding::FinishTextureSUNX();
}

void glFlush()
{
    return Binding::Flush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return Binding::FlushMappedBufferRange(target, offset, length);
}

void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
    return Binding::FlushMappedBufferRangeAPPLE(target, offset, size);
}

void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return Binding::FlushMappedNamedBufferRange(buffer, offset, length);
}

void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return Binding::FlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

void glFlushPixelDataRangeNV(GLenum target)
{
    return Binding::FlushPixelDataRangeNV(target);
}

void glFlushRasterSGIX()
{
    return Binding::FlushRasterSGIX();
}

void glFlushStaticDataIBM(GLenum target)
{
    return Binding::FlushStaticDataIBM(target);
}

void glFlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return Binding::FlushVertexArrayRangeAPPLE(length, pointer);
}

void glFlushVertexArrayRangeNV()
{
    return Binding::FlushVertexArrayRangeNV();
}

void glFogCoordFormatNV(GLenum type, GLsizei stride)
{
    return Binding::FogCoordFormatNV(type, stride);
}

void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::FogCoordPointer(type, stride, pointer);
}

void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::FogCoordPointerEXT(type, stride, pointer);
}

void glFogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return Binding::FogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

void glFogCoordd(GLdouble coord)
{
    return Binding::FogCoordd(coord);
}

void glFogCoorddEXT(GLdouble coord)
{
    return Binding::FogCoorddEXT(coord);
}

void glFogCoorddv(const GLdouble * coord)
{
    return Binding::FogCoorddv(coord);
}

void glFogCoorddvEXT(const GLdouble * coord)
{
    return Binding::FogCoorddvEXT(coord);
}

void glFogCoordf(GLfloat coord)
{
    return Binding::FogCoordf(coord);
}

void glFogCoordfEXT(GLfloat coord)
{
    return Binding::FogCoordfEXT(coord);
}

void glFogCoordfv(const GLfloat * coord)
{
    return Binding::FogCoordfv(coord);
}

void glFogCoordfvEXT(const GLfloat * coord)
{
    return Binding::FogCoordfvEXT(coord);
}

void glFogCoordhNV(GLhalfNV fog)
{
    return Binding::FogCoordhNV(fog);
}

void glFogCoordhvNV(const GLhalfNV * fog)
{
    return Binding::FogCoordhvNV(fog);
}

void glFogFuncSGIS(GLsizei n, const GLfloat * points)
{
    return Binding::FogFuncSGIS(n, points);
}

void glFogf(GLenum pname, GLfloat param)
{
    return Binding::Fogf(pname, param);
}

void glFogfv(GLenum pname, const GLfloat * params)
{
    return Binding::Fogfv(pname, params);
}

void glFogi(GLenum pname, GLint param)
{
    return Binding::Fogi(pname, param);
}

void glFogiv(GLenum pname, const GLint * params)
{
    return Binding::Fogiv(pname, params);
}

void glFogxOES(GLenum pname, GLfixed param)
{
    return Binding::FogxOES(pname, param);
}

void glFogxvOES(GLenum pname, const GLfixed * param)
{
    return Binding::FogxvOES(pname, param);
}

void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
    return Binding::FragmentColorMaterialSGIX(face, mode);
}

void glFragmentCoverageColorNV(GLuint color)
{
    return Binding::FragmentCoverageColorNV(color);
}

void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
    return Binding::FragmentLightModelfSGIX(pname, param);
}

void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat * params)
{
    return Binding::FragmentLightModelfvSGIX(pname, params);
}

void glFragmentLightModeliSGIX(GLenum pname, GLint param)
{
    return Binding::FragmentLightModeliSGIX(pname, param);
}

void glFragmentLightModelivSGIX(GLenum pname, const GLint * params)
{
    return Binding::FragmentLightModelivSGIX(pname, params);
}

void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
    return Binding::FragmentLightfSGIX(light, pname, param);
}

void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params)
{
    return Binding::FragmentLightfvSGIX(light, pname, params);
}

void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
    return Binding::FragmentLightiSGIX(light, pname, param);
}

void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params)
{
    return Binding::FragmentLightivSGIX(light, pname, params);
}

void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
    return Binding::FragmentMaterialfSGIX(face, pname, param);
}

void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
    return Binding::FragmentMaterialfvSGIX(face, pname, params);
}

void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
    return Binding::FragmentMaterialiSGIX(face, pname, param);
}

void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
    return Binding::FragmentMaterialivSGIX(face, pname, params);
}

void glFrameTerminatorGREMEDY()
{
    return Binding::FrameTerminatorGREMEDY();
}

void glFrameZoomSGIX(GLint factor)
{
    return Binding::FrameZoomSGIX(factor);
}

void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
    return Binding::FramebufferDrawBufferEXT(framebuffer, mode);
}

void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return Binding::FramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return Binding::FramebufferParameteri(target, pname, param);
}

void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
    return Binding::FramebufferReadBufferEXT(framebuffer, mode);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return Binding::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return Binding::FramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferSampleLocationsfvARB(GLenum target, GLuint start, GLsizei count, const GLfloat * v)
{
    return Binding::FramebufferSampleLocationsfvARB(target, start, count, v);
}

void glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat * v)
{
    return Binding::FramebufferSampleLocationsfvNV(target, start, count, v);
}

void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return Binding::FramebufferTexture(target, attachment, texture, level);
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return Binding::FramebufferTexture1D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return Binding::FramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return Binding::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return Binding::FramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return Binding::FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return Binding::FramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return Binding::FramebufferTextureARB(target, attachment, texture, level);
}

void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return Binding::FramebufferTextureEXT(target, attachment, texture, level);
}

void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return Binding::FramebufferTextureFaceARB(target, attachment, texture, level, face);
}

void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return Binding::FramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return Binding::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return Binding::FramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return Binding::FramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

void glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews)
{
    return Binding::FramebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex, numViews);
}

void glFreeObjectBufferATI(GLuint buffer)
{
    return Binding::FreeObjectBufferATI(buffer);
}

void glFrontFace(GLenum mode)
{
    return Binding::FrontFace(mode);
}

void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return Binding::Frustum(left, right, bottom, top, zNear, zFar);
}

void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return Binding::FrustumfOES(l, r, b, t, n, f);
}

void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return Binding::FrustumxOES(l, r, b, t, n, f);
}



} // namespace gl
