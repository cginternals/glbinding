
#include <glesbinding-aux/Meta.h>

#include <glesbinding/gles/bitfield.h>

#include "Meta_Maps.h"


using namespace gles;


namespace
{


const auto none = std::string{};


} // namespace


namespace glesbinding { namespace aux
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


const std::string & Meta::getString(const BufferBitQCOM bitfield)
{
    const auto i = Meta_StringsByBufferBitQCOM.find(bitfield);
    if (i != Meta_StringsByBufferBitQCOM.end())
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


const std::string & Meta::getString(const ContextFlagMask bitfield)
{
    const auto i = Meta_StringsByContextFlagMask.find(bitfield);
    if (i != Meta_StringsByContextFlagMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const FoveationConfigBitQCOM bitfield)
{
    const auto i = Meta_StringsByFoveationConfigBitQCOM.find(bitfield);
    if (i != Meta_StringsByFoveationConfigBitQCOM.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const MapBufferUsageMask bitfield)
{
    const auto i = Meta_StringsByMapBufferUsageMask.find(bitfield);
    if (i != Meta_StringsByMapBufferUsageMask.end())
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


} } // namespace glesbinding::aux
