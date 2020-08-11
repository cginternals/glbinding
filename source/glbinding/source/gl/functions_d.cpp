
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageCallback(callback, userParam);
}

void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageCallbackAMD(callback, userParam);
}

void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageCallbackARB(callback, userParam);
}

void glDebugMessageCallbackKHR(GLDEBUGPROCKHR callback, const void * userParam) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageCallbackKHR(callback, userParam);
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageControl(source, type, severity, count, ids, enabled);
}

void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageControlARB(source, type, severity, count, ids, enabled);
}

void glDebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageControlKHR(source, type, severity, count, ids, enabled);
}

void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageEnableAMD(category, severity, count, ids, enabled);
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageInsert(source, type, id, severity, length, buf);
}

void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageInsertAMD(category, severity, id, length, buf);
}

void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageInsertARB(source, type, id, severity, length, buf);
}

void glDebugMessageInsertKHR(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DebugMessageInsertKHR(source, type, id, severity, length, buf);
}

void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeformSGIX(FfdMaskSGIX mask) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeformSGIX(mask);
}

void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteAsyncMarkersSGIX(marker, range);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteBuffers(n, buffers);
}

void glDeleteBuffersARB(GLsizei n, const GLuint * buffers) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteBuffersARB(n, buffers);
}

void glDeleteCommandListsNV(GLsizei n, const GLuint * lists) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteCommandListsNV(n, lists);
}

void glDeleteFencesAPPLE(GLsizei n, const GLuint * fences) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteFencesAPPLE(n, fences);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteFencesNV(n, fences);
}

void glDeleteFragmentShaderATI(GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteFragmentShaderATI(id);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteFramebuffers(n, framebuffers);
}

void glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteFramebuffersEXT(n, framebuffers);
}

void glDeleteLists(GLuint list, GLsizei range) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteLists(list, range);
}

void glDeleteMemoryObjectsEXT(GLsizei n, const GLuint * memoryObjects) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteMemoryObjectsEXT(n, memoryObjects);
}

void glDeleteNamedStringARB(GLint namelen, const GLchar * name) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteNamedStringARB(namelen, name);
}

void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteNamesAMD(identifier, num, names);
}

void glDeleteObjectARB(GLhandleARB obj) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteObjectARB(obj);
}

void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteOcclusionQueriesNV(n, ids);
}

void glDeletePathsNV(GLuint path, GLsizei range) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeletePathsNV(path, range);
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeletePerfMonitorsAMD(n, monitors);
}

void glDeletePerfQueryINTEL(GLuint queryHandle) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeletePerfQueryINTEL(queryHandle);
}

void glDeleteProgram(GLuint program) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteProgram(program);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteProgramPipelines(n, pipelines);
}

void glDeleteProgramPipelinesEXT(GLsizei n, const GLuint * pipelines) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteProgramPipelinesEXT(n, pipelines);
}

void glDeleteProgramsARB(GLsizei n, const GLuint * programs) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteProgramsARB(n, programs);
}

void glDeleteProgramsNV(GLsizei n, const GLuint * programs) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteProgramsNV(n, programs);
}

void glDeleteQueries(GLsizei n, const GLuint * ids) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteQueries(n, ids);
}

void glDeleteQueriesARB(GLsizei n, const GLuint * ids) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteQueriesARB(n, ids);
}

void glDeleteQueryResourceTagNV(GLsizei n, const GLint * tagIds) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteQueryResourceTagNV(n, tagIds);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteRenderbuffers(n, renderbuffers);
}

void glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteRenderbuffersEXT(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteSamplers(count, samplers);
}

void glDeleteSemaphoresEXT(GLsizei n, const GLuint * semaphores) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteSemaphoresEXT(n, semaphores);
}

void glDeleteShader(GLuint shader) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteShader(shader);
}

void glDeleteStatesNV(GLsizei n, const GLuint * states) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteStatesNV(n, states);
}

void glDeleteSync(GLsync sync) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteSync(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteTextures(n, textures);
}

void glDeleteTexturesEXT(GLsizei n, const GLuint * textures) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteTexturesEXT(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteTransformFeedbacks(n, ids);
}

void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteTransformFeedbacksNV(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteVertexArrays(n, arrays);
}

void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteVertexArraysAPPLE(n, arrays);
}

void glDeleteVertexShaderEXT(GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DeleteVertexShaderEXT(id);
}

void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthBoundsdNV(zmin, zmax);
}

void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthBoundsEXT(zmin, zmax);
}

void glDepthFunc(GLenum func) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthFunc(func);
}

void glDepthMask(GLboolean flag) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthMask(flag);
}

void glDepthRange(GLdouble n, GLdouble f) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthRange(n, f);
}

void glDepthRangeArraydvNV(GLuint first, GLsizei count, const GLdouble * v) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthRangeArraydvNV(first, count, v);
}

void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthRangeArrayv(first, count, v);
}

void glDepthRangedNV(GLdouble zNear, GLdouble zFar) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthRangedNV(zNear, zFar);
}

void glDepthRangef(GLfloat n, GLfloat f) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthRangef(n, f);
}

void glDepthRangefOES(GLclampf n, GLclampf f) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthRangefOES(n, f);
}

void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthRangeIndexed(index, n, f);
}

void glDepthRangeIndexeddNV(GLuint index, GLdouble n, GLdouble f) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthRangeIndexeddNV(index, n, f);
}

void glDepthRangexOES(GLfixed n, GLfixed f) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DepthRangexOES(n, f);
}

void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DetachObjectARB(containerObj, attachedObj);
}

void glDetachShader(GLuint program, GLuint shader) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DetachShader(program, shader);
}

void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DetailTexFuncSGIS(target, n, points);
}

void glDisable(GLenum cap) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Disable(cap);
}

void glDisableClientState(GLenum array) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableClientState(array);
}

void glDisableClientStateiEXT(GLenum array, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableClientStateiEXT(array, index);
}

void glDisableClientStateIndexedEXT(GLenum array, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableClientStateIndexedEXT(array, index);
}

void glDisablei(GLenum target, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Disablei(target, index);
}

void glDisableIndexedEXT(GLenum target, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableIndexedEXT(target, index);
}

void glDisableVariantClientStateEXT(GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableVariantClientStateEXT(id);
}

void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableVertexArrayAttrib(vaobj, index);
}

void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableVertexArrayAttribEXT(vaobj, index);
}

void glDisableVertexArrayEXT(GLuint vaobj, GLenum array) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableVertexArrayEXT(vaobj, array);
}

void glDisableVertexAttribAPPLE(GLuint index, GLenum pname) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableVertexAttribAPPLE(index, pname);
}

void glDisableVertexAttribArray(GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableVertexAttribArray(index);
}

void glDisableVertexAttribArrayARB(GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DisableVertexAttribArrayARB(index);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

void glDispatchComputeIndirect(GLintptr indirect) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DispatchComputeIndirect(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawArrays(mode, first, count);
}

void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawArraysEXT(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawArraysIndirect(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawArraysInstancedARB(mode, first, count, primcount);
}

void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawBuffer(GLenum buf) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawBuffer(buf);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawBuffers(n, bufs);
}

void glDrawBuffersARB(GLsizei n, const GLenum * bufs) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawBuffersARB(n, bufs);
}

void glDrawBuffersATI(GLsizei n, const GLenum * bufs) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawBuffersATI(n, bufs);
}

void glDrawCommandsAddressNV(GLenum primitiveMode, const GLuint64 * indirects, const GLsizei * sizes, GLuint count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawCommandsAddressNV(primitiveMode, indirects, sizes, count);
}

void glDrawCommandsNV(GLenum primitiveMode, GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, GLuint count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawCommandsNV(primitiveMode, buffer, indirects, sizes, count);
}

void glDrawCommandsStatesAddressNV(const GLuint64 * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawCommandsStatesAddressNV(indirects, sizes, states, fbos, count);
}

void glDrawCommandsStatesNV(GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawCommandsStatesNV(buffer, indirects, sizes, states, fbos, count);
}

void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElementArrayAPPLE(mode, first, count);
}

void glDrawElementArrayATI(GLenum mode, GLsizei count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElementArrayATI(mode, count);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElements(mode, count, type, indices);
}

void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElementsInstancedARB(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawMeshArraysSUN(mode, first, count, width);
}

void glDrawMeshTasksIndirectNV(GLintptr indirect) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawMeshTasksIndirectNV(indirect);
}

void glDrawMeshTasksNV(GLuint first, GLuint count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawMeshTasksNV(first, count);
}

void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawPixels(width, height, format, type, pixels);
}

void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawRangeElementArrayATI(mode, start, end, count);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawRangeElementsEXT(mode, start, end, count, type, indices);
}

void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

void glDrawTransformFeedback(GLenum mode, GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawTransformFeedback(mode, id);
}

void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawTransformFeedbackInstanced(mode, id, instancecount);
}

void glDrawTransformFeedbackNV(GLenum mode, GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawTransformFeedbackNV(mode, id);
}

void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawTransformFeedbackStream(mode, id, stream);
}

void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

void glDrawVkImageNV(GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::DrawVkImageNV(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}


} // namespace gl