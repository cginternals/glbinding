
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

extern const std::array<std::unordered_map<std::string, egl::GLextension>, 27> Meta_ExtensionsByStringMaps;
extern const std::unordered_map<egl::GLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<egl::GLboolean, std::string> Meta_StringsByBoolean;
extern const std::unordered_map<egl::GLenum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<egl::GLextension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<egl::GLextension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;


extern const std::array<std::unordered_map<std::string, egl::GLbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, egl::GLboolean> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, egl::GLenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<egl::GLextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} // namespace eglbinding
