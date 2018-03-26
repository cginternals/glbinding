
#include "Meta_Maps.h"

#include <glscbinding/Version.h>


namespace glscbinding { namespace aux
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
    { { 2, 0 }, { "glActiveTexture", "glBindBuffer", "glBindFramebuffer", "glBindRenderbuffer", "glBindTexture", "glBlendColor", "glBlendEquation", "glBlendEquationSeparate", "glBlendFunc", "glBlendFuncSeparate", "glBufferData", "glBufferSubData", "glCheckFramebufferStatus", "glClear", "glClearColor", "glClearDepthf", "glClearStencil", "glColorMask", "glCompressedTexSubImage2D", "glCreateProgram", "glCullFace", "glDepthFunc", "glDepthMask", "glDepthRangef", "glDisable", "glDisableVertexAttribArray", "glDrawArrays", "glDrawRangeElements", "glEnable", "glEnableVertexAttribArray", "glFinish", "glFlush", "glFramebufferRenderbuffer", "glFramebufferTexture2D", "glFrontFace", "glGenBuffers", "glGenFramebuffers", "glGenRenderbuffers", "glGenTextures", "glGenerateMipmap", "glGetAttribLocation", "glGetBooleanv", "glGetBufferParameteriv", "glGetError", "glGetFloatv", "glGetFramebufferAttachmentParameteriv", "glGetGraphicsResetStatus", "glGetIntegerv", "glGetProgramiv", "glGetRenderbufferParameteriv", "glGetString", "glGetTexParameterfv", "glGetTexParameteriv", "glGetUniformLocation", "glGetVertexAttribPointerv", "glGetVertexAttribfv", "glGetVertexAttribiv", "glGetnUniformfv", "glGetnUniformiv", "glHint", "glIsEnabled", "glLineWidth", "glPixelStorei", "glPolygonOffset", "glProgramBinary", "glReadnPixels", "glRenderbufferStorage", "glSampleCoverage", "glScissor", "glStencilFunc", "glStencilFuncSeparate", "glStencilMask", "glStencilMaskSeparate", "glStencilOp", "glStencilOpSeparate", "glTexParameterf", "glTexParameterfv", "glTexParameteri", "glTexParameteriv", "glTexStorage2D", "glTexSubImage2D", "glUniform1f", "glUniform1fv", "glUniform1i", "glUniform1iv", "glUniform2f", "glUniform2fv", "glUniform2i", "glUniform2iv", "glUniform3f", "glUniform3fv", "glUniform3i", "glUniform3iv", "glUniform4f", "glUniform4fv", "glUniform4i", "glUniform4iv", "glUniformMatrix2fv", "glUniformMatrix3fv", "glUniformMatrix4fv", "glUseProgram", "glVertexAttrib1f", "glVertexAttrib1fv", "glVertexAttrib2f", "glVertexAttrib2fv", "glVertexAttrib3f", "glVertexAttrib3fv", "glVertexAttrib4f", "glVertexAttrib4fv", "glVertexAttribPointer", "glViewport" } }
};


} } // namespace glscbinding::aux
