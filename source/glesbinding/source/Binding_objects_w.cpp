
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *> Binding::WaitSemaphoreEXT("glWaitSemaphoreEXT");
Function<void, GLsync, UnusedMask, GLuint64> Binding::WaitSync("glWaitSync");
Function<void, GLsync, GLbitfield, GLuint64> Binding::WaitSyncAPPLE("glWaitSyncAPPLE");
Function<void, GLuint64> Binding::WaitVkSemaphoreNV("glWaitVkSemaphoreNV");
Function<void, GLuint, GLsizei, const GLuint *, const GLfloat *> Binding::WeightPathsNV("glWeightPathsNV");
Function<void, GLenum, GLsizei, const GLint *> Binding::WindowRectanglesEXT("glWindowRectanglesEXT");



} // namespace glesbinding
