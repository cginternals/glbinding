#pragma once

#include <string>

#include <unordered_map>
#include <vector>
#include <set>

#include <glpbinding/glp/types.h>
#include <glpbinding/glp/extension.h>


namespace glpbinding
{

class Version;

extern const std::unordered_map<std::string, glp::GLbitfield> Meta_BitfieldsByString;
extern const std::unordered_map<glp::GLbitfield, std::string> Meta_StringsByBitfield;

extern const std::unordered_map<std::string, glp::GLboolean> Meta_BooleansByString;
extern const std::unordered_map<glp::GLboolean, std::string> Meta_StringsByBoolean;

extern const std::unordered_map<std::string, glp::GLenum> Meta_EnumsByString;
extern const std::unordered_map<glp::GLenum, std::string> Meta_StringsByEnum;

extern const std::unordered_map<std::string, glp::GLextension> Meta_ExtensionsByString;
extern const std::unordered_map<glp::GLextension, std::string> Meta_StringsByExtension;

extern const std::unordered_map<std::string, std::set<glp::GLextension>> Meta_ExtensionsByFunctionString;
extern const std::unordered_map<glp::GLextension, std::set<std::string>> Meta_FunctionStringsByExtension;

extern const std::unordered_map<glp::GLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<glp::AttribMask, std::string> Meta_StringsByAttribMask;
extern const std::unordered_map<glp::BufferBitQCOM, std::string> Meta_StringsByBufferBitQCOM;
extern const std::unordered_map<glp::ClearBufferMask, std::string> Meta_StringsByClearBufferMask;
extern const std::unordered_map<glp::ContextFlagMask, std::string> Meta_StringsByContextFlagMask;
extern const std::unordered_map<glp::MapBufferUsageMask, std::string> Meta_StringsByMapBufferUsageMask;
extern const std::unordered_map<glp::MemoryBarrierMask, std::string> Meta_StringsByMemoryBarrierMask;
extern const std::unordered_map<glp::PathRenderingMaskNV, std::string> Meta_StringsByPathRenderingMaskNV;
extern const std::unordered_map<glp::PerformanceQueryCapsMaskINTEL, std::string> Meta_StringsByPerformanceQueryCapsMaskINTEL;
extern const std::unordered_map<glp::SyncObjectMask, std::string> Meta_StringsBySyncObjectMask;
extern const std::unordered_map<glp::UseProgramStageMask, std::string> Meta_StringsByUseProgramStageMask;
extern const std::unordered_map<glp::UnusedMask, std::string> Meta_StringsByUnusedMask;
extern const std::unordered_map<glp::BufferAccessMask, std::string> Meta_StringsByBufferAccessMask;
extern const std::unordered_map<glp::BufferStorageMask, std::string> Meta_StringsByBufferStorageMask;
extern const std::unordered_map<glp::PathFontStyle, std::string> Meta_StringsByPathFontStyle;

} // namespace glpbinding
