#pragma once

#include <eglbinding/noegl.h>

#include <eglbinding/egl/enum.h>


namespace egl15
{

// import enums to namespace


// __UNGROUPED__

using egl::EGL_DONT_CARE;
using egl::EGL_UNKNOWN;
using egl::EGL_DEFAULT_DISPLAY;
using egl::EGL_NO_CONTEXT;
using egl::EGL_NO_DISPLAY;
using egl::EGL_NO_IMAGE;
using egl::EGL_NO_SURFACE;
using egl::EGL_NO_SYNC;
using egl::EGL_NO_SYNC_KHR;
using egl::EGL_NO_SYNC_NV;
using egl::EGL_SUCCESS;
using egl::EGL_NOT_INITIALIZED;
using egl::EGL_BAD_ACCESS;
using egl::EGL_BAD_ALLOC;
using egl::EGL_BAD_ATTRIBUTE;
using egl::EGL_BAD_CONFIG;
using egl::EGL_BAD_CONTEXT;
using egl::EGL_BAD_CURRENT_SURFACE;
using egl::EGL_BAD_DISPLAY;
using egl::EGL_BAD_MATCH;
using egl::EGL_BAD_NATIVE_PIXMAP;
using egl::EGL_BAD_NATIVE_WINDOW;
using egl::EGL_BAD_PARAMETER;
using egl::EGL_BAD_SURFACE;
using egl::EGL_CONTEXT_LOST;
using egl::EGL_BUFFER_SIZE;
using egl::EGL_ALPHA_SIZE;
using egl::EGL_BLUE_SIZE;
using egl::EGL_GREEN_SIZE;
using egl::EGL_RED_SIZE;
using egl::EGL_DEPTH_SIZE;
using egl::EGL_STENCIL_SIZE;
using egl::EGL_CONFIG_CAVEAT;
using egl::EGL_CONFIG_ID;
using egl::EGL_LEVEL;
using egl::EGL_MAX_PBUFFER_HEIGHT;
using egl::EGL_MAX_PBUFFER_PIXELS;
using egl::EGL_MAX_PBUFFER_WIDTH;
using egl::EGL_NATIVE_RENDERABLE;
using egl::EGL_NATIVE_VISUAL_ID;
using egl::EGL_NATIVE_VISUAL_TYPE;
using egl::EGL_SAMPLES;
using egl::EGL_SAMPLE_BUFFERS;
using egl::EGL_SURFACE_TYPE;
using egl::EGL_TRANSPARENT_TYPE;
using egl::EGL_TRANSPARENT_BLUE_VALUE;
using egl::EGL_TRANSPARENT_GREEN_VALUE;
using egl::EGL_TRANSPARENT_RED_VALUE;
using egl::EGL_NONE;
using egl::EGL_BIND_TO_TEXTURE_RGB;
using egl::EGL_BIND_TO_TEXTURE_RGBA;
using egl::EGL_MIN_SWAP_INTERVAL;
using egl::EGL_MAX_SWAP_INTERVAL;
using egl::EGL_LUMINANCE_SIZE;
using egl::EGL_ALPHA_MASK_SIZE;
using egl::EGL_COLOR_BUFFER_TYPE;
using egl::EGL_RENDERABLE_TYPE;
using egl::EGL_MATCH_NATIVE_PIXMAP;
using egl::EGL_CONFORMANT;
using egl::EGL_SLOW_CONFIG;
using egl::EGL_NON_CONFORMANT_CONFIG;
using egl::EGL_TRANSPARENT_RGB;
using egl::EGL_VENDOR;
using egl::EGL_VERSION;
using egl::EGL_EXTENSIONS;
using egl::EGL_HEIGHT;
using egl::EGL_WIDTH;
using egl::EGL_LARGEST_PBUFFER;
using egl::EGL_DRAW;
using egl::EGL_READ;
using egl::EGL_CORE_NATIVE_ENGINE;
using egl::EGL_NO_TEXTURE;
using egl::EGL_TEXTURE_RGB;
using egl::EGL_TEXTURE_RGBA;
using egl::EGL_TEXTURE_2D;
using egl::EGL_TEXTURE_FORMAT;
using egl::EGL_TEXTURE_TARGET;
using egl::EGL_MIPMAP_TEXTURE;
using egl::EGL_MIPMAP_LEVEL;
using egl::EGL_BACK_BUFFER;
using egl::EGL_SINGLE_BUFFER;
using egl::EGL_RENDER_BUFFER;
using egl::EGL_COLORSPACE;
using egl::EGL_VG_COLORSPACE;
using egl::EGL_ALPHA_FORMAT;
using egl::EGL_VG_ALPHA_FORMAT;
using egl::EGL_COLORSPACE_sRGB;
using egl::EGL_GL_COLORSPACE_SRGB;
using egl::EGL_GL_COLORSPACE_SRGB_KHR;
using egl::EGL_VG_COLORSPACE_sRGB;
using egl::EGL_COLORSPACE_LINEAR;
using egl::EGL_GL_COLORSPACE_LINEAR;
using egl::EGL_GL_COLORSPACE_LINEAR_KHR;
using egl::EGL_VG_COLORSPACE_LINEAR;
using egl::EGL_ALPHA_FORMAT_NONPRE;
using egl::EGL_VG_ALPHA_FORMAT_NONPRE;
using egl::EGL_ALPHA_FORMAT_PRE;
using egl::EGL_VG_ALPHA_FORMAT_PRE;
using egl::EGL_CLIENT_APIS;
using egl::EGL_RGB_BUFFER;
using egl::EGL_LUMINANCE_BUFFER;
using egl::EGL_HORIZONTAL_RESOLUTION;
using egl::EGL_VERTICAL_RESOLUTION;
using egl::EGL_PIXEL_ASPECT_RATIO;
using egl::EGL_SWAP_BEHAVIOR;
using egl::EGL_BUFFER_PRESERVED;
using egl::EGL_BUFFER_DESTROYED;
using egl::EGL_OPENVG_IMAGE;
using egl::EGL_CONTEXT_CLIENT_TYPE;
using egl::EGL_CONTEXT_CLIENT_VERSION;
using egl::EGL_CONTEXT_MAJOR_VERSION;
using egl::EGL_CONTEXT_MAJOR_VERSION_KHR;
using egl::EGL_MULTISAMPLE_RESOLVE;
using egl::EGL_MULTISAMPLE_RESOLVE_DEFAULT;
using egl::EGL_MULTISAMPLE_RESOLVE_BOX;
using egl::EGL_CL_EVENT_HANDLE;
using egl::EGL_CL_EVENT_HANDLE_KHR;
using egl::EGL_GL_COLORSPACE;
using egl::EGL_GL_COLORSPACE_KHR;
using egl::EGL_OPENGL_ES_API;
using egl::EGL_OPENVG_API;
using egl::EGL_OPENGL_API;
using egl::EGL_GL_TEXTURE_2D;
using egl::EGL_GL_TEXTURE_2D_KHR;
using egl::EGL_GL_TEXTURE_3D;
using egl::EGL_GL_TEXTURE_3D_KHR;
using egl::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X;
using egl::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X_KHR;
using egl::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
using egl::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X_KHR;
using egl::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
using egl::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y_KHR;
using egl::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
using egl::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_KHR;
using egl::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
using egl::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z_KHR;
using egl::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
using egl::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_KHR;
using egl::EGL_GL_RENDERBUFFER;
using egl::EGL_GL_RENDERBUFFER_KHR;
using egl::EGL_GL_TEXTURE_LEVEL;
using egl::EGL_GL_TEXTURE_LEVEL_KHR;
using egl::EGL_GL_TEXTURE_ZOFFSET;
using egl::EGL_GL_TEXTURE_ZOFFSET_KHR;
using egl::EGL_CONTEXT_OPENGL_ROBUST_ACCESS_EXT;
using egl::EGL_IMAGE_PRESERVED;
using egl::EGL_SYNC_PRIOR_COMMANDS_COMPLETE;
using egl::EGL_SYNC_PRIOR_COMMANDS_COMPLETE_KHR;
using egl::EGL_SYNC_STATUS;
using egl::EGL_SYNC_STATUS_KHR;
using egl::EGL_SIGNALED;
using egl::EGL_SIGNALED_KHR;
using egl::EGL_UNSIGNALED;
using egl::EGL_UNSIGNALED_KHR;
using egl::EGL_TIMEOUT_EXPIRED;
using egl::EGL_TIMEOUT_EXPIRED_KHR;
using egl::EGL_CONDITION_SATISFIED;
using egl::EGL_CONDITION_SATISFIED_KHR;
using egl::EGL_SYNC_TYPE;
using egl::EGL_SYNC_TYPE_KHR;
using egl::EGL_SYNC_CONDITION;
using egl::EGL_SYNC_CONDITION_KHR;
using egl::EGL_SYNC_FENCE;
using egl::EGL_SYNC_FENCE_KHR;
using egl::EGL_CONTEXT_MINOR_VERSION;
using egl::EGL_CONTEXT_MINOR_VERSION_KHR;
using egl::EGL_CONTEXT_OPENGL_PROFILE_MASK;
using egl::EGL_CONTEXT_OPENGL_PROFILE_MASK_KHR;
using egl::EGL_SYNC_CL_EVENT;
using egl::EGL_SYNC_CL_EVENT_KHR;
using egl::EGL_SYNC_CL_EVENT_COMPLETE;
using egl::EGL_SYNC_CL_EVENT_COMPLETE_KHR;
using egl::EGL_CONTEXT_OPENGL_DEBUG;
using egl::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE;
using egl::EGL_CONTEXT_OPENGL_ROBUST_ACCESS;
using egl::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY;
using egl::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_KHR;
using egl::EGL_NO_RESET_NOTIFICATION;
using egl::EGL_NO_RESET_NOTIFICATION_EXT;
using egl::EGL_NO_RESET_NOTIFICATION_KHR;
using egl::EGL_LOSE_CONTEXT_ON_RESET;
using egl::EGL_LOSE_CONTEXT_ON_RESET_EXT;
using egl::EGL_LOSE_CONTEXT_ON_RESET_KHR;
using egl::EGL_DISPLAY_SCALING;

} // namespace egl15
