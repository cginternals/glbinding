
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return Binding::DebugMessageCallback(callback, userParam);
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return Binding::DebugMessageControl(source, type, severity, count, ids, enabled);
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return Binding::DebugMessageInsert(source, type, id, severity, length, buf);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return Binding::DeleteBuffers(n, buffers);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return Binding::DeleteFencesNV(n, fences);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return Binding::DeleteFramebuffers(n, framebuffers);
}

void glDeleteMemoryObjectsEXT(GLsizei n, const GLuint * memoryObjects)
{
    return Binding::DeleteMemoryObjectsEXT(n, memoryObjects);
}

void glDeletePathsNV(GLuint path, GLsizei range)
{
    return Binding::DeletePathsNV(path, range);
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return Binding::DeletePerfMonitorsAMD(n, monitors);
}

void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return Binding::DeletePerfQueryINTEL(queryHandle);
}

void glDeleteProgram(GLuint program)
{
    return Binding::DeleteProgram(program);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return Binding::DeleteProgramPipelines(n, pipelines);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return Binding::DeleteQueries(n, ids);
}

void glDeleteQueriesEXT(GLsizei n, const GLuint * ids)
{
    return Binding::DeleteQueriesEXT(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return Binding::DeleteRenderbuffers(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return Binding::DeleteSamplers(count, samplers);
}

void glDeleteSemaphoresEXT(GLsizei n, const GLuint * semaphores)
{
    return Binding::DeleteSemaphoresEXT(n, semaphores);
}

void glDeleteShader(GLuint shader)
{
    return Binding::DeleteShader(shader);
}

void glDeleteSync(GLsync sync)
{
    return Binding::DeleteSync(sync);
}

void glDeleteSyncAPPLE(GLsync sync)
{
    return Binding::DeleteSyncAPPLE(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return Binding::DeleteTextures(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return Binding::DeleteTransformFeedbacks(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return Binding::DeleteVertexArrays(n, arrays);
}

void glDeleteVertexArraysOES(GLsizei n, const GLuint * arrays)
{
    return Binding::DeleteVertexArraysOES(n, arrays);
}

void glDepthFunc(GLenum func)
{
    return Binding::DepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return Binding::DepthMask(flag);
}

void glDepthRangeArrayfvNV(GLuint first, GLsizei count, const GLfloat * v)
{
    return Binding::DepthRangeArrayfvNV(first, count, v);
}

void glDepthRangeArrayfvOES(GLuint first, GLsizei count, const GLfloat * v)
{
    return Binding::DepthRangeArrayfvOES(first, count, v);
}

void glDepthRangeIndexedfNV(GLuint index, GLfloat n, GLfloat f)
{
    return Binding::DepthRangeIndexedfNV(index, n, f);
}

void glDepthRangeIndexedfOES(GLuint index, GLfloat n, GLfloat f)
{
    return Binding::DepthRangeIndexedfOES(index, n, f);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return Binding::DepthRangef(n, f);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return Binding::DetachShader(program, shader);
}

void glDisable(GLenum cap)
{
    return Binding::Disable(cap);
}

void glDisableDriverControlQCOM(GLuint driverControl)
{
    return Binding::DisableDriverControlQCOM(driverControl);
}

void glDisableVertexAttribArray(GLuint index)
{
    return Binding::DisableVertexAttribArray(index);
}

void glDisablei(GLenum target, GLuint index)
{
    return Binding::Disablei(target, index);
}

void glDisableiEXT(GLenum target, GLuint index)
{
    return Binding::DisableiEXT(target, index);
}

void glDisableiNV(GLenum target, GLuint index)
{
    return Binding::DisableiNV(target, index);
}

void glDisableiOES(GLenum target, GLuint index)
{
    return Binding::DisableiOES(target, index);
}

void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return Binding::DiscardFramebufferEXT(target, numAttachments, attachments);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return Binding::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
    return Binding::DispatchComputeIndirect(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return Binding::DrawArrays(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return Binding::DrawArraysIndirect(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return Binding::DrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return Binding::DrawArraysInstancedANGLE(mode, first, count, primcount);
}

void glDrawArraysInstancedBaseInstanceEXT(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return Binding::DrawArraysInstancedBaseInstanceEXT(mode, first, count, instancecount, baseinstance);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return Binding::DrawArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawArraysInstancedNV(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return Binding::DrawArraysInstancedNV(mode, first, count, primcount);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return Binding::DrawBuffers(n, bufs);
}

void glDrawBuffersEXT(GLsizei n, const GLenum * bufs)
{
    return Binding::DrawBuffersEXT(n, bufs);
}

void glDrawBuffersIndexedEXT(GLint n, const GLenum * location, const GLint * indices)
{
    return Binding::DrawBuffersIndexedEXT(n, location, indices);
}

void glDrawBuffersNV(GLsizei n, const GLenum * bufs)
{
    return Binding::DrawBuffersNV(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return Binding::DrawElements(mode, count, type, indices);
}

void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return Binding::DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

void glDrawElementsBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return Binding::DrawElementsBaseVertexEXT(mode, count, type, indices, basevertex);
}

void glDrawElementsBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return Binding::DrawElementsBaseVertexOES(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return Binding::DrawElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return Binding::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return Binding::DrawElementsInstancedANGLE(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return Binding::DrawElementsInstancedBaseInstanceEXT(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return Binding::DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return Binding::DrawElementsInstancedBaseVertexBaseInstanceEXT(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawElementsInstancedBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return Binding::DrawElementsInstancedBaseVertexEXT(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return Binding::DrawElementsInstancedBaseVertexOES(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return Binding::DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedNV(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return Binding::DrawElementsInstancedNV(mode, count, type, indices, primcount);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return Binding::DrawRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return Binding::DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

void glDrawRangeElementsBaseVertexEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return Binding::DrawRangeElementsBaseVertexEXT(mode, start, end, count, type, indices, basevertex);
}

void glDrawRangeElementsBaseVertexOES(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return Binding::DrawRangeElementsBaseVertexOES(mode, start, end, count, type, indices, basevertex);
}

void glDrawTransformFeedbackEXT(GLenum mode, GLuint id)
{
    return Binding::DrawTransformFeedbackEXT(mode, id);
}

void glDrawTransformFeedbackInstancedEXT(GLenum mode, GLuint id, GLsizei instancecount)
{
    return Binding::DrawTransformFeedbackInstancedEXT(mode, id, instancecount);
}

void glDrawVkImageNV(GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
    return Binding::DrawVkImageNV(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}




} // namespace gles
