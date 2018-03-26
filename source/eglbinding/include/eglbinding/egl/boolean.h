#pragma once


#include <eglbinding/Boolean32.h>

#include <eglbinding/eglbinding_api.h>
#include <eglbinding/eglbinding_features.h>
#include <eglbinding/noegl.h>


namespace egl
{


using EGLBoolean = eglbinding::Boolean32;


} // namespace egl


namespace egl
{

// import booleans to namespace

EGLBINDING_CONSTEXPR static const EGLBoolean EGL_FALSE = EGLBoolean(0);
EGLBINDING_CONSTEXPR static const EGLBoolean EGL_TRUE = EGLBoolean(1);


} // namespace egl
