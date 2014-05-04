#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/types.h>

namespace glbinding {

/*
<group name="Boolean">
    <enum name="GL_FALSE"/>
    <enum name="GL_TRUE"/>
</group>

<enum value="0" name="GL_FALSE"/>
<enum value="1" name="GL_TRUE"/>
*/
enum class Boolean : GLBbool {
    FALSE = 0,
    TRUE = 1
};

/*
<group name="ColorPointerType">
    <enum name="GL_BYTE"/>
    <enum name="GL_DOUBLE"/>
    <enum name="GL_FLOAT"/>
    <enum name="GL_INT"/>
    <enum name="GL_SHORT"/>
    <enum name="GL_UNSIGNED_BYTE"/>
    <enum name="GL_UNSIGNED_INT"/>
    <enum name="GL_UNSIGNED_SHORT"/>
</group>

<enum value="0x1400" name="GL_BYTE"/>
<enum value="0x1401" name="GL_UNSIGNED_BYTE"/>
<enum value="0x1402" name="GL_SHORT"/>
<enum value="0x1403" name="GL_UNSIGNED_SHORT"/>
<enum value="0x1404" name="GL_INT"/>
<enum value="0x1405" name="GL_UNSIGNED_INT"/>
<enum value="0x1406" name="GL_FLOAT"/>
<enum value="0x1407" name="GL_2_BYTES"/>
<enum value="0x1408" name="GL_3_BYTES"/>
<enum value="0x1409" name="GL_4_BYTES"/>
<enum value="0x140A" name="GL_DOUBLE"/>
<enum value="0x140A" name="GL_DOUBLE_EXT"/>
*/
enum class DataType : int {
    BYTE = 0x1400,
    UNSIGNED_BYTE = 0x1401,
    SHORT = 0x1402,
    UNSIGNED_SHORT = 0x1403,
    INT = 0x1404,
    UNSIGNED_INT = 0x1405,
    FLOAT = 0x1406,
    DOUBLE = 0x140A
};

/*
<group name="ErrorCode">
    <enum name="GL_INVALID_ENUM"/>
    <enum name="GL_INVALID_FRAMEBUFFER_OPERATION"/>
    <enum name="GL_INVALID_FRAMEBUFFER_OPERATION_EXT"/>
    <enum name="GL_INVALID_FRAMEBUFFER_OPERATION_OES"/>
    <enum name="GL_INVALID_OPERATION"/>
    <enum name="GL_INVALID_VALUE"/>
    <enum name="GL_NO_ERROR"/>
    <enum name="GL_OUT_OF_MEMORY"/>
    <enum name="GL_STACK_OVERFLOW"/>
    <enum name="GL_STACK_UNDERFLOW"/>
    <enum name="GL_TABLE_TOO_LARGE"/>
    <enum name="GL_TABLE_TOO_LARGE_EXT"/>
    <enum name="GL_TEXTURE_TOO_LARGE_EXT"/>
</group>

<enum value="0" name="GL_NO_ERROR"/>

<enum value="0x0500" name="GL_INVALID_ENUM"/>
<enum value="0x0501" name="GL_INVALID_VALUE"/>
<enum value="0x0502" name="GL_INVALID_OPERATION"/>
<enum value="0x0503" name="GL_STACK_OVERFLOW"/>
<enum value="0x0503" name="GL_STACK_OVERFLOW_KHR"/>
<enum value="0x0504" name="GL_STACK_UNDERFLOW"/>
<enum value="0x0504" name="GL_STACK_UNDERFLOW_KHR"/>
<enum value="0x0505" name="GL_OUT_OF_MEMORY"/>
<enum value="0x0506" name="GL_INVALID_FRAMEBUFFER_OPERATION"/>
<enum value="0x0506" name="GL_INVALID_FRAMEBUFFER_OPERATION_EXT"/>
<enum value="0x0506" name="GL_INVALID_FRAMEBUFFER_OPERATION_OES"/>

*/
enum class Error : int {
    NO_ERROR = 0,
    INVALID_ENUM = 0x0500,
    INVALID_VALUE = 0x0501,
    INVALID_OPERATION = 0x0502,
    STACK_OVERFLOW = 0x0503,
    STACK_UNDERFLOW = 0x0504,
    OUT_OF_MEMORY = 0x0505
};

/*
<group name="PrimitiveType">
    <enum name="GL_LINES"/>
    <enum name="GL_LINES_ADJACENCY"/>
    <enum name="GL_LINES_ADJACENCY_ARB"/>
    <enum name="GL_LINES_ADJACENCY_EXT"/>
    <enum name="GL_LINE_LOOP"/>
    <enum name="GL_LINE_STRIP"/>
    <enum name="GL_LINE_STRIP_ADJACENCY"/>
    <enum name="GL_LINE_STRIP_ADJACENCY_ARB"/>
    <enum name="GL_LINE_STRIP_ADJACENCY_EXT"/>
    <enum name="GL_PATCHES"/>
    <enum name="GL_POINTS"/>
    <enum name="GL_POLYGON"/>
    <enum name="GL_QUADS"/>
    <enum name="GL_QUAD_STRIP"/>
    <enum name="GL_TRIANGLES"/>
    <enum name="GL_TRIANGLES_ADJACENCY"/>
    <enum name="GL_TRIANGLES_ADJACENCY_ARB"/>
    <enum name="GL_TRIANGLES_ADJACENCY_EXT"/>
    <enum name="GL_TRIANGLE_FAN"/>
    <enum name="GL_TRIANGLE_STRIP"/>
    <enum name="GL_TRIANGLE_STRIP_ADJACENCY"/>
    <enum name="GL_TRIANGLE_STRIP_ADJACENCY_ARB"/>
    <enum name="GL_TRIANGLE_STRIP_ADJACENCY_EXT"/>
</group>

<enum value="0x0000" name="GL_POINTS"/>
<enum value="0x0001" name="GL_LINES"/>
<enum value="0x0002" name="GL_LINE_LOOP"/>
<enum value="0x0003" name="GL_LINE_STRIP"/>
<enum value="0x0004" name="GL_TRIANGLES"/>
<enum value="0x0005" name="GL_TRIANGLE_STRIP"/>
<enum value="0x0006" name="GL_TRIANGLE_FAN"/>
<enum value="0x0007" name="GL_QUADS"/>
<enum value="0x0008" name="GL_QUAD_STRIP"/>
<enum value="0x0009" name="GL_POLYGON"/>
<enum value="0x000A" name="GL_LINES_ADJACENCY"/>
<enum value="0x000A" name="GL_LINES_ADJACENCY_ARB"/>
<enum value="0x000A" name="GL_LINES_ADJACENCY_EXT"/>
<enum value="0x000B" name="GL_LINE_STRIP_ADJACENCY"/>
<enum value="0x000B" name="GL_LINE_STRIP_ADJACENCY_ARB"/>
<enum value="0x000B" name="GL_LINE_STRIP_ADJACENCY_EXT"/>
<enum value="0x000C" name="GL_TRIANGLES_ADJACENCY"/>
<enum value="0x000C" name="GL_TRIANGLES_ADJACENCY_ARB"/>
<enum value="0x000C" name="GL_TRIANGLES_ADJACENCY_EXT"/>
<enum value="0x000D" name="GL_TRIANGLE_STRIP_ADJACENCY"/>
<enum value="0x000D" name="GL_TRIANGLE_STRIP_ADJACENCY_ARB"/>
<enum value="0x000D" name="GL_TRIANGLE_STRIP_ADJACENCY_EXT"/>
<enum value="0x000E" name="GL_PATCHES"/>
*/
enum class Primitive : int {
    POINTS = 0x0000,
    LINES = 0x0001,
    LINE_LOOP = 0x0002,
    LINE_STRIP = 0x0003,
    TRIANGLES = 0x0004,
    TRIANGLE_STRIP = 0x0005,
    TRIANGLE_FAN = 0x0006,
    QUADS = 0x0007,
    QUAD_STRIP = 0x0008,
    POLYGON = 0x0009
};

/*
<enums namespace="GL" start="0x8B30" end="0x8B3F" group="ShaderType" vendor="ARB">
    <enum value="0x8B30" name="GL_FRAGMENT_SHADER"/>
    <enum value="0x8B30" name="GL_FRAGMENT_SHADER_ARB"/>
    <enum value="0x8B31" name="GL_VERTEX_SHADER"/>
    <enum value="0x8B31" name="GL_VERTEX_SHADER_ARB"/>
        <unused start="0x8B32" end="0x8B3F" comment="For shader types"/>
</enums>

<enum value="0x91B9" name="GL_COMPUTE_SHADER"/>
<enum value="0x8E87" name="GL_TESS_EVALUATION_SHADER"/>
<enum value="0x8E88" name="GL_TESS_CONTROL_SHADER"/>
*/
enum class ShaderType : int {
    FRAGMENT_SHADER = 0x8B30,
    VERTEX_SHADER = 0x8B31,
    GEOMETRY_SHADER = 0x8DD9,
    TESS_EVALUATION_SHADER = 0x8E87,
    TESS_CONTROL_SHADER = 0x8E88,
    COMPUTE_SHADER = 0x91B9
};

/*
<enum value="0x8892" name="GL_ARRAY_BUFFER"/>
<enum value="0x8892" name="GL_ARRAY_BUFFER_ARB"/>
<enum value="0x8893" name="GL_ELEMENT_ARRAY_BUFFER"/>
<enum value="0x8893" name="GL_ELEMENT_ARRAY_BUFFER_ARB"/>
*/
enum class BufferTarget : int {
    ARRAY_BUFFER = 0x8892,
    ELEMENT_ARRAY_BUFFER = 0x8893
};

/*
<group name="ClearBufferMask">
    <enum name="GL_ACCUM_BUFFER_BIT"/>
    <enum name="GL_COLOR_BUFFER_BIT"/>
    <enum name="GL_COVERAGE_BUFFER_BIT_NV"/>
    <enum name="GL_DEPTH_BUFFER_BIT"/>
    <enum name="GL_STENCIL_BUFFER_BIT"/>
</group>

 <enums namespace="GL" group="AttribMask" type="bitmask">
        <enum value="0x00000001" name="GL_CURRENT_BIT"/>
        <enum value="0x00000002" name="GL_POINT_BIT"/>
        <enum value="0x00000004" name="GL_LINE_BIT"/>
        <enum value="0x00000008" name="GL_POLYGON_BIT"/>
        <enum value="0x00000010" name="GL_POLYGON_STIPPLE_BIT"/>
        <enum value="0x00000020" name="GL_PIXEL_MODE_BIT"/>
        <enum value="0x00000040" name="GL_LIGHTING_BIT"/>
        <enum value="0x00000080" name="GL_FOG_BIT"/>
        <enum value="0x00000100" name="GL_DEPTH_BUFFER_BIT"/>
        <enum value="0x00000200" name="GL_ACCUM_BUFFER_BIT"/>
        <enum value="0x00000400" name="GL_STENCIL_BUFFER_BIT"/>
        <enum value="0x00000800" name="GL_VIEWPORT_BIT"/>
        <enum value="0x00001000" name="GL_TRANSFORM_BIT"/>
        <enum value="0x00002000" name="GL_ENABLE_BIT"/>
        <enum value="0x00004000" name="GL_COLOR_BUFFER_BIT"/>
        <enum value="0x00008000" name="GL_HINT_BIT"/>
        <enum value="0x00010000" name="GL_EVAL_BIT"/>
        <enum value="0x00020000" name="GL_LIST_BIT"/>
        <enum value="0x00040000" name="GL_TEXTURE_BIT"/>
        <enum value="0x00080000" name="GL_SCISSOR_BIT"/>
        <enum value="0x20000000" name="GL_MULTISAMPLE_BIT"/>
        <enum value="0x20000000" name="GL_MULTISAMPLE_BIT_ARB"/>
        <enum value="0x20000000" name="GL_MULTISAMPLE_BIT_EXT"/>
        <enum value="0x20000000" name="GL_MULTISAMPLE_BIT_3DFX"/>
        <enum value="0xFFFFFFFF" name="GL_ALL_ATTRIB_BITS" comment="Guaranteed to mark all attribute groups at once"/>
    </enums>
*/
enum class Bit : int {
    COLOR_BUFFER_BIT = 0x00004000,
    DEPTH_BUFFER_BIT = 0x00000100
};

inline GLBbitfield operator|(Bit a, Bit b)
{
    return static_cast<GLBbitfield>(a) | static_cast<GLBbitfield>(b);
}

/*
<enum name="GL_STREAM_DRAW"/>
<enum name="GL_STREAM_READ"/>
<enum name="GL_STREAM_COPY"/>
<enum name="GL_STATIC_DRAW"/>
<enum name="GL_STATIC_READ"/>
<enum name="GL_STATIC_COPY"/>
<enum name="GL_DYNAMIC_DRAW"/>
<enum name="GL_DYNAMIC_READ"/>
<enum name="GL_DYNAMIC_COPY"/>

<enum value="0x88E0" name="GL_STREAM_DRAW"/>
<enum value="0x88E0" name="GL_STREAM_DRAW_ARB"/>
<enum value="0x88E1" name="GL_STREAM_READ"/>
<enum value="0x88E1" name="GL_STREAM_READ_ARB"/>
<enum value="0x88E2" name="GL_STREAM_COPY"/>
<enum value="0x88E2" name="GL_STREAM_COPY_ARB"/>
    <unused start="0x88E3" comment="To extend ARB_vbo"/>
<enum value="0x88E4" name="GL_STATIC_DRAW"/>
<enum value="0x88E4" name="GL_STATIC_DRAW_ARB"/>
<enum value="0x88E5" name="GL_STATIC_READ"/>
<enum value="0x88E5" name="GL_STATIC_READ_ARB"/>
<enum value="0x88E6" name="GL_STATIC_COPY"/>
<enum value="0x88E6" name="GL_STATIC_COPY_ARB"/>
    <unused start="0x88E7" comment="To extend ARB_vbo"/>
<enum value="0x88E8" name="GL_DYNAMIC_DRAW"/>
<enum value="0x88E8" name="GL_DYNAMIC_DRAW_ARB"/>
<enum value="0x88E9" name="GL_DYNAMIC_READ"/>
<enum value="0x88E9" name="GL_DYNAMIC_READ_ARB"/>
<enum value="0x88EA" name="GL_DYNAMIC_COPY"/>
<enum value="0x88EA" name="GL_DYNAMIC_COPY_ARB"/>
*/
enum class AccessMode : int {
    STREAM_DRAW = 0x88E0,
    STREAM_READ = 0x88E1,
    STREAM_COPY = 0x88E2,
    STATIC_DRAW = 0x88E4,
    STATIC_READ = 0x88E5,
    STATIC_COPY = 0x88E6,
    DYNAMIC_DRAW = 0x88E8,
    DYNAMIC_READ = 0x88E9,
    DYNAMIC_COPY = 0x88EA
};

} // namespace glbinding
