
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *> Binding::WaitSemaphoreEXT("glWaitSemaphoreEXT");
Function<Binding, void, GLsync, UnusedMask, GLuint64> Binding::WaitSync("glWaitSync");
Function<Binding, void, GLuint64> Binding::WaitVkSemaphoreNV("glWaitVkSemaphoreNV");
Function<Binding, void, GLuint, GLsizei, const GLuint *, const GLfloat *> Binding::WeightPathsNV("glWeightPathsNV");
Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::WeightPointerARB("glWeightPointerARB");
Function<Binding, void, GLint, const GLbyte *> Binding::WeightbvARB("glWeightbvARB");
Function<Binding, void, GLint, const GLdouble *> Binding::WeightdvARB("glWeightdvARB");
Function<Binding, void, GLint, const GLfloat *> Binding::WeightfvARB("glWeightfvARB");
Function<Binding, void, GLint, const GLint *> Binding::WeightivARB("glWeightivARB");
Function<Binding, void, GLint, const GLshort *> Binding::WeightsvARB("glWeightsvARB");
Function<Binding, void, GLint, const GLubyte *> Binding::WeightubvARB("glWeightubvARB");
Function<Binding, void, GLint, const GLuint *> Binding::WeightuivARB("glWeightuivARB");
Function<Binding, void, GLint, const GLushort *> Binding::WeightusvARB("glWeightusvARB");
Function<Binding, void, GLdouble, GLdouble> Binding::WindowPos2d("glWindowPos2d");
Function<Binding, void, GLdouble, GLdouble> Binding::WindowPos2dARB("glWindowPos2dARB");
Function<Binding, void, GLdouble, GLdouble> Binding::WindowPos2dMESA("glWindowPos2dMESA");
Function<Binding, void, const GLdouble *> Binding::WindowPos2dv("glWindowPos2dv");
Function<Binding, void, const GLdouble *> Binding::WindowPos2dvARB("glWindowPos2dvARB");
Function<Binding, void, const GLdouble *> Binding::WindowPos2dvMESA("glWindowPos2dvMESA");
Function<Binding, void, GLfloat, GLfloat> Binding::WindowPos2f("glWindowPos2f");
Function<Binding, void, GLfloat, GLfloat> Binding::WindowPos2fARB("glWindowPos2fARB");
Function<Binding, void, GLfloat, GLfloat> Binding::WindowPos2fMESA("glWindowPos2fMESA");
Function<Binding, void, const GLfloat *> Binding::WindowPos2fv("glWindowPos2fv");
Function<Binding, void, const GLfloat *> Binding::WindowPos2fvARB("glWindowPos2fvARB");
Function<Binding, void, const GLfloat *> Binding::WindowPos2fvMESA("glWindowPos2fvMESA");
Function<Binding, void, GLint, GLint> Binding::WindowPos2i("glWindowPos2i");
Function<Binding, void, GLint, GLint> Binding::WindowPos2iARB("glWindowPos2iARB");
Function<Binding, void, GLint, GLint> Binding::WindowPos2iMESA("glWindowPos2iMESA");
Function<Binding, void, const GLint *> Binding::WindowPos2iv("glWindowPos2iv");
Function<Binding, void, const GLint *> Binding::WindowPos2ivARB("glWindowPos2ivARB");
Function<Binding, void, const GLint *> Binding::WindowPos2ivMESA("glWindowPos2ivMESA");
Function<Binding, void, GLshort, GLshort> Binding::WindowPos2s("glWindowPos2s");
Function<Binding, void, GLshort, GLshort> Binding::WindowPos2sARB("glWindowPos2sARB");
Function<Binding, void, GLshort, GLshort> Binding::WindowPos2sMESA("glWindowPos2sMESA");
Function<Binding, void, const GLshort *> Binding::WindowPos2sv("glWindowPos2sv");
Function<Binding, void, const GLshort *> Binding::WindowPos2svARB("glWindowPos2svARB");
Function<Binding, void, const GLshort *> Binding::WindowPos2svMESA("glWindowPos2svMESA");
Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3d("glWindowPos3d");
Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3dARB("glWindowPos3dARB");
Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3dMESA("glWindowPos3dMESA");
Function<Binding, void, const GLdouble *> Binding::WindowPos3dv("glWindowPos3dv");
Function<Binding, void, const GLdouble *> Binding::WindowPos3dvARB("glWindowPos3dvARB");
Function<Binding, void, const GLdouble *> Binding::WindowPos3dvMESA("glWindowPos3dvMESA");
Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3f("glWindowPos3f");
Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3fARB("glWindowPos3fARB");
Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3fMESA("glWindowPos3fMESA");
Function<Binding, void, const GLfloat *> Binding::WindowPos3fv("glWindowPos3fv");
Function<Binding, void, const GLfloat *> Binding::WindowPos3fvARB("glWindowPos3fvARB");
Function<Binding, void, const GLfloat *> Binding::WindowPos3fvMESA("glWindowPos3fvMESA");
Function<Binding, void, GLint, GLint, GLint> Binding::WindowPos3i("glWindowPos3i");
Function<Binding, void, GLint, GLint, GLint> Binding::WindowPos3iARB("glWindowPos3iARB");
Function<Binding, void, GLint, GLint, GLint> Binding::WindowPos3iMESA("glWindowPos3iMESA");
Function<Binding, void, const GLint *> Binding::WindowPos3iv("glWindowPos3iv");
Function<Binding, void, const GLint *> Binding::WindowPos3ivARB("glWindowPos3ivARB");
Function<Binding, void, const GLint *> Binding::WindowPos3ivMESA("glWindowPos3ivMESA");
Function<Binding, void, GLshort, GLshort, GLshort> Binding::WindowPos3s("glWindowPos3s");
Function<Binding, void, GLshort, GLshort, GLshort> Binding::WindowPos3sARB("glWindowPos3sARB");
Function<Binding, void, GLshort, GLshort, GLshort> Binding::WindowPos3sMESA("glWindowPos3sMESA");
Function<Binding, void, const GLshort *> Binding::WindowPos3sv("glWindowPos3sv");
Function<Binding, void, const GLshort *> Binding::WindowPos3svARB("glWindowPos3svARB");
Function<Binding, void, const GLshort *> Binding::WindowPos3svMESA("glWindowPos3svMESA");
Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::WindowPos4dMESA("glWindowPos4dMESA");
Function<Binding, void, const GLdouble *> Binding::WindowPos4dvMESA("glWindowPos4dvMESA");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::WindowPos4fMESA("glWindowPos4fMESA");
Function<Binding, void, const GLfloat *> Binding::WindowPos4fvMESA("glWindowPos4fvMESA");
Function<Binding, void, GLint, GLint, GLint, GLint> Binding::WindowPos4iMESA("glWindowPos4iMESA");
Function<Binding, void, const GLint *> Binding::WindowPos4ivMESA("glWindowPos4ivMESA");
Function<Binding, void, GLshort, GLshort, GLshort, GLshort> Binding::WindowPos4sMESA("glWindowPos4sMESA");
Function<Binding, void, const GLshort *> Binding::WindowPos4svMESA("glWindowPos4svMESA");
Function<Binding, void, GLenum, GLsizei, const GLint *> Binding::WindowRectanglesEXT("glWindowRectanglesEXT");
Function<Binding, void, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::WriteMaskEXT("glWriteMaskEXT");



} // namespace glbinding
