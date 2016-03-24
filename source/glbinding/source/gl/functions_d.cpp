
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return Binding::DebugMessageCallback(callback, userParam);
}

void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
    return Binding::DebugMessageCallbackAMD(callback, userParam);
}

void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam)
{
    return Binding::DebugMessageCallbackARB(callback, userParam);
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return Binding::DebugMessageControl(source, type, severity, count, ids, enabled);
}

void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return Binding::DebugMessageControlARB(source, type, severity, count, ids, enabled);
}

void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return Binding::DebugMessageEnableAMD(category, severity, count, ids, enabled);
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return Binding::DebugMessageInsert(source, type, id, severity, length, buf);
}

void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf)
{
    return Binding::DebugMessageInsertAMD(category, severity, id, length, buf);
}

void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return Binding::DebugMessageInsertARB(source, type, id, severity, length, buf);
}

void glDeformSGIX(FfdMaskSGIX mask)
{
    return Binding::DeformSGIX(mask);
}

void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points)
{
    return Binding::DeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points)
{
    return Binding::DeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
    return Binding::DeleteAsyncMarkersSGIX(marker, range);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return Binding::DeleteBuffers(n, buffers);
}

void glDeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
    return Binding::DeleteBuffersARB(n, buffers);
}

void glDeleteCommandListsNV(GLsizei n, const GLuint * lists)
{
    return Binding::DeleteCommandListsNV(n, lists);
}

void glDeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
    return Binding::DeleteFencesAPPLE(n, fences);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return Binding::DeleteFencesNV(n, fences);
}

void glDeleteFragmentShaderATI(GLuint id)
{
    return Binding::DeleteFragmentShaderATI(id);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return Binding::DeleteFramebuffers(n, framebuffers);
}

void glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
    return Binding::DeleteFramebuffersEXT(n, framebuffers);
}

void glDeleteLists(GLuint list, GLsizei range)
{
    return Binding::DeleteLists(list, range);
}

void glDeleteNamedStringARB(GLint namelen, const GLchar * name)
{
    return Binding::DeleteNamedStringARB(namelen, name);
}

void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
    return Binding::DeleteNamesAMD(identifier, num, names);
}

void glDeleteObjectARB(GLhandleARB obj)
{
    return Binding::DeleteObjectARB(obj);
}

void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
    return Binding::DeleteOcclusionQueriesNV(n, ids);
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

void glDeleteProgramsARB(GLsizei n, const GLuint * programs)
{
    return Binding::DeleteProgramsARB(n, programs);
}

void glDeleteProgramsNV(GLsizei n, const GLuint * programs)
{
    return Binding::DeleteProgramsNV(n, programs);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return Binding::DeleteQueries(n, ids);
}

void glDeleteQueriesARB(GLsizei n, const GLuint * ids)
{
    return Binding::DeleteQueriesARB(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return Binding::DeleteRenderbuffers(n, renderbuffers);
}

void glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
    return Binding::DeleteRenderbuffersEXT(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return Binding::DeleteSamplers(count, samplers);
}

void glDeleteShader(GLuint shader)
{
    return Binding::DeleteShader(shader);
}

void glDeleteStatesNV(GLsizei n, const GLuint * states)
{
    return Binding::DeleteStatesNV(n, states);
}

void glDeleteSync(GLsync sync)
{
    return Binding::DeleteSync(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return Binding::DeleteTextures(n, textures);
}

void glDeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
    return Binding::DeleteTexturesEXT(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return Binding::DeleteTransformFeedbacks(n, ids);
}

void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
    return Binding::DeleteTransformFeedbacksNV(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return Binding::DeleteVertexArrays(n, arrays);
}

void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
    return Binding::DeleteVertexArraysAPPLE(n, arrays);
}

void glDeleteVertexShaderEXT(GLuint id)
{
    return Binding::DeleteVertexShaderEXT(id);
}

void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
    return Binding::DepthBoundsEXT(zmin, zmax);
}

void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
    return Binding::DepthBoundsdNV(zmin, zmax);
}

void glDepthFunc(GLenum func)
{
    return Binding::DepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return Binding::DepthMask(flag);
}

void glDepthRange(GLdouble near_, GLdouble far_)
{
    return Binding::DepthRange(near_, far_);
}

void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
    return Binding::DepthRangeArrayv(first, count, v);
}

void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
    return Binding::DepthRangeIndexed(index, n, f);
}

void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
{
    return Binding::DepthRangedNV(zNear, zFar);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return Binding::DepthRangef(n, f);
}

void glDepthRangefOES(GLclampf n, GLclampf f)
{
    return Binding::DepthRangefOES(n, f);
}

void glDepthRangexOES(GLfixed n, GLfixed f)
{
    return Binding::DepthRangexOES(n, f);
}

void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
    return Binding::DetachObjectARB(containerObj, attachedObj);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return Binding::DetachShader(program, shader);
}

void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return Binding::DetailTexFuncSGIS(target, n, points);
}

void glDisable(GLenum cap)
{
    return Binding::Disable(cap);
}

void glDisableClientState(GLenum array)
{
    return Binding::DisableClientState(array);
}

void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return Binding::DisableClientStateIndexedEXT(array, index);
}

void glDisableClientStateiEXT(GLenum array, GLuint index)
{
    return Binding::DisableClientStateiEXT(array, index);
}

void glDisableIndexedEXT(GLenum target, GLuint index)
{
    return Binding::DisableIndexedEXT(target, index);
}

void glDisableVariantClientStateEXT(GLuint id)
{
    return Binding::DisableVariantClientStateEXT(id);
}

void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
    return Binding::DisableVertexArrayAttrib(vaobj, index);
}

void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return Binding::DisableVertexArrayAttribEXT(vaobj, index);
}

void glDisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return Binding::DisableVertexArrayEXT(vaobj, array);
}

void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return Binding::DisableVertexAttribAPPLE(index, pname);
}

void glDisableVertexAttribArray(GLuint index)
{
    return Binding::DisableVertexAttribArray(index);
}

void glDisableVertexAttribArrayARB(GLuint index)
{
    return Binding::DisableVertexAttribArrayARB(index);
}

void glDisablei(GLenum target, GLuint index)
{
    return Binding::Disablei(target, index);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return Binding::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
    return Binding::DispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
    return Binding::DispatchComputeIndirect(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return Binding::DrawArrays(mode, first, count);
}

void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
    return Binding::DrawArraysEXT(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return Binding::DrawArraysIndirect(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return Binding::DrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return Binding::DrawArraysInstancedARB(mode, first, count, primcount);
}

void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return Binding::DrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return Binding::DrawArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawBuffer(GLenum buf)
{
    return Binding::DrawBuffer(buf);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return Binding::DrawBuffers(n, bufs);
}

void glDrawBuffersARB(GLsizei n, const GLenum * bufs)
{
    return Binding::DrawBuffersARB(n, bufs);
}

void glDrawBuffersATI(GLsizei n, const GLenum * bufs)
{
    return Binding::DrawBuffersATI(n, bufs);
}

void glDrawCommandsAddressNV(GLenum primitiveMode, const GLuint64 * indirects, const GLsizei * sizes, GLuint count)
{
    return Binding::DrawCommandsAddressNV(primitiveMode, indirects, sizes, count);
}

void glDrawCommandsNV(GLenum primitiveMode, GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, GLuint count)
{
    return Binding::DrawCommandsNV(primitiveMode, buffer, indirects, sizes, count);
}

void glDrawCommandsStatesAddressNV(const GLuint64 * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count)
{
    return Binding::DrawCommandsStatesAddressNV(indirects, sizes, states, fbos, count);
}

void glDrawCommandsStatesNV(GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count)
{
    return Binding::DrawCommandsStatesNV(buffer, indirects, sizes, states, fbos, count);
}

void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
    return Binding::DrawElementArrayAPPLE(mode, first, count);
}

void glDrawElementArrayATI(GLenum mode, GLsizei count)
{
    return Binding::DrawElementArrayATI(mode, count);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return Binding::DrawElements(mode, count, type, indices);
}

void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return Binding::DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return Binding::DrawElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return Binding::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return Binding::DrawElementsInstancedARB(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return Binding::DrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return Binding::DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return Binding::DrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return Binding::DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
    return Binding::DrawMeshArraysSUN(mode, first, count, width);
}

void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return Binding::DrawPixels(width, height, format, type, pixels);
}

void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
    return Binding::DrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
    return Binding::DrawRangeElementArrayATI(mode, start, end, count);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return Binding::DrawRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return Binding::DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return Binding::DrawRangeElementsEXT(mode, start, end, count, type, indices);
}

void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
    return Binding::DrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

void glDrawTransformFeedback(GLenum mode, GLuint id)
{
    return Binding::DrawTransformFeedback(mode, id);
}

void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
    return Binding::DrawTransformFeedbackInstanced(mode, id, instancecount);
}

void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
{
    return Binding::DrawTransformFeedbackNV(mode, id);
}

void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return Binding::DrawTransformFeedbackStream(mode, id, stream);
}

void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
    return Binding::DrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}



} // namespace gl
