#pragma once

#include <eglbinding/noegl.h>


namespace egl
{

enum class EGLboolean : unsigned int
{
    EGL_FALSE = 0,
    EGL_TRUE = 1
};

// import booleans to namespace

static const EGLboolean EGL_FALSE = EGLboolean::EGL_FALSE;
static const EGLboolean EGL_TRUE = EGLboolean::EGL_TRUE;

} // namespace egl
