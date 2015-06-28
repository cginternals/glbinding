#pragma once

#include <string>

#include <unordered_map>
#include <vector>
#include <set>

#include <eglbinding/egl/types.h>
#include <eglbinding/egl/extension.h>


namespace eglbinding
{

class Version;

extern const std::unordered_map<std::string, egl::EGLbitfield> Meta_BitfieldsByString;
extern const std::unordered_map<egl::EGLbitfield, std::string> Meta_StringsByBitfield;

extern const std::unordered_map<std::string, egl::EGLboolean> Meta_BooleansByString;
extern const std::unordered_map<egl::EGLboolean, std::string> Meta_StringsByBoolean;

extern const std::unordered_map<std::string, egl::EGLenum> Meta_EnumsByString;
extern const std::unordered_map<egl::EGLenum, std::string> Meta_StringsByEnum;

extern const std::unordered_map<std::string, egl::EGLextension> Meta_ExtensionsByString;
extern const std::unordered_map<egl::EGLextension, std::string> Meta_StringsByExtension;

extern const std::unordered_map<std::string, std::set<egl::EGLextension>> Meta_ExtensionsByFunctionString;
extern const std::unordered_map<egl::EGLextension, std::set<std::string>> Meta_FunctionStringsByExtension;

extern const std::unordered_map<egl::EGLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<egl::EGLContextFlagMask, std::string> Meta_StringsByEGLContextFlagMask;
extern const std::unordered_map<egl::EGLContextProfileMask, std::string> Meta_StringsByEGLContextProfileMask;
extern const std::unordered_map<egl::EGLDRMBufferUseMESAMask, std::string> Meta_StringsByEGLDRMBufferUseMESAMask;
extern const std::unordered_map<egl::EGLLockUsageHintKHRMask, std::string> Meta_StringsByEGLLockUsageHintKHRMask;
extern const std::unordered_map<egl::EGLRenderableTypeMask, std::string> Meta_StringsByEGLRenderableTypeMask;
extern const std::unordered_map<egl::EGLSurfaceTypeMask, std::string> Meta_StringsByEGLSurfaceTypeMask;
extern const std::unordered_map<egl::EGLSyncFlagsKHR, std::string> Meta_StringsByEGLSyncFlagsKHR;

} // namespace eglbinding
