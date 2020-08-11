
#include <glbinding-aux/Meta.h>

#include <glbinding/gl/bitfield.h>

#include "Meta_Maps.h"


using namespace gl;


namespace
{


const auto none = std::string{};


} // namespace


namespace glbinding { namespace aux
{


const std::string & Meta::getString(const AttribMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByAttribMask.find(glbitfield);
    if (i != Meta_StringsByAttribMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const BufferStorageMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByBufferStorageMask.find(glbitfield);
    if (i != Meta_StringsByBufferStorageMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const ClearBufferMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByClearBufferMask.find(glbitfield);
    if (i != Meta_StringsByClearBufferMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const ClientAttribMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByClientAttribMask.find(glbitfield);
    if (i != Meta_StringsByClientAttribMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const ContextFlagMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByContextFlagMask.find(glbitfield);
    if (i != Meta_StringsByContextFlagMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const ContextProfileMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByContextProfileMask.find(glbitfield);
    if (i != Meta_StringsByContextProfileMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const FfdMaskSGIX glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByFfdMaskSGIX.find(glbitfield);
    if (i != Meta_StringsByFfdMaskSGIX.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const FragmentShaderColorModMaskATI glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByFragmentShaderColorModMaskATI.find(glbitfield);
    if (i != Meta_StringsByFragmentShaderColorModMaskATI.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const FragmentShaderDestMaskATI glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByFragmentShaderDestMaskATI.find(glbitfield);
    if (i != Meta_StringsByFragmentShaderDestMaskATI.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const FragmentShaderDestModMaskATI glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByFragmentShaderDestModMaskATI.find(glbitfield);
    if (i != Meta_StringsByFragmentShaderDestModMaskATI.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const MapBufferAccessMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByMapBufferAccessMask.find(glbitfield);
    if (i != Meta_StringsByMapBufferAccessMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const MemoryBarrierMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByMemoryBarrierMask.find(glbitfield);
    if (i != Meta_StringsByMemoryBarrierMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const OcclusionQueryEventMaskAMD glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByOcclusionQueryEventMaskAMD.find(glbitfield);
    if (i != Meta_StringsByOcclusionQueryEventMaskAMD.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const PathFontStyle glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByPathFontStyle.find(glbitfield);
    if (i != Meta_StringsByPathFontStyle.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const PathMetricMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByPathMetricMask.find(glbitfield);
    if (i != Meta_StringsByPathMetricMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const PathRenderingMaskNV glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByPathRenderingMaskNV.find(glbitfield);
    if (i != Meta_StringsByPathRenderingMaskNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const PerformanceQueryCapsMaskINTEL glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByPerformanceQueryCapsMaskINTEL.find(glbitfield);
    if (i != Meta_StringsByPerformanceQueryCapsMaskINTEL.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const SyncObjectMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsBySyncObjectMask.find(glbitfield);
    if (i != Meta_StringsBySyncObjectMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const TextureStorageMaskAMD glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByTextureStorageMaskAMD.find(glbitfield);
    if (i != Meta_StringsByTextureStorageMaskAMD.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const UnusedMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByUnusedMask.find(glbitfield);
    if (i != Meta_StringsByUnusedMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const UseProgramStageMask glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByUseProgramStageMask.find(glbitfield);
    if (i != Meta_StringsByUseProgramStageMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VertexHintsMaskPGI glbitfield) GLBINDING_NOEXCEPT
{
    const auto i = Meta_StringsByVertexHintsMaskPGI.find(glbitfield);
    if (i != Meta_StringsByVertexHintsMaskPGI.end())
    {
        return i->second;
    }
    return none;
}


} } // namespace glbinding::aux