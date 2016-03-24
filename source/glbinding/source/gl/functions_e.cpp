
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


void glEdgeFlag(GLboolean flag)
{
    return Binding::EdgeFlag(flag);
}

void glEdgeFlagFormatNV(GLsizei stride)
{
    return Binding::EdgeFlagFormatNV(stride);
}

void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
    return Binding::EdgeFlagPointer(stride, pointer);
}

void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
    return Binding::EdgeFlagPointerEXT(stride, count, pointer);
}

void glEdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
    return Binding::EdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

void glEdgeFlagv(const GLboolean * flag)
{
    return Binding::EdgeFlagv(flag);
}

void glElementPointerAPPLE(GLenum type, const void * pointer)
{
    return Binding::ElementPointerAPPLE(type, pointer);
}

void glElementPointerATI(GLenum type, const void * pointer)
{
    return Binding::ElementPointerATI(type, pointer);
}

void glEnable(GLenum cap)
{
    return Binding::Enable(cap);
}

void glEnableClientState(GLenum array)
{
    return Binding::EnableClientState(array);
}

void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return Binding::EnableClientStateIndexedEXT(array, index);
}

void glEnableClientStateiEXT(GLenum array, GLuint index)
{
    return Binding::EnableClientStateiEXT(array, index);
}

void glEnableIndexedEXT(GLenum target, GLuint index)
{
    return Binding::EnableIndexedEXT(target, index);
}

void glEnableVariantClientStateEXT(GLuint id)
{
    return Binding::EnableVariantClientStateEXT(id);
}

void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
    return Binding::EnableVertexArrayAttrib(vaobj, index);
}

void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return Binding::EnableVertexArrayAttribEXT(vaobj, index);
}

void glEnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return Binding::EnableVertexArrayEXT(vaobj, array);
}

void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return Binding::EnableVertexAttribAPPLE(index, pname);
}

void glEnableVertexAttribArray(GLuint index)
{
    return Binding::EnableVertexAttribArray(index);
}

void glEnableVertexAttribArrayARB(GLuint index)
{
    return Binding::EnableVertexAttribArrayARB(index);
}

void glEnablei(GLenum target, GLuint index)
{
    return Binding::Enablei(target, index);
}

void glEnd()
{
    return Binding::End();
}

void glEndConditionalRender()
{
    return Binding::EndConditionalRender();
}

void glEndConditionalRenderNV()
{
    return Binding::EndConditionalRenderNV();
}

void glEndConditionalRenderNVX()
{
    return Binding::EndConditionalRenderNVX();
}

void glEndFragmentShaderATI()
{
    return Binding::EndFragmentShaderATI();
}

void glEndList()
{
    return Binding::EndList();
}

void glEndOcclusionQueryNV()
{
    return Binding::EndOcclusionQueryNV();
}

void glEndPerfMonitorAMD(GLuint monitor)
{
    return Binding::EndPerfMonitorAMD(monitor);
}

void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return Binding::EndPerfQueryINTEL(queryHandle);
}

void glEndQuery(GLenum target)
{
    return Binding::EndQuery(target);
}

void glEndQueryARB(GLenum target)
{
    return Binding::EndQueryARB(target);
}

void glEndQueryIndexed(GLenum target, GLuint index)
{
    return Binding::EndQueryIndexed(target, index);
}

void glEndTransformFeedback()
{
    return Binding::EndTransformFeedback();
}

void glEndTransformFeedbackEXT()
{
    return Binding::EndTransformFeedbackEXT();
}

void glEndTransformFeedbackNV()
{
    return Binding::EndTransformFeedbackNV();
}

void glEndVertexShaderEXT()
{
    return Binding::EndVertexShaderEXT();
}

void glEndVideoCaptureNV(GLuint video_capture_slot)
{
    return Binding::EndVideoCaptureNV(video_capture_slot);
}

void glEvalCoord1d(GLdouble u)
{
    return Binding::EvalCoord1d(u);
}

void glEvalCoord1dv(const GLdouble * u)
{
    return Binding::EvalCoord1dv(u);
}

void glEvalCoord1f(GLfloat u)
{
    return Binding::EvalCoord1f(u);
}

void glEvalCoord1fv(const GLfloat * u)
{
    return Binding::EvalCoord1fv(u);
}

void glEvalCoord1xOES(GLfixed u)
{
    return Binding::EvalCoord1xOES(u);
}

void glEvalCoord1xvOES(const GLfixed * coords)
{
    return Binding::EvalCoord1xvOES(coords);
}

void glEvalCoord2d(GLdouble u, GLdouble v)
{
    return Binding::EvalCoord2d(u, v);
}

void glEvalCoord2dv(const GLdouble * u)
{
    return Binding::EvalCoord2dv(u);
}

void glEvalCoord2f(GLfloat u, GLfloat v)
{
    return Binding::EvalCoord2f(u, v);
}

void glEvalCoord2fv(const GLfloat * u)
{
    return Binding::EvalCoord2fv(u);
}

void glEvalCoord2xOES(GLfixed u, GLfixed v)
{
    return Binding::EvalCoord2xOES(u, v);
}

void glEvalCoord2xvOES(const GLfixed * coords)
{
    return Binding::EvalCoord2xvOES(coords);
}

void glEvalMapsNV(GLenum target, GLenum mode)
{
    return Binding::EvalMapsNV(target, mode);
}

void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    return Binding::EvalMesh1(mode, i1, i2);
}

void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    return Binding::EvalMesh2(mode, i1, i2, j1, j2);
}

void glEvalPoint1(GLint i)
{
    return Binding::EvalPoint1(i);
}

void glEvalPoint2(GLint i, GLint j)
{
    return Binding::EvalPoint2(i, j);
}

void glEvaluateDepthValuesARB()
{
    return Binding::EvaluateDepthValuesARB();
}

void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
    return Binding::ExecuteProgramNV(target, id, params);
}

void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return Binding::ExtractComponentEXT(res, src, num);
}



} // namespace gl
