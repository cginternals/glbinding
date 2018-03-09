
#pragma once


#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <set>
#include <array>

#include <glxbinding/glx/types.h>
#include <glxbinding/glx/extension.h>


namespace glxbinding
{


class Version;

extern const std::array<std::unordered_map<std::string, glx::GLextension>, 27> Meta_ExtensionsByStringMaps;
extern const std::unordered_map<glx::GLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<glx::GLboolean, std::string> Meta_StringsByBoolean;
extern const std::unordered_map<glx::GLenum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<glx::GLextension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<glx::GLextension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;


extern const std::array<std::unordered_map<std::string, glx::GLbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, glx::GLboolean> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, glx::GLenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<glx::GLextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} // namespace glxbinding
