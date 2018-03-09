
#pragma once


#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <set>
#include <array>

#include <wglbinding/wgl/types.h>
#include <wglbinding/wgl/extension.h>


namespace wglbinding
{


class Version;

extern const std::array<std::unordered_map<std::string, wgl::GLextension>, 27> Meta_ExtensionsByStringMaps;
extern const std::unordered_map<wgl::GLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<wgl::GLboolean, std::string> Meta_StringsByBoolean;
extern const std::unordered_map<wgl::GLenum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<wgl::GLextension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<wgl::GLextension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;


extern const std::array<std::unordered_map<std::string, wgl::GLbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, wgl::GLboolean> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, wgl::GLenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<wgl::GLextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} // namespace wglbinding
