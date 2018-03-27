
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<void, GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *> Binding::WaitSemaphoreEXT("glWaitSemaphoreEXT");
Function<void, GLsync, UnusedMask, GLuint64> Binding::WaitSync("glWaitSync");
Function<void, GLuint64> Binding::WaitVkSemaphoreNV("glWaitVkSemaphoreNV");
Function<void, GLuint, GLsizei, const GLuint *, const GLfloat *> Binding::WeightPathsNV("glWeightPathsNV");
Function<void, GLint, GLenum, GLsizei, const void *> Binding::WeightPointerARB("glWeightPointerARB");
Function<void, GLint, const GLbyte *> Binding::WeightbvARB("glWeightbvARB");
Function<void, GLint, const GLdouble *> Binding::WeightdvARB("glWeightdvARB");
Function<void, GLint, const GLfloat *> Binding::WeightfvARB("glWeightfvARB");
Function<void, GLint, const GLint *> Binding::WeightivARB("glWeightivARB");
Function<void, GLint, const GLshort *> Binding::WeightsvARB("glWeightsvARB");
Function<void, GLint, const GLubyte *> Binding::WeightubvARB("glWeightubvARB");
Function<void, GLint, const GLuint *> Binding::WeightuivARB("glWeightuivARB");
Function<void, GLint, const GLushort *> Binding::WeightusvARB("glWeightusvARB");
Function<void, GLdouble, GLdouble> Binding::WindowPos2d("glWindowPos2d");
Function<void, GLdouble, GLdouble> Binding::WindowPos2dARB("glWindowPos2dARB");
Function<void, GLdouble, GLdouble> Binding::WindowPos2dMESA("glWindowPos2dMESA");
Function<void, const GLdouble *> Binding::WindowPos2dv("glWindowPos2dv");
Function<void, const GLdouble *> Binding::WindowPos2dvARB("glWindowPos2dvARB");
Function<void, const GLdouble *> Binding::WindowPos2dvMESA("glWindowPos2dvMESA");
Function<void, GLfloat, GLfloat> Binding::WindowPos2f("glWindowPos2f");
Function<void, GLfloat, GLfloat> Binding::WindowPos2fARB("glWindowPos2fARB");
Function<void, GLfloat, GLfloat> Binding::WindowPos2fMESA("glWindowPos2fMESA");
Function<void, const GLfloat *> Binding::WindowPos2fv("glWindowPos2fv");
Function<void, const GLfloat *> Binding::WindowPos2fvARB("glWindowPos2fvARB");
Function<void, const GLfloat *> Binding::WindowPos2fvMESA("glWindowPos2fvMESA");
Function<void, GLint, GLint> Binding::WindowPos2i("glWindowPos2i");
Function<void, GLint, GLint> Binding::WindowPos2iARB("glWindowPos2iARB");
Function<void, GLint, GLint> Binding::WindowPos2iMESA("glWindowPos2iMESA");
Function<void, const GLint *> Binding::WindowPos2iv("glWindowPos2iv");
Function<void, const GLint *> Binding::WindowPos2ivARB("glWindowPos2ivARB");
Function<void, const GLint *> Binding::WindowPos2ivMESA("glWindowPos2ivMESA");
Function<void, GLshort, GLshort> Binding::WindowPos2s("glWindowPos2s");
Function<void, GLshort, GLshort> Binding::WindowPos2sARB("glWindowPos2sARB");
Function<void, GLshort, GLshort> Binding::WindowPos2sMESA("glWindowPos2sMESA");
Function<void, const GLshort *> Binding::WindowPos2sv("glWindowPos2sv");
Function<void, const GLshort *> Binding::WindowPos2svARB("glWindowPos2svARB");
Function<void, const GLshort *> Binding::WindowPos2svMESA("glWindowPos2svMESA");
Function<void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3d("glWindowPos3d");
Function<void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3dARB("glWindowPos3dARB");
Function<void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3dMESA("glWindowPos3dMESA");
Function<void, const GLdouble *> Binding::WindowPos3dv("glWindowPos3dv");
Function<void, const GLdouble *> Binding::WindowPos3dvARB("glWindowPos3dvARB");
Function<void, const GLdouble *> Binding::WindowPos3dvMESA("glWindowPos3dvMESA");
Function<void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3f("glWindowPos3f");
Function<void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3fARB("glWindowPos3fARB");
Function<void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3fMESA("glWindowPos3fMESA");
Function<void, const GLfloat *> Binding::WindowPos3fv("glWindowPos3fv");
Function<void, const GLfloat *> Binding::WindowPos3fvARB("glWindowPos3fvARB");
Function<void, const GLfloat *> Binding::WindowPos3fvMESA("glWindowPos3fvMESA");
Function<void, GLint, GLint, GLint> Binding::WindowPos3i("glWindowPos3i");
Function<void, GLint, GLint, GLint> Binding::WindowPos3iARB("glWindowPos3iARB");
Function<void, GLint, GLint, GLint> Binding::WindowPos3iMESA("glWindowPos3iMESA");
Function<void, const GLint *> Binding::WindowPos3iv("glWindowPos3iv");
Function<void, const GLint *> Binding::WindowPos3ivARB("glWindowPos3ivARB");
Function<void, const GLint *> Binding::WindowPos3ivMESA("glWindowPos3ivMESA");
Function<void, GLshort, GLshort, GLshort> Binding::WindowPos3s("glWindowPos3s");
Function<void, GLshort, GLshort, GLshort> Binding::WindowPos3sARB("glWindowPos3sARB");
Function<void, GLshort, GLshort, GLshort> Binding::WindowPos3sMESA("glWindowPos3sMESA");
Function<void, const GLshort *> Binding::WindowPos3sv("glWindowPos3sv");
Function<void, const GLshort *> Binding::WindowPos3svARB("glWindowPos3svARB");
Function<void, const GLshort *> Binding::WindowPos3svMESA("glWindowPos3svMESA");
Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::WindowPos4dMESA("glWindowPos4dMESA");
Function<void, const GLdouble *> Binding::WindowPos4dvMESA("glWindowPos4dvMESA");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::WindowPos4fMESA("glWindowPos4fMESA");
Function<void, const GLfloat *> Binding::WindowPos4fvMESA("glWindowPos4fvMESA");
Function<void, GLint, GLint, GLint, GLint> Binding::WindowPos4iMESA("glWindowPos4iMESA");
Function<void, const GLint *> Binding::WindowPos4ivMESA("glWindowPos4ivMESA");
Function<void, GLshort, GLshort, GLshort, GLshort> Binding::WindowPos4sMESA("glWindowPos4sMESA");
Function<void, const GLshort *> Binding::WindowPos4svMESA("glWindowPos4svMESA");
Function<void, GLenum, GLsizei, const GLint *> Binding::WindowRectanglesEXT("glWindowRectanglesEXT");
Function<void, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::WriteMaskEXT("glWriteMaskEXT");



} // namespace glbinding
