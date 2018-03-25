
#include "Meta_Maps.h"

#include <glscbinding/glsc/bitfield.h>


using namespace glsc;


namespace glscbinding { namespace aux
{


const std::unordered_map<AttribMask, std::string> Meta_StringsByAttribMask =
{
    { AttribMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { AttribMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
    { AttribMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" },
    { AttribMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" }
};


const std::unordered_map<ClearBufferMask, std::string> Meta_StringsByClearBufferMask =
{
    { ClearBufferMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { ClearBufferMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
    { ClearBufferMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" },
    { ClearBufferMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" },
    { ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV, "GL_COVERAGE_BUFFER_BIT_NV" }
};




} } // namespace glscbinding::aux
