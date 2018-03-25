
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
{
    return Binding::EGLImageTargetRenderbufferStorageOES(target, image);
}

void glEGLImageTargetTexStorageEXT(GLenum target, GLeglImageOES image, const GLint * attrib_list)
{
    return Binding::EGLImageTargetTexStorageEXT(target, image, attrib_list);
}

void glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
{
    return Binding::EGLImageTargetTexture2DOES(target, image);
}

void glEGLImageTargetTextureStorageEXT(GLuint texture, GLeglImageOES image, const GLint * attrib_list)
{
    return Binding::EGLImageTargetTextureStorageEXT(texture, image, attrib_list);
}

void glEnable(GLenum cap)
{
    return Binding::Enable(cap);
}

void glEnableDriverControlQCOM(GLuint driverControl)
{
    return Binding::EnableDriverControlQCOM(driverControl);
}

void glEnableVertexAttribArray(GLuint index)
{
    return Binding::EnableVertexAttribArray(index);
}

void glEnablei(GLenum target, GLuint index)
{
    return Binding::Enablei(target, index);
}

void glEnableiEXT(GLenum target, GLuint index)
{
    return Binding::EnableiEXT(target, index);
}

void glEnableiNV(GLenum target, GLuint index)
{
    return Binding::EnableiNV(target, index);
}

void glEnableiOES(GLenum target, GLuint index)
{
    return Binding::EnableiOES(target, index);
}

void glEndConditionalRenderNV()
{
    return Binding::EndConditionalRenderNV();
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

void glEndQueryEXT(GLenum target)
{
    return Binding::EndQueryEXT(target);
}

void glEndTilingQCOM(BufferBitQCOM preserveMask)
{
    return Binding::EndTilingQCOM(preserveMask);
}

void glEndTransformFeedback()
{
    return Binding::EndTransformFeedback();
}

void glExtGetBufferPointervQCOM(GLenum target, void ** params)
{
    return Binding::ExtGetBufferPointervQCOM(target, params);
}

void glExtGetBuffersQCOM(GLuint * buffers, GLint maxBuffers, GLint * numBuffers)
{
    return Binding::ExtGetBuffersQCOM(buffers, maxBuffers, numBuffers);
}

void glExtGetFramebuffersQCOM(GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers)
{
    return Binding::ExtGetFramebuffersQCOM(framebuffers, maxFramebuffers, numFramebuffers);
}

void glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar * source, GLint * length)
{
    return Binding::ExtGetProgramBinarySourceQCOM(program, shadertype, source, length);
}

void glExtGetProgramsQCOM(GLuint * programs, GLint maxPrograms, GLint * numPrograms)
{
    return Binding::ExtGetProgramsQCOM(programs, maxPrograms, numPrograms);
}

void glExtGetRenderbuffersQCOM(GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers)
{
    return Binding::ExtGetRenderbuffersQCOM(renderbuffers, maxRenderbuffers, numRenderbuffers);
}

void glExtGetShadersQCOM(GLuint * shaders, GLint maxShaders, GLint * numShaders)
{
    return Binding::ExtGetShadersQCOM(shaders, maxShaders, numShaders);
}

void glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params)
{
    return Binding::ExtGetTexLevelParameterivQCOM(texture, face, level, pname, params);
}

void glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels)
{
    return Binding::ExtGetTexSubImageQCOM(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
}

void glExtGetTexturesQCOM(GLuint * textures, GLint maxTextures, GLint * numTextures)
{
    return Binding::ExtGetTexturesQCOM(textures, maxTextures, numTextures);
}

GLboolean glExtIsProgramBinaryQCOM(GLuint program)
{
    return Binding::ExtIsProgramBinaryQCOM(program);
}

void glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param)
{
    return Binding::ExtTexObjectStateOverrideiQCOM(target, pname, param);
}




} // namespace gles
