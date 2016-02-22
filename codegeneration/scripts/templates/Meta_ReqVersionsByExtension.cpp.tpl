
#include "Meta_Maps.h"

#include <glbinding/gl/extension.h>
#include <glbinding/Version.h>


using namespace gl;

namespace glbinding
{

const std::unordered_map<GLextension, Version> Meta_ReqVersionsByExtension =
{
{{#extensions}}
    { GLextension::{{identifier}}, { {{incoreMajor}}, {{incoreMinor}} } }{{^last}},{{/last}}
{{/extensions}}
};

} // namespace glbinding
