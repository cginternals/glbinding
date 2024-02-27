
#pragma once


#include <cstddef>
#include <cstdint>
#include <array>
#include <string>

#include <KHR/khrplatform.h>


#ifdef _MSC_VER
#define GL_APIENTRY __stdcall
#else
#define GL_APIENTRY
#endif

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>
#include <glbinding/gl/boolean.h>


namespace gl
{


#ifdef __APPLE__
typedef void *GLhandleARB;
#else
typedef unsigned int GLhandleARB;
#endif
using GLbitfield = unsigned int;
using GLbyte = khronos_int8_t;
using GLchar = char;
using GLcharARB = char;
using GLclampd = double;
using GLclampf = khronos_float_t;
using GLclampx = khronos_int32_t;
using GLdouble = double;
using GLeglClientBufferEXT = void *;
using GLeglImageOES = void *;
using GLfixed = khronos_int32_t;
using GLfloat = khronos_float_t;
using GLhalf = khronos_uint16_t;
using GLhalfARB = khronos_uint16_t;
using GLhalfNV = unsigned short;
using GLint = int;
using GLint64 = khronos_int64_t;
using GLint64EXT = khronos_int64_t;
using GLintptr = khronos_intptr_t;
using GLintptrARB = khronos_intptr_t;
using GLshort = khronos_int16_t;
using GLsizei = int;
using GLsizeiptr = khronos_ssize_t;
using GLsizeiptrARB = khronos_ssize_t;
using GLsync = struct __GLsync *;
using GLubyte = khronos_uint8_t;
using GLuint = unsigned int;
using GLuint64 = khronos_uint64_t;
using GLuint64EXT = khronos_uint64_t;
using GLushort = khronos_uint16_t;
using GLvoid = void;
using GLvdpauSurfaceNV = GLintptr;
using VertexShaderWriteMaskEXT = GLboolean;
enum class AttribMask : unsigned int;
enum class BufferStorageMask : unsigned int;
enum class ClearBufferMask : unsigned int;
enum class ClientAttribMask : unsigned int;
enum class ContextFlagMask : unsigned int;
enum class ContextProfileMask : unsigned int;
enum class FfdMaskSGIX : unsigned int;
enum class FragmentShaderColorModMaskATI : unsigned int;
enum class FragmentShaderDestMaskATI : unsigned int;
enum class FragmentShaderDestModMaskATI : unsigned int;
enum class GLenum : unsigned int;
enum class GLextension : int;
enum class MapBufferAccessMask : unsigned int;
enum class MemoryBarrierMask : unsigned int;
enum class OcclusionQueryEventMaskAMD : unsigned int;
enum class PathFontStyle : unsigned int;
enum class PathMetricMask : unsigned int;
enum class PerformanceQueryCapsMaskINTEL : unsigned int;
enum class SyncObjectMask : unsigned int;
enum class TextureStorageMaskAMD : unsigned int;
enum class UnusedMask : unsigned int;
enum class UseProgramStageMask : unsigned int;
enum class VertexHintsMaskPGI : unsigned int;
using GLDEBUGPROC = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCAMD = void (GL_APIENTRY *)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
using GLDEBUGPROCARB = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCKHR = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLVULKANPROCNV = void (GL_APIENTRY *)(void);
struct _cl_context;
struct _cl_event;


} // namespace gl


#include <glbinding/gl/types.inl>