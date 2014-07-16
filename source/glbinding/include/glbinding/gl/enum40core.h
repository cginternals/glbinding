#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/gl/types.h>

#include <glbinding/gl/enum.h>


namespace gl40core
{

// import enums to namespace


// AlphaFunction

static const gl::GLenum GL_NEVER = gl::GLenum::GL_NEVER;
static const gl::GLenum GL_LESS = gl::GLenum::GL_LESS;
static const gl::GLenum GL_EQUAL = gl::GLenum::GL_EQUAL;
static const gl::GLenum GL_LEQUAL = gl::GLenum::GL_LEQUAL;
static const gl::GLenum GL_GREATER = gl::GLenum::GL_GREATER;
static const gl::GLenum GL_NOTEQUAL = gl::GLenum::GL_NOTEQUAL;
static const gl::GLenum GL_GEQUAL = gl::GLenum::GL_GEQUAL;
static const gl::GLenum GL_ALWAYS = gl::GLenum::GL_ALWAYS;

// BlendingFactorDest

static const gl::GLenum GL_ZERO = gl::GLenum::GL_ZERO;
static const gl::GLenum GL_SRC_COLOR = gl::GLenum::GL_SRC_COLOR;
static const gl::GLenum GL_ONE_MINUS_SRC_COLOR = gl::GLenum::GL_ONE_MINUS_SRC_COLOR;
static const gl::GLenum GL_SRC_ALPHA = gl::GLenum::GL_SRC_ALPHA;
static const gl::GLenum GL_ONE_MINUS_SRC_ALPHA = gl::GLenum::GL_ONE_MINUS_SRC_ALPHA;
static const gl::GLenum GL_DST_ALPHA = gl::GLenum::GL_DST_ALPHA;
static const gl::GLenum GL_ONE_MINUS_DST_ALPHA = gl::GLenum::GL_ONE_MINUS_DST_ALPHA;
static const gl::GLenum GL_ONE = gl::GLenum::GL_ONE;

// BlendingFactorSrc

// static const gl::GLenum GL_ZERO = gl::GLenum::GL_ZERO; // reuse BlendingFactorDest
// static const gl::GLenum GL_SRC_ALPHA = gl::GLenum::GL_SRC_ALPHA; // reuse BlendingFactorDest
// static const gl::GLenum GL_ONE_MINUS_SRC_ALPHA = gl::GLenum::GL_ONE_MINUS_SRC_ALPHA; // reuse BlendingFactorDest
// static const gl::GLenum GL_DST_ALPHA = gl::GLenum::GL_DST_ALPHA; // reuse BlendingFactorDest
// static const gl::GLenum GL_ONE_MINUS_DST_ALPHA = gl::GLenum::GL_ONE_MINUS_DST_ALPHA; // reuse BlendingFactorDest
static const gl::GLenum GL_DST_COLOR = gl::GLenum::GL_DST_COLOR;
static const gl::GLenum GL_ONE_MINUS_DST_COLOR = gl::GLenum::GL_ONE_MINUS_DST_COLOR;
static const gl::GLenum GL_SRC_ALPHA_SATURATE = gl::GLenum::GL_SRC_ALPHA_SATURATE;
// static const gl::GLenum GL_ONE = gl::GLenum::GL_ONE; // reuse BlendingFactorDest

// ClipPlaneName

static const gl::GLenum GL_CLIP_DISTANCE0 = gl::GLenum::GL_CLIP_DISTANCE0;
static const gl::GLenum GL_CLIP_DISTANCE1 = gl::GLenum::GL_CLIP_DISTANCE1;
static const gl::GLenum GL_CLIP_DISTANCE2 = gl::GLenum::GL_CLIP_DISTANCE2;
static const gl::GLenum GL_CLIP_DISTANCE3 = gl::GLenum::GL_CLIP_DISTANCE3;
static const gl::GLenum GL_CLIP_DISTANCE4 = gl::GLenum::GL_CLIP_DISTANCE4;
static const gl::GLenum GL_CLIP_DISTANCE5 = gl::GLenum::GL_CLIP_DISTANCE5;
static const gl::GLenum GL_CLIP_DISTANCE6 = gl::GLenum::GL_CLIP_DISTANCE6;
static const gl::GLenum GL_CLIP_DISTANCE7 = gl::GLenum::GL_CLIP_DISTANCE7;

// ColorMaterialFace

static const gl::GLenum GL_FRONT = gl::GLenum::GL_FRONT;
static const gl::GLenum GL_BACK = gl::GLenum::GL_BACK;
static const gl::GLenum GL_FRONT_AND_BACK = gl::GLenum::GL_FRONT_AND_BACK;

// ColorPointerType

static const gl::GLenum GL_BYTE = gl::GLenum::GL_BYTE;
static const gl::GLenum GL_UNSIGNED_BYTE = gl::GLenum::GL_UNSIGNED_BYTE;
static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT;
static const gl::GLenum GL_UNSIGNED_SHORT = gl::GLenum::GL_UNSIGNED_SHORT;
static const gl::GLenum GL_INT = gl::GLenum::GL_INT;
static const gl::GLenum GL_UNSIGNED_INT = gl::GLenum::GL_UNSIGNED_INT;
static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT;
static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE;

// CullFaceMode

// static const gl::GLenum GL_FRONT = gl::GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const gl::GLenum GL_BACK = gl::GLenum::GL_BACK; // reuse ColorMaterialFace
// static const gl::GLenum GL_FRONT_AND_BACK = gl::GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// DepthFunction

// static const gl::GLenum GL_NEVER = gl::GLenum::GL_NEVER; // reuse AlphaFunction
// static const gl::GLenum GL_LESS = gl::GLenum::GL_LESS; // reuse AlphaFunction
// static const gl::GLenum GL_EQUAL = gl::GLenum::GL_EQUAL; // reuse AlphaFunction
// static const gl::GLenum GL_LEQUAL = gl::GLenum::GL_LEQUAL; // reuse AlphaFunction
// static const gl::GLenum GL_GREATER = gl::GLenum::GL_GREATER; // reuse AlphaFunction
// static const gl::GLenum GL_NOTEQUAL = gl::GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// static const gl::GLenum GL_GEQUAL = gl::GLenum::GL_GEQUAL; // reuse AlphaFunction
// static const gl::GLenum GL_ALWAYS = gl::GLenum::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

static const gl::GLenum GL_NONE = gl::GLenum::GL_NONE;
static const gl::GLenum GL_FRONT_LEFT = gl::GLenum::GL_FRONT_LEFT;
static const gl::GLenum GL_FRONT_RIGHT = gl::GLenum::GL_FRONT_RIGHT;
static const gl::GLenum GL_BACK_LEFT = gl::GLenum::GL_BACK_LEFT;
static const gl::GLenum GL_BACK_RIGHT = gl::GLenum::GL_BACK_RIGHT;
// static const gl::GLenum GL_FRONT = gl::GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const gl::GLenum GL_BACK = gl::GLenum::GL_BACK; // reuse ColorMaterialFace
static const gl::GLenum GL_LEFT = gl::GLenum::GL_LEFT;
static const gl::GLenum GL_RIGHT = gl::GLenum::GL_RIGHT;
// static const gl::GLenum GL_FRONT_AND_BACK = gl::GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// EnableCap

static const gl::GLenum GL_LINE_SMOOTH = gl::GLenum::GL_LINE_SMOOTH;
static const gl::GLenum GL_POLYGON_SMOOTH = gl::GLenum::GL_POLYGON_SMOOTH;
static const gl::GLenum GL_CULL_FACE = gl::GLenum::GL_CULL_FACE;
static const gl::GLenum GL_DEPTH_TEST = gl::GLenum::GL_DEPTH_TEST;
static const gl::GLenum GL_STENCIL_TEST = gl::GLenum::GL_STENCIL_TEST;
static const gl::GLenum GL_DITHER = gl::GLenum::GL_DITHER;
static const gl::GLenum GL_BLEND = gl::GLenum::GL_BLEND;
static const gl::GLenum GL_COLOR_LOGIC_OP = gl::GLenum::GL_COLOR_LOGIC_OP;
static const gl::GLenum GL_SCISSOR_TEST = gl::GLenum::GL_SCISSOR_TEST;
static const gl::GLenum GL_TEXTURE_1D = gl::GLenum::GL_TEXTURE_1D;
static const gl::GLenum GL_TEXTURE_2D = gl::GLenum::GL_TEXTURE_2D;
static const gl::GLenum GL_POLYGON_OFFSET_POINT = gl::GLenum::GL_POLYGON_OFFSET_POINT;
static const gl::GLenum GL_POLYGON_OFFSET_LINE = gl::GLenum::GL_POLYGON_OFFSET_LINE;
static const gl::GLenum GL_POLYGON_OFFSET_FILL = gl::GLenum::GL_POLYGON_OFFSET_FILL;

// ErrorCode

static const gl::GLenum GL_NO_ERROR = gl::GLenum::GL_NO_ERROR;
static const gl::GLenum GL_INVALID_ENUM = gl::GLenum::GL_INVALID_ENUM;
static const gl::GLenum GL_INVALID_VALUE = gl::GLenum::GL_INVALID_VALUE;
static const gl::GLenum GL_INVALID_OPERATION = gl::GLenum::GL_INVALID_OPERATION;
static const gl::GLenum GL_OUT_OF_MEMORY = gl::GLenum::GL_OUT_OF_MEMORY;
static const gl::GLenum GL_INVALID_FRAMEBUFFER_OPERATION = gl::GLenum::GL_INVALID_FRAMEBUFFER_OPERATION;

// FogCoordinatePointerType

// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// FogMode

static const gl::GLenum GL_LINEAR = gl::GLenum::GL_LINEAR;

// FogPointerTypeEXT

// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// FogPointerTypeIBM

// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// FrontFaceDirection

static const gl::GLenum GL_CW = gl::GLenum::GL_CW;
static const gl::GLenum GL_CCW = gl::GLenum::GL_CCW;

// GetPName

static const gl::GLenum GL_POINT_SIZE = gl::GLenum::GL_POINT_SIZE;
static const gl::GLenum GL_POINT_SIZE_RANGE = gl::GLenum::GL_POINT_SIZE_RANGE;
static const gl::GLenum GL_SMOOTH_POINT_SIZE_RANGE = gl::GLenum::GL_SMOOTH_POINT_SIZE_RANGE;
static const gl::GLenum GL_POINT_SIZE_GRANULARITY = gl::GLenum::GL_POINT_SIZE_GRANULARITY;
static const gl::GLenum GL_SMOOTH_POINT_SIZE_GRANULARITY = gl::GLenum::GL_SMOOTH_POINT_SIZE_GRANULARITY;
// static const gl::GLenum GL_LINE_SMOOTH = gl::GLenum::GL_LINE_SMOOTH; // reuse EnableCap
static const gl::GLenum GL_LINE_WIDTH = gl::GLenum::GL_LINE_WIDTH;
static const gl::GLenum GL_LINE_WIDTH_RANGE = gl::GLenum::GL_LINE_WIDTH_RANGE;
static const gl::GLenum GL_SMOOTH_LINE_WIDTH_RANGE = gl::GLenum::GL_SMOOTH_LINE_WIDTH_RANGE;
static const gl::GLenum GL_LINE_WIDTH_GRANULARITY = gl::GLenum::GL_LINE_WIDTH_GRANULARITY;
static const gl::GLenum GL_SMOOTH_LINE_WIDTH_GRANULARITY = gl::GLenum::GL_SMOOTH_LINE_WIDTH_GRANULARITY;
static const gl::GLenum GL_POLYGON_MODE = gl::GLenum::GL_POLYGON_MODE;
// static const gl::GLenum GL_POLYGON_SMOOTH = gl::GLenum::GL_POLYGON_SMOOTH; // reuse EnableCap
// static const gl::GLenum GL_CULL_FACE = gl::GLenum::GL_CULL_FACE; // reuse EnableCap
static const gl::GLenum GL_CULL_FACE_MODE = gl::GLenum::GL_CULL_FACE_MODE;
static const gl::GLenum GL_FRONT_FACE = gl::GLenum::GL_FRONT_FACE;
static const gl::GLenum GL_DEPTH_RANGE = gl::GLenum::GL_DEPTH_RANGE;
// static const gl::GLenum GL_DEPTH_TEST = gl::GLenum::GL_DEPTH_TEST; // reuse EnableCap
static const gl::GLenum GL_DEPTH_WRITEMASK = gl::GLenum::GL_DEPTH_WRITEMASK;
static const gl::GLenum GL_DEPTH_CLEAR_VALUE = gl::GLenum::GL_DEPTH_CLEAR_VALUE;
static const gl::GLenum GL_DEPTH_FUNC = gl::GLenum::GL_DEPTH_FUNC;
// static const gl::GLenum GL_STENCIL_TEST = gl::GLenum::GL_STENCIL_TEST; // reuse EnableCap
static const gl::GLenum GL_STENCIL_CLEAR_VALUE = gl::GLenum::GL_STENCIL_CLEAR_VALUE;
static const gl::GLenum GL_STENCIL_FUNC = gl::GLenum::GL_STENCIL_FUNC;
static const gl::GLenum GL_STENCIL_VALUE_MASK = gl::GLenum::GL_STENCIL_VALUE_MASK;
static const gl::GLenum GL_STENCIL_FAIL = gl::GLenum::GL_STENCIL_FAIL;
static const gl::GLenum GL_STENCIL_PASS_DEPTH_FAIL = gl::GLenum::GL_STENCIL_PASS_DEPTH_FAIL;
static const gl::GLenum GL_STENCIL_PASS_DEPTH_PASS = gl::GLenum::GL_STENCIL_PASS_DEPTH_PASS;
static const gl::GLenum GL_STENCIL_REF = gl::GLenum::GL_STENCIL_REF;
static const gl::GLenum GL_STENCIL_WRITEMASK = gl::GLenum::GL_STENCIL_WRITEMASK;
static const gl::GLenum GL_VIEWPORT = gl::GLenum::GL_VIEWPORT;
// static const gl::GLenum GL_DITHER = gl::GLenum::GL_DITHER; // reuse EnableCap
static const gl::GLenum GL_BLEND_DST = gl::GLenum::GL_BLEND_DST;
static const gl::GLenum GL_BLEND_SRC = gl::GLenum::GL_BLEND_SRC;
// static const gl::GLenum GL_BLEND = gl::GLenum::GL_BLEND; // reuse EnableCap
static const gl::GLenum GL_LOGIC_OP_MODE = gl::GLenum::GL_LOGIC_OP_MODE;
// static const gl::GLenum GL_COLOR_LOGIC_OP = gl::GLenum::GL_COLOR_LOGIC_OP; // reuse EnableCap
static const gl::GLenum GL_DRAW_BUFFER = gl::GLenum::GL_DRAW_BUFFER;
static const gl::GLenum GL_READ_BUFFER = gl::GLenum::GL_READ_BUFFER;
static const gl::GLenum GL_SCISSOR_BOX = gl::GLenum::GL_SCISSOR_BOX;
// static const gl::GLenum GL_SCISSOR_TEST = gl::GLenum::GL_SCISSOR_TEST; // reuse EnableCap
static const gl::GLenum GL_COLOR_CLEAR_VALUE = gl::GLenum::GL_COLOR_CLEAR_VALUE;
static const gl::GLenum GL_COLOR_WRITEMASK = gl::GLenum::GL_COLOR_WRITEMASK;
static const gl::GLenum GL_DOUBLEBUFFER = gl::GLenum::GL_DOUBLEBUFFER;
static const gl::GLenum GL_STEREO = gl::GLenum::GL_STEREO;
static const gl::GLenum GL_LINE_SMOOTH_HINT = gl::GLenum::GL_LINE_SMOOTH_HINT;
static const gl::GLenum GL_POLYGON_SMOOTH_HINT = gl::GLenum::GL_POLYGON_SMOOTH_HINT;
static const gl::GLenum GL_UNPACK_SWAP_BYTES = gl::GLenum::GL_UNPACK_SWAP_BYTES;
static const gl::GLenum GL_UNPACK_LSB_FIRST = gl::GLenum::GL_UNPACK_LSB_FIRST;
static const gl::GLenum GL_UNPACK_ROW_LENGTH = gl::GLenum::GL_UNPACK_ROW_LENGTH;
static const gl::GLenum GL_UNPACK_SKIP_ROWS = gl::GLenum::GL_UNPACK_SKIP_ROWS;
static const gl::GLenum GL_UNPACK_SKIP_PIXELS = gl::GLenum::GL_UNPACK_SKIP_PIXELS;
static const gl::GLenum GL_UNPACK_ALIGNMENT = gl::GLenum::GL_UNPACK_ALIGNMENT;
static const gl::GLenum GL_PACK_SWAP_BYTES = gl::GLenum::GL_PACK_SWAP_BYTES;
static const gl::GLenum GL_PACK_LSB_FIRST = gl::GLenum::GL_PACK_LSB_FIRST;
static const gl::GLenum GL_PACK_ROW_LENGTH = gl::GLenum::GL_PACK_ROW_LENGTH;
static const gl::GLenum GL_PACK_SKIP_ROWS = gl::GLenum::GL_PACK_SKIP_ROWS;
static const gl::GLenum GL_PACK_SKIP_PIXELS = gl::GLenum::GL_PACK_SKIP_PIXELS;
static const gl::GLenum GL_PACK_ALIGNMENT = gl::GLenum::GL_PACK_ALIGNMENT;
static const gl::GLenum GL_MAX_CLIP_DISTANCES = gl::GLenum::GL_MAX_CLIP_DISTANCES;
static const gl::GLenum GL_MAX_TEXTURE_SIZE = gl::GLenum::GL_MAX_TEXTURE_SIZE;
static const gl::GLenum GL_MAX_VIEWPORT_DIMS = gl::GLenum::GL_MAX_VIEWPORT_DIMS;
static const gl::GLenum GL_SUBPIXEL_BITS = gl::GLenum::GL_SUBPIXEL_BITS;
// static const gl::GLenum GL_TEXTURE_1D = gl::GLenum::GL_TEXTURE_1D; // reuse EnableCap
// static const gl::GLenum GL_TEXTURE_2D = gl::GLenum::GL_TEXTURE_2D; // reuse EnableCap
static const gl::GLenum GL_POLYGON_OFFSET_UNITS = gl::GLenum::GL_POLYGON_OFFSET_UNITS;
// static const gl::GLenum GL_POLYGON_OFFSET_POINT = gl::GLenum::GL_POLYGON_OFFSET_POINT; // reuse EnableCap
// static const gl::GLenum GL_POLYGON_OFFSET_LINE = gl::GLenum::GL_POLYGON_OFFSET_LINE; // reuse EnableCap
// static const gl::GLenum GL_POLYGON_OFFSET_FILL = gl::GLenum::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
static const gl::GLenum GL_POLYGON_OFFSET_FACTOR = gl::GLenum::GL_POLYGON_OFFSET_FACTOR;
static const gl::GLenum GL_TEXTURE_BINDING_1D = gl::GLenum::GL_TEXTURE_BINDING_1D;
static const gl::GLenum GL_TEXTURE_BINDING_2D = gl::GLenum::GL_TEXTURE_BINDING_2D;
static const gl::GLenum GL_TEXTURE_BINDING_3D = gl::GLenum::GL_TEXTURE_BINDING_3D;
static const gl::GLenum GL_ALIASED_LINE_WIDTH_RANGE = gl::GLenum::GL_ALIASED_LINE_WIDTH_RANGE;

// GetTextureParameter

static const gl::GLenum GL_TEXTURE_WIDTH = gl::GLenum::GL_TEXTURE_WIDTH;
static const gl::GLenum GL_TEXTURE_HEIGHT = gl::GLenum::GL_TEXTURE_HEIGHT;
static const gl::GLenum GL_TEXTURE_INTERNAL_FORMAT = gl::GLenum::GL_TEXTURE_INTERNAL_FORMAT;
static const gl::GLenum GL_TEXTURE_BORDER_COLOR = gl::GLenum::GL_TEXTURE_BORDER_COLOR;
static const gl::GLenum GL_TEXTURE_MAG_FILTER = gl::GLenum::GL_TEXTURE_MAG_FILTER;
static const gl::GLenum GL_TEXTURE_MIN_FILTER = gl::GLenum::GL_TEXTURE_MIN_FILTER;
static const gl::GLenum GL_TEXTURE_WRAP_S = gl::GLenum::GL_TEXTURE_WRAP_S;
static const gl::GLenum GL_TEXTURE_WRAP_T = gl::GLenum::GL_TEXTURE_WRAP_T;
static const gl::GLenum GL_TEXTURE_RED_SIZE = gl::GLenum::GL_TEXTURE_RED_SIZE;
static const gl::GLenum GL_TEXTURE_GREEN_SIZE = gl::GLenum::GL_TEXTURE_GREEN_SIZE;
static const gl::GLenum GL_TEXTURE_BLUE_SIZE = gl::GLenum::GL_TEXTURE_BLUE_SIZE;
static const gl::GLenum GL_TEXTURE_ALPHA_SIZE = gl::GLenum::GL_TEXTURE_ALPHA_SIZE;

// HintMode

static const gl::GLenum GL_DONT_CARE = gl::GLenum::GL_DONT_CARE;
static const gl::GLenum GL_FASTEST = gl::GLenum::GL_FASTEST;
static const gl::GLenum GL_NICEST = gl::GLenum::GL_NICEST;

// HintTarget

// static const gl::GLenum GL_LINE_SMOOTH_HINT = gl::GLenum::GL_LINE_SMOOTH_HINT; // reuse GetPName
// static const gl::GLenum GL_POLYGON_SMOOTH_HINT = gl::GLenum::GL_POLYGON_SMOOTH_HINT; // reuse GetPName
static const gl::GLenum GL_TEXTURE_COMPRESSION_HINT = gl::GLenum::GL_TEXTURE_COMPRESSION_HINT;
static const gl::GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT = gl::GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;

// IndexPointerType

// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// InternalFormat

static const gl::GLenum GL_R3_G3_B2 = gl::GLenum::GL_R3_G3_B2;
static const gl::GLenum GL_RGB4 = gl::GLenum::GL_RGB4;
static const gl::GLenum GL_RGB5 = gl::GLenum::GL_RGB5;
static const gl::GLenum GL_RGB8 = gl::GLenum::GL_RGB8;
static const gl::GLenum GL_RGB10 = gl::GLenum::GL_RGB10;
static const gl::GLenum GL_RGB12 = gl::GLenum::GL_RGB12;
static const gl::GLenum GL_RGB16 = gl::GLenum::GL_RGB16;
static const gl::GLenum GL_RGBA2 = gl::GLenum::GL_RGBA2;
static const gl::GLenum GL_RGBA4 = gl::GLenum::GL_RGBA4;
static const gl::GLenum GL_RGB5_A1 = gl::GLenum::GL_RGB5_A1;
static const gl::GLenum GL_RGBA8 = gl::GLenum::GL_RGBA8;
static const gl::GLenum GL_RGB10_A2 = gl::GLenum::GL_RGB10_A2;
static const gl::GLenum GL_RGBA12 = gl::GLenum::GL_RGBA12;
static const gl::GLenum GL_RGBA16 = gl::GLenum::GL_RGBA16;

// LightEnvModeSGIX

static const gl::GLenum GL_REPLACE = gl::GLenum::GL_REPLACE;

// ListNameType

// static const gl::GLenum GL_BYTE = gl::GLenum::GL_BYTE; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_BYTE = gl::GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_SHORT = gl::GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_INT = gl::GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType

// LogicOp

static const gl::GLenum GL_CLEAR = gl::GLenum::GL_CLEAR;
static const gl::GLenum GL_AND = gl::GLenum::GL_AND;
static const gl::GLenum GL_AND_REVERSE = gl::GLenum::GL_AND_REVERSE;
static const gl::GLenum GL_COPY = gl::GLenum::GL_COPY;
static const gl::GLenum GL_AND_INVERTED = gl::GLenum::GL_AND_INVERTED;
static const gl::GLenum GL_NOOP = gl::GLenum::GL_NOOP;
static const gl::GLenum GL_XOR = gl::GLenum::GL_XOR;
static const gl::GLenum GL_OR = gl::GLenum::GL_OR;
static const gl::GLenum GL_NOR = gl::GLenum::GL_NOR;
static const gl::GLenum GL_EQUIV = gl::GLenum::GL_EQUIV;
static const gl::GLenum GL_INVERT = gl::GLenum::GL_INVERT;
static const gl::GLenum GL_OR_REVERSE = gl::GLenum::GL_OR_REVERSE;
static const gl::GLenum GL_COPY_INVERTED = gl::GLenum::GL_COPY_INVERTED;
static const gl::GLenum GL_OR_INVERTED = gl::GLenum::GL_OR_INVERTED;
static const gl::GLenum GL_NAND = gl::GLenum::GL_NAND;
static const gl::GLenum GL_SET = gl::GLenum::GL_SET;

// MaterialFace

// static const gl::GLenum GL_FRONT = gl::GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const gl::GLenum GL_BACK = gl::GLenum::GL_BACK; // reuse ColorMaterialFace
// static const gl::GLenum GL_FRONT_AND_BACK = gl::GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// MatrixMode

static const gl::GLenum GL_TEXTURE = gl::GLenum::GL_TEXTURE;

// MeshMode1

static const gl::GLenum GL_POINT = gl::GLenum::GL_POINT;
static const gl::GLenum GL_LINE = gl::GLenum::GL_LINE;

// MeshMode2

// static const gl::GLenum GL_POINT = gl::GLenum::GL_POINT; // reuse MeshMode1
// static const gl::GLenum GL_LINE = gl::GLenum::GL_LINE; // reuse MeshMode1
static const gl::GLenum GL_FILL = gl::GLenum::GL_FILL;

// NormalPointerType

// static const gl::GLenum GL_BYTE = gl::GLenum::GL_BYTE; // reuse ColorPointerType
// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// PixelCopyType

static const gl::GLenum GL_COLOR = gl::GLenum::GL_COLOR;
static const gl::GLenum GL_DEPTH = gl::GLenum::GL_DEPTH;
static const gl::GLenum GL_STENCIL = gl::GLenum::GL_STENCIL;

// PixelFormat

// static const gl::GLenum GL_UNSIGNED_SHORT = gl::GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_INT = gl::GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
static const gl::GLenum GL_STENCIL_INDEX = gl::GLenum::GL_STENCIL_INDEX;
static const gl::GLenum GL_DEPTH_COMPONENT = gl::GLenum::GL_DEPTH_COMPONENT;
static const gl::GLenum GL_RED = gl::GLenum::GL_RED;
static const gl::GLenum GL_GREEN = gl::GLenum::GL_GREEN;
static const gl::GLenum GL_BLUE = gl::GLenum::GL_BLUE;
static const gl::GLenum GL_ALPHA = gl::GLenum::GL_ALPHA;
static const gl::GLenum GL_RGB = gl::GLenum::GL_RGB;
static const gl::GLenum GL_RGBA = gl::GLenum::GL_RGBA;

// PixelStoreParameter

// static const gl::GLenum GL_UNPACK_SWAP_BYTES = gl::GLenum::GL_UNPACK_SWAP_BYTES; // reuse GetPName
// static const gl::GLenum GL_UNPACK_LSB_FIRST = gl::GLenum::GL_UNPACK_LSB_FIRST; // reuse GetPName
// static const gl::GLenum GL_UNPACK_ROW_LENGTH = gl::GLenum::GL_UNPACK_ROW_LENGTH; // reuse GetPName
// static const gl::GLenum GL_UNPACK_SKIP_ROWS = gl::GLenum::GL_UNPACK_SKIP_ROWS; // reuse GetPName
// static const gl::GLenum GL_UNPACK_SKIP_PIXELS = gl::GLenum::GL_UNPACK_SKIP_PIXELS; // reuse GetPName
// static const gl::GLenum GL_UNPACK_ALIGNMENT = gl::GLenum::GL_UNPACK_ALIGNMENT; // reuse GetPName
// static const gl::GLenum GL_PACK_SWAP_BYTES = gl::GLenum::GL_PACK_SWAP_BYTES; // reuse GetPName
// static const gl::GLenum GL_PACK_LSB_FIRST = gl::GLenum::GL_PACK_LSB_FIRST; // reuse GetPName
// static const gl::GLenum GL_PACK_ROW_LENGTH = gl::GLenum::GL_PACK_ROW_LENGTH; // reuse GetPName
// static const gl::GLenum GL_PACK_SKIP_ROWS = gl::GLenum::GL_PACK_SKIP_ROWS; // reuse GetPName
// static const gl::GLenum GL_PACK_SKIP_PIXELS = gl::GLenum::GL_PACK_SKIP_PIXELS; // reuse GetPName
// static const gl::GLenum GL_PACK_ALIGNMENT = gl::GLenum::GL_PACK_ALIGNMENT; // reuse GetPName
static const gl::GLenum GL_PACK_SKIP_IMAGES = gl::GLenum::GL_PACK_SKIP_IMAGES;
static const gl::GLenum GL_PACK_IMAGE_HEIGHT = gl::GLenum::GL_PACK_IMAGE_HEIGHT;
static const gl::GLenum GL_UNPACK_SKIP_IMAGES = gl::GLenum::GL_UNPACK_SKIP_IMAGES;
static const gl::GLenum GL_UNPACK_IMAGE_HEIGHT = gl::GLenum::GL_UNPACK_IMAGE_HEIGHT;

// PixelTexGenMode

// static const gl::GLenum GL_NONE = gl::GLenum::GL_NONE; // reuse DrawBufferMode
// static const gl::GLenum GL_RGB = gl::GLenum::GL_RGB; // reuse PixelFormat
// static const gl::GLenum GL_RGBA = gl::GLenum::GL_RGBA; // reuse PixelFormat

// PixelType

// static const gl::GLenum GL_BYTE = gl::GLenum::GL_BYTE; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_BYTE = gl::GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_SHORT = gl::GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_INT = gl::GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
static const gl::GLenum GL_UNSIGNED_BYTE_3_3_2 = gl::GLenum::GL_UNSIGNED_BYTE_3_3_2;
static const gl::GLenum GL_UNSIGNED_SHORT_4_4_4_4 = gl::GLenum::GL_UNSIGNED_SHORT_4_4_4_4;
static const gl::GLenum GL_UNSIGNED_SHORT_5_5_5_1 = gl::GLenum::GL_UNSIGNED_SHORT_5_5_5_1;
static const gl::GLenum GL_UNSIGNED_INT_8_8_8_8 = gl::GLenum::GL_UNSIGNED_INT_8_8_8_8;
static const gl::GLenum GL_UNSIGNED_INT_10_10_10_2 = gl::GLenum::GL_UNSIGNED_INT_10_10_10_2;

// PointParameterNameSGIS

static const gl::GLenum GL_POINT_FADE_THRESHOLD_SIZE = gl::GLenum::GL_POINT_FADE_THRESHOLD_SIZE;

// PolygonMode

// static const gl::GLenum GL_POINT = gl::GLenum::GL_POINT; // reuse MeshMode1
// static const gl::GLenum GL_LINE = gl::GLenum::GL_LINE; // reuse MeshMode1
// static const gl::GLenum GL_FILL = gl::GLenum::GL_FILL; // reuse MeshMode2

// PrimitiveType

static const gl::GLenum GL_POINTS = gl::GLenum::GL_POINTS;
static const gl::GLenum GL_LINES = gl::GLenum::GL_LINES;
static const gl::GLenum GL_LINE_LOOP = gl::GLenum::GL_LINE_LOOP;
static const gl::GLenum GL_LINE_STRIP = gl::GLenum::GL_LINE_STRIP;
static const gl::GLenum GL_TRIANGLES = gl::GLenum::GL_TRIANGLES;
static const gl::GLenum GL_TRIANGLE_STRIP = gl::GLenum::GL_TRIANGLE_STRIP;
static const gl::GLenum GL_TRIANGLE_FAN = gl::GLenum::GL_TRIANGLE_FAN;
static const gl::GLenum GL_LINES_ADJACENCY = gl::GLenum::GL_LINES_ADJACENCY;
static const gl::GLenum GL_LINE_STRIP_ADJACENCY = gl::GLenum::GL_LINE_STRIP_ADJACENCY;
static const gl::GLenum GL_TRIANGLES_ADJACENCY = gl::GLenum::GL_TRIANGLES_ADJACENCY;
static const gl::GLenum GL_TRIANGLE_STRIP_ADJACENCY = gl::GLenum::GL_TRIANGLE_STRIP_ADJACENCY;
static const gl::GLenum GL_PATCHES = gl::GLenum::GL_PATCHES;

// ReadBufferMode

// static const gl::GLenum GL_FRONT_LEFT = gl::GLenum::GL_FRONT_LEFT; // reuse DrawBufferMode
// static const gl::GLenum GL_FRONT_RIGHT = gl::GLenum::GL_FRONT_RIGHT; // reuse DrawBufferMode
// static const gl::GLenum GL_BACK_LEFT = gl::GLenum::GL_BACK_LEFT; // reuse DrawBufferMode
// static const gl::GLenum GL_BACK_RIGHT = gl::GLenum::GL_BACK_RIGHT; // reuse DrawBufferMode
// static const gl::GLenum GL_FRONT = gl::GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const gl::GLenum GL_BACK = gl::GLenum::GL_BACK; // reuse ColorMaterialFace
// static const gl::GLenum GL_LEFT = gl::GLenum::GL_LEFT; // reuse DrawBufferMode
// static const gl::GLenum GL_RIGHT = gl::GLenum::GL_RIGHT; // reuse DrawBufferMode

// StencilFunction

// static const gl::GLenum GL_NEVER = gl::GLenum::GL_NEVER; // reuse AlphaFunction
// static const gl::GLenum GL_LESS = gl::GLenum::GL_LESS; // reuse AlphaFunction
// static const gl::GLenum GL_EQUAL = gl::GLenum::GL_EQUAL; // reuse AlphaFunction
// static const gl::GLenum GL_LEQUAL = gl::GLenum::GL_LEQUAL; // reuse AlphaFunction
// static const gl::GLenum GL_GREATER = gl::GLenum::GL_GREATER; // reuse AlphaFunction
// static const gl::GLenum GL_NOTEQUAL = gl::GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// static const gl::GLenum GL_GEQUAL = gl::GLenum::GL_GEQUAL; // reuse AlphaFunction
// static const gl::GLenum GL_ALWAYS = gl::GLenum::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// static const gl::GLenum GL_ZERO = gl::GLenum::GL_ZERO; // reuse BlendingFactorDest
// static const gl::GLenum GL_INVERT = gl::GLenum::GL_INVERT; // reuse LogicOp
static const gl::GLenum GL_KEEP = gl::GLenum::GL_KEEP;
// static const gl::GLenum GL_REPLACE = gl::GLenum::GL_REPLACE; // reuse LightEnvModeSGIX
static const gl::GLenum GL_INCR = gl::GLenum::GL_INCR;
static const gl::GLenum GL_DECR = gl::GLenum::GL_DECR;

// StringName

static const gl::GLenum GL_VENDOR = gl::GLenum::GL_VENDOR;
static const gl::GLenum GL_RENDERER = gl::GLenum::GL_RENDERER;
static const gl::GLenum GL_VERSION = gl::GLenum::GL_VERSION;
static const gl::GLenum GL_EXTENSIONS = gl::GLenum::GL_EXTENSIONS;

// TexCoordPointerType

// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// TextureEnvMode

// static const gl::GLenum GL_BLEND = gl::GLenum::GL_BLEND; // reuse EnableCap

// TextureMagFilter

static const gl::GLenum GL_NEAREST = gl::GLenum::GL_NEAREST;
// static const gl::GLenum GL_LINEAR = gl::GLenum::GL_LINEAR; // reuse FogMode

// TextureMinFilter

// static const gl::GLenum GL_NEAREST = gl::GLenum::GL_NEAREST; // reuse TextureMagFilter
// static const gl::GLenum GL_LINEAR = gl::GLenum::GL_LINEAR; // reuse FogMode
static const gl::GLenum GL_NEAREST_MIPMAP_NEAREST = gl::GLenum::GL_NEAREST_MIPMAP_NEAREST;
static const gl::GLenum GL_LINEAR_MIPMAP_NEAREST = gl::GLenum::GL_LINEAR_MIPMAP_NEAREST;
static const gl::GLenum GL_NEAREST_MIPMAP_LINEAR = gl::GLenum::GL_NEAREST_MIPMAP_LINEAR;
static const gl::GLenum GL_LINEAR_MIPMAP_LINEAR = gl::GLenum::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// static const gl::GLenum GL_TEXTURE_BORDER_COLOR = gl::GLenum::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
// static const gl::GLenum GL_TEXTURE_MAG_FILTER = gl::GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// static const gl::GLenum GL_TEXTURE_MIN_FILTER = gl::GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// static const gl::GLenum GL_TEXTURE_WRAP_S = gl::GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// static const gl::GLenum GL_TEXTURE_WRAP_T = gl::GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
static const gl::GLenum GL_TEXTURE_WRAP_R = gl::GLenum::GL_TEXTURE_WRAP_R;

// TextureTarget

// static const gl::GLenum GL_TEXTURE_1D = gl::GLenum::GL_TEXTURE_1D; // reuse EnableCap
// static const gl::GLenum GL_TEXTURE_2D = gl::GLenum::GL_TEXTURE_2D; // reuse EnableCap
static const gl::GLenum GL_PROXY_TEXTURE_1D = gl::GLenum::GL_PROXY_TEXTURE_1D;
static const gl::GLenum GL_PROXY_TEXTURE_2D = gl::GLenum::GL_PROXY_TEXTURE_2D;
static const gl::GLenum GL_TEXTURE_3D = gl::GLenum::GL_TEXTURE_3D;
static const gl::GLenum GL_PROXY_TEXTURE_3D = gl::GLenum::GL_PROXY_TEXTURE_3D;
static const gl::GLenum GL_TEXTURE_MIN_LOD = gl::GLenum::GL_TEXTURE_MIN_LOD;
static const gl::GLenum GL_TEXTURE_MAX_LOD = gl::GLenum::GL_TEXTURE_MAX_LOD;
static const gl::GLenum GL_TEXTURE_BASE_LEVEL = gl::GLenum::GL_TEXTURE_BASE_LEVEL;
static const gl::GLenum GL_TEXTURE_MAX_LEVEL = gl::GLenum::GL_TEXTURE_MAX_LEVEL;

// TextureWrapMode

static const gl::GLenum GL_REPEAT = gl::GLenum::GL_REPEAT;
static const gl::GLenum GL_CLAMP_TO_BORDER = gl::GLenum::GL_CLAMP_TO_BORDER;
static const gl::GLenum GL_CLAMP_TO_EDGE = gl::GLenum::GL_CLAMP_TO_EDGE;

// VertexPointerType

// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// __UNGROUPED__

static const gl::GLenum GL_HALF_FLOAT = gl::GLenum::GL_HALF_FLOAT;
static const gl::GLenum GL_CONSTANT_COLOR = gl::GLenum::GL_CONSTANT_COLOR;
static const gl::GLenum GL_ONE_MINUS_CONSTANT_COLOR = gl::GLenum::GL_ONE_MINUS_CONSTANT_COLOR;
static const gl::GLenum GL_CONSTANT_ALPHA = gl::GLenum::GL_CONSTANT_ALPHA;
static const gl::GLenum GL_ONE_MINUS_CONSTANT_ALPHA = gl::GLenum::GL_ONE_MINUS_CONSTANT_ALPHA;
static const gl::GLenum GL_FUNC_ADD = gl::GLenum::GL_FUNC_ADD;
static const gl::GLenum GL_MIN = gl::GLenum::GL_MIN;
static const gl::GLenum GL_MAX = gl::GLenum::GL_MAX;
static const gl::GLenum GL_BLEND_EQUATION_RGB = gl::GLenum::GL_BLEND_EQUATION_RGB;
static const gl::GLenum GL_FUNC_SUBTRACT = gl::GLenum::GL_FUNC_SUBTRACT;
static const gl::GLenum GL_FUNC_REVERSE_SUBTRACT = gl::GLenum::GL_FUNC_REVERSE_SUBTRACT;
static const gl::GLenum GL_TEXTURE_DEPTH = gl::GLenum::GL_TEXTURE_DEPTH;
static const gl::GLenum GL_MAX_3D_TEXTURE_SIZE = gl::GLenum::GL_MAX_3D_TEXTURE_SIZE;
static const gl::GLenum GL_MULTISAMPLE = gl::GLenum::GL_MULTISAMPLE;
static const gl::GLenum GL_SAMPLE_ALPHA_TO_COVERAGE = gl::GLenum::GL_SAMPLE_ALPHA_TO_COVERAGE;
static const gl::GLenum GL_SAMPLE_ALPHA_TO_ONE = gl::GLenum::GL_SAMPLE_ALPHA_TO_ONE;
static const gl::GLenum GL_SAMPLE_COVERAGE = gl::GLenum::GL_SAMPLE_COVERAGE;
static const gl::GLenum GL_SAMPLE_BUFFERS = gl::GLenum::GL_SAMPLE_BUFFERS;
static const gl::GLenum GL_SAMPLES = gl::GLenum::GL_SAMPLES;
static const gl::GLenum GL_SAMPLE_COVERAGE_VALUE = gl::GLenum::GL_SAMPLE_COVERAGE_VALUE;
static const gl::GLenum GL_SAMPLE_COVERAGE_INVERT = gl::GLenum::GL_SAMPLE_COVERAGE_INVERT;
static const gl::GLenum GL_BLEND_DST_RGB = gl::GLenum::GL_BLEND_DST_RGB;
static const gl::GLenum GL_BLEND_SRC_RGB = gl::GLenum::GL_BLEND_SRC_RGB;
static const gl::GLenum GL_BLEND_DST_ALPHA = gl::GLenum::GL_BLEND_DST_ALPHA;
static const gl::GLenum GL_BLEND_SRC_ALPHA = gl::GLenum::GL_BLEND_SRC_ALPHA;
static const gl::GLenum GL_BGR = gl::GLenum::GL_BGR;
static const gl::GLenum GL_BGRA = gl::GLenum::GL_BGRA;
static const gl::GLenum GL_MAX_ELEMENTS_VERTICES = gl::GLenum::GL_MAX_ELEMENTS_VERTICES;
static const gl::GLenum GL_MAX_ELEMENTS_INDICES = gl::GLenum::GL_MAX_ELEMENTS_INDICES;
static const gl::GLenum GL_DEPTH_COMPONENT16 = gl::GLenum::GL_DEPTH_COMPONENT16;
static const gl::GLenum GL_DEPTH_COMPONENT24 = gl::GLenum::GL_DEPTH_COMPONENT24;
static const gl::GLenum GL_DEPTH_COMPONENT32 = gl::GLenum::GL_DEPTH_COMPONENT32;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
static const gl::GLenum GL_FRAMEBUFFER_DEFAULT = gl::GLenum::GL_FRAMEBUFFER_DEFAULT;
static const gl::GLenum GL_FRAMEBUFFER_UNDEFINED = gl::GLenum::GL_FRAMEBUFFER_UNDEFINED;
static const gl::GLenum GL_DEPTH_STENCIL_ATTACHMENT = gl::GLenum::GL_DEPTH_STENCIL_ATTACHMENT;
static const gl::GLenum GL_MAJOR_VERSION = gl::GLenum::GL_MAJOR_VERSION;
static const gl::GLenum GL_MINOR_VERSION = gl::GLenum::GL_MINOR_VERSION;
static const gl::GLenum GL_NUM_EXTENSIONS = gl::GLenum::GL_NUM_EXTENSIONS;
static const gl::GLenum GL_CONTEXT_FLAGS = gl::GLenum::GL_CONTEXT_FLAGS;
static const gl::GLenum GL_INDEX = gl::GLenum::GL_INDEX;
static const gl::GLenum GL_COMPRESSED_RED = gl::GLenum::GL_COMPRESSED_RED;
static const gl::GLenum GL_COMPRESSED_RG = gl::GLenum::GL_COMPRESSED_RG;
static const gl::GLenum GL_RG = gl::GLenum::GL_RG;
static const gl::GLenum GL_RG_INTEGER = gl::GLenum::GL_RG_INTEGER;
static const gl::GLenum GL_R8 = gl::GLenum::GL_R8;
static const gl::GLenum GL_R16 = gl::GLenum::GL_R16;
static const gl::GLenum GL_RG8 = gl::GLenum::GL_RG8;
static const gl::GLenum GL_RG16 = gl::GLenum::GL_RG16;
static const gl::GLenum GL_R16F = gl::GLenum::GL_R16F;
static const gl::GLenum GL_R32F = gl::GLenum::GL_R32F;
static const gl::GLenum GL_RG16F = gl::GLenum::GL_RG16F;
static const gl::GLenum GL_RG32F = gl::GLenum::GL_RG32F;
static const gl::GLenum GL_R8I = gl::GLenum::GL_R8I;
static const gl::GLenum GL_R8UI = gl::GLenum::GL_R8UI;
static const gl::GLenum GL_R16I = gl::GLenum::GL_R16I;
static const gl::GLenum GL_R16UI = gl::GLenum::GL_R16UI;
static const gl::GLenum GL_R32I = gl::GLenum::GL_R32I;
static const gl::GLenum GL_R32UI = gl::GLenum::GL_R32UI;
static const gl::GLenum GL_RG8I = gl::GLenum::GL_RG8I;
static const gl::GLenum GL_RG8UI = gl::GLenum::GL_RG8UI;
static const gl::GLenum GL_RG16I = gl::GLenum::GL_RG16I;
static const gl::GLenum GL_RG16UI = gl::GLenum::GL_RG16UI;
static const gl::GLenum GL_RG32I = gl::GLenum::GL_RG32I;
static const gl::GLenum GL_RG32UI = gl::GLenum::GL_RG32UI;
static const gl::GLenum GL_UNSIGNED_BYTE_2_3_3_REV = gl::GLenum::GL_UNSIGNED_BYTE_2_3_3_REV;
static const gl::GLenum GL_UNSIGNED_SHORT_5_6_5 = gl::GLenum::GL_UNSIGNED_SHORT_5_6_5;
static const gl::GLenum GL_UNSIGNED_SHORT_5_6_5_REV = gl::GLenum::GL_UNSIGNED_SHORT_5_6_5_REV;
static const gl::GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV = gl::GLenum::GL_UNSIGNED_SHORT_4_4_4_4_REV;
static const gl::GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV = gl::GLenum::GL_UNSIGNED_SHORT_1_5_5_5_REV;
static const gl::GLenum GL_UNSIGNED_INT_8_8_8_8_REV = gl::GLenum::GL_UNSIGNED_INT_8_8_8_8_REV;
static const gl::GLenum GL_UNSIGNED_INT_2_10_10_10_REV = gl::GLenum::GL_UNSIGNED_INT_2_10_10_10_REV;
static const gl::GLenum GL_MIRRORED_REPEAT = gl::GLenum::GL_MIRRORED_REPEAT;
static const gl::GLenum GL_TEXTURE0 = gl::GLenum::GL_TEXTURE0;
static const gl::GLenum GL_TEXTURE1 = gl::GLenum::GL_TEXTURE1;
static const gl::GLenum GL_TEXTURE2 = gl::GLenum::GL_TEXTURE2;
static const gl::GLenum GL_TEXTURE3 = gl::GLenum::GL_TEXTURE3;
static const gl::GLenum GL_TEXTURE4 = gl::GLenum::GL_TEXTURE4;
static const gl::GLenum GL_TEXTURE5 = gl::GLenum::GL_TEXTURE5;
static const gl::GLenum GL_TEXTURE6 = gl::GLenum::GL_TEXTURE6;
static const gl::GLenum GL_TEXTURE7 = gl::GLenum::GL_TEXTURE7;
static const gl::GLenum GL_TEXTURE8 = gl::GLenum::GL_TEXTURE8;
static const gl::GLenum GL_TEXTURE9 = gl::GLenum::GL_TEXTURE9;
static const gl::GLenum GL_TEXTURE10 = gl::GLenum::GL_TEXTURE10;
static const gl::GLenum GL_TEXTURE11 = gl::GLenum::GL_TEXTURE11;
static const gl::GLenum GL_TEXTURE12 = gl::GLenum::GL_TEXTURE12;
static const gl::GLenum GL_TEXTURE13 = gl::GLenum::GL_TEXTURE13;
static const gl::GLenum GL_TEXTURE14 = gl::GLenum::GL_TEXTURE14;
static const gl::GLenum GL_TEXTURE15 = gl::GLenum::GL_TEXTURE15;
static const gl::GLenum GL_TEXTURE16 = gl::GLenum::GL_TEXTURE16;
static const gl::GLenum GL_TEXTURE17 = gl::GLenum::GL_TEXTURE17;
static const gl::GLenum GL_TEXTURE18 = gl::GLenum::GL_TEXTURE18;
static const gl::GLenum GL_TEXTURE19 = gl::GLenum::GL_TEXTURE19;
static const gl::GLenum GL_TEXTURE20 = gl::GLenum::GL_TEXTURE20;
static const gl::GLenum GL_TEXTURE21 = gl::GLenum::GL_TEXTURE21;
static const gl::GLenum GL_TEXTURE22 = gl::GLenum::GL_TEXTURE22;
static const gl::GLenum GL_TEXTURE23 = gl::GLenum::GL_TEXTURE23;
static const gl::GLenum GL_TEXTURE24 = gl::GLenum::GL_TEXTURE24;
static const gl::GLenum GL_TEXTURE25 = gl::GLenum::GL_TEXTURE25;
static const gl::GLenum GL_TEXTURE26 = gl::GLenum::GL_TEXTURE26;
static const gl::GLenum GL_TEXTURE27 = gl::GLenum::GL_TEXTURE27;
static const gl::GLenum GL_TEXTURE28 = gl::GLenum::GL_TEXTURE28;
static const gl::GLenum GL_TEXTURE29 = gl::GLenum::GL_TEXTURE29;
static const gl::GLenum GL_TEXTURE30 = gl::GLenum::GL_TEXTURE30;
static const gl::GLenum GL_TEXTURE31 = gl::GLenum::GL_TEXTURE31;
static const gl::GLenum GL_ACTIVE_TEXTURE = gl::GLenum::GL_ACTIVE_TEXTURE;
static const gl::GLenum GL_MAX_RENDERBUFFER_SIZE = gl::GLenum::GL_MAX_RENDERBUFFER_SIZE;
static const gl::GLenum GL_COMPRESSED_RGB = gl::GLenum::GL_COMPRESSED_RGB;
static const gl::GLenum GL_COMPRESSED_RGBA = gl::GLenum::GL_COMPRESSED_RGBA;
static const gl::GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER = gl::GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER;
static const gl::GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER = gl::GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER;
static const gl::GLenum GL_TEXTURE_RECTANGLE = gl::GLenum::GL_TEXTURE_RECTANGLE;
static const gl::GLenum GL_TEXTURE_BINDING_RECTANGLE = gl::GLenum::GL_TEXTURE_BINDING_RECTANGLE;
static const gl::GLenum GL_PROXY_TEXTURE_RECTANGLE = gl::GLenum::GL_PROXY_TEXTURE_RECTANGLE;
static const gl::GLenum GL_MAX_RECTANGLE_TEXTURE_SIZE = gl::GLenum::GL_MAX_RECTANGLE_TEXTURE_SIZE;
static const gl::GLenum GL_DEPTH_STENCIL = gl::GLenum::GL_DEPTH_STENCIL;
static const gl::GLenum GL_UNSIGNED_INT_24_8 = gl::GLenum::GL_UNSIGNED_INT_24_8;
static const gl::GLenum GL_MAX_TEXTURE_LOD_BIAS = gl::GLenum::GL_MAX_TEXTURE_LOD_BIAS;
static const gl::GLenum GL_TEXTURE_LOD_BIAS = gl::GLenum::GL_TEXTURE_LOD_BIAS;
static const gl::GLenum GL_INCR_WRAP = gl::GLenum::GL_INCR_WRAP;
static const gl::GLenum GL_DECR_WRAP = gl::GLenum::GL_DECR_WRAP;
static const gl::GLenum GL_TEXTURE_CUBE_MAP = gl::GLenum::GL_TEXTURE_CUBE_MAP;
static const gl::GLenum GL_TEXTURE_BINDING_CUBE_MAP = gl::GLenum::GL_TEXTURE_BINDING_CUBE_MAP;
static const gl::GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_X = gl::GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_X;
static const gl::GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_X = gl::GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
static const gl::GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Y = gl::GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
static const gl::GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = gl::GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
static const gl::GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Z = gl::GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
static const gl::GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = gl::GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
static const gl::GLenum GL_PROXY_TEXTURE_CUBE_MAP = gl::GLenum::GL_PROXY_TEXTURE_CUBE_MAP;
static const gl::GLenum GL_MAX_CUBE_MAP_TEXTURE_SIZE = gl::GLenum::GL_MAX_CUBE_MAP_TEXTURE_SIZE;
static const gl::GLenum GL_SRC1_ALPHA = gl::GLenum::GL_SRC1_ALPHA;
static const gl::GLenum GL_VERTEX_ARRAY_BINDING = gl::GLenum::GL_VERTEX_ARRAY_BINDING;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE;
static const gl::GLenum GL_CURRENT_VERTEX_ATTRIB = gl::GLenum::GL_CURRENT_VERTEX_ATTRIB;
static const gl::GLenum GL_PROGRAM_POINT_SIZE = gl::GLenum::GL_PROGRAM_POINT_SIZE;
static const gl::GLenum GL_VERTEX_PROGRAM_POINT_SIZE = gl::GLenum::GL_VERTEX_PROGRAM_POINT_SIZE;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_POINTER;
static const gl::GLenum GL_DEPTH_CLAMP = gl::GLenum::GL_DEPTH_CLAMP;
static const gl::GLenum GL_TEXTURE_COMPRESSED_IMAGE_SIZE = gl::GLenum::GL_TEXTURE_COMPRESSED_IMAGE_SIZE;
static const gl::GLenum GL_TEXTURE_COMPRESSED = gl::GLenum::GL_TEXTURE_COMPRESSED;
static const gl::GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS = gl::GLenum::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
static const gl::GLenum GL_COMPRESSED_TEXTURE_FORMATS = gl::GLenum::GL_COMPRESSED_TEXTURE_FORMATS;
static const gl::GLenum GL_BUFFER_SIZE = gl::GLenum::GL_BUFFER_SIZE;
static const gl::GLenum GL_BUFFER_USAGE = gl::GLenum::GL_BUFFER_USAGE;
static const gl::GLenum GL_STENCIL_BACK_FUNC = gl::GLenum::GL_STENCIL_BACK_FUNC;
static const gl::GLenum GL_STENCIL_BACK_FAIL = gl::GLenum::GL_STENCIL_BACK_FAIL;
static const gl::GLenum GL_STENCIL_BACK_PASS_DEPTH_FAIL = gl::GLenum::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
static const gl::GLenum GL_STENCIL_BACK_PASS_DEPTH_PASS = gl::GLenum::GL_STENCIL_BACK_PASS_DEPTH_PASS;
static const gl::GLenum GL_RGBA32F = gl::GLenum::GL_RGBA32F;
static const gl::GLenum GL_RGB32F = gl::GLenum::GL_RGB32F;
static const gl::GLenum GL_RGBA16F = gl::GLenum::GL_RGBA16F;
static const gl::GLenum GL_RGB16F = gl::GLenum::GL_RGB16F;
static const gl::GLenum GL_MAX_DRAW_BUFFERS = gl::GLenum::GL_MAX_DRAW_BUFFERS;
static const gl::GLenum GL_DRAW_BUFFER0 = gl::GLenum::GL_DRAW_BUFFER0;
static const gl::GLenum GL_DRAW_BUFFER1 = gl::GLenum::GL_DRAW_BUFFER1;
static const gl::GLenum GL_DRAW_BUFFER2 = gl::GLenum::GL_DRAW_BUFFER2;
static const gl::GLenum GL_DRAW_BUFFER3 = gl::GLenum::GL_DRAW_BUFFER3;
static const gl::GLenum GL_DRAW_BUFFER4 = gl::GLenum::GL_DRAW_BUFFER4;
static const gl::GLenum GL_DRAW_BUFFER5 = gl::GLenum::GL_DRAW_BUFFER5;
static const gl::GLenum GL_DRAW_BUFFER6 = gl::GLenum::GL_DRAW_BUFFER6;
static const gl::GLenum GL_DRAW_BUFFER7 = gl::GLenum::GL_DRAW_BUFFER7;
static const gl::GLenum GL_DRAW_BUFFER8 = gl::GLenum::GL_DRAW_BUFFER8;
static const gl::GLenum GL_DRAW_BUFFER9 = gl::GLenum::GL_DRAW_BUFFER9;
static const gl::GLenum GL_DRAW_BUFFER10 = gl::GLenum::GL_DRAW_BUFFER10;
static const gl::GLenum GL_DRAW_BUFFER11 = gl::GLenum::GL_DRAW_BUFFER11;
static const gl::GLenum GL_DRAW_BUFFER12 = gl::GLenum::GL_DRAW_BUFFER12;
static const gl::GLenum GL_DRAW_BUFFER13 = gl::GLenum::GL_DRAW_BUFFER13;
static const gl::GLenum GL_DRAW_BUFFER14 = gl::GLenum::GL_DRAW_BUFFER14;
static const gl::GLenum GL_DRAW_BUFFER15 = gl::GLenum::GL_DRAW_BUFFER15;
static const gl::GLenum GL_BLEND_EQUATION_ALPHA = gl::GLenum::GL_BLEND_EQUATION_ALPHA;
static const gl::GLenum GL_TEXTURE_DEPTH_SIZE = gl::GLenum::GL_TEXTURE_DEPTH_SIZE;
static const gl::GLenum GL_TEXTURE_COMPARE_MODE = gl::GLenum::GL_TEXTURE_COMPARE_MODE;
static const gl::GLenum GL_TEXTURE_COMPARE_FUNC = gl::GLenum::GL_TEXTURE_COMPARE_FUNC;
static const gl::GLenum GL_COMPARE_REF_TO_TEXTURE = gl::GLenum::GL_COMPARE_REF_TO_TEXTURE;
static const gl::GLenum GL_TEXTURE_CUBE_MAP_SEAMLESS = gl::GLenum::GL_TEXTURE_CUBE_MAP_SEAMLESS;
static const gl::GLenum GL_QUERY_COUNTER_BITS = gl::GLenum::GL_QUERY_COUNTER_BITS;
static const gl::GLenum GL_CURRENT_QUERY = gl::GLenum::GL_CURRENT_QUERY;
static const gl::GLenum GL_QUERY_RESULT = gl::GLenum::GL_QUERY_RESULT;
static const gl::GLenum GL_QUERY_RESULT_AVAILABLE = gl::GLenum::GL_QUERY_RESULT_AVAILABLE;
static const gl::GLenum GL_MAX_VERTEX_ATTRIBS = gl::GLenum::GL_MAX_VERTEX_ATTRIBS;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
static const gl::GLenum GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = gl::GLenum::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
static const gl::GLenum GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = gl::GLenum::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
static const gl::GLenum GL_MAX_TEXTURE_IMAGE_UNITS = gl::GLenum::GL_MAX_TEXTURE_IMAGE_UNITS;
static const gl::GLenum GL_GEOMETRY_SHADER_INVOCATIONS = gl::GLenum::GL_GEOMETRY_SHADER_INVOCATIONS;
static const gl::GLenum GL_ARRAY_BUFFER = gl::GLenum::GL_ARRAY_BUFFER;
static const gl::GLenum GL_ELEMENT_ARRAY_BUFFER = gl::GLenum::GL_ELEMENT_ARRAY_BUFFER;
static const gl::GLenum GL_ARRAY_BUFFER_BINDING = gl::GLenum::GL_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING = gl::GLenum::GL_ELEMENT_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_READ_ONLY = gl::GLenum::GL_READ_ONLY;
static const gl::GLenum GL_WRITE_ONLY = gl::GLenum::GL_WRITE_ONLY;
static const gl::GLenum GL_READ_WRITE = gl::GLenum::GL_READ_WRITE;
static const gl::GLenum GL_BUFFER_ACCESS = gl::GLenum::GL_BUFFER_ACCESS;
static const gl::GLenum GL_BUFFER_MAPPED = gl::GLenum::GL_BUFFER_MAPPED;
static const gl::GLenum GL_BUFFER_MAP_POINTER = gl::GLenum::GL_BUFFER_MAP_POINTER;
static const gl::GLenum GL_TIME_ELAPSED = gl::GLenum::GL_TIME_ELAPSED;
static const gl::GLenum GL_STREAM_DRAW = gl::GLenum::GL_STREAM_DRAW;
static const gl::GLenum GL_STREAM_READ = gl::GLenum::GL_STREAM_READ;
static const gl::GLenum GL_STREAM_COPY = gl::GLenum::GL_STREAM_COPY;
static const gl::GLenum GL_STATIC_DRAW = gl::GLenum::GL_STATIC_DRAW;
static const gl::GLenum GL_STATIC_READ = gl::GLenum::GL_STATIC_READ;
static const gl::GLenum GL_STATIC_COPY = gl::GLenum::GL_STATIC_COPY;
static const gl::GLenum GL_DYNAMIC_DRAW = gl::GLenum::GL_DYNAMIC_DRAW;
static const gl::GLenum GL_DYNAMIC_READ = gl::GLenum::GL_DYNAMIC_READ;
static const gl::GLenum GL_DYNAMIC_COPY = gl::GLenum::GL_DYNAMIC_COPY;
static const gl::GLenum GL_PIXEL_PACK_BUFFER = gl::GLenum::GL_PIXEL_PACK_BUFFER;
static const gl::GLenum GL_PIXEL_UNPACK_BUFFER = gl::GLenum::GL_PIXEL_UNPACK_BUFFER;
static const gl::GLenum GL_PIXEL_PACK_BUFFER_BINDING = gl::GLenum::GL_PIXEL_PACK_BUFFER_BINDING;
static const gl::GLenum GL_PIXEL_UNPACK_BUFFER_BINDING = gl::GLenum::GL_PIXEL_UNPACK_BUFFER_BINDING;
static const gl::GLenum GL_DEPTH24_STENCIL8 = gl::GLenum::GL_DEPTH24_STENCIL8;
static const gl::GLenum GL_TEXTURE_STENCIL_SIZE = gl::GLenum::GL_TEXTURE_STENCIL_SIZE;
static const gl::GLenum GL_SRC1_COLOR = gl::GLenum::GL_SRC1_COLOR;
static const gl::GLenum GL_ONE_MINUS_SRC1_COLOR = gl::GLenum::GL_ONE_MINUS_SRC1_COLOR;
static const gl::GLenum GL_ONE_MINUS_SRC1_ALPHA = gl::GLenum::GL_ONE_MINUS_SRC1_ALPHA;
static const gl::GLenum GL_MAX_DUAL_SOURCE_DRAW_BUFFERS = gl::GLenum::GL_MAX_DUAL_SOURCE_DRAW_BUFFERS;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_INTEGER = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_INTEGER;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR;
static const gl::GLenum GL_MAX_ARRAY_TEXTURE_LAYERS = gl::GLenum::GL_MAX_ARRAY_TEXTURE_LAYERS;
static const gl::GLenum GL_MIN_PROGRAM_TEXEL_OFFSET = gl::GLenum::GL_MIN_PROGRAM_TEXEL_OFFSET;
static const gl::GLenum GL_MAX_PROGRAM_TEXEL_OFFSET = gl::GLenum::GL_MAX_PROGRAM_TEXEL_OFFSET;
static const gl::GLenum GL_SAMPLES_PASSED = gl::GLenum::GL_SAMPLES_PASSED;
static const gl::GLenum GL_GEOMETRY_VERTICES_OUT = gl::GLenum::GL_GEOMETRY_VERTICES_OUT;
static const gl::GLenum GL_GEOMETRY_INPUT_TYPE = gl::GLenum::GL_GEOMETRY_INPUT_TYPE;
static const gl::GLenum GL_GEOMETRY_OUTPUT_TYPE = gl::GLenum::GL_GEOMETRY_OUTPUT_TYPE;
static const gl::GLenum GL_SAMPLER_BINDING = gl::GLenum::GL_SAMPLER_BINDING;
static const gl::GLenum GL_CLAMP_READ_COLOR = gl::GLenum::GL_CLAMP_READ_COLOR;
static const gl::GLenum GL_FIXED_ONLY = gl::GLenum::GL_FIXED_ONLY;
static const gl::GLenum GL_UNIFORM_BUFFER = gl::GLenum::GL_UNIFORM_BUFFER;
static const gl::GLenum GL_UNIFORM_BUFFER_BINDING = gl::GLenum::GL_UNIFORM_BUFFER_BINDING;
static const gl::GLenum GL_UNIFORM_BUFFER_START = gl::GLenum::GL_UNIFORM_BUFFER_START;
static const gl::GLenum GL_UNIFORM_BUFFER_SIZE = gl::GLenum::GL_UNIFORM_BUFFER_SIZE;
static const gl::GLenum GL_MAX_VERTEX_UNIFORM_BLOCKS = gl::GLenum::GL_MAX_VERTEX_UNIFORM_BLOCKS;
static const gl::GLenum GL_MAX_GEOMETRY_UNIFORM_BLOCKS = gl::GLenum::GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
static const gl::GLenum GL_MAX_FRAGMENT_UNIFORM_BLOCKS = gl::GLenum::GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
static const gl::GLenum GL_MAX_COMBINED_UNIFORM_BLOCKS = gl::GLenum::GL_MAX_COMBINED_UNIFORM_BLOCKS;
static const gl::GLenum GL_MAX_UNIFORM_BUFFER_BINDINGS = gl::GLenum::GL_MAX_UNIFORM_BUFFER_BINDINGS;
static const gl::GLenum GL_MAX_UNIFORM_BLOCK_SIZE = gl::GLenum::GL_MAX_UNIFORM_BLOCK_SIZE;
static const gl::GLenum GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
static const gl::GLenum GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
static const gl::GLenum GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
static const gl::GLenum GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = gl::GLenum::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
static const gl::GLenum GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = gl::GLenum::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
static const gl::GLenum GL_ACTIVE_UNIFORM_BLOCKS = gl::GLenum::GL_ACTIVE_UNIFORM_BLOCKS;
static const gl::GLenum GL_UNIFORM_TYPE = gl::GLenum::GL_UNIFORM_TYPE;
static const gl::GLenum GL_UNIFORM_SIZE = gl::GLenum::GL_UNIFORM_SIZE;
static const gl::GLenum GL_UNIFORM_NAME_LENGTH = gl::GLenum::GL_UNIFORM_NAME_LENGTH;
static const gl::GLenum GL_UNIFORM_BLOCK_INDEX = gl::GLenum::GL_UNIFORM_BLOCK_INDEX;
static const gl::GLenum GL_UNIFORM_OFFSET = gl::GLenum::GL_UNIFORM_OFFSET;
static const gl::GLenum GL_UNIFORM_ARRAY_STRIDE = gl::GLenum::GL_UNIFORM_ARRAY_STRIDE;
static const gl::GLenum GL_UNIFORM_MATRIX_STRIDE = gl::GLenum::GL_UNIFORM_MATRIX_STRIDE;
static const gl::GLenum GL_UNIFORM_IS_ROW_MAJOR = gl::GLenum::GL_UNIFORM_IS_ROW_MAJOR;
static const gl::GLenum GL_UNIFORM_BLOCK_BINDING = gl::GLenum::GL_UNIFORM_BLOCK_BINDING;
static const gl::GLenum GL_UNIFORM_BLOCK_DATA_SIZE = gl::GLenum::GL_UNIFORM_BLOCK_DATA_SIZE;
static const gl::GLenum GL_UNIFORM_BLOCK_NAME_LENGTH = gl::GLenum::GL_UNIFORM_BLOCK_NAME_LENGTH;
static const gl::GLenum GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = gl::GLenum::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
static const gl::GLenum GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = gl::GLenum::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
static const gl::GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = gl::GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
static const gl::GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = gl::GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER;
static const gl::GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = gl::GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;
static const gl::GLenum GL_FRAGMENT_SHADER = gl::GLenum::GL_FRAGMENT_SHADER;
static const gl::GLenum GL_VERTEX_SHADER = gl::GLenum::GL_VERTEX_SHADER;
static const gl::GLenum GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
static const gl::GLenum GL_MAX_VERTEX_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_VERTEX_UNIFORM_COMPONENTS;
static const gl::GLenum GL_MAX_VARYING_COMPONENTS = gl::GLenum::GL_MAX_VARYING_COMPONENTS;
static const gl::GLenum GL_MAX_VARYING_FLOATS = gl::GLenum::GL_MAX_VARYING_FLOATS;
static const gl::GLenum GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = gl::GLenum::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
static const gl::GLenum GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = gl::GLenum::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
static const gl::GLenum GL_SHADER_TYPE = gl::GLenum::GL_SHADER_TYPE;
static const gl::GLenum GL_FLOAT_VEC2 = gl::GLenum::GL_FLOAT_VEC2;
static const gl::GLenum GL_FLOAT_VEC3 = gl::GLenum::GL_FLOAT_VEC3;
static const gl::GLenum GL_FLOAT_VEC4 = gl::GLenum::GL_FLOAT_VEC4;
static const gl::GLenum GL_INT_VEC2 = gl::GLenum::GL_INT_VEC2;
static const gl::GLenum GL_INT_VEC3 = gl::GLenum::GL_INT_VEC3;
static const gl::GLenum GL_INT_VEC4 = gl::GLenum::GL_INT_VEC4;
static const gl::GLenum GL_BOOL = gl::GLenum::GL_BOOL;
static const gl::GLenum GL_BOOL_VEC2 = gl::GLenum::GL_BOOL_VEC2;
static const gl::GLenum GL_BOOL_VEC3 = gl::GLenum::GL_BOOL_VEC3;
static const gl::GLenum GL_BOOL_VEC4 = gl::GLenum::GL_BOOL_VEC4;
static const gl::GLenum GL_FLOAT_MAT2 = gl::GLenum::GL_FLOAT_MAT2;
static const gl::GLenum GL_FLOAT_MAT3 = gl::GLenum::GL_FLOAT_MAT3;
static const gl::GLenum GL_FLOAT_MAT4 = gl::GLenum::GL_FLOAT_MAT4;
static const gl::GLenum GL_SAMPLER_1D = gl::GLenum::GL_SAMPLER_1D;
static const gl::GLenum GL_SAMPLER_2D = gl::GLenum::GL_SAMPLER_2D;
static const gl::GLenum GL_SAMPLER_3D = gl::GLenum::GL_SAMPLER_3D;
static const gl::GLenum GL_SAMPLER_CUBE = gl::GLenum::GL_SAMPLER_CUBE;
static const gl::GLenum GL_SAMPLER_1D_SHADOW = gl::GLenum::GL_SAMPLER_1D_SHADOW;
static const gl::GLenum GL_SAMPLER_2D_SHADOW = gl::GLenum::GL_SAMPLER_2D_SHADOW;
static const gl::GLenum GL_SAMPLER_2D_RECT = gl::GLenum::GL_SAMPLER_2D_RECT;
static const gl::GLenum GL_SAMPLER_2D_RECT_SHADOW = gl::GLenum::GL_SAMPLER_2D_RECT_SHADOW;
static const gl::GLenum GL_FLOAT_MAT2x3 = gl::GLenum::GL_FLOAT_MAT2x3;
static const gl::GLenum GL_FLOAT_MAT2x4 = gl::GLenum::GL_FLOAT_MAT2x4;
static const gl::GLenum GL_FLOAT_MAT3x2 = gl::GLenum::GL_FLOAT_MAT3x2;
static const gl::GLenum GL_FLOAT_MAT3x4 = gl::GLenum::GL_FLOAT_MAT3x4;
static const gl::GLenum GL_FLOAT_MAT4x2 = gl::GLenum::GL_FLOAT_MAT4x2;
static const gl::GLenum GL_FLOAT_MAT4x3 = gl::GLenum::GL_FLOAT_MAT4x3;
static const gl::GLenum GL_DELETE_STATUS = gl::GLenum::GL_DELETE_STATUS;
static const gl::GLenum GL_COMPILE_STATUS = gl::GLenum::GL_COMPILE_STATUS;
static const gl::GLenum GL_LINK_STATUS = gl::GLenum::GL_LINK_STATUS;
static const gl::GLenum GL_VALIDATE_STATUS = gl::GLenum::GL_VALIDATE_STATUS;
static const gl::GLenum GL_INFO_LOG_LENGTH = gl::GLenum::GL_INFO_LOG_LENGTH;
static const gl::GLenum GL_ATTACHED_SHADERS = gl::GLenum::GL_ATTACHED_SHADERS;
static const gl::GLenum GL_ACTIVE_UNIFORMS = gl::GLenum::GL_ACTIVE_UNIFORMS;
static const gl::GLenum GL_ACTIVE_UNIFORM_MAX_LENGTH = gl::GLenum::GL_ACTIVE_UNIFORM_MAX_LENGTH;
static const gl::GLenum GL_SHADER_SOURCE_LENGTH = gl::GLenum::GL_SHADER_SOURCE_LENGTH;
static const gl::GLenum GL_ACTIVE_ATTRIBUTES = gl::GLenum::GL_ACTIVE_ATTRIBUTES;
static const gl::GLenum GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = gl::GLenum::GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
static const gl::GLenum GL_SHADING_LANGUAGE_VERSION = gl::GLenum::GL_SHADING_LANGUAGE_VERSION;
static const gl::GLenum GL_ACTIVE_PROGRAM_EXT = gl::GLenum::GL_ACTIVE_PROGRAM_EXT;
static const gl::GLenum GL_CURRENT_PROGRAM = gl::GLenum::GL_CURRENT_PROGRAM;
static const gl::GLenum GL_TEXTURE_RED_TYPE = gl::GLenum::GL_TEXTURE_RED_TYPE;
static const gl::GLenum GL_TEXTURE_GREEN_TYPE = gl::GLenum::GL_TEXTURE_GREEN_TYPE;
static const gl::GLenum GL_TEXTURE_BLUE_TYPE = gl::GLenum::GL_TEXTURE_BLUE_TYPE;
static const gl::GLenum GL_TEXTURE_ALPHA_TYPE = gl::GLenum::GL_TEXTURE_ALPHA_TYPE;
static const gl::GLenum GL_TEXTURE_DEPTH_TYPE = gl::GLenum::GL_TEXTURE_DEPTH_TYPE;
static const gl::GLenum GL_UNSIGNED_NORMALIZED = gl::GLenum::GL_UNSIGNED_NORMALIZED;
static const gl::GLenum GL_TEXTURE_1D_ARRAY = gl::GLenum::GL_TEXTURE_1D_ARRAY;
static const gl::GLenum GL_PROXY_TEXTURE_1D_ARRAY = gl::GLenum::GL_PROXY_TEXTURE_1D_ARRAY;
static const gl::GLenum GL_TEXTURE_2D_ARRAY = gl::GLenum::GL_TEXTURE_2D_ARRAY;
static const gl::GLenum GL_PROXY_TEXTURE_2D_ARRAY = gl::GLenum::GL_PROXY_TEXTURE_2D_ARRAY;
static const gl::GLenum GL_TEXTURE_BINDING_1D_ARRAY = gl::GLenum::GL_TEXTURE_BINDING_1D_ARRAY;
static const gl::GLenum GL_TEXTURE_BINDING_2D_ARRAY = gl::GLenum::GL_TEXTURE_BINDING_2D_ARRAY;
static const gl::GLenum GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = gl::GLenum::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
static const gl::GLenum GL_TEXTURE_BUFFER = gl::GLenum::GL_TEXTURE_BUFFER;
static const gl::GLenum GL_MAX_TEXTURE_BUFFER_SIZE = gl::GLenum::GL_MAX_TEXTURE_BUFFER_SIZE;
static const gl::GLenum GL_TEXTURE_BINDING_BUFFER = gl::GLenum::GL_TEXTURE_BINDING_BUFFER;
static const gl::GLenum GL_TEXTURE_BUFFER_DATA_STORE_BINDING = gl::GLenum::GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
static const gl::GLenum GL_ANY_SAMPLES_PASSED = gl::GLenum::GL_ANY_SAMPLES_PASSED;
static const gl::GLenum GL_SAMPLE_SHADING = gl::GLenum::GL_SAMPLE_SHADING;
static const gl::GLenum GL_MIN_SAMPLE_SHADING_VALUE = gl::GLenum::GL_MIN_SAMPLE_SHADING_VALUE;
static const gl::GLenum GL_R11F_G11F_B10F = gl::GLenum::GL_R11F_G11F_B10F;
static const gl::GLenum GL_UNSIGNED_INT_10F_11F_11F_REV = gl::GLenum::GL_UNSIGNED_INT_10F_11F_11F_REV;
static const gl::GLenum GL_RGB9_E5 = gl::GLenum::GL_RGB9_E5;
static const gl::GLenum GL_UNSIGNED_INT_5_9_9_9_REV = gl::GLenum::GL_UNSIGNED_INT_5_9_9_9_REV;
static const gl::GLenum GL_TEXTURE_SHARED_SIZE = gl::GLenum::GL_TEXTURE_SHARED_SIZE;
static const gl::GLenum GL_SRGB = gl::GLenum::GL_SRGB;
static const gl::GLenum GL_SRGB8 = gl::GLenum::GL_SRGB8;
static const gl::GLenum GL_SRGB_ALPHA = gl::GLenum::GL_SRGB_ALPHA;
static const gl::GLenum GL_SRGB8_ALPHA8 = gl::GLenum::GL_SRGB8_ALPHA8;
static const gl::GLenum GL_COMPRESSED_SRGB = gl::GLenum::GL_COMPRESSED_SRGB;
static const gl::GLenum GL_COMPRESSED_SRGB_ALPHA = gl::GLenum::GL_COMPRESSED_SRGB_ALPHA;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = gl::GLenum::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_BUFFER_MODE = gl::GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
static const gl::GLenum GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = gl::GLenum::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_VARYINGS = gl::GLenum::GL_TRANSFORM_FEEDBACK_VARYINGS;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_BUFFER_START = gl::GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_START;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = gl::GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
static const gl::GLenum GL_PRIMITIVES_GENERATED = gl::GLenum::GL_PRIMITIVES_GENERATED;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = gl::GLenum::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
static const gl::GLenum GL_RASTERIZER_DISCARD = gl::GLenum::GL_RASTERIZER_DISCARD;
static const gl::GLenum GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = gl::GLenum::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
static const gl::GLenum GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = gl::GLenum::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
static const gl::GLenum GL_INTERLEAVED_ATTRIBS = gl::GLenum::GL_INTERLEAVED_ATTRIBS;
static const gl::GLenum GL_SEPARATE_ATTRIBS = gl::GLenum::GL_SEPARATE_ATTRIBS;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_BUFFER = gl::GLenum::GL_TRANSFORM_FEEDBACK_BUFFER;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = gl::GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
static const gl::GLenum GL_POINT_SPRITE_COORD_ORIGIN = gl::GLenum::GL_POINT_SPRITE_COORD_ORIGIN;
static const gl::GLenum GL_LOWER_LEFT = gl::GLenum::GL_LOWER_LEFT;
static const gl::GLenum GL_UPPER_LEFT = gl::GLenum::GL_UPPER_LEFT;
static const gl::GLenum GL_STENCIL_BACK_REF = gl::GLenum::GL_STENCIL_BACK_REF;
static const gl::GLenum GL_STENCIL_BACK_VALUE_MASK = gl::GLenum::GL_STENCIL_BACK_VALUE_MASK;
static const gl::GLenum GL_STENCIL_BACK_WRITEMASK = gl::GLenum::GL_STENCIL_BACK_WRITEMASK;
static const gl::GLenum GL_DRAW_FRAMEBUFFER_BINDING = gl::GLenum::GL_DRAW_FRAMEBUFFER_BINDING;
static const gl::GLenum GL_FRAMEBUFFER_BINDING = gl::GLenum::GL_FRAMEBUFFER_BINDING;
static const gl::GLenum GL_RENDERBUFFER_BINDING = gl::GLenum::GL_RENDERBUFFER_BINDING;
static const gl::GLenum GL_READ_FRAMEBUFFER = gl::GLenum::GL_READ_FRAMEBUFFER;
static const gl::GLenum GL_DRAW_FRAMEBUFFER = gl::GLenum::GL_DRAW_FRAMEBUFFER;
static const gl::GLenum GL_READ_FRAMEBUFFER_BINDING = gl::GLenum::GL_READ_FRAMEBUFFER_BINDING;
static const gl::GLenum GL_RENDERBUFFER_SAMPLES = gl::GLenum::GL_RENDERBUFFER_SAMPLES;
static const gl::GLenum GL_DEPTH_COMPONENT32F = gl::GLenum::GL_DEPTH_COMPONENT32F;
static const gl::GLenum GL_DEPTH32F_STENCIL8 = gl::GLenum::GL_DEPTH32F_STENCIL8;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
static const gl::GLenum GL_FRAMEBUFFER_COMPLETE = gl::GLenum::GL_FRAMEBUFFER_COMPLETE;
static const gl::GLenum GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = gl::GLenum::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
static const gl::GLenum GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = gl::GLenum::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
static const gl::GLenum GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER = gl::GLenum::GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER;
static const gl::GLenum GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER = gl::GLenum::GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER;
static const gl::GLenum GL_FRAMEBUFFER_UNSUPPORTED = gl::GLenum::GL_FRAMEBUFFER_UNSUPPORTED;
static const gl::GLenum GL_MAX_COLOR_ATTACHMENTS = gl::GLenum::GL_MAX_COLOR_ATTACHMENTS;
static const gl::GLenum GL_COLOR_ATTACHMENT0 = gl::GLenum::GL_COLOR_ATTACHMENT0;
static const gl::GLenum GL_COLOR_ATTACHMENT1 = gl::GLenum::GL_COLOR_ATTACHMENT1;
static const gl::GLenum GL_COLOR_ATTACHMENT2 = gl::GLenum::GL_COLOR_ATTACHMENT2;
static const gl::GLenum GL_COLOR_ATTACHMENT3 = gl::GLenum::GL_COLOR_ATTACHMENT3;
static const gl::GLenum GL_COLOR_ATTACHMENT4 = gl::GLenum::GL_COLOR_ATTACHMENT4;
static const gl::GLenum GL_COLOR_ATTACHMENT5 = gl::GLenum::GL_COLOR_ATTACHMENT5;
static const gl::GLenum GL_COLOR_ATTACHMENT6 = gl::GLenum::GL_COLOR_ATTACHMENT6;
static const gl::GLenum GL_COLOR_ATTACHMENT7 = gl::GLenum::GL_COLOR_ATTACHMENT7;
static const gl::GLenum GL_COLOR_ATTACHMENT8 = gl::GLenum::GL_COLOR_ATTACHMENT8;
static const gl::GLenum GL_COLOR_ATTACHMENT9 = gl::GLenum::GL_COLOR_ATTACHMENT9;
static const gl::GLenum GL_COLOR_ATTACHMENT10 = gl::GLenum::GL_COLOR_ATTACHMENT10;
static const gl::GLenum GL_COLOR_ATTACHMENT11 = gl::GLenum::GL_COLOR_ATTACHMENT11;
static const gl::GLenum GL_COLOR_ATTACHMENT12 = gl::GLenum::GL_COLOR_ATTACHMENT12;
static const gl::GLenum GL_COLOR_ATTACHMENT13 = gl::GLenum::GL_COLOR_ATTACHMENT13;
static const gl::GLenum GL_COLOR_ATTACHMENT14 = gl::GLenum::GL_COLOR_ATTACHMENT14;
static const gl::GLenum GL_COLOR_ATTACHMENT15 = gl::GLenum::GL_COLOR_ATTACHMENT15;
static const gl::GLenum GL_DEPTH_ATTACHMENT = gl::GLenum::GL_DEPTH_ATTACHMENT;
static const gl::GLenum GL_STENCIL_ATTACHMENT = gl::GLenum::GL_STENCIL_ATTACHMENT;
static const gl::GLenum GL_FRAMEBUFFER = gl::GLenum::GL_FRAMEBUFFER;
static const gl::GLenum GL_RENDERBUFFER = gl::GLenum::GL_RENDERBUFFER;
static const gl::GLenum GL_RENDERBUFFER_WIDTH = gl::GLenum::GL_RENDERBUFFER_WIDTH;
static const gl::GLenum GL_RENDERBUFFER_HEIGHT = gl::GLenum::GL_RENDERBUFFER_HEIGHT;
static const gl::GLenum GL_RENDERBUFFER_INTERNAL_FORMAT = gl::GLenum::GL_RENDERBUFFER_INTERNAL_FORMAT;
static const gl::GLenum GL_STENCIL_INDEX1 = gl::GLenum::GL_STENCIL_INDEX1;
static const gl::GLenum GL_STENCIL_INDEX4 = gl::GLenum::GL_STENCIL_INDEX4;
static const gl::GLenum GL_STENCIL_INDEX8 = gl::GLenum::GL_STENCIL_INDEX8;
static const gl::GLenum GL_STENCIL_INDEX16 = gl::GLenum::GL_STENCIL_INDEX16;
static const gl::GLenum GL_RENDERBUFFER_RED_SIZE = gl::GLenum::GL_RENDERBUFFER_RED_SIZE;
static const gl::GLenum GL_RENDERBUFFER_GREEN_SIZE = gl::GLenum::GL_RENDERBUFFER_GREEN_SIZE;
static const gl::GLenum GL_RENDERBUFFER_BLUE_SIZE = gl::GLenum::GL_RENDERBUFFER_BLUE_SIZE;
static const gl::GLenum GL_RENDERBUFFER_ALPHA_SIZE = gl::GLenum::GL_RENDERBUFFER_ALPHA_SIZE;
static const gl::GLenum GL_RENDERBUFFER_DEPTH_SIZE = gl::GLenum::GL_RENDERBUFFER_DEPTH_SIZE;
static const gl::GLenum GL_RENDERBUFFER_STENCIL_SIZE = gl::GLenum::GL_RENDERBUFFER_STENCIL_SIZE;
static const gl::GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = gl::GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
static const gl::GLenum GL_MAX_SAMPLES = gl::GLenum::GL_MAX_SAMPLES;
static const gl::GLenum GL_RGBA32UI = gl::GLenum::GL_RGBA32UI;
static const gl::GLenum GL_RGB32UI = gl::GLenum::GL_RGB32UI;
static const gl::GLenum GL_RGBA16UI = gl::GLenum::GL_RGBA16UI;
static const gl::GLenum GL_RGB16UI = gl::GLenum::GL_RGB16UI;
static const gl::GLenum GL_RGBA8UI = gl::GLenum::GL_RGBA8UI;
static const gl::GLenum GL_RGB8UI = gl::GLenum::GL_RGB8UI;
static const gl::GLenum GL_RGBA32I = gl::GLenum::GL_RGBA32I;
static const gl::GLenum GL_RGB32I = gl::GLenum::GL_RGB32I;
static const gl::GLenum GL_RGBA16I = gl::GLenum::GL_RGBA16I;
static const gl::GLenum GL_RGB16I = gl::GLenum::GL_RGB16I;
static const gl::GLenum GL_RGBA8I = gl::GLenum::GL_RGBA8I;
static const gl::GLenum GL_RGB8I = gl::GLenum::GL_RGB8I;
static const gl::GLenum GL_RED_INTEGER = gl::GLenum::GL_RED_INTEGER;
static const gl::GLenum GL_GREEN_INTEGER = gl::GLenum::GL_GREEN_INTEGER;
static const gl::GLenum GL_BLUE_INTEGER = gl::GLenum::GL_BLUE_INTEGER;
static const gl::GLenum GL_RGB_INTEGER = gl::GLenum::GL_RGB_INTEGER;
static const gl::GLenum GL_RGBA_INTEGER = gl::GLenum::GL_RGBA_INTEGER;
static const gl::GLenum GL_BGR_INTEGER = gl::GLenum::GL_BGR_INTEGER;
static const gl::GLenum GL_BGRA_INTEGER = gl::GLenum::GL_BGRA_INTEGER;
static const gl::GLenum GL_INT_2_10_10_10_REV = gl::GLenum::GL_INT_2_10_10_10_REV;
static const gl::GLenum GL_FRAMEBUFFER_ATTACHMENT_LAYERED = gl::GLenum::GL_FRAMEBUFFER_ATTACHMENT_LAYERED;
static const gl::GLenum GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = gl::GLenum::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;
static const gl::GLenum GL_FLOAT_32_UNSIGNED_INT_24_8_REV = gl::GLenum::GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
static const gl::GLenum GL_FRAMEBUFFER_SRGB = gl::GLenum::GL_FRAMEBUFFER_SRGB;
static const gl::GLenum GL_COMPRESSED_RED_RGTC1 = gl::GLenum::GL_COMPRESSED_RED_RGTC1;
static const gl::GLenum GL_COMPRESSED_SIGNED_RED_RGTC1 = gl::GLenum::GL_COMPRESSED_SIGNED_RED_RGTC1;
static const gl::GLenum GL_COMPRESSED_RG_RGTC2 = gl::GLenum::GL_COMPRESSED_RG_RGTC2;
static const gl::GLenum GL_COMPRESSED_SIGNED_RG_RGTC2 = gl::GLenum::GL_COMPRESSED_SIGNED_RG_RGTC2;
static const gl::GLenum GL_SAMPLER_1D_ARRAY = gl::GLenum::GL_SAMPLER_1D_ARRAY;
static const gl::GLenum GL_SAMPLER_2D_ARRAY = gl::GLenum::GL_SAMPLER_2D_ARRAY;
static const gl::GLenum GL_SAMPLER_BUFFER = gl::GLenum::GL_SAMPLER_BUFFER;
static const gl::GLenum GL_SAMPLER_1D_ARRAY_SHADOW = gl::GLenum::GL_SAMPLER_1D_ARRAY_SHADOW;
static const gl::GLenum GL_SAMPLER_2D_ARRAY_SHADOW = gl::GLenum::GL_SAMPLER_2D_ARRAY_SHADOW;
static const gl::GLenum GL_SAMPLER_CUBE_SHADOW = gl::GLenum::GL_SAMPLER_CUBE_SHADOW;
static const gl::GLenum GL_UNSIGNED_INT_VEC2 = gl::GLenum::GL_UNSIGNED_INT_VEC2;
static const gl::GLenum GL_UNSIGNED_INT_VEC3 = gl::GLenum::GL_UNSIGNED_INT_VEC3;
static const gl::GLenum GL_UNSIGNED_INT_VEC4 = gl::GLenum::GL_UNSIGNED_INT_VEC4;
static const gl::GLenum GL_INT_SAMPLER_1D = gl::GLenum::GL_INT_SAMPLER_1D;
static const gl::GLenum GL_INT_SAMPLER_2D = gl::GLenum::GL_INT_SAMPLER_2D;
static const gl::GLenum GL_INT_SAMPLER_3D = gl::GLenum::GL_INT_SAMPLER_3D;
static const gl::GLenum GL_INT_SAMPLER_CUBE = gl::GLenum::GL_INT_SAMPLER_CUBE;
static const gl::GLenum GL_INT_SAMPLER_2D_RECT = gl::GLenum::GL_INT_SAMPLER_2D_RECT;
static const gl::GLenum GL_INT_SAMPLER_1D_ARRAY = gl::GLenum::GL_INT_SAMPLER_1D_ARRAY;
static const gl::GLenum GL_INT_SAMPLER_2D_ARRAY = gl::GLenum::GL_INT_SAMPLER_2D_ARRAY;
static const gl::GLenum GL_INT_SAMPLER_BUFFER = gl::GLenum::GL_INT_SAMPLER_BUFFER;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_1D = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_1D;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_2D = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_2D;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_3D = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_3D;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_CUBE = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_2D_RECT = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_2D_RECT;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_1D_ARRAY = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_1D_ARRAY;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_BUFFER = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_BUFFER;
static const gl::GLenum GL_GEOMETRY_SHADER = gl::GLenum::GL_GEOMETRY_SHADER;
static const gl::GLenum GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
static const gl::GLenum GL_MAX_GEOMETRY_OUTPUT_VERTICES = gl::GLenum::GL_MAX_GEOMETRY_OUTPUT_VERTICES;
static const gl::GLenum GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = gl::GLenum::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
static const gl::GLenum GL_ACTIVE_SUBROUTINES = gl::GLenum::GL_ACTIVE_SUBROUTINES;
static const gl::GLenum GL_ACTIVE_SUBROUTINE_UNIFORMS = gl::GLenum::GL_ACTIVE_SUBROUTINE_UNIFORMS;
static const gl::GLenum GL_MAX_SUBROUTINES = gl::GLenum::GL_MAX_SUBROUTINES;
static const gl::GLenum GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS = gl::GLenum::GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS;
static const gl::GLenum GL_QUERY_WAIT = gl::GLenum::GL_QUERY_WAIT;
static const gl::GLenum GL_QUERY_NO_WAIT = gl::GLenum::GL_QUERY_NO_WAIT;
static const gl::GLenum GL_QUERY_BY_REGION_WAIT = gl::GLenum::GL_QUERY_BY_REGION_WAIT;
static const gl::GLenum GL_QUERY_BY_REGION_NO_WAIT = gl::GLenum::GL_QUERY_BY_REGION_NO_WAIT;
static const gl::GLenum GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS;
static const gl::GLenum GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS;
static const gl::GLenum GL_TRANSFORM_FEEDBACK = gl::GLenum::GL_TRANSFORM_FEEDBACK;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED = gl::GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_PAUSED = gl::GLenum::GL_TRANSFORM_FEEDBACK_PAUSED;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_ACTIVE = gl::GLenum::GL_TRANSFORM_FEEDBACK_ACTIVE;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE = gl::GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_BINDING = gl::GLenum::GL_TRANSFORM_FEEDBACK_BINDING;
static const gl::GLenum GL_TIMESTAMP = gl::GLenum::GL_TIMESTAMP;
static const gl::GLenum GL_TEXTURE_SWIZZLE_R = gl::GLenum::GL_TEXTURE_SWIZZLE_R;
static const gl::GLenum GL_TEXTURE_SWIZZLE_G = gl::GLenum::GL_TEXTURE_SWIZZLE_G;
static const gl::GLenum GL_TEXTURE_SWIZZLE_B = gl::GLenum::GL_TEXTURE_SWIZZLE_B;
static const gl::GLenum GL_TEXTURE_SWIZZLE_A = gl::GLenum::GL_TEXTURE_SWIZZLE_A;
static const gl::GLenum GL_TEXTURE_SWIZZLE_RGBA = gl::GLenum::GL_TEXTURE_SWIZZLE_RGBA;
static const gl::GLenum GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS = gl::GLenum::GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS;
static const gl::GLenum GL_ACTIVE_SUBROUTINE_MAX_LENGTH = gl::GLenum::GL_ACTIVE_SUBROUTINE_MAX_LENGTH;
static const gl::GLenum GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH = gl::GLenum::GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH;
static const gl::GLenum GL_NUM_COMPATIBLE_SUBROUTINES = gl::GLenum::GL_NUM_COMPATIBLE_SUBROUTINES;
static const gl::GLenum GL_COMPATIBLE_SUBROUTINES = gl::GLenum::GL_COMPATIBLE_SUBROUTINES;
static const gl::GLenum GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = gl::GLenum::GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION;
static const gl::GLenum GL_FIRST_VERTEX_CONVENTION = gl::GLenum::GL_FIRST_VERTEX_CONVENTION;
static const gl::GLenum GL_LAST_VERTEX_CONVENTION = gl::GLenum::GL_LAST_VERTEX_CONVENTION;
static const gl::GLenum GL_PROVOKING_VERTEX = gl::GLenum::GL_PROVOKING_VERTEX;
static const gl::GLenum GL_SAMPLE_POSITION = gl::GLenum::GL_SAMPLE_POSITION;
static const gl::GLenum GL_SAMPLE_MASK = gl::GLenum::GL_SAMPLE_MASK;
static const gl::GLenum GL_SAMPLE_MASK_VALUE = gl::GLenum::GL_SAMPLE_MASK_VALUE;
static const gl::GLenum GL_MAX_SAMPLE_MASK_WORDS = gl::GLenum::GL_MAX_SAMPLE_MASK_WORDS;
static const gl::GLenum GL_MAX_GEOMETRY_SHADER_INVOCATIONS = gl::GLenum::GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
static const gl::GLenum GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = gl::GLenum::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET;
static const gl::GLenum GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = gl::GLenum::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET;
static const gl::GLenum GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = gl::GLenum::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS;
static const gl::GLenum GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = gl::GLenum::GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
static const gl::GLenum GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = gl::GLenum::GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
static const gl::GLenum GL_MAX_TRANSFORM_FEEDBACK_BUFFERS = gl::GLenum::GL_MAX_TRANSFORM_FEEDBACK_BUFFERS;
static const gl::GLenum GL_MAX_VERTEX_STREAMS = gl::GLenum::GL_MAX_VERTEX_STREAMS;
static const gl::GLenum GL_PATCH_VERTICES = gl::GLenum::GL_PATCH_VERTICES;
static const gl::GLenum GL_PATCH_DEFAULT_INNER_LEVEL = gl::GLenum::GL_PATCH_DEFAULT_INNER_LEVEL;
static const gl::GLenum GL_PATCH_DEFAULT_OUTER_LEVEL = gl::GLenum::GL_PATCH_DEFAULT_OUTER_LEVEL;
static const gl::GLenum GL_TESS_CONTROL_OUTPUT_VERTICES = gl::GLenum::GL_TESS_CONTROL_OUTPUT_VERTICES;
static const gl::GLenum GL_TESS_GEN_MODE = gl::GLenum::GL_TESS_GEN_MODE;
static const gl::GLenum GL_TESS_GEN_SPACING = gl::GLenum::GL_TESS_GEN_SPACING;
static const gl::GLenum GL_TESS_GEN_VERTEX_ORDER = gl::GLenum::GL_TESS_GEN_VERTEX_ORDER;
static const gl::GLenum GL_TESS_GEN_POINT_MODE = gl::GLenum::GL_TESS_GEN_POINT_MODE;
static const gl::GLenum GL_ISOLINES = gl::GLenum::GL_ISOLINES;
static const gl::GLenum GL_FRACTIONAL_ODD = gl::GLenum::GL_FRACTIONAL_ODD;
static const gl::GLenum GL_FRACTIONAL_EVEN = gl::GLenum::GL_FRACTIONAL_EVEN;
static const gl::GLenum GL_MAX_PATCH_VERTICES = gl::GLenum::GL_MAX_PATCH_VERTICES;
static const gl::GLenum GL_MAX_TESS_GEN_LEVEL = gl::GLenum::GL_MAX_TESS_GEN_LEVEL;
static const gl::GLenum GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS;
static const gl::GLenum GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS;
static const gl::GLenum GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = gl::GLenum::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS;
static const gl::GLenum GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = gl::GLenum::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS;
static const gl::GLenum GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = gl::GLenum::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
static const gl::GLenum GL_MAX_TESS_PATCH_COMPONENTS = gl::GLenum::GL_MAX_TESS_PATCH_COMPONENTS;
static const gl::GLenum GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = gl::GLenum::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS;
static const gl::GLenum GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = gl::GLenum::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
static const gl::GLenum GL_TESS_EVALUATION_SHADER = gl::GLenum::GL_TESS_EVALUATION_SHADER;
static const gl::GLenum GL_TESS_CONTROL_SHADER = gl::GLenum::GL_TESS_CONTROL_SHADER;
static const gl::GLenum GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = gl::GLenum::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS;
static const gl::GLenum GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = gl::GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS;
static const gl::GLenum GL_COPY_READ_BUFFER = gl::GLenum::GL_COPY_READ_BUFFER;
static const gl::GLenum GL_COPY_READ_BUFFER_BINDING = gl::GLenum::GL_COPY_READ_BUFFER_BINDING;
static const gl::GLenum GL_COPY_WRITE_BUFFER = gl::GLenum::GL_COPY_WRITE_BUFFER;
static const gl::GLenum GL_COPY_WRITE_BUFFER_BINDING = gl::GLenum::GL_COPY_WRITE_BUFFER_BINDING;
static const gl::GLenum GL_DRAW_INDIRECT_BUFFER = gl::GLenum::GL_DRAW_INDIRECT_BUFFER;
static const gl::GLenum GL_DRAW_INDIRECT_BUFFER_BINDING = gl::GLenum::GL_DRAW_INDIRECT_BUFFER_BINDING;
static const gl::GLenum GL_DOUBLE_MAT2 = gl::GLenum::GL_DOUBLE_MAT2;
static const gl::GLenum GL_DOUBLE_MAT3 = gl::GLenum::GL_DOUBLE_MAT3;
static const gl::GLenum GL_DOUBLE_MAT4 = gl::GLenum::GL_DOUBLE_MAT4;
static const gl::GLenum GL_DOUBLE_MAT2x3 = gl::GLenum::GL_DOUBLE_MAT2x3;
static const gl::GLenum GL_DOUBLE_MAT2x4 = gl::GLenum::GL_DOUBLE_MAT2x4;
static const gl::GLenum GL_DOUBLE_MAT3x2 = gl::GLenum::GL_DOUBLE_MAT3x2;
static const gl::GLenum GL_DOUBLE_MAT3x4 = gl::GLenum::GL_DOUBLE_MAT3x4;
static const gl::GLenum GL_DOUBLE_MAT4x2 = gl::GLenum::GL_DOUBLE_MAT4x2;
static const gl::GLenum GL_DOUBLE_MAT4x3 = gl::GLenum::GL_DOUBLE_MAT4x3;
static const gl::GLenum GL_R8_SNORM = gl::GLenum::GL_R8_SNORM;
static const gl::GLenum GL_RG8_SNORM = gl::GLenum::GL_RG8_SNORM;
static const gl::GLenum GL_RGB8_SNORM = gl::GLenum::GL_RGB8_SNORM;
static const gl::GLenum GL_RGBA8_SNORM = gl::GLenum::GL_RGBA8_SNORM;
static const gl::GLenum GL_R16_SNORM = gl::GLenum::GL_R16_SNORM;
static const gl::GLenum GL_RG16_SNORM = gl::GLenum::GL_RG16_SNORM;
static const gl::GLenum GL_RGB16_SNORM = gl::GLenum::GL_RGB16_SNORM;
static const gl::GLenum GL_RGBA16_SNORM = gl::GLenum::GL_RGBA16_SNORM;
static const gl::GLenum GL_SIGNED_NORMALIZED = gl::GLenum::GL_SIGNED_NORMALIZED;
static const gl::GLenum GL_PRIMITIVE_RESTART = gl::GLenum::GL_PRIMITIVE_RESTART;
static const gl::GLenum GL_PRIMITIVE_RESTART_INDEX = gl::GLenum::GL_PRIMITIVE_RESTART_INDEX;
static const gl::GLenum GL_DOUBLE_VEC2 = gl::GLenum::GL_DOUBLE_VEC2;
static const gl::GLenum GL_DOUBLE_VEC3 = gl::GLenum::GL_DOUBLE_VEC3;
static const gl::GLenum GL_DOUBLE_VEC4 = gl::GLenum::GL_DOUBLE_VEC4;
static const gl::GLenum GL_TEXTURE_CUBE_MAP_ARRAY = gl::GLenum::GL_TEXTURE_CUBE_MAP_ARRAY;
static const gl::GLenum GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = gl::GLenum::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY;
static const gl::GLenum GL_PROXY_TEXTURE_CUBE_MAP_ARRAY = gl::GLenum::GL_PROXY_TEXTURE_CUBE_MAP_ARRAY;
static const gl::GLenum GL_SAMPLER_CUBE_MAP_ARRAY = gl::GLenum::GL_SAMPLER_CUBE_MAP_ARRAY;
static const gl::GLenum GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = gl::GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW;
static const gl::GLenum GL_INT_SAMPLER_CUBE_MAP_ARRAY = gl::GLenum::GL_INT_SAMPLER_CUBE_MAP_ARRAY;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY;
static const gl::GLenum GL_RGB10_A2UI = gl::GLenum::GL_RGB10_A2UI;
static const gl::GLenum GL_TEXTURE_2D_MULTISAMPLE = gl::GLenum::GL_TEXTURE_2D_MULTISAMPLE;
static const gl::GLenum GL_PROXY_TEXTURE_2D_MULTISAMPLE = gl::GLenum::GL_PROXY_TEXTURE_2D_MULTISAMPLE;
static const gl::GLenum GL_TEXTURE_2D_MULTISAMPLE_ARRAY = gl::GLenum::GL_TEXTURE_2D_MULTISAMPLE_ARRAY;
static const gl::GLenum GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = gl::GLenum::GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY;
static const gl::GLenum GL_TEXTURE_BINDING_2D_MULTISAMPLE = gl::GLenum::GL_TEXTURE_BINDING_2D_MULTISAMPLE;
static const gl::GLenum GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = gl::GLenum::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY;
static const gl::GLenum GL_TEXTURE_SAMPLES = gl::GLenum::GL_TEXTURE_SAMPLES;
static const gl::GLenum GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = gl::GLenum::GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
static const gl::GLenum GL_SAMPLER_2D_MULTISAMPLE = gl::GLenum::GL_SAMPLER_2D_MULTISAMPLE;
static const gl::GLenum GL_INT_SAMPLER_2D_MULTISAMPLE = gl::GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
static const gl::GLenum GL_SAMPLER_2D_MULTISAMPLE_ARRAY = gl::GLenum::GL_SAMPLER_2D_MULTISAMPLE_ARRAY;
static const gl::GLenum GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = gl::GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
static const gl::GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = gl::GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
static const gl::GLenum GL_MAX_COLOR_TEXTURE_SAMPLES = gl::GLenum::GL_MAX_COLOR_TEXTURE_SAMPLES;
static const gl::GLenum GL_MAX_DEPTH_TEXTURE_SAMPLES = gl::GLenum::GL_MAX_DEPTH_TEXTURE_SAMPLES;
static const gl::GLenum GL_MAX_INTEGER_SAMPLES = gl::GLenum::GL_MAX_INTEGER_SAMPLES;
static const gl::GLenum GL_MAX_SERVER_WAIT_TIMEOUT = gl::GLenum::GL_MAX_SERVER_WAIT_TIMEOUT;
static const gl::GLenum GL_OBJECT_TYPE = gl::GLenum::GL_OBJECT_TYPE;
static const gl::GLenum GL_SYNC_CONDITION = gl::GLenum::GL_SYNC_CONDITION;
static const gl::GLenum GL_SYNC_STATUS = gl::GLenum::GL_SYNC_STATUS;
static const gl::GLenum GL_SYNC_FLAGS = gl::GLenum::GL_SYNC_FLAGS;
static const gl::GLenum GL_SYNC_FENCE = gl::GLenum::GL_SYNC_FENCE;
static const gl::GLenum GL_SYNC_GPU_COMMANDS_COMPLETE = gl::GLenum::GL_SYNC_GPU_COMMANDS_COMPLETE;
static const gl::GLenum GL_UNSIGNALED = gl::GLenum::GL_UNSIGNALED;
static const gl::GLenum GL_SIGNALED = gl::GLenum::GL_SIGNALED;
static const gl::GLenum GL_ALREADY_SIGNALED = gl::GLenum::GL_ALREADY_SIGNALED;
static const gl::GLenum GL_TIMEOUT_EXPIRED = gl::GLenum::GL_TIMEOUT_EXPIRED;
static const gl::GLenum GL_CONDITION_SATISFIED = gl::GLenum::GL_CONDITION_SATISFIED;
static const gl::GLenum GL_WAIT_FAILED = gl::GLenum::GL_WAIT_FAILED;
static const gl::GLenum GL_BUFFER_ACCESS_FLAGS = gl::GLenum::GL_BUFFER_ACCESS_FLAGS;
static const gl::GLenum GL_BUFFER_MAP_LENGTH = gl::GLenum::GL_BUFFER_MAP_LENGTH;
static const gl::GLenum GL_BUFFER_MAP_OFFSET = gl::GLenum::GL_BUFFER_MAP_OFFSET;
static const gl::GLenum GL_MAX_VERTEX_OUTPUT_COMPONENTS = gl::GLenum::GL_MAX_VERTEX_OUTPUT_COMPONENTS;
static const gl::GLenum GL_MAX_GEOMETRY_INPUT_COMPONENTS = gl::GLenum::GL_MAX_GEOMETRY_INPUT_COMPONENTS;
static const gl::GLenum GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = gl::GLenum::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
static const gl::GLenum GL_MAX_FRAGMENT_INPUT_COMPONENTS = gl::GLenum::GL_MAX_FRAGMENT_INPUT_COMPONENTS;
static const gl::GLenum GL_CONTEXT_PROFILE_MASK = gl::GLenum::GL_CONTEXT_PROFILE_MASK;

} // namespace gl40core
