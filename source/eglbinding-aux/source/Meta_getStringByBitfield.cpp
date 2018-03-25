
#include <eglbinding-aux/Meta.h>

#include <eglbinding/egl/bitfield.h>

#include "Meta_Maps.h"


using namespace egl;


namespace
{


const auto none = std::string{};


} // namespace


namespace eglbinding { namespace aux
{



const std::string & Meta::getString(const EGLContextFlagMask bitfield)
{
    const auto i = Meta_StringsByEGLContextFlagMask.find(bitfield);
    if (i != Meta_StringsByEGLContextFlagMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const EGLContextProfileMask bitfield)
{
    const auto i = Meta_StringsByEGLContextProfileMask.find(bitfield);
    if (i != Meta_StringsByEGLContextProfileMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const EGLDRMBufferUseMESAMask bitfield)
{
    const auto i = Meta_StringsByEGLDRMBufferUseMESAMask.find(bitfield);
    if (i != Meta_StringsByEGLDRMBufferUseMESAMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const EGLLockUsageHintKHRMask bitfield)
{
    const auto i = Meta_StringsByEGLLockUsageHintKHRMask.find(bitfield);
    if (i != Meta_StringsByEGLLockUsageHintKHRMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const EGLNativeBufferUsageFlags bitfield)
{
    const auto i = Meta_StringsByEGLNativeBufferUsageFlags.find(bitfield);
    if (i != Meta_StringsByEGLNativeBufferUsageFlags.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const EGLRenderableTypeMask bitfield)
{
    const auto i = Meta_StringsByEGLRenderableTypeMask.find(bitfield);
    if (i != Meta_StringsByEGLRenderableTypeMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const EGLSurfaceTypeMask bitfield)
{
    const auto i = Meta_StringsByEGLSurfaceTypeMask.find(bitfield);
    if (i != Meta_StringsByEGLSurfaceTypeMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const EGLSyncFlagsKHR bitfield)
{
    const auto i = Meta_StringsByEGLSyncFlagsKHR.find(bitfield);
    if (i != Meta_StringsByEGLSyncFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}


} } // namespace eglbinding::aux
