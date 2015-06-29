#pragma once

#include <eglbinding/noegl.h>

#include <eglbinding/egl/bitfield.h>

namespace egl15ext
{

// import bitfields to namespace
using egl::EGL_NONE_BIT;
using egl::EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR;
using egl::EGL_DRM_BUFFER_USE_SCANOUT_MESA;
using egl::EGL_READ_SURFACE_BIT_KHR;
using egl::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR;
using egl::EGL_DRM_BUFFER_USE_SHARE_MESA;
using egl::EGL_WRITE_SURFACE_BIT_KHR;
using egl::EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR;
using egl::EGL_VG_COLORSPACE_LINEAR_BIT_KHR;
using egl::EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR;
using egl::EGL_LOCK_SURFACE_BIT_KHR;
using egl::EGL_OPTIMAL_FORMAT_BIT_KHR;
using egl::EGL_STREAM_BIT_KHR;

} // namespace egl15ext
