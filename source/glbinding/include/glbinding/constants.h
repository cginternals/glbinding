#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/types.h>

namespace glbinding {

enum class Boolean : GLBbool {
    FALSE = 0,
    TRUE = 1
};

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

enum class Error : int {
    NO_ERROR = 0,
    INVALID_ENUM = 0x0500,
    INVALID_VALUE = 0x0501,
    INVALID_OPERATION = 0x0502,
    STACK_OVERFLOW = 0x0503,
    STACK_UNDERFLOW = 0x0504,
    OUT_OF_MEMORY = 0x0505
};

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

enum class ShaderType : int {
    FRAGMENT_SHADER = 0x8B30,
    VERTEX_SHADER = 0x8B31,
    GEOMETRY_SHADER = 0x8DD9,
    TESS_EVALUATION_SHADER = 0x8E87,
    TESS_CONTROL_SHADER = 0x8E88,
    COMPUTE_SHADER = 0x91B9
};

enum class BufferTarget : int {
    ARRAY_BUFFER = 0x8892,
    ELEMENT_ARRAY_BUFFER = 0x8893
};

enum class Bit : int {
    COLOR_BUFFER_BIT = 0x00004000,
    DEPTH_BUFFER_BIT = 0x00000100
};

inline GLBbitfield operator|(Bit a, Bit b)
{
    return static_cast<GLBbitfield>(a) | static_cast<GLBbitfield>(b);
}

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
