#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <cstddef>
#include <cstdint>
#include <array>

#include <functional>
#include <ostream>
#include <string>

#ifdef _MSC_VER
#define GL_APIENTRY __stdcall
#else
#define GL_APIENTRY
#endif

#include <KHR/khrplatform.h>

namespace gl
{

enum class GLextension : int;
#ifndef GLEXT_64_TYPES_DEFINED
/* This code block is duplicated in glxext.h, so must be protected */
#define GLEXT_64_TYPES_DEFINED
/* Define int32_t, int64_t, and uint64_t types for UST/MSC */
/* (as used in the GL_EXT_timer_query extension). */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
#elif defined(__sun__) || defined(__digital__)
#include <inttypes.h>
#if defined(__STDC__)
#if defined(__arch64__) || defined(_LP64)
typedef long int int64_t;
typedef unsigned long int uint64_t;
#else
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#endif /* __arch64__ */
#endif /* __STDC__ */
#elif defined( __VMS ) || defined(__sgi)
#include <inttypes.h>
#elif defined(__SCO__) || defined(__USLC__)
#include <stdint.h>
#elif defined(__UNIXOS2__) || defined(__SOL64__)
typedef long int int32_t;
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#elif defined(_WIN32) && defined(__GNUC__)
#include <stdint.h>
#elif defined(_WIN32)
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
/* Fallback if nothing above works */
#include <inttypes.h>
#endif
#endif
enum class GLenum : unsigned int;
enum class GLboolean : unsigned int;
using GLbitfield = unsigned int;
using GLvoid = void;
using GLbyte = signed char;
using GLshort = short;
using GLint = int;
using GLclampx = int;
using GLubyte = unsigned char;
using GLushort = unsigned short;
using GLuint = unsigned int;
using GLsizei = int;
using GLfloat = float;
using GLclampf = float;
using GLdouble = double;
using GLclampd = double;
using GLeglImageOES = void *;
using GLchar = char;
using GLcharARB = char;
#ifdef __APPLE__
typedef void *GLhandleARB;
#else
typedef unsigned int GLhandleARB;
#endif
using GLhalfARB = unsigned short;
using GLhalf = unsigned short;
using GLfixed = GLint;
using GLintptr = ptrdiff_t;
using GLsizeiptr = ptrdiff_t;
using GLint64 = int64_t;
using GLuint64 = uint64_t;
using GLintptrARB = ptrdiff_t;
using GLsizeiptrARB = ptrdiff_t;
using GLint64EXT = int64_t;
using GLuint64EXT = uint64_t;
using GLsync = struct __GLsync *;
struct _cl_context;
struct _cl_event;
using GLDEBUGPROC = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCARB = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCKHR = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCAMD = void (GL_APIENTRY *)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
using GLhalfNV = unsigned short;
using GLvdpauSurfaceNV = GLintptr;
using GLuint_array_2 = std::array<GLuint, 2>;
enum class AttribMask : unsigned int;
enum class ClearBufferMask : unsigned int;
enum class ClientAttribMask : unsigned int;
enum class ContextFlagMask : unsigned int;
enum class ContextProfileMask : unsigned int;
enum class FfdMaskSGIX : unsigned int;
enum class FragmentShaderColorModMaskATI : unsigned int;
enum class FragmentShaderDestMaskATI : unsigned int;
enum class FragmentShaderDestModMaskATI : unsigned int;
enum class MapBufferUsageMask : unsigned int;
enum class MemoryBarrierMask : unsigned int;
enum class PathRenderingMaskNV : unsigned int;
enum class PerformanceQueryCapsMaskINTEL : unsigned int;
enum class SyncObjectMask : unsigned int;
enum class TextureStorageMaskAMD : unsigned int;
enum class UseProgramStageMask : unsigned int;
enum class VertexHintsMaskPGI : unsigned int;
enum class UnusedMask : unsigned int;
enum class BufferAccessMask : unsigned int;
enum class BufferStorageMask : unsigned int;
enum class PathFontStyle : unsigned int;

} // namespace gl

#include <glbinding/gl/typeintegrations.h>
