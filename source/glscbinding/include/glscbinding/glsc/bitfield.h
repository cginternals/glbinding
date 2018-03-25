
#pragma once


#include <glscbinding/noglsc.h>

#include <glscbinding/glscbinding_features.h>

#include <glscbinding/SharedBitfield.h>


namespace glsc
{


enum class AttribMask : unsigned int
{
    GL_NONE_BIT               = 0x0, // Generic GL_NONE_BIT
    GL_DEPTH_BUFFER_BIT       = 0x00000100,
    GL_STENCIL_BUFFER_BIT     = 0x00000400,
    GL_COLOR_BUFFER_BIT       = 0x00004000,
};


enum class ClearBufferMask : unsigned int
{
    GL_NONE_BIT               = 0x0, // Generic GL_NONE_BIT
    GL_DEPTH_BUFFER_BIT       = 0x00000100, // reuse from AttribMask
    GL_STENCIL_BUFFER_BIT     = 0x00000400, // reuse from AttribMask
    GL_COLOR_BUFFER_BIT       = 0x00004000, // reuse from AttribMask
    GL_COVERAGE_BUFFER_BIT_NV = 0x00008000,
};



// import bitfields to namespace

GLSCBINDING_CONSTEXPR static const glscbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_NONE_BIT = AttribMask::GL_NONE_BIT;
GLSCBINDING_CONSTEXPR static const glscbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
GLSCBINDING_CONSTEXPR static const glscbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
GLSCBINDING_CONSTEXPR static const glscbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;
GLSCBINDING_CONSTEXPR static const ClearBufferMask GL_COVERAGE_BUFFER_BIT_NV = ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV;


} // namespace glsc
