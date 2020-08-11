
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glEdgeFlag(GLboolean flag) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EdgeFlag(flag);
}

void glEdgeFlagFormatNV(GLsizei stride) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EdgeFlagFormatNV(stride);
}

void glEdgeFlagPointer(GLsizei stride, const void * pointer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EdgeFlagPointer(stride, pointer);
}

void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EdgeFlagPointerEXT(stride, count, pointer);
}

void glEdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

void glEdgeFlagv(const GLboolean * flag) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EdgeFlagv(flag);
}

void glEGLImageTargetTexStorageEXT(GLenum target, GLeglImageOES image, const GLint* attrib_list) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EGLImageTargetTexStorageEXT(target, image, attrib_list);
}

void glEGLImageTargetTextureStorageEXT(GLuint texture, GLeglImageOES image, const GLint* attrib_list) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EGLImageTargetTextureStorageEXT(texture, image, attrib_list);
}

void glElementPointerAPPLE(GLenum type, const void * pointer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ElementPointerAPPLE(type, pointer);
}

void glElementPointerATI(GLenum type, const void * pointer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ElementPointerATI(type, pointer);
}

void glEnable(GLenum cap) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Enable(cap);
}

void glEnableClientState(GLenum array) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableClientState(array);
}

void glEnableClientStateiEXT(GLenum array, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableClientStateiEXT(array, index);
}

void glEnableClientStateIndexedEXT(GLenum array, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableClientStateIndexedEXT(array, index);
}

void glEnablei(GLenum target, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Enablei(target, index);
}

void glEnableIndexedEXT(GLenum target, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableIndexedEXT(target, index);
}

void glEnableVariantClientStateEXT(GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableVariantClientStateEXT(id);
}

void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableVertexArrayAttrib(vaobj, index);
}

void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableVertexArrayAttribEXT(vaobj, index);
}

void glEnableVertexArrayEXT(GLuint vaobj, GLenum array) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableVertexArrayEXT(vaobj, array);
}

void glEnableVertexAttribAPPLE(GLuint index, GLenum pname) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableVertexAttribAPPLE(index, pname);
}

void glEnableVertexAttribArray(GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableVertexAttribArray(index);
}

void glEnableVertexAttribArrayARB(GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EnableVertexAttribArrayARB(index);
}

void glEnd() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::End();
}

void glEndConditionalRender() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndConditionalRender();
}

void glEndConditionalRenderNV() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndConditionalRenderNV();
}

void glEndConditionalRenderNVX() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndConditionalRenderNVX();
}

void glEndFragmentShaderATI() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndFragmentShaderATI();
}

void glEndList() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndList();
}

void glEndOcclusionQueryNV() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndOcclusionQueryNV();
}

void glEndPerfMonitorAMD(GLuint monitor) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndPerfMonitorAMD(monitor);
}

void glEndPerfQueryINTEL(GLuint queryHandle) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndPerfQueryINTEL(queryHandle);
}

void glEndQuery(GLenum target) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndQuery(target);
}

void glEndQueryARB(GLenum target) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndQueryARB(target);
}

void glEndQueryIndexed(GLenum target, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndQueryIndexed(target, index);
}

void glEndTransformFeedback() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndTransformFeedback();
}

void glEndTransformFeedbackEXT() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndTransformFeedbackEXT();
}

void glEndTransformFeedbackNV() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndTransformFeedbackNV();
}

void glEndVertexShaderEXT() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndVertexShaderEXT();
}

void glEndVideoCaptureNV(GLuint video_capture_slot) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EndVideoCaptureNV(video_capture_slot);
}

void glEvalCoord1d(GLdouble u) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord1d(u);
}

void glEvalCoord1dv(const GLdouble * u) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord1dv(u);
}

void glEvalCoord1f(GLfloat u) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord1f(u);
}

void glEvalCoord1fv(const GLfloat * u) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord1fv(u);
}

void glEvalCoord1xOES(GLfixed u) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord1xOES(u);
}

void glEvalCoord1xvOES(const GLfixed * coords) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord1xvOES(coords);
}

void glEvalCoord2d(GLdouble u, GLdouble v) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord2d(u, v);
}

void glEvalCoord2dv(const GLdouble * u) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord2dv(u);
}

void glEvalCoord2f(GLfloat u, GLfloat v) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord2f(u, v);
}

void glEvalCoord2fv(const GLfloat * u) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord2fv(u);
}

void glEvalCoord2xOES(GLfixed u, GLfixed v) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord2xOES(u, v);
}

void glEvalCoord2xvOES(const GLfixed * coords) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalCoord2xvOES(coords);
}

void glEvalMapsNV(GLenum target, GLenum mode) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalMapsNV(target, mode);
}

void glEvalMesh1(GLenum mode, GLint i1, GLint i2) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalMesh1(mode, i1, i2);
}

void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalMesh2(mode, i1, i2, j1, j2);
}

void glEvalPoint1(GLint i) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalPoint1(i);
}

void glEvalPoint2(GLint i, GLint j) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvalPoint2(i, j);
}

void glEvaluateDepthValuesARB() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::EvaluateDepthValuesARB();
}

void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ExecuteProgramNV(target, id, params);
}

void glExtractComponentEXT(GLuint res, GLuint src, GLuint num) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ExtractComponentEXT(res, src, num);
}


} // namespace gl