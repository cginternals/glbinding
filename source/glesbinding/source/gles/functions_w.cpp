
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glWaitSemaphoreEXT(GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * srcLayouts)
{
    return Binding::WaitSemaphoreEXT(semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, srcLayouts);
}

void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return Binding::WaitSync(sync, flags, timeout);
}

void glWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    return Binding::WaitSyncAPPLE(sync, flags, timeout);
}

void glWaitVkSemaphoreNV(GLuint64 vkSemaphore)
{
    return Binding::WaitVkSemaphoreNV(vkSemaphore);
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return Binding::WeightPathsNV(resultPath, numPaths, paths, weights);
}

void glWindowRectanglesEXT(GLenum mode, GLsizei count, const GLint * box)
{
    return Binding::WindowRectanglesEXT(mode, count, box);
}




} // namespace gles
