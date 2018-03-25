
#pragma once


#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <set>
#include <array>

#include <glscbinding/glsc/types.h>
#include <glscbinding/glsc/extension.h>


namespace glscbinding
{


class Version;


namespace aux
{


extern const std::array<std::unordered_map<std::string, glsc::GLextension>, 27> Meta_ExtensionsByStringMaps;
extern const std::unordered_map<glsc::GLextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<glsc::GLboolean, std::string> Meta_StringsByBoolean;
extern const std::unordered_map<glsc::GLenum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<glsc::GLextension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<glsc::GLextension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;

extern const std::unordered_map<glsc::AttribMask, std::string> Meta_StringsByAttribMask;
extern const std::unordered_map<glsc::ClearBufferMask, std::string> Meta_StringsByClearBufferMask;

extern const std::array<std::unordered_map<std::string, glsc::GLbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, glsc::GLboolean> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, glsc::GLenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<glsc::GLextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} } // namespace glscbinding::aux
