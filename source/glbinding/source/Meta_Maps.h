#pragma once

#include <string>

#include <unordered_map>
#include <vector>
#include <set>

#include <glbinding/types.h>
#include <glbinding/extension.h>


namespace gl
{

class Version;

extern const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString;
extern const std::unordered_map<GLbitfield, std::string> Meta_StringsByBitfield;

extern const std::unordered_map<std::string, GLboolean> Meta_BooleansByString;
extern const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean;

extern const std::unordered_map<std::string, GLenum> Meta_EnumsByString;
extern const std::unordered_map<GLenum, std::string> Meta_StringsByEnum;

extern const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString;
extern const std::unordered_map<GLextension, std::string> Meta_StringsByExtension;

extern const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString;
extern const std::unordered_map<GLextension, std::set<std::string>> Meta_FunctionStringsByExtension;

extern const std::unordered_map<GLextension, Version> Meta_ReqVersionsByExtension;


} // namespace gl
