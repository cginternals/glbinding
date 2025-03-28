
#pragma once


#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <set>
#include <array>

#include <glbinding/gl/types.h>
#include <glbinding/gl/extension.h>


namespace glbinding
{


class Version;


namespace aux
{


extern const std::array<std::unordered_map<std::string, gl::GLextension>, 27> Meta_ExtensionsByStringMaps;
extern const std::unordered_map<gl::GLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<gl::GLboolean, std::string> Meta_StringsByBoolean;
extern const std::multimap<gl::GLenum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<gl::GLextension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<gl::GLextension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;

extern const std::unordered_map<gl::AttribMask, std::string> Meta_StringsByAttribMask;
extern const std::unordered_map<gl::BufferStorageMask, std::string> Meta_StringsByBufferStorageMask;
extern const std::unordered_map<gl::ClearBufferMask, std::string> Meta_StringsByClearBufferMask;
extern const std::unordered_map<gl::ClientAttribMask, std::string> Meta_StringsByClientAttribMask;
extern const std::unordered_map<gl::ContextFlagMask, std::string> Meta_StringsByContextFlagMask;
extern const std::unordered_map<gl::ContextProfileMask, std::string> Meta_StringsByContextProfileMask;
extern const std::unordered_map<gl::FfdMaskSGIX, std::string> Meta_StringsByFfdMaskSGIX;
extern const std::unordered_map<gl::FragmentShaderColorModMaskATI, std::string> Meta_StringsByFragmentShaderColorModMaskATI;
extern const std::unordered_map<gl::FragmentShaderDestMaskATI, std::string> Meta_StringsByFragmentShaderDestMaskATI;
extern const std::unordered_map<gl::FragmentShaderDestModMaskATI, std::string> Meta_StringsByFragmentShaderDestModMaskATI;
extern const std::unordered_map<gl::MapBufferAccessMask, std::string> Meta_StringsByMapBufferAccessMask;
extern const std::unordered_map<gl::MemoryBarrierMask, std::string> Meta_StringsByMemoryBarrierMask;
extern const std::unordered_map<gl::OcclusionQueryEventMaskAMD, std::string> Meta_StringsByOcclusionQueryEventMaskAMD;
extern const std::unordered_map<gl::PathFontStyle, std::string> Meta_StringsByPathFontStyle;
extern const std::unordered_map<gl::PathMetricMask, std::string> Meta_StringsByPathMetricMask;
extern const std::unordered_map<gl::PerformanceQueryCapsMaskINTEL, std::string> Meta_StringsByPerformanceQueryCapsMaskINTEL;
extern const std::unordered_map<gl::SyncObjectMask, std::string> Meta_StringsBySyncObjectMask;
extern const std::unordered_map<gl::TextureStorageMaskAMD, std::string> Meta_StringsByTextureStorageMaskAMD;
extern const std::unordered_map<gl::UnusedMask, std::string> Meta_StringsByUnusedMask;
extern const std::unordered_map<gl::UseProgramStageMask, std::string> Meta_StringsByUseProgramStageMask;
extern const std::unordered_map<gl::VertexHintsMaskPGI, std::string> Meta_StringsByVertexHintsMaskPGI;


extern const std::array<std::unordered_map<std::string, gl::GLbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, gl::GLboolean> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, gl::GLenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<gl::GLextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} } // namespace glbinding::aux