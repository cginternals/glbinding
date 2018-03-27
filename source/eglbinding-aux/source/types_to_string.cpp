
#include <eglbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <eglbinding/AbstractVersion.h>
#include <eglbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace egl
{


std::ostream & operator<<(std::ostream & stream, const EGLextension & value)
{
    stream << eglbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace egl

namespace egl
{


std::ostream & operator<<(std::ostream & stream, const EGLenum & value)
{
    stream << eglbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace egl

namespace egl
{


std::ostream & operator<<(std::ostream & stream, const EGLContextFlagMask & value)
{
    stream << eglbinding::aux::bitfieldString<EGLContextFlagMask>(value);
    return stream;
}


} // namespace egl

namespace egl
{


std::ostream & operator<<(std::ostream & stream, const EGLContextProfileMask & value)
{
    stream << eglbinding::aux::bitfieldString<EGLContextProfileMask>(value);
    return stream;
}


} // namespace egl

namespace egl
{


std::ostream & operator<<(std::ostream & stream, const EGLDRMBufferUseMESAMask & value)
{
    stream << eglbinding::aux::bitfieldString<EGLDRMBufferUseMESAMask>(value);
    return stream;
}


} // namespace egl

namespace egl
{


std::ostream & operator<<(std::ostream & stream, const EGLLockUsageHintKHRMask & value)
{
    stream << eglbinding::aux::bitfieldString<EGLLockUsageHintKHRMask>(value);
    return stream;
}


} // namespace egl

namespace egl
{


std::ostream & operator<<(std::ostream & stream, const EGLNativeBufferUsageFlags & value)
{
    stream << eglbinding::aux::bitfieldString<EGLNativeBufferUsageFlags>(value);
    return stream;
}


} // namespace egl

namespace egl
{


std::ostream & operator<<(std::ostream & stream, const EGLRenderableTypeMask & value)
{
    stream << eglbinding::aux::bitfieldString<EGLRenderableTypeMask>(value);
    return stream;
}


} // namespace egl

namespace egl
{


std::ostream & operator<<(std::ostream & stream, const EGLSurfaceTypeMask & value)
{
    stream << eglbinding::aux::bitfieldString<EGLSurfaceTypeMask>(value);
    return stream;
}


} // namespace egl

namespace egl
{


std::ostream & operator<<(std::ostream & stream, const EGLSyncFlagsKHR & value)
{
    stream << eglbinding::aux::bitfieldString<EGLSyncFlagsKHR>(value);
    return stream;
}


} // namespace egl



namespace eglbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<egl::EGLenum> & value)
{
    const auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<egl::EGLbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<egl::EGLBoolean> & value)
{
    auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}


std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version)
{
    stream << version.toString();

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AbstractValue * value)
{
    if (typeid(*value) == typeid(AbstractValue))
    {
        stream << reinterpret_cast<const void*>(value);
    }


    else if (typeid(*value) == typeid(Value<egl::EGLextension>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLextension>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLextension *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLextension *>*>(value);
    }


    // Omit egl::EGLbitfield


    else if (typeid(*value) == typeid(Value<egl::AHardwareBuffer *>))
    {
        stream << *reinterpret_cast<const Value<egl::AHardwareBuffer *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLBoolean>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLBoolean>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLBoolean *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLBoolean *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLenum>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLenum>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLenum *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLenum *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLAttribKHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLAttribKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLAttribKHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLAttribKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLAttrib>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLAttrib>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLAttrib *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLAttrib *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLClientBuffer>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLClientBuffer>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLClientBuffer *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLClientBuffer *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLConfig>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLConfig>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLConfig *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLConfig *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLContext>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLContext>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLContext *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLContext *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLDeviceEXT>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLDeviceEXT>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLDeviceEXT *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLDeviceEXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLDisplay>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLDisplay>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLDisplay *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLDisplay *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLImage>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLImage>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLImage *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLImage *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLImageKHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLImageKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLImageKHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLImageKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLLabelKHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLLabelKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLLabelKHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLLabelKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLObjectKHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLObjectKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLObjectKHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLObjectKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLOutputLayerEXT>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLOutputLayerEXT>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLOutputLayerEXT *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLOutputLayerEXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLOutputPortEXT>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLOutputPortEXT>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLOutputPortEXT *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLOutputPortEXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLStreamKHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLStreamKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLStreamKHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLStreamKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSurface>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSurface>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSurface *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSurface *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSync>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSync>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSync *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSync *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSyncKHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSyncKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSyncKHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSyncKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSyncNV>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSyncNV>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSyncNV *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSyncNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::__eglMustCastToProperFunctionPointerType>))
    {
        stream << *reinterpret_cast<const Value<egl::__eglMustCastToProperFunctionPointerType>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::__eglMustCastToProperFunctionPointerType *>))
    {
        stream << *reinterpret_cast<const Value<egl::__eglMustCastToProperFunctionPointerType *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLTimeKHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLTimeKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLTimeKHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLTimeKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLTime>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLTime>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLTime *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLTime *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLTimeNV>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLTimeNV>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLTimeNV *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLTimeNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLuint64NV>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLuint64NV>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLuint64NV *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLuint64NV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLuint64KHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLuint64KHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLuint64KHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLuint64KHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLnsecsANDROID>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLnsecsANDROID>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLnsecsANDROID *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLnsecsANDROID *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLNativeFileDescriptorKHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLNativeFileDescriptorKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLNativeFileDescriptorKHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLNativeFileDescriptorKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLsizeiANDROID>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLsizeiANDROID>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLsizeiANDROID *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLsizeiANDROID *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSetBlobFuncANDROID>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSetBlobFuncANDROID>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSetBlobFuncANDROID *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSetBlobFuncANDROID *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLGetBlobFuncANDROID>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLGetBlobFuncANDROID>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLGetBlobFuncANDROID *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLGetBlobFuncANDROID *>*>(value);
    }


    else if (typeid(*value) == typeid(Value<egl::EGLClientPixmapHI *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLClientPixmapHI *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLDEBUGPROCKHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLDEBUGPROCKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLDEBUGPROCKHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLDEBUGPROCKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLContextFlagMask>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLContextFlagMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLContextFlagMask *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLContextFlagMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLContextProfileMask>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLContextProfileMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLContextProfileMask *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLContextProfileMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLDRMBufferUseMESAMask>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLDRMBufferUseMESAMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLDRMBufferUseMESAMask *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLDRMBufferUseMESAMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLLockUsageHintKHRMask>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLLockUsageHintKHRMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLLockUsageHintKHRMask *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLLockUsageHintKHRMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLNativeBufferUsageFlags>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLNativeBufferUsageFlags>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLNativeBufferUsageFlags *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLNativeBufferUsageFlags *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLRenderableTypeMask>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLRenderableTypeMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLRenderableTypeMask *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLRenderableTypeMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSurfaceTypeMask>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSurfaceTypeMask>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSurfaceTypeMask *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSurfaceTypeMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSyncFlagsKHR>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSyncFlagsKHR>*>(value);
    }

    else if (typeid(*value) == typeid(Value<egl::EGLSyncFlagsKHR *>))
    {
        stream << *reinterpret_cast<const Value<egl::EGLSyncFlagsKHR *>*>(value);
    }

    else // expect an AbstractValue with a pointer in first member
    {
        stream << *reinterpret_cast<const Value<void *>*>(value);
    }

    return stream;
}


} // namespace eglbinding
