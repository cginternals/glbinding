
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

extern const std::array<std::unordered_map<std::string, gl::GLextension>, 27> Meta_ExtensionsByStringMaps;
extern const std::unordered_map<gl::GLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<gl::GLboolean, std::string> Meta_StringsByBoolean;
extern const std::unordered_map<gl::GLenum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<gl::GLextension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<gl::GLextension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;

{{#bitfieldGroups.items}}
extern const std::unordered_map<gl::{{item}}, std::string> Meta_StringsBy{{item}};
{{/bitfieldGroups.items}}

extern const std::array<std::unordered_map<std::string, gl::GLbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, gl::GLboolean> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, gl::GLenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<gl::GLextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} // namespace glbinding
