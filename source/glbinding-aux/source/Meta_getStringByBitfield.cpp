
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



const std::string & Meta::getString(const AttribMask bitfield)
{
    const auto i = Meta_StringsByAttribMask.find(bitfield);
    if (i != Meta_StringsByAttribMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const BufferAccessMask bitfield)
{
    const auto i = Meta_StringsByBufferAccessMask.find(bitfield);
    if (i != Meta_StringsByBufferAccessMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const BufferStorageMask bitfield)
{
    const auto i = Meta_StringsByBufferStorageMask.find(bitfield);
    if (i != Meta_StringsByBufferStorageMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const ClearBufferMask bitfield)
{
    const auto i = Meta_StringsByClearBufferMask.find(bitfield);
    if (i != Meta_StringsByClearBufferMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const ClientAttribMask bitfield)
{
    const auto i = Meta_StringsByClientAttribMask.find(bitfield);
    if (i != Meta_StringsByClientAttribMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const ContextFlagMask bitfield)
{
    const auto i = Meta_StringsByContextFlagMask.find(bitfield);
    if (i != Meta_StringsByContextFlagMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const ContextProfileMask bitfield)
{
    const auto i = Meta_StringsByContextProfileMask.find(bitfield);
    if (i != Meta_StringsByContextProfileMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const FfdMaskSGIX bitfield)
{
    const auto i = Meta_StringsByFfdMaskSGIX.find(bitfield);
    if (i != Meta_StringsByFfdMaskSGIX.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const FragmentShaderColorModMaskATI bitfield)
{
    const auto i = Meta_StringsByFragmentShaderColorModMaskATI.find(bitfield);
    if (i != Meta_StringsByFragmentShaderColorModMaskATI.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const FragmentShaderDestMaskATI bitfield)
{
    const auto i = Meta_StringsByFragmentShaderDestMaskATI.find(bitfield);
    if (i != Meta_StringsByFragmentShaderDestMaskATI.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const FragmentShaderDestModMaskATI bitfield)
{
    const auto i = Meta_StringsByFragmentShaderDestModMaskATI.find(bitfield);
    if (i != Meta_StringsByFragmentShaderDestModMaskATI.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const MapBufferAccessMask bitfield)
{
    const auto i = Meta_StringsByMapBufferAccessMask.find(bitfield);
    if (i != Meta_StringsByMapBufferAccessMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const MemoryBarrierMask bitfield)
{
    const auto i = Meta_StringsByMemoryBarrierMask.find(bitfield);
    if (i != Meta_StringsByMemoryBarrierMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const OcclusionQueryEventMaskAMD bitfield)
{
    const auto i = Meta_StringsByOcclusionQueryEventMaskAMD.find(bitfield);
    if (i != Meta_StringsByOcclusionQueryEventMaskAMD.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const PathFontStyle bitfield)
{
    const auto i = Meta_StringsByPathFontStyle.find(bitfield);
    if (i != Meta_StringsByPathFontStyle.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const PathMetricMask bitfield)
{
    const auto i = Meta_StringsByPathMetricMask.find(bitfield);
    if (i != Meta_StringsByPathMetricMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const PathRenderingMaskNV bitfield)
{
    const auto i = Meta_StringsByPathRenderingMaskNV.find(bitfield);
    if (i != Meta_StringsByPathRenderingMaskNV.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const PerformanceQueryCapsMaskINTEL bitfield)
{
    const auto i = Meta_StringsByPerformanceQueryCapsMaskINTEL.find(bitfield);
    if (i != Meta_StringsByPerformanceQueryCapsMaskINTEL.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const SyncObjectMask bitfield)
{
    const auto i = Meta_StringsBySyncObjectMask.find(bitfield);
    if (i != Meta_StringsBySyncObjectMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const TextureStorageMaskAMD bitfield)
{
    const auto i = Meta_StringsByTextureStorageMaskAMD.find(bitfield);
    if (i != Meta_StringsByTextureStorageMaskAMD.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const UnusedMask bitfield)
{
    const auto i = Meta_StringsByUnusedMask.find(bitfield);
    if (i != Meta_StringsByUnusedMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const UseProgramStageMask bitfield)
{
    const auto i = Meta_StringsByUseProgramStageMask.find(bitfield);
    if (i != Meta_StringsByUseProgramStageMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const VertexHintsMaskPGI bitfield)
{
    const auto i = Meta_StringsByVertexHintsMaskPGI.find(bitfield);
    if (i != Meta_StringsByVertexHintsMaskPGI.end())
    {
        return i->second;
    }
    return none;
}


} } // namespace glbinding::aux
