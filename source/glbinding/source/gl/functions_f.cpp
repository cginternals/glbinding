
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FeedbackBuffer(size, type, buffer);
}

void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FeedbackBufferxOES(n, type, buffer);
}

GLsync glFenceSync(GLenum condition, GLbitfield flags) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FenceSync(condition, flags);
}

void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FinalCombinerInputNV(variable, input, mapping, componentUsage);
}

void glFinish() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Finish();
}

GLint glFinishAsyncSGIX(GLuint * markerp) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FinishAsyncSGIX(markerp);
}

void glFinishFenceAPPLE(GLuint fence) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FinishFenceAPPLE(fence);
}

void glFinishFenceNV(GLuint fence) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FinishFenceNV(fence);
}

void glFinishObjectAPPLE(GLenum object, GLint name) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FinishObjectAPPLE(object, name);
}

void glFinishTextureSUNX() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FinishTextureSUNX();
}

void glFlush() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Flush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FlushMappedBufferRange(target, offset, length);
}

void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FlushMappedBufferRangeAPPLE(target, offset, size);
}

void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FlushMappedNamedBufferRange(buffer, offset, length);
}

void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

void glFlushPixelDataRangeNV(GLenum target) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FlushPixelDataRangeNV(target);
}

void glFlushRasterSGIX() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FlushRasterSGIX();
}

void glFlushStaticDataIBM(GLenum target) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FlushStaticDataIBM(target);
}

void glFlushVertexArrayRangeAPPLE(GLsizei length, void * pointer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FlushVertexArrayRangeAPPLE(length, pointer);
}

void glFlushVertexArrayRangeNV() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FlushVertexArrayRangeNV();
}

void glFogCoordd(GLdouble coord) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordd(coord);
}

void glFogCoorddEXT(GLdouble coord) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoorddEXT(coord);
}

void glFogCoorddv(const GLdouble * coord) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoorddv(coord);
}

void glFogCoorddvEXT(const GLdouble * coord) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoorddvEXT(coord);
}

void glFogCoordf(GLfloat coord) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordf(coord);
}

void glFogCoordfEXT(GLfloat coord) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordfEXT(coord);
}

void glFogCoordFormatNV(GLenum type, GLsizei stride) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordFormatNV(type, stride);
}

void glFogCoordfv(const GLfloat * coord) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordfv(coord);
}

void glFogCoordfvEXT(const GLfloat * coord) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordfvEXT(coord);
}

void glFogCoordhNV(GLhalfNV fog) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordhNV(fog);
}

void glFogCoordhvNV(const GLhalfNV * fog) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordhvNV(fog);
}

void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordPointer(type, stride, pointer);
}

void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordPointerEXT(type, stride, pointer);
}

void glFogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

void glFogf(GLenum pname, GLfloat param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Fogf(pname, param);
}

void glFogFuncSGIS(GLsizei n, const GLfloat * points) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogFuncSGIS(n, points);
}

void glFogfv(GLenum pname, const GLfloat * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Fogfv(pname, params);
}

void glFogi(GLenum pname, GLint param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Fogi(pname, param);
}

void glFogiv(GLenum pname, const GLint * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Fogiv(pname, params);
}

void glFogxOES(GLenum pname, GLfixed param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogxOES(pname, param);
}

void glFogxvOES(GLenum pname, const GLfixed * param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FogxvOES(pname, param);
}

void glFragmentColorMaterialSGIX(GLenum face, GLenum mode) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentColorMaterialSGIX(face, mode);
}

void glFragmentCoverageColorNV(GLuint color) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentCoverageColorNV(color);
}

void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentLightfSGIX(light, pname, param);
}

void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentLightfvSGIX(light, pname, params);
}

void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentLightiSGIX(light, pname, param);
}

void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentLightivSGIX(light, pname, params);
}

void glFragmentLightModelfSGIX(GLenum pname, GLfloat param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentLightModelfSGIX(pname, param);
}

void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentLightModelfvSGIX(pname, params);
}

void glFragmentLightModeliSGIX(GLenum pname, GLint param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentLightModeliSGIX(pname, param);
}

void glFragmentLightModelivSGIX(GLenum pname, const GLint * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentLightModelivSGIX(pname, params);
}

void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentMaterialfSGIX(face, pname, param);
}

void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentMaterialfvSGIX(face, pname, params);
}

void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentMaterialiSGIX(face, pname, param);
}

void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FragmentMaterialivSGIX(face, pname, params);
}

void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferDrawBufferEXT(framebuffer, mode);
}

void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

void glFramebufferFetchBarrierEXT() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferFetchBarrierEXT();
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferParameteri(target, pname, param);
}

void glFramebufferParameteriMESA(GLenum target, GLenum pname, GLint param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferParameteriMESA(target, pname, param);
}

void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferReadBufferEXT(framebuffer, mode);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferSampleLocationsfvARB(GLenum target, GLuint start, GLsizei count, const GLfloat * v) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferSampleLocationsfvARB(target, start, count, v);
}

void glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat * v) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferSampleLocationsfvNV(target, start, count, v);
}

void glFramebufferSamplePositionsfvAMD(GLenum target, GLuint numsamples, GLuint pixelindex, const GLfloat * values) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferSamplePositionsfvAMD(target, numsamples, pixelindex, values);
}

void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTexture(target, attachment, texture, level);
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTexture1D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTextureARB(target, attachment, texture, level);
}

void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTextureEXT(target, attachment, texture, level);
}

void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTextureFaceARB(target, attachment, texture, level, face);
}

void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

void glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FramebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex, numViews);
}

void glFrameTerminatorGREMEDY() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FrameTerminatorGREMEDY();
}

void glFrameZoomSGIX(GLint factor) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FrameZoomSGIX(factor);
}

void glFreeObjectBufferATI(GLuint buffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FreeObjectBufferATI(buffer);
}

void glFrontFace(GLenum mode) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FrontFace(mode);
}

void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Frustum(left, right, bottom, top, zNear, zFar);
}

void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FrustumfOES(l, r, b, t, n, f);
}

void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::FrustumxOES(l, r, b, t, n, f);
}


} // namespace gl