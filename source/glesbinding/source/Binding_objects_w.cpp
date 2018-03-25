
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *> Binding::WaitSemaphoreEXT("glWaitSemaphoreEXT");
Function<Binding, void, GLsync, UnusedMask, GLuint64> Binding::WaitSync("glWaitSync");
Function<Binding, void, GLsync, GLbitfield, GLuint64> Binding::WaitSyncAPPLE("glWaitSyncAPPLE");
Function<Binding, void, GLuint64> Binding::WaitVkSemaphoreNV("glWaitVkSemaphoreNV");
Function<Binding, void, GLuint, GLsizei, const GLuint *, const GLfloat *> Binding::WeightPathsNV("glWeightPathsNV");
Function<Binding, void, GLenum, GLsizei, const GLint *> Binding::WindowRectanglesEXT("glWindowRectanglesEXT");



} // namespace glesbinding
