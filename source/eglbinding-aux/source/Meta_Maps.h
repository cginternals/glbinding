
#pragma once


#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <set>
#include <array>

#include <eglbinding/egl/types.h>
#include <eglbinding/egl/extension.h>


namespace eglbinding
{


class Version;


namespace aux
{


extern const std::array<std::unordered_map<std::string, egl::EGLextension>, 27> Meta_ExtensionsByStringMaps;
extern const std::unordered_map<egl::EGLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<egl::EGLBoolean, std::string> Meta_StringsByBoolean;
extern const std::unordered_map<egl::EGLenum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<egl::EGLextension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<egl::EGLextension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;

extern const std::unordered_map<egl::EGLContextFlagMask, std::string> Meta_StringsByEGLContextFlagMask;
extern const std::unordered_map<egl::EGLContextProfileMask, std::string> Meta_StringsByEGLContextProfileMask;
extern const std::unordered_map<egl::EGLDRMBufferUseMESAMask, std::string> Meta_StringsByEGLDRMBufferUseMESAMask;
extern const std::unordered_map<egl::EGLLockUsageHintKHRMask, std::string> Meta_StringsByEGLLockUsageHintKHRMask;
extern const std::unordered_map<egl::EGLNativeBufferUsageFlags, std::string> Meta_StringsByEGLNativeBufferUsageFlags;
extern const std::unordered_map<egl::EGLRenderableTypeMask, std::string> Meta_StringsByEGLRenderableTypeMask;
extern const std::unordered_map<egl::EGLSurfaceTypeMask, std::string> Meta_StringsByEGLSurfaceTypeMask;
extern const std::unordered_map<egl::EGLSyncFlagsKHR, std::string> Meta_StringsByEGLSyncFlagsKHR;

extern const std::array<std::unordered_map<std::string, egl::EGLbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, egl::EGLBoolean> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, egl::EGLenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<egl::EGLextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} } // namespace eglbinding::aux
