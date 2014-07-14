#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/enum.h>


namespace gl32core
{

using namespace gl;

// import enums to namespace


// AccumOp



// AlphaFunction

static const GLenum GL_NEVER = GLenum::GL_NEVER;
static const GLenum GL_LESS = GLenum::GL_LESS;
static const GLenum GL_EQUAL = GLenum::GL_EQUAL;
static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL;
static const GLenum GL_GREATER = GLenum::GL_GREATER;
static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL;
static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL;
static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS;

// BlendEquationModeEXT



// BlendingFactorDest

static const GLenum GL_ZERO = GLenum::GL_ZERO;
static const GLenum GL_SRC_COLOR = GLenum::GL_SRC_COLOR;
static const GLenum GL_ONE_MINUS_SRC_COLOR = GLenum::GL_ONE_MINUS_SRC_COLOR;
static const GLenum GL_SRC_ALPHA = GLenum::GL_SRC_ALPHA;
static const GLenum GL_ONE_MINUS_SRC_ALPHA = GLenum::GL_ONE_MINUS_SRC_ALPHA;
static const GLenum GL_DST_ALPHA = GLenum::GL_DST_ALPHA;
static const GLenum GL_ONE_MINUS_DST_ALPHA = GLenum::GL_ONE_MINUS_DST_ALPHA;
static const GLenum GL_ONE = GLenum::GL_ONE;

// BlendingFactorSrc

// static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse BlendingFactorDest
// static const GLenum GL_SRC_ALPHA = GLenum::GL_SRC_ALPHA; // reuse BlendingFactorDest
// static const GLenum GL_ONE_MINUS_SRC_ALPHA = GLenum::GL_ONE_MINUS_SRC_ALPHA; // reuse BlendingFactorDest
// static const GLenum GL_DST_ALPHA = GLenum::GL_DST_ALPHA; // reuse BlendingFactorDest
// static const GLenum GL_ONE_MINUS_DST_ALPHA = GLenum::GL_ONE_MINUS_DST_ALPHA; // reuse BlendingFactorDest
static const GLenum GL_DST_COLOR = GLenum::GL_DST_COLOR;
static const GLenum GL_ONE_MINUS_DST_COLOR = GLenum::GL_ONE_MINUS_DST_COLOR;
static const GLenum GL_SRC_ALPHA_SATURATE = GLenum::GL_SRC_ALPHA_SATURATE;
// static const GLenum GL_ONE = GLenum::GL_ONE; // reuse BlendingFactorDest

// ClipPlaneName

static const GLenum GL_CLIP_DISTANCE0 = GLenum::GL_CLIP_DISTANCE0;
static const GLenum GL_CLIP_DISTANCE1 = GLenum::GL_CLIP_DISTANCE1;
static const GLenum GL_CLIP_DISTANCE2 = GLenum::GL_CLIP_DISTANCE2;
static const GLenum GL_CLIP_DISTANCE3 = GLenum::GL_CLIP_DISTANCE3;
static const GLenum GL_CLIP_DISTANCE4 = GLenum::GL_CLIP_DISTANCE4;
static const GLenum GL_CLIP_DISTANCE5 = GLenum::GL_CLIP_DISTANCE5;
static const GLenum GL_CLIP_DISTANCE6 = GLenum::GL_CLIP_DISTANCE6;
static const GLenum GL_CLIP_DISTANCE7 = GLenum::GL_CLIP_DISTANCE7;

// ColorMaterialFace

static const GLenum GL_FRONT = GLenum::GL_FRONT;
static const GLenum GL_BACK = GLenum::GL_BACK;
static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK;

// ColorMaterialParameter



// ColorPointerType

static const GLenum GL_BYTE = GLenum::GL_BYTE;
static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE;
static const GLenum GL_SHORT = GLenum::GL_SHORT;
static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT;
static const GLenum GL_INT = GLenum::GL_INT;
static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT;
static const GLenum GL_FLOAT = GLenum::GL_FLOAT;
static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE;

// ColorTableParameterPNameSGI



// ColorTableTargetSGI



// ConvolutionBorderModeEXT



// ConvolutionParameterEXT



// ConvolutionTargetEXT



// CullFaceMode

// static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// DepthFunction

// static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

static const GLenum GL_NONE = GLenum::GL_NONE;
static const GLenum GL_FRONT_LEFT = GLenum::GL_FRONT_LEFT;
static const GLenum GL_FRONT_RIGHT = GLenum::GL_FRONT_RIGHT;
static const GLenum GL_BACK_LEFT = GLenum::GL_BACK_LEFT;
static const GLenum GL_BACK_RIGHT = GLenum::GL_BACK_RIGHT;
// static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
static const GLenum GL_LEFT = GLenum::GL_LEFT;
static const GLenum GL_RIGHT = GLenum::GL_RIGHT;
// static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// EnableCap

static const GLenum GL_LINE_SMOOTH = GLenum::GL_LINE_SMOOTH;
static const GLenum GL_POLYGON_SMOOTH = GLenum::GL_POLYGON_SMOOTH;
static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE;
static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST;
static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST;
static const GLenum GL_DITHER = GLenum::GL_DITHER;
static const GLenum GL_BLEND = GLenum::GL_BLEND;
static const GLenum GL_COLOR_LOGIC_OP = GLenum::GL_COLOR_LOGIC_OP;
static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST;
static const GLenum GL_TEXTURE_1D = GLenum::GL_TEXTURE_1D;
static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D;
static const GLenum GL_POLYGON_OFFSET_POINT = GLenum::GL_POLYGON_OFFSET_POINT;
static const GLenum GL_POLYGON_OFFSET_LINE = GLenum::GL_POLYGON_OFFSET_LINE;
static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL;

// ErrorCode

static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR;
static const GLenum GL_INVALID_ENUM = GLenum::GL_INVALID_ENUM;
static const GLenum GL_INVALID_VALUE = GLenum::GL_INVALID_VALUE;
static const GLenum GL_INVALID_OPERATION = GLenum::GL_INVALID_OPERATION;
static const GLenum GL_OUT_OF_MEMORY = GLenum::GL_OUT_OF_MEMORY;
static const GLenum GL_INVALID_FRAMEBUFFER_OPERATION = GLenum::GL_INVALID_FRAMEBUFFER_OPERATION;

// FeedBackToken



// FeedbackType



// FfdTargetSGIX



// FogCoordinatePointerType

// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// FogMode

static const GLenum GL_LINEAR = GLenum::GL_LINEAR;

// FogParameter



// FogPointerTypeEXT

// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// FogPointerTypeIBM

// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// FragmentLightModelParameterSGIX



// FrontFaceDirection

static const GLenum GL_CW = GLenum::GL_CW;
static const GLenum GL_CCW = GLenum::GL_CCW;

// GetColorTableParameterPNameSGI



// GetConvolutionParameter



// GetHistogramParameterPNameEXT



// GetMapQuery



// GetMinmaxParameterPNameEXT



// GetPName

static const GLenum GL_POINT_SIZE = GLenum::GL_POINT_SIZE;
static const GLenum GL_POINT_SIZE_RANGE = GLenum::GL_POINT_SIZE_RANGE;
static const GLenum GL_SMOOTH_POINT_SIZE_RANGE = GLenum::GL_SMOOTH_POINT_SIZE_RANGE;
static const GLenum GL_POINT_SIZE_GRANULARITY = GLenum::GL_POINT_SIZE_GRANULARITY;
static const GLenum GL_SMOOTH_POINT_SIZE_GRANULARITY = GLenum::GL_SMOOTH_POINT_SIZE_GRANULARITY;
// static const GLenum GL_LINE_SMOOTH = GLenum::GL_LINE_SMOOTH; // reuse EnableCap
static const GLenum GL_LINE_WIDTH = GLenum::GL_LINE_WIDTH;
static const GLenum GL_LINE_WIDTH_RANGE = GLenum::GL_LINE_WIDTH_RANGE;
static const GLenum GL_SMOOTH_LINE_WIDTH_RANGE = GLenum::GL_SMOOTH_LINE_WIDTH_RANGE;
static const GLenum GL_LINE_WIDTH_GRANULARITY = GLenum::GL_LINE_WIDTH_GRANULARITY;
static const GLenum GL_SMOOTH_LINE_WIDTH_GRANULARITY = GLenum::GL_SMOOTH_LINE_WIDTH_GRANULARITY;
static const GLenum GL_POLYGON_MODE = GLenum::GL_POLYGON_MODE;
// static const GLenum GL_POLYGON_SMOOTH = GLenum::GL_POLYGON_SMOOTH; // reuse EnableCap
// static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE; // reuse EnableCap
static const GLenum GL_CULL_FACE_MODE = GLenum::GL_CULL_FACE_MODE;
static const GLenum GL_FRONT_FACE = GLenum::GL_FRONT_FACE;
static const GLenum GL_DEPTH_RANGE = GLenum::GL_DEPTH_RANGE;
// static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST; // reuse EnableCap
static const GLenum GL_DEPTH_WRITEMASK = GLenum::GL_DEPTH_WRITEMASK;
static const GLenum GL_DEPTH_CLEAR_VALUE = GLenum::GL_DEPTH_CLEAR_VALUE;
static const GLenum GL_DEPTH_FUNC = GLenum::GL_DEPTH_FUNC;
// static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST; // reuse EnableCap
static const GLenum GL_STENCIL_CLEAR_VALUE = GLenum::GL_STENCIL_CLEAR_VALUE;
static const GLenum GL_STENCIL_FUNC = GLenum::GL_STENCIL_FUNC;
static const GLenum GL_STENCIL_VALUE_MASK = GLenum::GL_STENCIL_VALUE_MASK;
static const GLenum GL_STENCIL_FAIL = GLenum::GL_STENCIL_FAIL;
static const GLenum GL_STENCIL_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_PASS_DEPTH_FAIL;
static const GLenum GL_STENCIL_PASS_DEPTH_PASS = GLenum::GL_STENCIL_PASS_DEPTH_PASS;
static const GLenum GL_STENCIL_REF = GLenum::GL_STENCIL_REF;
static const GLenum GL_STENCIL_WRITEMASK = GLenum::GL_STENCIL_WRITEMASK;
static const GLenum GL_VIEWPORT = GLenum::GL_VIEWPORT;
// static const GLenum GL_DITHER = GLenum::GL_DITHER; // reuse EnableCap
static const GLenum GL_BLEND_DST = GLenum::GL_BLEND_DST;
static const GLenum GL_BLEND_SRC = GLenum::GL_BLEND_SRC;
// static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap
static const GLenum GL_LOGIC_OP_MODE = GLenum::GL_LOGIC_OP_MODE;
// static const GLenum GL_COLOR_LOGIC_OP = GLenum::GL_COLOR_LOGIC_OP; // reuse EnableCap
static const GLenum GL_DRAW_BUFFER = GLenum::GL_DRAW_BUFFER;
static const GLenum GL_READ_BUFFER = GLenum::GL_READ_BUFFER;
static const GLenum GL_SCISSOR_BOX = GLenum::GL_SCISSOR_BOX;
// static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST; // reuse EnableCap
static const GLenum GL_COLOR_CLEAR_VALUE = GLenum::GL_COLOR_CLEAR_VALUE;
static const GLenum GL_COLOR_WRITEMASK = GLenum::GL_COLOR_WRITEMASK;
static const GLenum GL_DOUBLEBUFFER = GLenum::GL_DOUBLEBUFFER;
static const GLenum GL_STEREO = GLenum::GL_STEREO;
static const GLenum GL_LINE_SMOOTH_HINT = GLenum::GL_LINE_SMOOTH_HINT;
static const GLenum GL_POLYGON_SMOOTH_HINT = GLenum::GL_POLYGON_SMOOTH_HINT;
static const GLenum GL_UNPACK_SWAP_BYTES = GLenum::GL_UNPACK_SWAP_BYTES;
static const GLenum GL_UNPACK_LSB_FIRST = GLenum::GL_UNPACK_LSB_FIRST;
static const GLenum GL_UNPACK_ROW_LENGTH = GLenum::GL_UNPACK_ROW_LENGTH;
static const GLenum GL_UNPACK_SKIP_ROWS = GLenum::GL_UNPACK_SKIP_ROWS;
static const GLenum GL_UNPACK_SKIP_PIXELS = GLenum::GL_UNPACK_SKIP_PIXELS;
static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT;
static const GLenum GL_PACK_SWAP_BYTES = GLenum::GL_PACK_SWAP_BYTES;
static const GLenum GL_PACK_LSB_FIRST = GLenum::GL_PACK_LSB_FIRST;
static const GLenum GL_PACK_ROW_LENGTH = GLenum::GL_PACK_ROW_LENGTH;
static const GLenum GL_PACK_SKIP_ROWS = GLenum::GL_PACK_SKIP_ROWS;
static const GLenum GL_PACK_SKIP_PIXELS = GLenum::GL_PACK_SKIP_PIXELS;
static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT;
static const GLenum GL_MAX_CLIP_DISTANCES = GLenum::GL_MAX_CLIP_DISTANCES;
static const GLenum GL_MAX_TEXTURE_SIZE = GLenum::GL_MAX_TEXTURE_SIZE;
static const GLenum GL_MAX_VIEWPORT_DIMS = GLenum::GL_MAX_VIEWPORT_DIMS;
static const GLenum GL_SUBPIXEL_BITS = GLenum::GL_SUBPIXEL_BITS;
// static const GLenum GL_TEXTURE_1D = GLenum::GL_TEXTURE_1D; // reuse EnableCap
// static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap
static const GLenum GL_POLYGON_OFFSET_UNITS = GLenum::GL_POLYGON_OFFSET_UNITS;
// static const GLenum GL_POLYGON_OFFSET_POINT = GLenum::GL_POLYGON_OFFSET_POINT; // reuse EnableCap
// static const GLenum GL_POLYGON_OFFSET_LINE = GLenum::GL_POLYGON_OFFSET_LINE; // reuse EnableCap
// static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
static const GLenum GL_POLYGON_OFFSET_FACTOR = GLenum::GL_POLYGON_OFFSET_FACTOR;
static const GLenum GL_TEXTURE_BINDING_1D = GLenum::GL_TEXTURE_BINDING_1D;
static const GLenum GL_TEXTURE_BINDING_2D = GLenum::GL_TEXTURE_BINDING_2D;
static const GLenum GL_TEXTURE_BINDING_3D = GLenum::GL_TEXTURE_BINDING_3D;
static const GLenum GL_ALIASED_LINE_WIDTH_RANGE = GLenum::GL_ALIASED_LINE_WIDTH_RANGE;

// GetPixelMap



// GetPointervPName



// GetTextureParameter

static const GLenum GL_TEXTURE_WIDTH = GLenum::GL_TEXTURE_WIDTH;
static const GLenum GL_TEXTURE_HEIGHT = GLenum::GL_TEXTURE_HEIGHT;
static const GLenum GL_TEXTURE_INTERNAL_FORMAT = GLenum::GL_TEXTURE_INTERNAL_FORMAT;
static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR;
static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER;
static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER;
static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S;
static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T;
static const GLenum GL_TEXTURE_RED_SIZE = GLenum::GL_TEXTURE_RED_SIZE;
static const GLenum GL_TEXTURE_GREEN_SIZE = GLenum::GL_TEXTURE_GREEN_SIZE;
static const GLenum GL_TEXTURE_BLUE_SIZE = GLenum::GL_TEXTURE_BLUE_SIZE;
static const GLenum GL_TEXTURE_ALPHA_SIZE = GLenum::GL_TEXTURE_ALPHA_SIZE;

// HintMode

static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE;
static const GLenum GL_FASTEST = GLenum::GL_FASTEST;
static const GLenum GL_NICEST = GLenum::GL_NICEST;

// HintTarget

// static const GLenum GL_LINE_SMOOTH_HINT = GLenum::GL_LINE_SMOOTH_HINT; // reuse GetPName
// static const GLenum GL_POLYGON_SMOOTH_HINT = GLenum::GL_POLYGON_SMOOTH_HINT; // reuse GetPName
static const GLenum GL_TEXTURE_COMPRESSION_HINT = GLenum::GL_TEXTURE_COMPRESSION_HINT;
static const GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT = GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;

// HistogramTargetEXT



// IndexPointerType

// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// InterleavedArrayFormat



// InternalFormat

static const GLenum GL_R3_G3_B2 = GLenum::GL_R3_G3_B2;
static const GLenum GL_RGB4 = GLenum::GL_RGB4;
static const GLenum GL_RGB5 = GLenum::GL_RGB5;
static const GLenum GL_RGB8 = GLenum::GL_RGB8;
static const GLenum GL_RGB10 = GLenum::GL_RGB10;
static const GLenum GL_RGB12 = GLenum::GL_RGB12;
static const GLenum GL_RGB16 = GLenum::GL_RGB16;
static const GLenum GL_RGBA2 = GLenum::GL_RGBA2;
static const GLenum GL_RGBA4 = GLenum::GL_RGBA4;
static const GLenum GL_RGB5_A1 = GLenum::GL_RGB5_A1;
static const GLenum GL_RGBA8 = GLenum::GL_RGBA8;
static const GLenum GL_RGB10_A2 = GLenum::GL_RGB10_A2;
static const GLenum GL_RGBA12 = GLenum::GL_RGBA12;
static const GLenum GL_RGBA16 = GLenum::GL_RGBA16;

// LightEnvModeSGIX

static const GLenum GL_REPLACE = GLenum::GL_REPLACE;

// LightEnvParameterSGIX



// LightModelColorControl



// LightModelParameter



// LightName



// LightParameter



// ListMode



// ListNameType

// static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// ListParameterName



// LogicOp

static const GLenum GL_CLEAR = GLenum::GL_CLEAR;
static const GLenum GL_AND = GLenum::GL_AND;
static const GLenum GL_AND_REVERSE = GLenum::GL_AND_REVERSE;
static const GLenum GL_COPY = GLenum::GL_COPY;
static const GLenum GL_AND_INVERTED = GLenum::GL_AND_INVERTED;
static const GLenum GL_NOOP = GLenum::GL_NOOP;
static const GLenum GL_XOR = GLenum::GL_XOR;
static const GLenum GL_OR = GLenum::GL_OR;
static const GLenum GL_NOR = GLenum::GL_NOR;
static const GLenum GL_EQUIV = GLenum::GL_EQUIV;
static const GLenum GL_INVERT = GLenum::GL_INVERT;
static const GLenum GL_OR_REVERSE = GLenum::GL_OR_REVERSE;
static const GLenum GL_COPY_INVERTED = GLenum::GL_COPY_INVERTED;
static const GLenum GL_OR_INVERTED = GLenum::GL_OR_INVERTED;
static const GLenum GL_NAND = GLenum::GL_NAND;
static const GLenum GL_SET = GLenum::GL_SET;

// MapTarget



// MapTextureFormatINTEL



// MaterialFace

// static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// MaterialParameter



// MatrixMode

static const GLenum GL_TEXTURE = GLenum::GL_TEXTURE;

// MeshMode1

static const GLenum GL_POINT = GLenum::GL_POINT;
static const GLenum GL_LINE = GLenum::GL_LINE;

// MeshMode2

// static const GLenum GL_POINT = GLenum::GL_POINT; // reuse MeshMode1
// static const GLenum GL_LINE = GLenum::GL_LINE; // reuse MeshMode1
static const GLenum GL_FILL = GLenum::GL_FILL;

// MinmaxTargetEXT



// NormalPointerType

// static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// OcclusionQueryEventMaskAMD



// PixelCopyType

static const GLenum GL_COLOR = GLenum::GL_COLOR;
static const GLenum GL_DEPTH = GLenum::GL_DEPTH;
static const GLenum GL_STENCIL = GLenum::GL_STENCIL;

// PixelFormat

// static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
static const GLenum GL_STENCIL_INDEX = GLenum::GL_STENCIL_INDEX;
static const GLenum GL_DEPTH_COMPONENT = GLenum::GL_DEPTH_COMPONENT;
static const GLenum GL_RED = GLenum::GL_RED;
static const GLenum GL_GREEN = GLenum::GL_GREEN;
static const GLenum GL_BLUE = GLenum::GL_BLUE;
static const GLenum GL_ALPHA = GLenum::GL_ALPHA;
static const GLenum GL_RGB = GLenum::GL_RGB;
static const GLenum GL_RGBA = GLenum::GL_RGBA;

// PixelMap



// PixelStoreParameter

// static const GLenum GL_UNPACK_SWAP_BYTES = GLenum::GL_UNPACK_SWAP_BYTES; // reuse GetPName
// static const GLenum GL_UNPACK_LSB_FIRST = GLenum::GL_UNPACK_LSB_FIRST; // reuse GetPName
// static const GLenum GL_UNPACK_ROW_LENGTH = GLenum::GL_UNPACK_ROW_LENGTH; // reuse GetPName
// static const GLenum GL_UNPACK_SKIP_ROWS = GLenum::GL_UNPACK_SKIP_ROWS; // reuse GetPName
// static const GLenum GL_UNPACK_SKIP_PIXELS = GLenum::GL_UNPACK_SKIP_PIXELS; // reuse GetPName
// static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT; // reuse GetPName
// static const GLenum GL_PACK_SWAP_BYTES = GLenum::GL_PACK_SWAP_BYTES; // reuse GetPName
// static const GLenum GL_PACK_LSB_FIRST = GLenum::GL_PACK_LSB_FIRST; // reuse GetPName
// static const GLenum GL_PACK_ROW_LENGTH = GLenum::GL_PACK_ROW_LENGTH; // reuse GetPName
// static const GLenum GL_PACK_SKIP_ROWS = GLenum::GL_PACK_SKIP_ROWS; // reuse GetPName
// static const GLenum GL_PACK_SKIP_PIXELS = GLenum::GL_PACK_SKIP_PIXELS; // reuse GetPName
// static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT; // reuse GetPName
static const GLenum GL_PACK_SKIP_IMAGES = GLenum::GL_PACK_SKIP_IMAGES;
static const GLenum GL_PACK_IMAGE_HEIGHT = GLenum::GL_PACK_IMAGE_HEIGHT;
static const GLenum GL_UNPACK_SKIP_IMAGES = GLenum::GL_UNPACK_SKIP_IMAGES;
static const GLenum GL_UNPACK_IMAGE_HEIGHT = GLenum::GL_UNPACK_IMAGE_HEIGHT;

// PixelStoreResampleMode



// PixelStoreSubsampleRate



// PixelTexGenMode

// static const GLenum GL_NONE = GLenum::GL_NONE; // reuse DrawBufferMode
// static const GLenum GL_RGB = GLenum::GL_RGB; // reuse PixelFormat
// static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse PixelFormat

// PixelTexGenParameterNameSGIS



// PixelTransferParameter



// PixelType

// static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
static const GLenum GL_UNSIGNED_BYTE_3_3_2 = GLenum::GL_UNSIGNED_BYTE_3_3_2;
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4 = GLenum::GL_UNSIGNED_SHORT_4_4_4_4;
static const GLenum GL_UNSIGNED_SHORT_5_5_5_1 = GLenum::GL_UNSIGNED_SHORT_5_5_5_1;
static const GLenum GL_UNSIGNED_INT_8_8_8_8 = GLenum::GL_UNSIGNED_INT_8_8_8_8;
static const GLenum GL_UNSIGNED_INT_10_10_10_2 = GLenum::GL_UNSIGNED_INT_10_10_10_2;

// PointParameterNameSGIS

static const GLenum GL_POINT_FADE_THRESHOLD_SIZE = GLenum::GL_POINT_FADE_THRESHOLD_SIZE;

// PolygonMode

// static const GLenum GL_POINT = GLenum::GL_POINT; // reuse MeshMode1
// static const GLenum GL_LINE = GLenum::GL_LINE; // reuse MeshMode1
// static const GLenum GL_FILL = GLenum::GL_FILL; // reuse MeshMode2

// PrimitiveType

static const GLenum GL_POINTS = GLenum::GL_POINTS;
static const GLenum GL_LINES = GLenum::GL_LINES;
static const GLenum GL_LINE_LOOP = GLenum::GL_LINE_LOOP;
static const GLenum GL_LINE_STRIP = GLenum::GL_LINE_STRIP;
static const GLenum GL_TRIANGLES = GLenum::GL_TRIANGLES;
static const GLenum GL_TRIANGLE_STRIP = GLenum::GL_TRIANGLE_STRIP;
static const GLenum GL_TRIANGLE_FAN = GLenum::GL_TRIANGLE_FAN;
static const GLenum GL_LINES_ADJACENCY = GLenum::GL_LINES_ADJACENCY;
static const GLenum GL_LINE_STRIP_ADJACENCY = GLenum::GL_LINE_STRIP_ADJACENCY;
static const GLenum GL_TRIANGLES_ADJACENCY = GLenum::GL_TRIANGLES_ADJACENCY;
static const GLenum GL_TRIANGLE_STRIP_ADJACENCY = GLenum::GL_TRIANGLE_STRIP_ADJACENCY;

// ReadBufferMode

// static const GLenum GL_FRONT_LEFT = GLenum::GL_FRONT_LEFT; // reuse DrawBufferMode
// static const GLenum GL_FRONT_RIGHT = GLenum::GL_FRONT_RIGHT; // reuse DrawBufferMode
// static const GLenum GL_BACK_LEFT = GLenum::GL_BACK_LEFT; // reuse DrawBufferMode
// static const GLenum GL_BACK_RIGHT = GLenum::GL_BACK_RIGHT; // reuse DrawBufferMode
// static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// static const GLenum GL_LEFT = GLenum::GL_LEFT; // reuse DrawBufferMode
// static const GLenum GL_RIGHT = GLenum::GL_RIGHT; // reuse DrawBufferMode

// RenderingMode



// SamplePatternSGIS



// SeparableTargetEXT



// ShadingModel



// StencilFunction

// static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse BlendingFactorDest
// static const GLenum GL_INVERT = GLenum::GL_INVERT; // reuse LogicOp
static const GLenum GL_KEEP = GLenum::GL_KEEP;
// static const GLenum GL_REPLACE = GLenum::GL_REPLACE; // reuse LightEnvModeSGIX
static const GLenum GL_INCR = GLenum::GL_INCR;
static const GLenum GL_DECR = GLenum::GL_DECR;

// StringName

static const GLenum GL_VENDOR = GLenum::GL_VENDOR;
static const GLenum GL_RENDERER = GLenum::GL_RENDERER;
static const GLenum GL_VERSION = GLenum::GL_VERSION;
static const GLenum GL_EXTENSIONS = GLenum::GL_EXTENSIONS;

// TexCoordPointerType

// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// TextureCoordName



// TextureEnvMode

// static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap

// TextureEnvParameter



// TextureEnvTarget



// TextureFilterFuncSGIS



// TextureGenMode



// TextureGenParameter



// TextureMagFilter

static const GLenum GL_NEAREST = GLenum::GL_NEAREST;
// static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse FogMode

// TextureMinFilter

// static const GLenum GL_NEAREST = GLenum::GL_NEAREST; // reuse TextureMagFilter
// static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse FogMode
static const GLenum GL_NEAREST_MIPMAP_NEAREST = GLenum::GL_NEAREST_MIPMAP_NEAREST;
static const GLenum GL_LINEAR_MIPMAP_NEAREST = GLenum::GL_LINEAR_MIPMAP_NEAREST;
static const GLenum GL_NEAREST_MIPMAP_LINEAR = GLenum::GL_NEAREST_MIPMAP_LINEAR;
static const GLenum GL_LINEAR_MIPMAP_LINEAR = GLenum::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
// static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
static const GLenum GL_TEXTURE_WRAP_R = GLenum::GL_TEXTURE_WRAP_R;

// TextureTarget

// static const GLenum GL_TEXTURE_1D = GLenum::GL_TEXTURE_1D; // reuse EnableCap
// static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap
static const GLenum GL_PROXY_TEXTURE_1D = GLenum::GL_PROXY_TEXTURE_1D;
static const GLenum GL_PROXY_TEXTURE_2D = GLenum::GL_PROXY_TEXTURE_2D;
static const GLenum GL_TEXTURE_3D = GLenum::GL_TEXTURE_3D;
static const GLenum GL_PROXY_TEXTURE_3D = GLenum::GL_PROXY_TEXTURE_3D;
static const GLenum GL_TEXTURE_MIN_LOD = GLenum::GL_TEXTURE_MIN_LOD;
static const GLenum GL_TEXTURE_MAX_LOD = GLenum::GL_TEXTURE_MAX_LOD;
static const GLenum GL_TEXTURE_BASE_LEVEL = GLenum::GL_TEXTURE_BASE_LEVEL;
static const GLenum GL_TEXTURE_MAX_LEVEL = GLenum::GL_TEXTURE_MAX_LEVEL;

// TextureWrapMode

static const GLenum GL_REPEAT = GLenum::GL_REPEAT;
static const GLenum GL_CLAMP_TO_BORDER = GLenum::GL_CLAMP_TO_BORDER;
static const GLenum GL_CLAMP_TO_EDGE = GLenum::GL_CLAMP_TO_EDGE;

// VertexPointerType

// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// __UNGROUPED__

static const GLenum GL_HALF_FLOAT = GLenum::GL_HALF_FLOAT;
static const GLenum GL_CONSTANT_COLOR = GLenum::GL_CONSTANT_COLOR;
static const GLenum GL_ONE_MINUS_CONSTANT_COLOR = GLenum::GL_ONE_MINUS_CONSTANT_COLOR;
static const GLenum GL_CONSTANT_ALPHA = GLenum::GL_CONSTANT_ALPHA;
static const GLenum GL_ONE_MINUS_CONSTANT_ALPHA = GLenum::GL_ONE_MINUS_CONSTANT_ALPHA;
static const GLenum GL_FUNC_ADD = GLenum::GL_FUNC_ADD;
static const GLenum GL_MIN = GLenum::GL_MIN;
static const GLenum GL_MAX = GLenum::GL_MAX;
static const GLenum GL_BLEND_EQUATION_RGB = GLenum::GL_BLEND_EQUATION_RGB;
static const GLenum GL_FUNC_SUBTRACT = GLenum::GL_FUNC_SUBTRACT;
static const GLenum GL_FUNC_REVERSE_SUBTRACT = GLenum::GL_FUNC_REVERSE_SUBTRACT;
static const GLenum GL_TEXTURE_DEPTH = GLenum::GL_TEXTURE_DEPTH;
static const GLenum GL_MAX_3D_TEXTURE_SIZE = GLenum::GL_MAX_3D_TEXTURE_SIZE;
static const GLenum GL_MULTISAMPLE = GLenum::GL_MULTISAMPLE;
static const GLenum GL_SAMPLE_ALPHA_TO_COVERAGE = GLenum::GL_SAMPLE_ALPHA_TO_COVERAGE;
static const GLenum GL_SAMPLE_ALPHA_TO_ONE = GLenum::GL_SAMPLE_ALPHA_TO_ONE;
static const GLenum GL_SAMPLE_COVERAGE = GLenum::GL_SAMPLE_COVERAGE;
static const GLenum GL_SAMPLE_BUFFERS = GLenum::GL_SAMPLE_BUFFERS;
static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES;
static const GLenum GL_SAMPLE_COVERAGE_VALUE = GLenum::GL_SAMPLE_COVERAGE_VALUE;
static const GLenum GL_SAMPLE_COVERAGE_INVERT = GLenum::GL_SAMPLE_COVERAGE_INVERT;
static const GLenum GL_BLEND_DST_RGB = GLenum::GL_BLEND_DST_RGB;
static const GLenum GL_BLEND_SRC_RGB = GLenum::GL_BLEND_SRC_RGB;
static const GLenum GL_BLEND_DST_ALPHA = GLenum::GL_BLEND_DST_ALPHA;
static const GLenum GL_BLEND_SRC_ALPHA = GLenum::GL_BLEND_SRC_ALPHA;
static const GLenum GL_BGR = GLenum::GL_BGR;
static const GLenum GL_BGRA = GLenum::GL_BGRA;
static const GLenum GL_MAX_ELEMENTS_VERTICES = GLenum::GL_MAX_ELEMENTS_VERTICES;
static const GLenum GL_MAX_ELEMENTS_INDICES = GLenum::GL_MAX_ELEMENTS_INDICES;
static const GLenum GL_DEPTH_COMPONENT16 = GLenum::GL_DEPTH_COMPONENT16;
static const GLenum GL_DEPTH_COMPONENT24 = GLenum::GL_DEPTH_COMPONENT24;
static const GLenum GL_DEPTH_COMPONENT32 = GLenum::GL_DEPTH_COMPONENT32;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = GLenum::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
static const GLenum GL_FRAMEBUFFER_DEFAULT = GLenum::GL_FRAMEBUFFER_DEFAULT;
static const GLenum GL_FRAMEBUFFER_UNDEFINED = GLenum::GL_FRAMEBUFFER_UNDEFINED;
static const GLenum GL_DEPTH_STENCIL_ATTACHMENT = GLenum::GL_DEPTH_STENCIL_ATTACHMENT;
static const GLenum GL_MAJOR_VERSION = GLenum::GL_MAJOR_VERSION;
static const GLenum GL_MINOR_VERSION = GLenum::GL_MINOR_VERSION;
static const GLenum GL_NUM_EXTENSIONS = GLenum::GL_NUM_EXTENSIONS;
static const GLenum GL_CONTEXT_FLAGS = GLenum::GL_CONTEXT_FLAGS;
static const GLenum GL_INDEX = GLenum::GL_INDEX;
static const GLenum GL_COMPRESSED_RED = GLenum::GL_COMPRESSED_RED;
static const GLenum GL_COMPRESSED_RG = GLenum::GL_COMPRESSED_RG;
static const GLenum GL_RG = GLenum::GL_RG;
static const GLenum GL_RG_INTEGER = GLenum::GL_RG_INTEGER;
static const GLenum GL_R8 = GLenum::GL_R8;
static const GLenum GL_R16 = GLenum::GL_R16;
static const GLenum GL_RG8 = GLenum::GL_RG8;
static const GLenum GL_RG16 = GLenum::GL_RG16;
static const GLenum GL_R16F = GLenum::GL_R16F;
static const GLenum GL_R32F = GLenum::GL_R32F;
static const GLenum GL_RG16F = GLenum::GL_RG16F;
static const GLenum GL_RG32F = GLenum::GL_RG32F;
static const GLenum GL_R8I = GLenum::GL_R8I;
static const GLenum GL_R8UI = GLenum::GL_R8UI;
static const GLenum GL_R16I = GLenum::GL_R16I;
static const GLenum GL_R16UI = GLenum::GL_R16UI;
static const GLenum GL_R32I = GLenum::GL_R32I;
static const GLenum GL_R32UI = GLenum::GL_R32UI;
static const GLenum GL_RG8I = GLenum::GL_RG8I;
static const GLenum GL_RG8UI = GLenum::GL_RG8UI;
static const GLenum GL_RG16I = GLenum::GL_RG16I;
static const GLenum GL_RG16UI = GLenum::GL_RG16UI;
static const GLenum GL_RG32I = GLenum::GL_RG32I;
static const GLenum GL_RG32UI = GLenum::GL_RG32UI;
static const GLenum GL_UNSIGNED_BYTE_2_3_3_REV = GLenum::GL_UNSIGNED_BYTE_2_3_3_REV;
static const GLenum GL_UNSIGNED_SHORT_5_6_5 = GLenum::GL_UNSIGNED_SHORT_5_6_5;
static const GLenum GL_UNSIGNED_SHORT_5_6_5_REV = GLenum::GL_UNSIGNED_SHORT_5_6_5_REV;
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV = GLenum::GL_UNSIGNED_SHORT_4_4_4_4_REV;
static const GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV = GLenum::GL_UNSIGNED_SHORT_1_5_5_5_REV;
static const GLenum GL_UNSIGNED_INT_8_8_8_8_REV = GLenum::GL_UNSIGNED_INT_8_8_8_8_REV;
static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV;
static const GLenum GL_MIRRORED_REPEAT = GLenum::GL_MIRRORED_REPEAT;
static const GLenum GL_TEXTURE0 = GLenum::GL_TEXTURE0;
static const GLenum GL_TEXTURE1 = GLenum::GL_TEXTURE1;
static const GLenum GL_TEXTURE2 = GLenum::GL_TEXTURE2;
static const GLenum GL_TEXTURE3 = GLenum::GL_TEXTURE3;
static const GLenum GL_TEXTURE4 = GLenum::GL_TEXTURE4;
static const GLenum GL_TEXTURE5 = GLenum::GL_TEXTURE5;
static const GLenum GL_TEXTURE6 = GLenum::GL_TEXTURE6;
static const GLenum GL_TEXTURE7 = GLenum::GL_TEXTURE7;
static const GLenum GL_TEXTURE8 = GLenum::GL_TEXTURE8;
static const GLenum GL_TEXTURE9 = GLenum::GL_TEXTURE9;
static const GLenum GL_TEXTURE10 = GLenum::GL_TEXTURE10;
static const GLenum GL_TEXTURE11 = GLenum::GL_TEXTURE11;
static const GLenum GL_TEXTURE12 = GLenum::GL_TEXTURE12;
static const GLenum GL_TEXTURE13 = GLenum::GL_TEXTURE13;
static const GLenum GL_TEXTURE14 = GLenum::GL_TEXTURE14;
static const GLenum GL_TEXTURE15 = GLenum::GL_TEXTURE15;
static const GLenum GL_TEXTURE16 = GLenum::GL_TEXTURE16;
static const GLenum GL_TEXTURE17 = GLenum::GL_TEXTURE17;
static const GLenum GL_TEXTURE18 = GLenum::GL_TEXTURE18;
static const GLenum GL_TEXTURE19 = GLenum::GL_TEXTURE19;
static const GLenum GL_TEXTURE20 = GLenum::GL_TEXTURE20;
static const GLenum GL_TEXTURE21 = GLenum::GL_TEXTURE21;
static const GLenum GL_TEXTURE22 = GLenum::GL_TEXTURE22;
static const GLenum GL_TEXTURE23 = GLenum::GL_TEXTURE23;
static const GLenum GL_TEXTURE24 = GLenum::GL_TEXTURE24;
static const GLenum GL_TEXTURE25 = GLenum::GL_TEXTURE25;
static const GLenum GL_TEXTURE26 = GLenum::GL_TEXTURE26;
static const GLenum GL_TEXTURE27 = GLenum::GL_TEXTURE27;
static const GLenum GL_TEXTURE28 = GLenum::GL_TEXTURE28;
static const GLenum GL_TEXTURE29 = GLenum::GL_TEXTURE29;
static const GLenum GL_TEXTURE30 = GLenum::GL_TEXTURE30;
static const GLenum GL_TEXTURE31 = GLenum::GL_TEXTURE31;
static const GLenum GL_ACTIVE_TEXTURE = GLenum::GL_ACTIVE_TEXTURE;
static const GLenum GL_MAX_RENDERBUFFER_SIZE = GLenum::GL_MAX_RENDERBUFFER_SIZE;
static const GLenum GL_COMPRESSED_RGB = GLenum::GL_COMPRESSED_RGB;
static const GLenum GL_COMPRESSED_RGBA = GLenum::GL_COMPRESSED_RGBA;
static const GLenum GL_TEXTURE_RECTANGLE = GLenum::GL_TEXTURE_RECTANGLE;
static const GLenum GL_TEXTURE_BINDING_RECTANGLE = GLenum::GL_TEXTURE_BINDING_RECTANGLE;
static const GLenum GL_PROXY_TEXTURE_RECTANGLE = GLenum::GL_PROXY_TEXTURE_RECTANGLE;
static const GLenum GL_MAX_RECTANGLE_TEXTURE_SIZE = GLenum::GL_MAX_RECTANGLE_TEXTURE_SIZE;
static const GLenum GL_DEPTH_STENCIL = GLenum::GL_DEPTH_STENCIL;
static const GLenum GL_UNSIGNED_INT_24_8 = GLenum::GL_UNSIGNED_INT_24_8;
static const GLenum GL_MAX_TEXTURE_LOD_BIAS = GLenum::GL_MAX_TEXTURE_LOD_BIAS;
static const GLenum GL_TEXTURE_LOD_BIAS = GLenum::GL_TEXTURE_LOD_BIAS;
static const GLenum GL_INCR_WRAP = GLenum::GL_INCR_WRAP;
static const GLenum GL_DECR_WRAP = GLenum::GL_DECR_WRAP;
static const GLenum GL_TEXTURE_CUBE_MAP = GLenum::GL_TEXTURE_CUBE_MAP;
static const GLenum GL_TEXTURE_BINDING_CUBE_MAP = GLenum::GL_TEXTURE_BINDING_CUBE_MAP;
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_X = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_X;
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_X = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Y = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Z = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
static const GLenum GL_PROXY_TEXTURE_CUBE_MAP = GLenum::GL_PROXY_TEXTURE_CUBE_MAP;
static const GLenum GL_MAX_CUBE_MAP_TEXTURE_SIZE = GLenum::GL_MAX_CUBE_MAP_TEXTURE_SIZE;
static const GLenum GL_SRC1_ALPHA = GLenum::GL_SRC1_ALPHA;
static const GLenum GL_VERTEX_ARRAY_BINDING = GLenum::GL_VERTEX_ARRAY_BINDING;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE;
static const GLenum GL_CURRENT_VERTEX_ATTRIB = GLenum::GL_CURRENT_VERTEX_ATTRIB;
static const GLenum GL_PROGRAM_POINT_SIZE = GLenum::GL_PROGRAM_POINT_SIZE;
static const GLenum GL_VERTEX_PROGRAM_POINT_SIZE = GLenum::GL_VERTEX_PROGRAM_POINT_SIZE;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER = GLenum::GL_VERTEX_ATTRIB_ARRAY_POINTER;
static const GLenum GL_DEPTH_CLAMP = GLenum::GL_DEPTH_CLAMP;
static const GLenum GL_TEXTURE_COMPRESSED_IMAGE_SIZE = GLenum::GL_TEXTURE_COMPRESSED_IMAGE_SIZE;
static const GLenum GL_TEXTURE_COMPRESSED = GLenum::GL_TEXTURE_COMPRESSED;
static const GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
static const GLenum GL_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_COMPRESSED_TEXTURE_FORMATS;
static const GLenum GL_BUFFER_SIZE = GLenum::GL_BUFFER_SIZE;
static const GLenum GL_BUFFER_USAGE = GLenum::GL_BUFFER_USAGE;
static const GLenum GL_STENCIL_BACK_FUNC = GLenum::GL_STENCIL_BACK_FUNC;
static const GLenum GL_STENCIL_BACK_FAIL = GLenum::GL_STENCIL_BACK_FAIL;
static const GLenum GL_STENCIL_BACK_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
static const GLenum GL_STENCIL_BACK_PASS_DEPTH_PASS = GLenum::GL_STENCIL_BACK_PASS_DEPTH_PASS;
static const GLenum GL_RGBA32F = GLenum::GL_RGBA32F;
static const GLenum GL_RGB32F = GLenum::GL_RGB32F;
static const GLenum GL_RGBA16F = GLenum::GL_RGBA16F;
static const GLenum GL_RGB16F = GLenum::GL_RGB16F;
static const GLenum GL_MAX_DRAW_BUFFERS = GLenum::GL_MAX_DRAW_BUFFERS;
static const GLenum GL_DRAW_BUFFER0 = GLenum::GL_DRAW_BUFFER0;
static const GLenum GL_DRAW_BUFFER1 = GLenum::GL_DRAW_BUFFER1;
static const GLenum GL_DRAW_BUFFER2 = GLenum::GL_DRAW_BUFFER2;
static const GLenum GL_DRAW_BUFFER3 = GLenum::GL_DRAW_BUFFER3;
static const GLenum GL_DRAW_BUFFER4 = GLenum::GL_DRAW_BUFFER4;
static const GLenum GL_DRAW_BUFFER5 = GLenum::GL_DRAW_BUFFER5;
static const GLenum GL_DRAW_BUFFER6 = GLenum::GL_DRAW_BUFFER6;
static const GLenum GL_DRAW_BUFFER7 = GLenum::GL_DRAW_BUFFER7;
static const GLenum GL_DRAW_BUFFER8 = GLenum::GL_DRAW_BUFFER8;
static const GLenum GL_DRAW_BUFFER9 = GLenum::GL_DRAW_BUFFER9;
static const GLenum GL_DRAW_BUFFER10 = GLenum::GL_DRAW_BUFFER10;
static const GLenum GL_DRAW_BUFFER11 = GLenum::GL_DRAW_BUFFER11;
static const GLenum GL_DRAW_BUFFER12 = GLenum::GL_DRAW_BUFFER12;
static const GLenum GL_DRAW_BUFFER13 = GLenum::GL_DRAW_BUFFER13;
static const GLenum GL_DRAW_BUFFER14 = GLenum::GL_DRAW_BUFFER14;
static const GLenum GL_DRAW_BUFFER15 = GLenum::GL_DRAW_BUFFER15;
static const GLenum GL_BLEND_EQUATION_ALPHA = GLenum::GL_BLEND_EQUATION_ALPHA;
static const GLenum GL_TEXTURE_DEPTH_SIZE = GLenum::GL_TEXTURE_DEPTH_SIZE;
static const GLenum GL_TEXTURE_COMPARE_MODE = GLenum::GL_TEXTURE_COMPARE_MODE;
static const GLenum GL_TEXTURE_COMPARE_FUNC = GLenum::GL_TEXTURE_COMPARE_FUNC;
static const GLenum GL_COMPARE_REF_TO_TEXTURE = GLenum::GL_COMPARE_REF_TO_TEXTURE;
static const GLenum GL_TEXTURE_CUBE_MAP_SEAMLESS = GLenum::GL_TEXTURE_CUBE_MAP_SEAMLESS;
static const GLenum GL_QUERY_COUNTER_BITS = GLenum::GL_QUERY_COUNTER_BITS;
static const GLenum GL_CURRENT_QUERY = GLenum::GL_CURRENT_QUERY;
static const GLenum GL_QUERY_RESULT = GLenum::GL_QUERY_RESULT;
static const GLenum GL_QUERY_RESULT_AVAILABLE = GLenum::GL_QUERY_RESULT_AVAILABLE;
static const GLenum GL_MAX_VERTEX_ATTRIBS = GLenum::GL_MAX_VERTEX_ATTRIBS;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
static const GLenum GL_MAX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TEXTURE_IMAGE_UNITS;
static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER;
static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER;
static const GLenum GL_ARRAY_BUFFER_BINDING = GLenum::GL_ARRAY_BUFFER_BINDING;
static const GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING = GLenum::GL_ELEMENT_ARRAY_BUFFER_BINDING;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = GLenum::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
static const GLenum GL_READ_ONLY = GLenum::GL_READ_ONLY;
static const GLenum GL_WRITE_ONLY = GLenum::GL_WRITE_ONLY;
static const GLenum GL_READ_WRITE = GLenum::GL_READ_WRITE;
static const GLenum GL_BUFFER_ACCESS = GLenum::GL_BUFFER_ACCESS;
static const GLenum GL_BUFFER_MAPPED = GLenum::GL_BUFFER_MAPPED;
static const GLenum GL_BUFFER_MAP_POINTER = GLenum::GL_BUFFER_MAP_POINTER;
static const GLenum GL_STREAM_DRAW = GLenum::GL_STREAM_DRAW;
static const GLenum GL_STREAM_READ = GLenum::GL_STREAM_READ;
static const GLenum GL_STREAM_COPY = GLenum::GL_STREAM_COPY;
static const GLenum GL_STATIC_DRAW = GLenum::GL_STATIC_DRAW;
static const GLenum GL_STATIC_READ = GLenum::GL_STATIC_READ;
static const GLenum GL_STATIC_COPY = GLenum::GL_STATIC_COPY;
static const GLenum GL_DYNAMIC_DRAW = GLenum::GL_DYNAMIC_DRAW;
static const GLenum GL_DYNAMIC_READ = GLenum::GL_DYNAMIC_READ;
static const GLenum GL_DYNAMIC_COPY = GLenum::GL_DYNAMIC_COPY;
static const GLenum GL_PIXEL_PACK_BUFFER = GLenum::GL_PIXEL_PACK_BUFFER;
static const GLenum GL_PIXEL_UNPACK_BUFFER = GLenum::GL_PIXEL_UNPACK_BUFFER;
static const GLenum GL_PIXEL_PACK_BUFFER_BINDING = GLenum::GL_PIXEL_PACK_BUFFER_BINDING;
static const GLenum GL_PIXEL_UNPACK_BUFFER_BINDING = GLenum::GL_PIXEL_UNPACK_BUFFER_BINDING;
static const GLenum GL_DEPTH24_STENCIL8 = GLenum::GL_DEPTH24_STENCIL8;
static const GLenum GL_TEXTURE_STENCIL_SIZE = GLenum::GL_TEXTURE_STENCIL_SIZE;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_INTEGER = GLenum::GL_VERTEX_ATTRIB_ARRAY_INTEGER;
static const GLenum GL_MAX_ARRAY_TEXTURE_LAYERS = GLenum::GL_MAX_ARRAY_TEXTURE_LAYERS;
static const GLenum GL_MIN_PROGRAM_TEXEL_OFFSET = GLenum::GL_MIN_PROGRAM_TEXEL_OFFSET;
static const GLenum GL_MAX_PROGRAM_TEXEL_OFFSET = GLenum::GL_MAX_PROGRAM_TEXEL_OFFSET;
static const GLenum GL_SAMPLES_PASSED = GLenum::GL_SAMPLES_PASSED;
static const GLenum GL_GEOMETRY_VERTICES_OUT = GLenum::GL_GEOMETRY_VERTICES_OUT;
static const GLenum GL_GEOMETRY_INPUT_TYPE = GLenum::GL_GEOMETRY_INPUT_TYPE;
static const GLenum GL_GEOMETRY_OUTPUT_TYPE = GLenum::GL_GEOMETRY_OUTPUT_TYPE;
static const GLenum GL_CLAMP_READ_COLOR = GLenum::GL_CLAMP_READ_COLOR;
static const GLenum GL_FIXED_ONLY = GLenum::GL_FIXED_ONLY;
static const GLenum GL_UNIFORM_BUFFER = GLenum::GL_UNIFORM_BUFFER;
static const GLenum GL_UNIFORM_BUFFER_BINDING = GLenum::GL_UNIFORM_BUFFER_BINDING;
static const GLenum GL_UNIFORM_BUFFER_START = GLenum::GL_UNIFORM_BUFFER_START;
static const GLenum GL_UNIFORM_BUFFER_SIZE = GLenum::GL_UNIFORM_BUFFER_SIZE;
static const GLenum GL_MAX_VERTEX_UNIFORM_BLOCKS = GLenum::GL_MAX_VERTEX_UNIFORM_BLOCKS;
static const GLenum GL_MAX_GEOMETRY_UNIFORM_BLOCKS = GLenum::GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
static const GLenum GL_MAX_FRAGMENT_UNIFORM_BLOCKS = GLenum::GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
static const GLenum GL_MAX_COMBINED_UNIFORM_BLOCKS = GLenum::GL_MAX_COMBINED_UNIFORM_BLOCKS;
static const GLenum GL_MAX_UNIFORM_BUFFER_BINDINGS = GLenum::GL_MAX_UNIFORM_BUFFER_BINDINGS;
static const GLenum GL_MAX_UNIFORM_BLOCK_SIZE = GLenum::GL_MAX_UNIFORM_BLOCK_SIZE;
static const GLenum GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
static const GLenum GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
static const GLenum GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
static const GLenum GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = GLenum::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
static const GLenum GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = GLenum::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
static const GLenum GL_ACTIVE_UNIFORM_BLOCKS = GLenum::GL_ACTIVE_UNIFORM_BLOCKS;
static const GLenum GL_UNIFORM_TYPE = GLenum::GL_UNIFORM_TYPE;
static const GLenum GL_UNIFORM_SIZE = GLenum::GL_UNIFORM_SIZE;
static const GLenum GL_UNIFORM_NAME_LENGTH = GLenum::GL_UNIFORM_NAME_LENGTH;
static const GLenum GL_UNIFORM_BLOCK_INDEX = GLenum::GL_UNIFORM_BLOCK_INDEX;
static const GLenum GL_UNIFORM_OFFSET = GLenum::GL_UNIFORM_OFFSET;
static const GLenum GL_UNIFORM_ARRAY_STRIDE = GLenum::GL_UNIFORM_ARRAY_STRIDE;
static const GLenum GL_UNIFORM_MATRIX_STRIDE = GLenum::GL_UNIFORM_MATRIX_STRIDE;
static const GLenum GL_UNIFORM_IS_ROW_MAJOR = GLenum::GL_UNIFORM_IS_ROW_MAJOR;
static const GLenum GL_UNIFORM_BLOCK_BINDING = GLenum::GL_UNIFORM_BLOCK_BINDING;
static const GLenum GL_UNIFORM_BLOCK_DATA_SIZE = GLenum::GL_UNIFORM_BLOCK_DATA_SIZE;
static const GLenum GL_UNIFORM_BLOCK_NAME_LENGTH = GLenum::GL_UNIFORM_BLOCK_NAME_LENGTH;
static const GLenum GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = GLenum::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
static const GLenum GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = GLenum::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER;
static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;
static const GLenum GL_FRAGMENT_SHADER = GLenum::GL_FRAGMENT_SHADER;
static const GLenum GL_VERTEX_SHADER = GLenum::GL_VERTEX_SHADER;
static const GLenum GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = GLenum::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
static const GLenum GL_MAX_VERTEX_UNIFORM_COMPONENTS = GLenum::GL_MAX_VERTEX_UNIFORM_COMPONENTS;
static const GLenum GL_MAX_VARYING_COMPONENTS = GLenum::GL_MAX_VARYING_COMPONENTS;
static const GLenum GL_MAX_VARYING_FLOATS = GLenum::GL_MAX_VARYING_FLOATS;
static const GLenum GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
static const GLenum GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
static const GLenum GL_SHADER_TYPE = GLenum::GL_SHADER_TYPE;
static const GLenum GL_FLOAT_VEC2 = GLenum::GL_FLOAT_VEC2;
static const GLenum GL_FLOAT_VEC3 = GLenum::GL_FLOAT_VEC3;
static const GLenum GL_FLOAT_VEC4 = GLenum::GL_FLOAT_VEC4;
static const GLenum GL_INT_VEC2 = GLenum::GL_INT_VEC2;
static const GLenum GL_INT_VEC3 = GLenum::GL_INT_VEC3;
static const GLenum GL_INT_VEC4 = GLenum::GL_INT_VEC4;
static const GLenum GL_BOOL = GLenum::GL_BOOL;
static const GLenum GL_BOOL_VEC2 = GLenum::GL_BOOL_VEC2;
static const GLenum GL_BOOL_VEC3 = GLenum::GL_BOOL_VEC3;
static const GLenum GL_BOOL_VEC4 = GLenum::GL_BOOL_VEC4;
static const GLenum GL_FLOAT_MAT2 = GLenum::GL_FLOAT_MAT2;
static const GLenum GL_FLOAT_MAT3 = GLenum::GL_FLOAT_MAT3;
static const GLenum GL_FLOAT_MAT4 = GLenum::GL_FLOAT_MAT4;
static const GLenum GL_SAMPLER_1D = GLenum::GL_SAMPLER_1D;
static const GLenum GL_SAMPLER_2D = GLenum::GL_SAMPLER_2D;
static const GLenum GL_SAMPLER_3D = GLenum::GL_SAMPLER_3D;
static const GLenum GL_SAMPLER_CUBE = GLenum::GL_SAMPLER_CUBE;
static const GLenum GL_SAMPLER_1D_SHADOW = GLenum::GL_SAMPLER_1D_SHADOW;
static const GLenum GL_SAMPLER_2D_SHADOW = GLenum::GL_SAMPLER_2D_SHADOW;
static const GLenum GL_SAMPLER_2D_RECT = GLenum::GL_SAMPLER_2D_RECT;
static const GLenum GL_SAMPLER_2D_RECT_SHADOW = GLenum::GL_SAMPLER_2D_RECT_SHADOW;
static const GLenum GL_FLOAT_MAT2x3 = GLenum::GL_FLOAT_MAT2x3;
static const GLenum GL_FLOAT_MAT2x4 = GLenum::GL_FLOAT_MAT2x4;
static const GLenum GL_FLOAT_MAT3x2 = GLenum::GL_FLOAT_MAT3x2;
static const GLenum GL_FLOAT_MAT3x4 = GLenum::GL_FLOAT_MAT3x4;
static const GLenum GL_FLOAT_MAT4x2 = GLenum::GL_FLOAT_MAT4x2;
static const GLenum GL_FLOAT_MAT4x3 = GLenum::GL_FLOAT_MAT4x3;
static const GLenum GL_DELETE_STATUS = GLenum::GL_DELETE_STATUS;
static const GLenum GL_COMPILE_STATUS = GLenum::GL_COMPILE_STATUS;
static const GLenum GL_LINK_STATUS = GLenum::GL_LINK_STATUS;
static const GLenum GL_VALIDATE_STATUS = GLenum::GL_VALIDATE_STATUS;
static const GLenum GL_INFO_LOG_LENGTH = GLenum::GL_INFO_LOG_LENGTH;
static const GLenum GL_ATTACHED_SHADERS = GLenum::GL_ATTACHED_SHADERS;
static const GLenum GL_ACTIVE_UNIFORMS = GLenum::GL_ACTIVE_UNIFORMS;
static const GLenum GL_ACTIVE_UNIFORM_MAX_LENGTH = GLenum::GL_ACTIVE_UNIFORM_MAX_LENGTH;
static const GLenum GL_SHADER_SOURCE_LENGTH = GLenum::GL_SHADER_SOURCE_LENGTH;
static const GLenum GL_ACTIVE_ATTRIBUTES = GLenum::GL_ACTIVE_ATTRIBUTES;
static const GLenum GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = GLenum::GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
static const GLenum GL_SHADING_LANGUAGE_VERSION = GLenum::GL_SHADING_LANGUAGE_VERSION;
static const GLenum GL_ACTIVE_PROGRAM_EXT = GLenum::GL_ACTIVE_PROGRAM_EXT;
static const GLenum GL_CURRENT_PROGRAM = GLenum::GL_CURRENT_PROGRAM;
static const GLenum GL_TEXTURE_RED_TYPE = GLenum::GL_TEXTURE_RED_TYPE;
static const GLenum GL_TEXTURE_GREEN_TYPE = GLenum::GL_TEXTURE_GREEN_TYPE;
static const GLenum GL_TEXTURE_BLUE_TYPE = GLenum::GL_TEXTURE_BLUE_TYPE;
static const GLenum GL_TEXTURE_ALPHA_TYPE = GLenum::GL_TEXTURE_ALPHA_TYPE;
static const GLenum GL_TEXTURE_DEPTH_TYPE = GLenum::GL_TEXTURE_DEPTH_TYPE;
static const GLenum GL_UNSIGNED_NORMALIZED = GLenum::GL_UNSIGNED_NORMALIZED;
static const GLenum GL_TEXTURE_1D_ARRAY = GLenum::GL_TEXTURE_1D_ARRAY;
static const GLenum GL_PROXY_TEXTURE_1D_ARRAY = GLenum::GL_PROXY_TEXTURE_1D_ARRAY;
static const GLenum GL_TEXTURE_2D_ARRAY = GLenum::GL_TEXTURE_2D_ARRAY;
static const GLenum GL_PROXY_TEXTURE_2D_ARRAY = GLenum::GL_PROXY_TEXTURE_2D_ARRAY;
static const GLenum GL_TEXTURE_BINDING_1D_ARRAY = GLenum::GL_TEXTURE_BINDING_1D_ARRAY;
static const GLenum GL_TEXTURE_BINDING_2D_ARRAY = GLenum::GL_TEXTURE_BINDING_2D_ARRAY;
static const GLenum GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
static const GLenum GL_TEXTURE_BUFFER = GLenum::GL_TEXTURE_BUFFER;
static const GLenum GL_MAX_TEXTURE_BUFFER_SIZE = GLenum::GL_MAX_TEXTURE_BUFFER_SIZE;
static const GLenum GL_TEXTURE_BINDING_BUFFER = GLenum::GL_TEXTURE_BINDING_BUFFER;
static const GLenum GL_TEXTURE_BUFFER_DATA_STORE_BINDING = GLenum::GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
static const GLenum GL_R11F_G11F_B10F = GLenum::GL_R11F_G11F_B10F;
static const GLenum GL_UNSIGNED_INT_10F_11F_11F_REV = GLenum::GL_UNSIGNED_INT_10F_11F_11F_REV;
static const GLenum GL_RGB9_E5 = GLenum::GL_RGB9_E5;
static const GLenum GL_UNSIGNED_INT_5_9_9_9_REV = GLenum::GL_UNSIGNED_INT_5_9_9_9_REV;
static const GLenum GL_TEXTURE_SHARED_SIZE = GLenum::GL_TEXTURE_SHARED_SIZE;
static const GLenum GL_SRGB = GLenum::GL_SRGB;
static const GLenum GL_SRGB8 = GLenum::GL_SRGB8;
static const GLenum GL_SRGB_ALPHA = GLenum::GL_SRGB_ALPHA;
static const GLenum GL_SRGB8_ALPHA8 = GLenum::GL_SRGB8_ALPHA8;
static const GLenum GL_COMPRESSED_SRGB = GLenum::GL_COMPRESSED_SRGB;
static const GLenum GL_COMPRESSED_SRGB_ALPHA = GLenum::GL_COMPRESSED_SRGB_ALPHA;
static const GLenum GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = GLenum::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_MODE = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
static const GLenum GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = GLenum::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
static const GLenum GL_TRANSFORM_FEEDBACK_VARYINGS = GLenum::GL_TRANSFORM_FEEDBACK_VARYINGS;
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_START = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_START;
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
static const GLenum GL_PRIMITIVES_GENERATED = GLenum::GL_PRIMITIVES_GENERATED;
static const GLenum GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = GLenum::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
static const GLenum GL_RASTERIZER_DISCARD = GLenum::GL_RASTERIZER_DISCARD;
static const GLenum GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = GLenum::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
static const GLenum GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = GLenum::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
static const GLenum GL_INTERLEAVED_ATTRIBS = GLenum::GL_INTERLEAVED_ATTRIBS;
static const GLenum GL_SEPARATE_ATTRIBS = GLenum::GL_SEPARATE_ATTRIBS;
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER;
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
static const GLenum GL_POINT_SPRITE_COORD_ORIGIN = GLenum::GL_POINT_SPRITE_COORD_ORIGIN;
static const GLenum GL_LOWER_LEFT = GLenum::GL_LOWER_LEFT;
static const GLenum GL_UPPER_LEFT = GLenum::GL_UPPER_LEFT;
static const GLenum GL_STENCIL_BACK_REF = GLenum::GL_STENCIL_BACK_REF;
static const GLenum GL_STENCIL_BACK_VALUE_MASK = GLenum::GL_STENCIL_BACK_VALUE_MASK;
static const GLenum GL_STENCIL_BACK_WRITEMASK = GLenum::GL_STENCIL_BACK_WRITEMASK;
static const GLenum GL_DRAW_FRAMEBUFFER_BINDING = GLenum::GL_DRAW_FRAMEBUFFER_BINDING;
static const GLenum GL_FRAMEBUFFER_BINDING = GLenum::GL_FRAMEBUFFER_BINDING;
static const GLenum GL_RENDERBUFFER_BINDING = GLenum::GL_RENDERBUFFER_BINDING;
static const GLenum GL_READ_FRAMEBUFFER = GLenum::GL_READ_FRAMEBUFFER;
static const GLenum GL_DRAW_FRAMEBUFFER = GLenum::GL_DRAW_FRAMEBUFFER;
static const GLenum GL_READ_FRAMEBUFFER_BINDING = GLenum::GL_READ_FRAMEBUFFER_BINDING;
static const GLenum GL_RENDERBUFFER_SAMPLES = GLenum::GL_RENDERBUFFER_SAMPLES;
static const GLenum GL_DEPTH_COMPONENT32F = GLenum::GL_DEPTH_COMPONENT32F;
static const GLenum GL_DEPTH32F_STENCIL8 = GLenum::GL_DEPTH32F_STENCIL8;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
static const GLenum GL_FRAMEBUFFER_COMPLETE = GLenum::GL_FRAMEBUFFER_COMPLETE;
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER = GLenum::GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER;
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER = GLenum::GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER;
static const GLenum GL_FRAMEBUFFER_UNSUPPORTED = GLenum::GL_FRAMEBUFFER_UNSUPPORTED;
static const GLenum GL_MAX_COLOR_ATTACHMENTS = GLenum::GL_MAX_COLOR_ATTACHMENTS;
static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0;
static const GLenum GL_COLOR_ATTACHMENT1 = GLenum::GL_COLOR_ATTACHMENT1;
static const GLenum GL_COLOR_ATTACHMENT2 = GLenum::GL_COLOR_ATTACHMENT2;
static const GLenum GL_COLOR_ATTACHMENT3 = GLenum::GL_COLOR_ATTACHMENT3;
static const GLenum GL_COLOR_ATTACHMENT4 = GLenum::GL_COLOR_ATTACHMENT4;
static const GLenum GL_COLOR_ATTACHMENT5 = GLenum::GL_COLOR_ATTACHMENT5;
static const GLenum GL_COLOR_ATTACHMENT6 = GLenum::GL_COLOR_ATTACHMENT6;
static const GLenum GL_COLOR_ATTACHMENT7 = GLenum::GL_COLOR_ATTACHMENT7;
static const GLenum GL_COLOR_ATTACHMENT8 = GLenum::GL_COLOR_ATTACHMENT8;
static const GLenum GL_COLOR_ATTACHMENT9 = GLenum::GL_COLOR_ATTACHMENT9;
static const GLenum GL_COLOR_ATTACHMENT10 = GLenum::GL_COLOR_ATTACHMENT10;
static const GLenum GL_COLOR_ATTACHMENT11 = GLenum::GL_COLOR_ATTACHMENT11;
static const GLenum GL_COLOR_ATTACHMENT12 = GLenum::GL_COLOR_ATTACHMENT12;
static const GLenum GL_COLOR_ATTACHMENT13 = GLenum::GL_COLOR_ATTACHMENT13;
static const GLenum GL_COLOR_ATTACHMENT14 = GLenum::GL_COLOR_ATTACHMENT14;
static const GLenum GL_COLOR_ATTACHMENT15 = GLenum::GL_COLOR_ATTACHMENT15;
static const GLenum GL_DEPTH_ATTACHMENT = GLenum::GL_DEPTH_ATTACHMENT;
static const GLenum GL_STENCIL_ATTACHMENT = GLenum::GL_STENCIL_ATTACHMENT;
static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER;
static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER;
static const GLenum GL_RENDERBUFFER_WIDTH = GLenum::GL_RENDERBUFFER_WIDTH;
static const GLenum GL_RENDERBUFFER_HEIGHT = GLenum::GL_RENDERBUFFER_HEIGHT;
static const GLenum GL_RENDERBUFFER_INTERNAL_FORMAT = GLenum::GL_RENDERBUFFER_INTERNAL_FORMAT;
static const GLenum GL_STENCIL_INDEX1 = GLenum::GL_STENCIL_INDEX1;
static const GLenum GL_STENCIL_INDEX4 = GLenum::GL_STENCIL_INDEX4;
static const GLenum GL_STENCIL_INDEX8 = GLenum::GL_STENCIL_INDEX8;
static const GLenum GL_STENCIL_INDEX16 = GLenum::GL_STENCIL_INDEX16;
static const GLenum GL_RENDERBUFFER_RED_SIZE = GLenum::GL_RENDERBUFFER_RED_SIZE;
static const GLenum GL_RENDERBUFFER_GREEN_SIZE = GLenum::GL_RENDERBUFFER_GREEN_SIZE;
static const GLenum GL_RENDERBUFFER_BLUE_SIZE = GLenum::GL_RENDERBUFFER_BLUE_SIZE;
static const GLenum GL_RENDERBUFFER_ALPHA_SIZE = GLenum::GL_RENDERBUFFER_ALPHA_SIZE;
static const GLenum GL_RENDERBUFFER_DEPTH_SIZE = GLenum::GL_RENDERBUFFER_DEPTH_SIZE;
static const GLenum GL_RENDERBUFFER_STENCIL_SIZE = GLenum::GL_RENDERBUFFER_STENCIL_SIZE;
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
static const GLenum GL_MAX_SAMPLES = GLenum::GL_MAX_SAMPLES;
static const GLenum GL_RGBA32UI = GLenum::GL_RGBA32UI;
static const GLenum GL_RGB32UI = GLenum::GL_RGB32UI;
static const GLenum GL_RGBA16UI = GLenum::GL_RGBA16UI;
static const GLenum GL_RGB16UI = GLenum::GL_RGB16UI;
static const GLenum GL_RGBA8UI = GLenum::GL_RGBA8UI;
static const GLenum GL_RGB8UI = GLenum::GL_RGB8UI;
static const GLenum GL_RGBA32I = GLenum::GL_RGBA32I;
static const GLenum GL_RGB32I = GLenum::GL_RGB32I;
static const GLenum GL_RGBA16I = GLenum::GL_RGBA16I;
static const GLenum GL_RGB16I = GLenum::GL_RGB16I;
static const GLenum GL_RGBA8I = GLenum::GL_RGBA8I;
static const GLenum GL_RGB8I = GLenum::GL_RGB8I;
static const GLenum GL_RED_INTEGER = GLenum::GL_RED_INTEGER;
static const GLenum GL_GREEN_INTEGER = GLenum::GL_GREEN_INTEGER;
static const GLenum GL_BLUE_INTEGER = GLenum::GL_BLUE_INTEGER;
static const GLenum GL_RGB_INTEGER = GLenum::GL_RGB_INTEGER;
static const GLenum GL_RGBA_INTEGER = GLenum::GL_RGBA_INTEGER;
static const GLenum GL_BGR_INTEGER = GLenum::GL_BGR_INTEGER;
static const GLenum GL_BGRA_INTEGER = GLenum::GL_BGRA_INTEGER;
static const GLenum GL_FRAMEBUFFER_ATTACHMENT_LAYERED = GLenum::GL_FRAMEBUFFER_ATTACHMENT_LAYERED;
static const GLenum GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = GLenum::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;
static const GLenum GL_FLOAT_32_UNSIGNED_INT_24_8_REV = GLenum::GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
static const GLenum GL_FRAMEBUFFER_SRGB = GLenum::GL_FRAMEBUFFER_SRGB;
static const GLenum GL_COMPRESSED_RED_RGTC1 = GLenum::GL_COMPRESSED_RED_RGTC1;
static const GLenum GL_COMPRESSED_SIGNED_RED_RGTC1 = GLenum::GL_COMPRESSED_SIGNED_RED_RGTC1;
static const GLenum GL_COMPRESSED_RG_RGTC2 = GLenum::GL_COMPRESSED_RG_RGTC2;
static const GLenum GL_COMPRESSED_SIGNED_RG_RGTC2 = GLenum::GL_COMPRESSED_SIGNED_RG_RGTC2;
static const GLenum GL_SAMPLER_1D_ARRAY = GLenum::GL_SAMPLER_1D_ARRAY;
static const GLenum GL_SAMPLER_2D_ARRAY = GLenum::GL_SAMPLER_2D_ARRAY;
static const GLenum GL_SAMPLER_BUFFER = GLenum::GL_SAMPLER_BUFFER;
static const GLenum GL_SAMPLER_1D_ARRAY_SHADOW = GLenum::GL_SAMPLER_1D_ARRAY_SHADOW;
static const GLenum GL_SAMPLER_2D_ARRAY_SHADOW = GLenum::GL_SAMPLER_2D_ARRAY_SHADOW;
static const GLenum GL_SAMPLER_CUBE_SHADOW = GLenum::GL_SAMPLER_CUBE_SHADOW;
static const GLenum GL_UNSIGNED_INT_VEC2 = GLenum::GL_UNSIGNED_INT_VEC2;
static const GLenum GL_UNSIGNED_INT_VEC3 = GLenum::GL_UNSIGNED_INT_VEC3;
static const GLenum GL_UNSIGNED_INT_VEC4 = GLenum::GL_UNSIGNED_INT_VEC4;
static const GLenum GL_INT_SAMPLER_1D = GLenum::GL_INT_SAMPLER_1D;
static const GLenum GL_INT_SAMPLER_2D = GLenum::GL_INT_SAMPLER_2D;
static const GLenum GL_INT_SAMPLER_3D = GLenum::GL_INT_SAMPLER_3D;
static const GLenum GL_INT_SAMPLER_CUBE = GLenum::GL_INT_SAMPLER_CUBE;
static const GLenum GL_INT_SAMPLER_2D_RECT = GLenum::GL_INT_SAMPLER_2D_RECT;
static const GLenum GL_INT_SAMPLER_1D_ARRAY = GLenum::GL_INT_SAMPLER_1D_ARRAY;
static const GLenum GL_INT_SAMPLER_2D_ARRAY = GLenum::GL_INT_SAMPLER_2D_ARRAY;
static const GLenum GL_INT_SAMPLER_BUFFER = GLenum::GL_INT_SAMPLER_BUFFER;
static const GLenum GL_UNSIGNED_INT_SAMPLER_1D = GLenum::GL_UNSIGNED_INT_SAMPLER_1D;
static const GLenum GL_UNSIGNED_INT_SAMPLER_2D = GLenum::GL_UNSIGNED_INT_SAMPLER_2D;
static const GLenum GL_UNSIGNED_INT_SAMPLER_3D = GLenum::GL_UNSIGNED_INT_SAMPLER_3D;
static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE;
static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_RECT = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_RECT;
static const GLenum GL_UNSIGNED_INT_SAMPLER_1D_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_1D_ARRAY;
static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
static const GLenum GL_UNSIGNED_INT_SAMPLER_BUFFER = GLenum::GL_UNSIGNED_INT_SAMPLER_BUFFER;
static const GLenum GL_GEOMETRY_SHADER = GLenum::GL_GEOMETRY_SHADER;
static const GLenum GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = GLenum::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
static const GLenum GL_MAX_GEOMETRY_OUTPUT_VERTICES = GLenum::GL_MAX_GEOMETRY_OUTPUT_VERTICES;
static const GLenum GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = GLenum::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
static const GLenum GL_QUERY_WAIT = GLenum::GL_QUERY_WAIT;
static const GLenum GL_QUERY_NO_WAIT = GLenum::GL_QUERY_NO_WAIT;
static const GLenum GL_QUERY_BY_REGION_WAIT = GLenum::GL_QUERY_BY_REGION_WAIT;
static const GLenum GL_QUERY_BY_REGION_NO_WAIT = GLenum::GL_QUERY_BY_REGION_NO_WAIT;
static const GLenum GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = GLenum::GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION;
static const GLenum GL_FIRST_VERTEX_CONVENTION = GLenum::GL_FIRST_VERTEX_CONVENTION;
static const GLenum GL_LAST_VERTEX_CONVENTION = GLenum::GL_LAST_VERTEX_CONVENTION;
static const GLenum GL_PROVOKING_VERTEX = GLenum::GL_PROVOKING_VERTEX;
static const GLenum GL_SAMPLE_POSITION = GLenum::GL_SAMPLE_POSITION;
static const GLenum GL_SAMPLE_MASK = GLenum::GL_SAMPLE_MASK;
static const GLenum GL_SAMPLE_MASK_VALUE = GLenum::GL_SAMPLE_MASK_VALUE;
static const GLenum GL_MAX_SAMPLE_MASK_WORDS = GLenum::GL_MAX_SAMPLE_MASK_WORDS;
static const GLenum GL_COPY_READ_BUFFER = GLenum::GL_COPY_READ_BUFFER;
static const GLenum GL_COPY_READ_BUFFER_BINDING = GLenum::GL_COPY_READ_BUFFER_BINDING;
static const GLenum GL_COPY_WRITE_BUFFER = GLenum::GL_COPY_WRITE_BUFFER;
static const GLenum GL_COPY_WRITE_BUFFER_BINDING = GLenum::GL_COPY_WRITE_BUFFER_BINDING;
static const GLenum GL_R8_SNORM = GLenum::GL_R8_SNORM;
static const GLenum GL_RG8_SNORM = GLenum::GL_RG8_SNORM;
static const GLenum GL_RGB8_SNORM = GLenum::GL_RGB8_SNORM;
static const GLenum GL_RGBA8_SNORM = GLenum::GL_RGBA8_SNORM;
static const GLenum GL_R16_SNORM = GLenum::GL_R16_SNORM;
static const GLenum GL_RG16_SNORM = GLenum::GL_RG16_SNORM;
static const GLenum GL_RGB16_SNORM = GLenum::GL_RGB16_SNORM;
static const GLenum GL_RGBA16_SNORM = GLenum::GL_RGBA16_SNORM;
static const GLenum GL_SIGNED_NORMALIZED = GLenum::GL_SIGNED_NORMALIZED;
static const GLenum GL_PRIMITIVE_RESTART = GLenum::GL_PRIMITIVE_RESTART;
static const GLenum GL_PRIMITIVE_RESTART_INDEX = GLenum::GL_PRIMITIVE_RESTART_INDEX;
static const GLenum GL_TEXTURE_2D_MULTISAMPLE = GLenum::GL_TEXTURE_2D_MULTISAMPLE;
static const GLenum GL_PROXY_TEXTURE_2D_MULTISAMPLE = GLenum::GL_PROXY_TEXTURE_2D_MULTISAMPLE;
static const GLenum GL_TEXTURE_2D_MULTISAMPLE_ARRAY = GLenum::GL_TEXTURE_2D_MULTISAMPLE_ARRAY;
static const GLenum GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = GLenum::GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY;
static const GLenum GL_TEXTURE_BINDING_2D_MULTISAMPLE = GLenum::GL_TEXTURE_BINDING_2D_MULTISAMPLE;
static const GLenum GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = GLenum::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY;
static const GLenum GL_TEXTURE_SAMPLES = GLenum::GL_TEXTURE_SAMPLES;
static const GLenum GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = GLenum::GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
static const GLenum GL_SAMPLER_2D_MULTISAMPLE = GLenum::GL_SAMPLER_2D_MULTISAMPLE;
static const GLenum GL_INT_SAMPLER_2D_MULTISAMPLE = GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE;
static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
static const GLenum GL_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_SAMPLER_2D_MULTISAMPLE_ARRAY;
static const GLenum GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
static const GLenum GL_MAX_COLOR_TEXTURE_SAMPLES = GLenum::GL_MAX_COLOR_TEXTURE_SAMPLES;
static const GLenum GL_MAX_DEPTH_TEXTURE_SAMPLES = GLenum::GL_MAX_DEPTH_TEXTURE_SAMPLES;
static const GLenum GL_MAX_INTEGER_SAMPLES = GLenum::GL_MAX_INTEGER_SAMPLES;
static const GLenum GL_MAX_SERVER_WAIT_TIMEOUT = GLenum::GL_MAX_SERVER_WAIT_TIMEOUT;
static const GLenum GL_OBJECT_TYPE = GLenum::GL_OBJECT_TYPE;
static const GLenum GL_SYNC_CONDITION = GLenum::GL_SYNC_CONDITION;
static const GLenum GL_SYNC_STATUS = GLenum::GL_SYNC_STATUS;
static const GLenum GL_SYNC_FLAGS = GLenum::GL_SYNC_FLAGS;
static const GLenum GL_SYNC_FENCE = GLenum::GL_SYNC_FENCE;
static const GLenum GL_SYNC_GPU_COMMANDS_COMPLETE = GLenum::GL_SYNC_GPU_COMMANDS_COMPLETE;
static const GLenum GL_UNSIGNALED = GLenum::GL_UNSIGNALED;
static const GLenum GL_SIGNALED = GLenum::GL_SIGNALED;
static const GLenum GL_ALREADY_SIGNALED = GLenum::GL_ALREADY_SIGNALED;
static const GLenum GL_TIMEOUT_EXPIRED = GLenum::GL_TIMEOUT_EXPIRED;
static const GLenum GL_CONDITION_SATISFIED = GLenum::GL_CONDITION_SATISFIED;
static const GLenum GL_WAIT_FAILED = GLenum::GL_WAIT_FAILED;
static const GLenum GL_BUFFER_ACCESS_FLAGS = GLenum::GL_BUFFER_ACCESS_FLAGS;
static const GLenum GL_BUFFER_MAP_LENGTH = GLenum::GL_BUFFER_MAP_LENGTH;
static const GLenum GL_BUFFER_MAP_OFFSET = GLenum::GL_BUFFER_MAP_OFFSET;
static const GLenum GL_MAX_VERTEX_OUTPUT_COMPONENTS = GLenum::GL_MAX_VERTEX_OUTPUT_COMPONENTS;
static const GLenum GL_MAX_GEOMETRY_INPUT_COMPONENTS = GLenum::GL_MAX_GEOMETRY_INPUT_COMPONENTS;
static const GLenum GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = GLenum::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
static const GLenum GL_MAX_FRAGMENT_INPUT_COMPONENTS = GLenum::GL_MAX_FRAGMENT_INPUT_COMPONENTS;
static const GLenum GL_CONTEXT_PROFILE_MASK = GLenum::GL_CONTEXT_PROFILE_MASK;

} // namespace gl32core
