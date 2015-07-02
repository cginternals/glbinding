#pragma once

#include <string>

#include <unordered_map>
#include <vector>
#include <set>

#include <glesbinding/gles/types.h>
#include <glesbinding/gles/extension.h>


namespace glesbinding
{

class Version;

extern const std::unordered_map<std::string, gles::GLbitfield> Meta_BitfieldsByString;
extern const std::unordered_map<gles::GLbitfield, std::string> Meta_StringsByBitfield;

extern const std::unordered_map<std::string, gles::GLboolean> Meta_BooleansByString;
extern const std::unordered_map<gles::GLboolean, std::string> Meta_StringsByBoolean;

extern const std::unordered_map<std::string, gles::GLenum> Meta_EnumsByString;
extern const std::unordered_map<gles::GLenum, std::string> Meta_StringsByEnum;

extern const std::unordered_map<std::string, gles::GLextension> Meta_ExtensionsByString;
extern const std::unordered_map<gles::GLextension, std::string> Meta_StringsByExtension;

extern const std::unordered_map<std::string, std::set<gles::GLextension>> Meta_ExtensionsByFunctionString;
extern const std::unordered_map<gles::GLextension, std::set<std::string>> Meta_FunctionStringsByExtension;

extern const std::unordered_map<gles::GLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<gles::AttribMask, std::string> Meta_StringsByAttribMask;
extern const std::unordered_map<gles::BufferBitQCOM, std::string> Meta_StringsByBufferBitQCOM;
extern const std::unordered_map<gles::ClearBufferMask, std::string> Meta_StringsByClearBufferMask;
extern const std::unordered_map<gles::ContextFlagMask, std::string> Meta_StringsByContextFlagMask;
extern const std::unordered_map<gles::MapBufferUsageMask, std::string> Meta_StringsByMapBufferUsageMask;
extern const std::unordered_map<gles::MemoryBarrierMask, std::string> Meta_StringsByMemoryBarrierMask;
extern const std::unordered_map<gles::PathRenderingMaskNV, std::string> Meta_StringsByPathRenderingMaskNV;
extern const std::unordered_map<gles::PerformanceQueryCapsMaskINTEL, std::string> Meta_StringsByPerformanceQueryCapsMaskINTEL;
extern const std::unordered_map<gles::SyncObjectMask, std::string> Meta_StringsBySyncObjectMask;
extern const std::unordered_map<gles::UseProgramStageMask, std::string> Meta_StringsByUseProgramStageMask;
extern const std::unordered_map<gles::UnusedMask, std::string> Meta_StringsByUnusedMask;
extern const std::unordered_map<gles::BufferAccessMask, std::string> Meta_StringsByBufferAccessMask;
extern const std::unordered_map<gles::BufferStorageMask, std::string> Meta_StringsByBufferStorageMask;
extern const std::unordered_map<gles::PathFontStyle, std::string> Meta_StringsByPathFontStyle;

} // namespace glesbinding
