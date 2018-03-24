
#pragma once


#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <set>
#include <array>

#include <{{api}}binding/{{api}}/types.h>
#include <{{api}}binding/{{api}}/extension.h>


namespace {{api}}binding
{


class Version;


namespace aux
{


extern const std::array<std::unordered_map<std::string, {{api}}::GLextension>, 27> Meta_ExtensionsByStringMaps;
extern const std::unordered_map<{{api}}::GLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<{{api}}::GLboolean, std::string> Meta_StringsByBoolean;
extern const std::unordered_map<{{api}}::GLenum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<{{api}}::GLextension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<{{api}}::GLextension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;

{{#bitfieldGroups.items}}
extern const std::unordered_map<{{api}}::{{item}}, std::string> Meta_StringsBy{{item}};
{{/bitfieldGroups.items}}

extern const std::array<std::unordered_map<std::string, {{api}}::GLbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, {{api}}::GLboolean> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, {{api}}::GLenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<{{api}}::GLextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} } // namespace {{api}}binding::aux
