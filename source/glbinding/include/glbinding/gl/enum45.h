#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/gl/types.h>

#include <glbinding/gl/enum.h>


namespace gl45
{

// import enums to namespace


// AccumOp

static const gl::GLenum GL_ACCUM = gl::GLenum::GL_ACCUM;
static const gl::GLenum GL_LOAD = gl::GLenum::GL_LOAD;
static const gl::GLenum GL_RETURN = gl::GLenum::GL_RETURN;
static const gl::GLenum GL_MULT = gl::GLenum::GL_MULT;
static const gl::GLenum GL_ADD = gl::GLenum::GL_ADD;

// AlphaFunction

static const gl::GLenum GL_NEVER = gl::GLenum::GL_NEVER;
static const gl::GLenum GL_LESS = gl::GLenum::GL_LESS;
static const gl::GLenum GL_EQUAL = gl::GLenum::GL_EQUAL;
static const gl::GLenum GL_LEQUAL = gl::GLenum::GL_LEQUAL;
static const gl::GLenum GL_GREATER = gl::GLenum::GL_GREATER;
static const gl::GLenum GL_NOTEQUAL = gl::GLenum::GL_NOTEQUAL;
static const gl::GLenum GL_GEQUAL = gl::GLenum::GL_GEQUAL;
static const gl::GLenum GL_ALWAYS = gl::GLenum::GL_ALWAYS;

// BlendEquationModeEXT

static const gl::GLenum GL_LOGIC_OP = gl::GLenum::GL_LOGIC_OP;

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
static const gl::GLenum GL_CLIP_PLANE0 = gl::GLenum::GL_CLIP_PLANE0;
static const gl::GLenum GL_CLIP_DISTANCE1 = gl::GLenum::GL_CLIP_DISTANCE1;
static const gl::GLenum GL_CLIP_PLANE1 = gl::GLenum::GL_CLIP_PLANE1;
static const gl::GLenum GL_CLIP_DISTANCE2 = gl::GLenum::GL_CLIP_DISTANCE2;
static const gl::GLenum GL_CLIP_PLANE2 = gl::GLenum::GL_CLIP_PLANE2;
static const gl::GLenum GL_CLIP_DISTANCE3 = gl::GLenum::GL_CLIP_DISTANCE3;
static const gl::GLenum GL_CLIP_PLANE3 = gl::GLenum::GL_CLIP_PLANE3;
static const gl::GLenum GL_CLIP_DISTANCE4 = gl::GLenum::GL_CLIP_DISTANCE4;
static const gl::GLenum GL_CLIP_PLANE4 = gl::GLenum::GL_CLIP_PLANE4;
static const gl::GLenum GL_CLIP_DISTANCE5 = gl::GLenum::GL_CLIP_DISTANCE5;
static const gl::GLenum GL_CLIP_PLANE5 = gl::GLenum::GL_CLIP_PLANE5;
static const gl::GLenum GL_CLIP_DISTANCE6 = gl::GLenum::GL_CLIP_DISTANCE6;
static const gl::GLenum GL_CLIP_DISTANCE7 = gl::GLenum::GL_CLIP_DISTANCE7;

// ColorMaterialFace

static const gl::GLenum GL_FRONT = gl::GLenum::GL_FRONT;
static const gl::GLenum GL_BACK = gl::GLenum::GL_BACK;
static const gl::GLenum GL_FRONT_AND_BACK = gl::GLenum::GL_FRONT_AND_BACK;

// ColorMaterialParameter

static const gl::GLenum GL_AMBIENT = gl::GLenum::GL_AMBIENT;
static const gl::GLenum GL_DIFFUSE = gl::GLenum::GL_DIFFUSE;
static const gl::GLenum GL_SPECULAR = gl::GLenum::GL_SPECULAR;
static const gl::GLenum GL_EMISSION = gl::GLenum::GL_EMISSION;
static const gl::GLenum GL_AMBIENT_AND_DIFFUSE = gl::GLenum::GL_AMBIENT_AND_DIFFUSE;

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
static const gl::GLenum GL_AUX0 = gl::GLenum::GL_AUX0;
static const gl::GLenum GL_AUX1 = gl::GLenum::GL_AUX1;
static const gl::GLenum GL_AUX2 = gl::GLenum::GL_AUX2;
static const gl::GLenum GL_AUX3 = gl::GLenum::GL_AUX3;

// EnableCap

static const gl::GLenum GL_POINT_SMOOTH = gl::GLenum::GL_POINT_SMOOTH;
static const gl::GLenum GL_LINE_SMOOTH = gl::GLenum::GL_LINE_SMOOTH;
static const gl::GLenum GL_LINE_STIPPLE = gl::GLenum::GL_LINE_STIPPLE;
static const gl::GLenum GL_POLYGON_SMOOTH = gl::GLenum::GL_POLYGON_SMOOTH;
static const gl::GLenum GL_POLYGON_STIPPLE = gl::GLenum::GL_POLYGON_STIPPLE;
static const gl::GLenum GL_CULL_FACE = gl::GLenum::GL_CULL_FACE;
static const gl::GLenum GL_LIGHTING = gl::GLenum::GL_LIGHTING;
static const gl::GLenum GL_COLOR_MATERIAL = gl::GLenum::GL_COLOR_MATERIAL;
static const gl::GLenum GL_FOG = gl::GLenum::GL_FOG;
static const gl::GLenum GL_DEPTH_TEST = gl::GLenum::GL_DEPTH_TEST;
static const gl::GLenum GL_STENCIL_TEST = gl::GLenum::GL_STENCIL_TEST;
static const gl::GLenum GL_NORMALIZE = gl::GLenum::GL_NORMALIZE;
static const gl::GLenum GL_ALPHA_TEST = gl::GLenum::GL_ALPHA_TEST;
static const gl::GLenum GL_DITHER = gl::GLenum::GL_DITHER;
static const gl::GLenum GL_BLEND = gl::GLenum::GL_BLEND;
static const gl::GLenum GL_INDEX_LOGIC_OP = gl::GLenum::GL_INDEX_LOGIC_OP;
static const gl::GLenum GL_COLOR_LOGIC_OP = gl::GLenum::GL_COLOR_LOGIC_OP;
static const gl::GLenum GL_SCISSOR_TEST = gl::GLenum::GL_SCISSOR_TEST;
static const gl::GLenum GL_TEXTURE_GEN_S = gl::GLenum::GL_TEXTURE_GEN_S;
static const gl::GLenum GL_TEXTURE_GEN_T = gl::GLenum::GL_TEXTURE_GEN_T;
static const gl::GLenum GL_TEXTURE_GEN_R = gl::GLenum::GL_TEXTURE_GEN_R;
static const gl::GLenum GL_TEXTURE_GEN_Q = gl::GLenum::GL_TEXTURE_GEN_Q;
static const gl::GLenum GL_AUTO_NORMAL = gl::GLenum::GL_AUTO_NORMAL;
static const gl::GLenum GL_MAP1_COLOR_4 = gl::GLenum::GL_MAP1_COLOR_4;
static const gl::GLenum GL_MAP1_INDEX = gl::GLenum::GL_MAP1_INDEX;
static const gl::GLenum GL_MAP1_NORMAL = gl::GLenum::GL_MAP1_NORMAL;
static const gl::GLenum GL_MAP1_TEXTURE_COORD_1 = gl::GLenum::GL_MAP1_TEXTURE_COORD_1;
static const gl::GLenum GL_MAP1_TEXTURE_COORD_2 = gl::GLenum::GL_MAP1_TEXTURE_COORD_2;
static const gl::GLenum GL_MAP1_TEXTURE_COORD_3 = gl::GLenum::GL_MAP1_TEXTURE_COORD_3;
static const gl::GLenum GL_MAP1_TEXTURE_COORD_4 = gl::GLenum::GL_MAP1_TEXTURE_COORD_4;
static const gl::GLenum GL_MAP1_VERTEX_3 = gl::GLenum::GL_MAP1_VERTEX_3;
static const gl::GLenum GL_MAP1_VERTEX_4 = gl::GLenum::GL_MAP1_VERTEX_4;
static const gl::GLenum GL_MAP2_COLOR_4 = gl::GLenum::GL_MAP2_COLOR_4;
static const gl::GLenum GL_MAP2_INDEX = gl::GLenum::GL_MAP2_INDEX;
static const gl::GLenum GL_MAP2_NORMAL = gl::GLenum::GL_MAP2_NORMAL;
static const gl::GLenum GL_MAP2_TEXTURE_COORD_1 = gl::GLenum::GL_MAP2_TEXTURE_COORD_1;
static const gl::GLenum GL_MAP2_TEXTURE_COORD_2 = gl::GLenum::GL_MAP2_TEXTURE_COORD_2;
static const gl::GLenum GL_MAP2_TEXTURE_COORD_3 = gl::GLenum::GL_MAP2_TEXTURE_COORD_3;
static const gl::GLenum GL_MAP2_TEXTURE_COORD_4 = gl::GLenum::GL_MAP2_TEXTURE_COORD_4;
static const gl::GLenum GL_MAP2_VERTEX_3 = gl::GLenum::GL_MAP2_VERTEX_3;
static const gl::GLenum GL_MAP2_VERTEX_4 = gl::GLenum::GL_MAP2_VERTEX_4;
static const gl::GLenum GL_TEXTURE_1D = gl::GLenum::GL_TEXTURE_1D;
static const gl::GLenum GL_TEXTURE_2D = gl::GLenum::GL_TEXTURE_2D;
static const gl::GLenum GL_POLYGON_OFFSET_POINT = gl::GLenum::GL_POLYGON_OFFSET_POINT;
static const gl::GLenum GL_POLYGON_OFFSET_LINE = gl::GLenum::GL_POLYGON_OFFSET_LINE;
// static const gl::GLenum GL_CLIP_PLANE0 = gl::GLenum::GL_CLIP_PLANE0; // reuse ClipPlaneName
// static const gl::GLenum GL_CLIP_PLANE1 = gl::GLenum::GL_CLIP_PLANE1; // reuse ClipPlaneName
// static const gl::GLenum GL_CLIP_PLANE2 = gl::GLenum::GL_CLIP_PLANE2; // reuse ClipPlaneName
// static const gl::GLenum GL_CLIP_PLANE3 = gl::GLenum::GL_CLIP_PLANE3; // reuse ClipPlaneName
// static const gl::GLenum GL_CLIP_PLANE4 = gl::GLenum::GL_CLIP_PLANE4; // reuse ClipPlaneName
// static const gl::GLenum GL_CLIP_PLANE5 = gl::GLenum::GL_CLIP_PLANE5; // reuse ClipPlaneName
static const gl::GLenum GL_LIGHT0 = gl::GLenum::GL_LIGHT0;
static const gl::GLenum GL_LIGHT1 = gl::GLenum::GL_LIGHT1;
static const gl::GLenum GL_LIGHT2 = gl::GLenum::GL_LIGHT2;
static const gl::GLenum GL_LIGHT3 = gl::GLenum::GL_LIGHT3;
static const gl::GLenum GL_LIGHT4 = gl::GLenum::GL_LIGHT4;
static const gl::GLenum GL_LIGHT5 = gl::GLenum::GL_LIGHT5;
static const gl::GLenum GL_LIGHT6 = gl::GLenum::GL_LIGHT6;
static const gl::GLenum GL_LIGHT7 = gl::GLenum::GL_LIGHT7;
static const gl::GLenum GL_POLYGON_OFFSET_FILL = gl::GLenum::GL_POLYGON_OFFSET_FILL;
static const gl::GLenum GL_VERTEX_ARRAY = gl::GLenum::GL_VERTEX_ARRAY;
static const gl::GLenum GL_NORMAL_ARRAY = gl::GLenum::GL_NORMAL_ARRAY;
static const gl::GLenum GL_COLOR_ARRAY = gl::GLenum::GL_COLOR_ARRAY;
static const gl::GLenum GL_INDEX_ARRAY = gl::GLenum::GL_INDEX_ARRAY;
static const gl::GLenum GL_TEXTURE_COORD_ARRAY = gl::GLenum::GL_TEXTURE_COORD_ARRAY;
static const gl::GLenum GL_EDGE_FLAG_ARRAY = gl::GLenum::GL_EDGE_FLAG_ARRAY;

// ErrorCode

static const gl::GLenum GL_NO_ERROR = gl::GLenum::GL_NO_ERROR;
static const gl::GLenum GL_INVALID_ENUM = gl::GLenum::GL_INVALID_ENUM;
static const gl::GLenum GL_INVALID_VALUE = gl::GLenum::GL_INVALID_VALUE;
static const gl::GLenum GL_INVALID_OPERATION = gl::GLenum::GL_INVALID_OPERATION;
static const gl::GLenum GL_STACK_OVERFLOW = gl::GLenum::GL_STACK_OVERFLOW;
static const gl::GLenum GL_STACK_UNDERFLOW = gl::GLenum::GL_STACK_UNDERFLOW;
static const gl::GLenum GL_OUT_OF_MEMORY = gl::GLenum::GL_OUT_OF_MEMORY;
static const gl::GLenum GL_INVALID_FRAMEBUFFER_OPERATION = gl::GLenum::GL_INVALID_FRAMEBUFFER_OPERATION;

// FeedBackToken

static const gl::GLenum GL_PASS_THROUGH_TOKEN = gl::GLenum::GL_PASS_THROUGH_TOKEN;
static const gl::GLenum GL_POINT_TOKEN = gl::GLenum::GL_POINT_TOKEN;
static const gl::GLenum GL_LINE_TOKEN = gl::GLenum::GL_LINE_TOKEN;
static const gl::GLenum GL_POLYGON_TOKEN = gl::GLenum::GL_POLYGON_TOKEN;
static const gl::GLenum GL_BITMAP_TOKEN = gl::GLenum::GL_BITMAP_TOKEN;
static const gl::GLenum GL_DRAW_PIXEL_TOKEN = gl::GLenum::GL_DRAW_PIXEL_TOKEN;
static const gl::GLenum GL_COPY_PIXEL_TOKEN = gl::GLenum::GL_COPY_PIXEL_TOKEN;
static const gl::GLenum GL_LINE_RESET_TOKEN = gl::GLenum::GL_LINE_RESET_TOKEN;

// FeedbackType

static const gl::GLenum GL_2D = gl::GLenum::GL_2D;
static const gl::GLenum GL_3D = gl::GLenum::GL_3D;
static const gl::GLenum GL_3D_COLOR = gl::GLenum::GL_3D_COLOR;
static const gl::GLenum GL_3D_COLOR_TEXTURE = gl::GLenum::GL_3D_COLOR_TEXTURE;
static const gl::GLenum GL_4D_COLOR_TEXTURE = gl::GLenum::GL_4D_COLOR_TEXTURE;

// FogCoordinatePointerType

// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// FogMode

static const gl::GLenum GL_EXP = gl::GLenum::GL_EXP;
static const gl::GLenum GL_EXP2 = gl::GLenum::GL_EXP2;
static const gl::GLenum GL_LINEAR = gl::GLenum::GL_LINEAR;

// FogParameter

static const gl::GLenum GL_FOG_INDEX = gl::GLenum::GL_FOG_INDEX;
static const gl::GLenum GL_FOG_DENSITY = gl::GLenum::GL_FOG_DENSITY;
static const gl::GLenum GL_FOG_START = gl::GLenum::GL_FOG_START;
static const gl::GLenum GL_FOG_END = gl::GLenum::GL_FOG_END;
static const gl::GLenum GL_FOG_MODE = gl::GLenum::GL_FOG_MODE;
static const gl::GLenum GL_FOG_COLOR = gl::GLenum::GL_FOG_COLOR;

// FogPointerTypeEXT

// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// FogPointerTypeIBM

// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// FrontFaceDirection

static const gl::GLenum GL_CW = gl::GLenum::GL_CW;
static const gl::GLenum GL_CCW = gl::GLenum::GL_CCW;

// GetMapQuery

static const gl::GLenum GL_COEFF = gl::GLenum::GL_COEFF;
static const gl::GLenum GL_ORDER = gl::GLenum::GL_ORDER;
static const gl::GLenum GL_DOMAIN = gl::GLenum::GL_DOMAIN;

// GetPName

static const gl::GLenum GL_CURRENT_COLOR = gl::GLenum::GL_CURRENT_COLOR;
static const gl::GLenum GL_CURRENT_INDEX = gl::GLenum::GL_CURRENT_INDEX;
static const gl::GLenum GL_CURRENT_NORMAL = gl::GLenum::GL_CURRENT_NORMAL;
static const gl::GLenum GL_CURRENT_TEXTURE_COORDS = gl::GLenum::GL_CURRENT_TEXTURE_COORDS;
static const gl::GLenum GL_CURRENT_RASTER_COLOR = gl::GLenum::GL_CURRENT_RASTER_COLOR;
static const gl::GLenum GL_CURRENT_RASTER_INDEX = gl::GLenum::GL_CURRENT_RASTER_INDEX;
static const gl::GLenum GL_CURRENT_RASTER_TEXTURE_COORDS = gl::GLenum::GL_CURRENT_RASTER_TEXTURE_COORDS;
static const gl::GLenum GL_CURRENT_RASTER_POSITION = gl::GLenum::GL_CURRENT_RASTER_POSITION;
static const gl::GLenum GL_CURRENT_RASTER_POSITION_VALID = gl::GLenum::GL_CURRENT_RASTER_POSITION_VALID;
static const gl::GLenum GL_CURRENT_RASTER_DISTANCE = gl::GLenum::GL_CURRENT_RASTER_DISTANCE;
// static const gl::GLenum GL_POINT_SMOOTH = gl::GLenum::GL_POINT_SMOOTH; // reuse EnableCap
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
// static const gl::GLenum GL_LINE_STIPPLE = gl::GLenum::GL_LINE_STIPPLE; // reuse EnableCap
static const gl::GLenum GL_LINE_STIPPLE_PATTERN = gl::GLenum::GL_LINE_STIPPLE_PATTERN;
static const gl::GLenum GL_LINE_STIPPLE_REPEAT = gl::GLenum::GL_LINE_STIPPLE_REPEAT;
static const gl::GLenum GL_LIST_MODE = gl::GLenum::GL_LIST_MODE;
static const gl::GLenum GL_MAX_LIST_NESTING = gl::GLenum::GL_MAX_LIST_NESTING;
static const gl::GLenum GL_LIST_BASE = gl::GLenum::GL_LIST_BASE;
static const gl::GLenum GL_LIST_INDEX = gl::GLenum::GL_LIST_INDEX;
static const gl::GLenum GL_POLYGON_MODE = gl::GLenum::GL_POLYGON_MODE;
// static const gl::GLenum GL_POLYGON_SMOOTH = gl::GLenum::GL_POLYGON_SMOOTH; // reuse EnableCap
// static const gl::GLenum GL_POLYGON_STIPPLE = gl::GLenum::GL_POLYGON_STIPPLE; // reuse EnableCap
static const gl::GLenum GL_EDGE_FLAG = gl::GLenum::GL_EDGE_FLAG;
// static const gl::GLenum GL_CULL_FACE = gl::GLenum::GL_CULL_FACE; // reuse EnableCap
static const gl::GLenum GL_CULL_FACE_MODE = gl::GLenum::GL_CULL_FACE_MODE;
static const gl::GLenum GL_FRONT_FACE = gl::GLenum::GL_FRONT_FACE;
// static const gl::GLenum GL_LIGHTING = gl::GLenum::GL_LIGHTING; // reuse EnableCap
static const gl::GLenum GL_LIGHT_MODEL_LOCAL_VIEWER = gl::GLenum::GL_LIGHT_MODEL_LOCAL_VIEWER;
static const gl::GLenum GL_LIGHT_MODEL_TWO_SIDE = gl::GLenum::GL_LIGHT_MODEL_TWO_SIDE;
static const gl::GLenum GL_LIGHT_MODEL_AMBIENT = gl::GLenum::GL_LIGHT_MODEL_AMBIENT;
static const gl::GLenum GL_SHADE_MODEL = gl::GLenum::GL_SHADE_MODEL;
static const gl::GLenum GL_COLOR_MATERIAL_FACE = gl::GLenum::GL_COLOR_MATERIAL_FACE;
static const gl::GLenum GL_COLOR_MATERIAL_PARAMETER = gl::GLenum::GL_COLOR_MATERIAL_PARAMETER;
// static const gl::GLenum GL_COLOR_MATERIAL = gl::GLenum::GL_COLOR_MATERIAL; // reuse EnableCap
// static const gl::GLenum GL_FOG = gl::GLenum::GL_FOG; // reuse EnableCap
// static const gl::GLenum GL_FOG_INDEX = gl::GLenum::GL_FOG_INDEX; // reuse FogParameter
// static const gl::GLenum GL_FOG_DENSITY = gl::GLenum::GL_FOG_DENSITY; // reuse FogParameter
// static const gl::GLenum GL_FOG_START = gl::GLenum::GL_FOG_START; // reuse FogParameter
// static const gl::GLenum GL_FOG_END = gl::GLenum::GL_FOG_END; // reuse FogParameter
// static const gl::GLenum GL_FOG_MODE = gl::GLenum::GL_FOG_MODE; // reuse FogParameter
// static const gl::GLenum GL_FOG_COLOR = gl::GLenum::GL_FOG_COLOR; // reuse FogParameter
static const gl::GLenum GL_DEPTH_RANGE = gl::GLenum::GL_DEPTH_RANGE;
// static const gl::GLenum GL_DEPTH_TEST = gl::GLenum::GL_DEPTH_TEST; // reuse EnableCap
static const gl::GLenum GL_DEPTH_WRITEMASK = gl::GLenum::GL_DEPTH_WRITEMASK;
static const gl::GLenum GL_DEPTH_CLEAR_VALUE = gl::GLenum::GL_DEPTH_CLEAR_VALUE;
static const gl::GLenum GL_DEPTH_FUNC = gl::GLenum::GL_DEPTH_FUNC;
static const gl::GLenum GL_ACCUM_CLEAR_VALUE = gl::GLenum::GL_ACCUM_CLEAR_VALUE;
// static const gl::GLenum GL_STENCIL_TEST = gl::GLenum::GL_STENCIL_TEST; // reuse EnableCap
static const gl::GLenum GL_STENCIL_CLEAR_VALUE = gl::GLenum::GL_STENCIL_CLEAR_VALUE;
static const gl::GLenum GL_STENCIL_FUNC = gl::GLenum::GL_STENCIL_FUNC;
static const gl::GLenum GL_STENCIL_VALUE_MASK = gl::GLenum::GL_STENCIL_VALUE_MASK;
static const gl::GLenum GL_STENCIL_FAIL = gl::GLenum::GL_STENCIL_FAIL;
static const gl::GLenum GL_STENCIL_PASS_DEPTH_FAIL = gl::GLenum::GL_STENCIL_PASS_DEPTH_FAIL;
static const gl::GLenum GL_STENCIL_PASS_DEPTH_PASS = gl::GLenum::GL_STENCIL_PASS_DEPTH_PASS;
static const gl::GLenum GL_STENCIL_REF = gl::GLenum::GL_STENCIL_REF;
static const gl::GLenum GL_STENCIL_WRITEMASK = gl::GLenum::GL_STENCIL_WRITEMASK;
static const gl::GLenum GL_MATRIX_MODE = gl::GLenum::GL_MATRIX_MODE;
// static const gl::GLenum GL_NORMALIZE = gl::GLenum::GL_NORMALIZE; // reuse EnableCap
static const gl::GLenum GL_VIEWPORT = gl::GLenum::GL_VIEWPORT;
static const gl::GLenum GL_MODELVIEW_STACK_DEPTH = gl::GLenum::GL_MODELVIEW_STACK_DEPTH;
static const gl::GLenum GL_PROJECTION_STACK_DEPTH = gl::GLenum::GL_PROJECTION_STACK_DEPTH;
static const gl::GLenum GL_TEXTURE_STACK_DEPTH = gl::GLenum::GL_TEXTURE_STACK_DEPTH;
static const gl::GLenum GL_MODELVIEW_MATRIX = gl::GLenum::GL_MODELVIEW_MATRIX;
static const gl::GLenum GL_PROJECTION_MATRIX = gl::GLenum::GL_PROJECTION_MATRIX;
static const gl::GLenum GL_TEXTURE_MATRIX = gl::GLenum::GL_TEXTURE_MATRIX;
static const gl::GLenum GL_ATTRIB_STACK_DEPTH = gl::GLenum::GL_ATTRIB_STACK_DEPTH;
static const gl::GLenum GL_CLIENT_ATTRIB_STACK_DEPTH = gl::GLenum::GL_CLIENT_ATTRIB_STACK_DEPTH;
// static const gl::GLenum GL_ALPHA_TEST = gl::GLenum::GL_ALPHA_TEST; // reuse EnableCap
static const gl::GLenum GL_ALPHA_TEST_FUNC = gl::GLenum::GL_ALPHA_TEST_FUNC;
static const gl::GLenum GL_ALPHA_TEST_REF = gl::GLenum::GL_ALPHA_TEST_REF;
// static const gl::GLenum GL_DITHER = gl::GLenum::GL_DITHER; // reuse EnableCap
static const gl::GLenum GL_BLEND_DST = gl::GLenum::GL_BLEND_DST;
static const gl::GLenum GL_BLEND_SRC = gl::GLenum::GL_BLEND_SRC;
// static const gl::GLenum GL_BLEND = gl::GLenum::GL_BLEND; // reuse EnableCap
static const gl::GLenum GL_LOGIC_OP_MODE = gl::GLenum::GL_LOGIC_OP_MODE;
// static const gl::GLenum GL_INDEX_LOGIC_OP = gl::GLenum::GL_INDEX_LOGIC_OP; // reuse EnableCap
// static const gl::GLenum GL_LOGIC_OP = gl::GLenum::GL_LOGIC_OP; // reuse BlendEquationModeEXT
// static const gl::GLenum GL_COLOR_LOGIC_OP = gl::GLenum::GL_COLOR_LOGIC_OP; // reuse EnableCap
static const gl::GLenum GL_AUX_BUFFERS = gl::GLenum::GL_AUX_BUFFERS;
static const gl::GLenum GL_DRAW_BUFFER = gl::GLenum::GL_DRAW_BUFFER;
static const gl::GLenum GL_READ_BUFFER = gl::GLenum::GL_READ_BUFFER;
static const gl::GLenum GL_SCISSOR_BOX = gl::GLenum::GL_SCISSOR_BOX;
// static const gl::GLenum GL_SCISSOR_TEST = gl::GLenum::GL_SCISSOR_TEST; // reuse EnableCap
static const gl::GLenum GL_INDEX_CLEAR_VALUE = gl::GLenum::GL_INDEX_CLEAR_VALUE;
static const gl::GLenum GL_INDEX_WRITEMASK = gl::GLenum::GL_INDEX_WRITEMASK;
static const gl::GLenum GL_COLOR_CLEAR_VALUE = gl::GLenum::GL_COLOR_CLEAR_VALUE;
static const gl::GLenum GL_COLOR_WRITEMASK = gl::GLenum::GL_COLOR_WRITEMASK;
static const gl::GLenum GL_INDEX_MODE = gl::GLenum::GL_INDEX_MODE;
static const gl::GLenum GL_RGBA_MODE = gl::GLenum::GL_RGBA_MODE;
static const gl::GLenum GL_DOUBLEBUFFER = gl::GLenum::GL_DOUBLEBUFFER;
static const gl::GLenum GL_STEREO = gl::GLenum::GL_STEREO;
static const gl::GLenum GL_RENDER_MODE = gl::GLenum::GL_RENDER_MODE;
static const gl::GLenum GL_PERSPECTIVE_CORRECTION_HINT = gl::GLenum::GL_PERSPECTIVE_CORRECTION_HINT;
static const gl::GLenum GL_POINT_SMOOTH_HINT = gl::GLenum::GL_POINT_SMOOTH_HINT;
static const gl::GLenum GL_LINE_SMOOTH_HINT = gl::GLenum::GL_LINE_SMOOTH_HINT;
static const gl::GLenum GL_POLYGON_SMOOTH_HINT = gl::GLenum::GL_POLYGON_SMOOTH_HINT;
static const gl::GLenum GL_FOG_HINT = gl::GLenum::GL_FOG_HINT;
// static const gl::GLenum GL_TEXTURE_GEN_S = gl::GLenum::GL_TEXTURE_GEN_S; // reuse EnableCap
// static const gl::GLenum GL_TEXTURE_GEN_T = gl::GLenum::GL_TEXTURE_GEN_T; // reuse EnableCap
// static const gl::GLenum GL_TEXTURE_GEN_R = gl::GLenum::GL_TEXTURE_GEN_R; // reuse EnableCap
// static const gl::GLenum GL_TEXTURE_GEN_Q = gl::GLenum::GL_TEXTURE_GEN_Q; // reuse EnableCap
static const gl::GLenum GL_PIXEL_MAP_I_TO_I_SIZE = gl::GLenum::GL_PIXEL_MAP_I_TO_I_SIZE;
static const gl::GLenum GL_PIXEL_MAP_S_TO_S_SIZE = gl::GLenum::GL_PIXEL_MAP_S_TO_S_SIZE;
static const gl::GLenum GL_PIXEL_MAP_I_TO_R_SIZE = gl::GLenum::GL_PIXEL_MAP_I_TO_R_SIZE;
static const gl::GLenum GL_PIXEL_MAP_I_TO_G_SIZE = gl::GLenum::GL_PIXEL_MAP_I_TO_G_SIZE;
static const gl::GLenum GL_PIXEL_MAP_I_TO_B_SIZE = gl::GLenum::GL_PIXEL_MAP_I_TO_B_SIZE;
static const gl::GLenum GL_PIXEL_MAP_I_TO_A_SIZE = gl::GLenum::GL_PIXEL_MAP_I_TO_A_SIZE;
static const gl::GLenum GL_PIXEL_MAP_R_TO_R_SIZE = gl::GLenum::GL_PIXEL_MAP_R_TO_R_SIZE;
static const gl::GLenum GL_PIXEL_MAP_G_TO_G_SIZE = gl::GLenum::GL_PIXEL_MAP_G_TO_G_SIZE;
static const gl::GLenum GL_PIXEL_MAP_B_TO_B_SIZE = gl::GLenum::GL_PIXEL_MAP_B_TO_B_SIZE;
static const gl::GLenum GL_PIXEL_MAP_A_TO_A_SIZE = gl::GLenum::GL_PIXEL_MAP_A_TO_A_SIZE;
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
static const gl::GLenum GL_MAP_COLOR = gl::GLenum::GL_MAP_COLOR;
static const gl::GLenum GL_MAP_STENCIL = gl::GLenum::GL_MAP_STENCIL;
static const gl::GLenum GL_INDEX_SHIFT = gl::GLenum::GL_INDEX_SHIFT;
static const gl::GLenum GL_INDEX_OFFSET = gl::GLenum::GL_INDEX_OFFSET;
static const gl::GLenum GL_RED_SCALE = gl::GLenum::GL_RED_SCALE;
static const gl::GLenum GL_RED_BIAS = gl::GLenum::GL_RED_BIAS;
static const gl::GLenum GL_ZOOM_X = gl::GLenum::GL_ZOOM_X;
static const gl::GLenum GL_ZOOM_Y = gl::GLenum::GL_ZOOM_Y;
static const gl::GLenum GL_GREEN_SCALE = gl::GLenum::GL_GREEN_SCALE;
static const gl::GLenum GL_GREEN_BIAS = gl::GLenum::GL_GREEN_BIAS;
static const gl::GLenum GL_BLUE_SCALE = gl::GLenum::GL_BLUE_SCALE;
static const gl::GLenum GL_BLUE_BIAS = gl::GLenum::GL_BLUE_BIAS;
static const gl::GLenum GL_ALPHA_SCALE = gl::GLenum::GL_ALPHA_SCALE;
static const gl::GLenum GL_ALPHA_BIAS = gl::GLenum::GL_ALPHA_BIAS;
static const gl::GLenum GL_DEPTH_SCALE = gl::GLenum::GL_DEPTH_SCALE;
static const gl::GLenum GL_DEPTH_BIAS = gl::GLenum::GL_DEPTH_BIAS;
static const gl::GLenum GL_MAX_EVAL_ORDER = gl::GLenum::GL_MAX_EVAL_ORDER;
static const gl::GLenum GL_MAX_LIGHTS = gl::GLenum::GL_MAX_LIGHTS;
static const gl::GLenum GL_MAX_CLIP_DISTANCES = gl::GLenum::GL_MAX_CLIP_DISTANCES;
static const gl::GLenum GL_MAX_CLIP_PLANES = gl::GLenum::GL_MAX_CLIP_PLANES;
static const gl::GLenum GL_MAX_TEXTURE_SIZE = gl::GLenum::GL_MAX_TEXTURE_SIZE;
static const gl::GLenum GL_MAX_PIXEL_MAP_TABLE = gl::GLenum::GL_MAX_PIXEL_MAP_TABLE;
static const gl::GLenum GL_MAX_ATTRIB_STACK_DEPTH = gl::GLenum::GL_MAX_ATTRIB_STACK_DEPTH;
static const gl::GLenum GL_MAX_MODELVIEW_STACK_DEPTH = gl::GLenum::GL_MAX_MODELVIEW_STACK_DEPTH;
static const gl::GLenum GL_MAX_NAME_STACK_DEPTH = gl::GLenum::GL_MAX_NAME_STACK_DEPTH;
static const gl::GLenum GL_MAX_PROJECTION_STACK_DEPTH = gl::GLenum::GL_MAX_PROJECTION_STACK_DEPTH;
static const gl::GLenum GL_MAX_TEXTURE_STACK_DEPTH = gl::GLenum::GL_MAX_TEXTURE_STACK_DEPTH;
static const gl::GLenum GL_MAX_VIEWPORT_DIMS = gl::GLenum::GL_MAX_VIEWPORT_DIMS;
static const gl::GLenum GL_MAX_CLIENT_ATTRIB_STACK_DEPTH = gl::GLenum::GL_MAX_CLIENT_ATTRIB_STACK_DEPTH;
static const gl::GLenum GL_SUBPIXEL_BITS = gl::GLenum::GL_SUBPIXEL_BITS;
static const gl::GLenum GL_INDEX_BITS = gl::GLenum::GL_INDEX_BITS;
static const gl::GLenum GL_RED_BITS = gl::GLenum::GL_RED_BITS;
static const gl::GLenum GL_GREEN_BITS = gl::GLenum::GL_GREEN_BITS;
static const gl::GLenum GL_BLUE_BITS = gl::GLenum::GL_BLUE_BITS;
static const gl::GLenum GL_ALPHA_BITS = gl::GLenum::GL_ALPHA_BITS;
static const gl::GLenum GL_DEPTH_BITS = gl::GLenum::GL_DEPTH_BITS;
static const gl::GLenum GL_STENCIL_BITS = gl::GLenum::GL_STENCIL_BITS;
static const gl::GLenum GL_ACCUM_RED_BITS = gl::GLenum::GL_ACCUM_RED_BITS;
static const gl::GLenum GL_ACCUM_GREEN_BITS = gl::GLenum::GL_ACCUM_GREEN_BITS;
static const gl::GLenum GL_ACCUM_BLUE_BITS = gl::GLenum::GL_ACCUM_BLUE_BITS;
static const gl::GLenum GL_ACCUM_ALPHA_BITS = gl::GLenum::GL_ACCUM_ALPHA_BITS;
static const gl::GLenum GL_NAME_STACK_DEPTH = gl::GLenum::GL_NAME_STACK_DEPTH;
// static const gl::GLenum GL_AUTO_NORMAL = gl::GLenum::GL_AUTO_NORMAL; // reuse EnableCap
// static const gl::GLenum GL_MAP1_COLOR_4 = gl::GLenum::GL_MAP1_COLOR_4; // reuse EnableCap
// static const gl::GLenum GL_MAP1_INDEX = gl::GLenum::GL_MAP1_INDEX; // reuse EnableCap
// static const gl::GLenum GL_MAP1_NORMAL = gl::GLenum::GL_MAP1_NORMAL; // reuse EnableCap
// static const gl::GLenum GL_MAP1_TEXTURE_COORD_1 = gl::GLenum::GL_MAP1_TEXTURE_COORD_1; // reuse EnableCap
// static const gl::GLenum GL_MAP1_TEXTURE_COORD_2 = gl::GLenum::GL_MAP1_TEXTURE_COORD_2; // reuse EnableCap
// static const gl::GLenum GL_MAP1_TEXTURE_COORD_3 = gl::GLenum::GL_MAP1_TEXTURE_COORD_3; // reuse EnableCap
// static const gl::GLenum GL_MAP1_TEXTURE_COORD_4 = gl::GLenum::GL_MAP1_TEXTURE_COORD_4; // reuse EnableCap
// static const gl::GLenum GL_MAP1_VERTEX_3 = gl::GLenum::GL_MAP1_VERTEX_3; // reuse EnableCap
// static const gl::GLenum GL_MAP1_VERTEX_4 = gl::GLenum::GL_MAP1_VERTEX_4; // reuse EnableCap
// static const gl::GLenum GL_MAP2_COLOR_4 = gl::GLenum::GL_MAP2_COLOR_4; // reuse EnableCap
// static const gl::GLenum GL_MAP2_INDEX = gl::GLenum::GL_MAP2_INDEX; // reuse EnableCap
// static const gl::GLenum GL_MAP2_NORMAL = gl::GLenum::GL_MAP2_NORMAL; // reuse EnableCap
// static const gl::GLenum GL_MAP2_TEXTURE_COORD_1 = gl::GLenum::GL_MAP2_TEXTURE_COORD_1; // reuse EnableCap
// static const gl::GLenum GL_MAP2_TEXTURE_COORD_2 = gl::GLenum::GL_MAP2_TEXTURE_COORD_2; // reuse EnableCap
// static const gl::GLenum GL_MAP2_TEXTURE_COORD_3 = gl::GLenum::GL_MAP2_TEXTURE_COORD_3; // reuse EnableCap
// static const gl::GLenum GL_MAP2_TEXTURE_COORD_4 = gl::GLenum::GL_MAP2_TEXTURE_COORD_4; // reuse EnableCap
// static const gl::GLenum GL_MAP2_VERTEX_3 = gl::GLenum::GL_MAP2_VERTEX_3; // reuse EnableCap
// static const gl::GLenum GL_MAP2_VERTEX_4 = gl::GLenum::GL_MAP2_VERTEX_4; // reuse EnableCap
static const gl::GLenum GL_MAP1_GRID_DOMAIN = gl::GLenum::GL_MAP1_GRID_DOMAIN;
static const gl::GLenum GL_MAP1_GRID_SEGMENTS = gl::GLenum::GL_MAP1_GRID_SEGMENTS;
static const gl::GLenum GL_MAP2_GRID_DOMAIN = gl::GLenum::GL_MAP2_GRID_DOMAIN;
static const gl::GLenum GL_MAP2_GRID_SEGMENTS = gl::GLenum::GL_MAP2_GRID_SEGMENTS;
// static const gl::GLenum GL_TEXTURE_1D = gl::GLenum::GL_TEXTURE_1D; // reuse EnableCap
// static const gl::GLenum GL_TEXTURE_2D = gl::GLenum::GL_TEXTURE_2D; // reuse EnableCap
static const gl::GLenum GL_FEEDBACK_BUFFER_SIZE = gl::GLenum::GL_FEEDBACK_BUFFER_SIZE;
static const gl::GLenum GL_FEEDBACK_BUFFER_TYPE = gl::GLenum::GL_FEEDBACK_BUFFER_TYPE;
static const gl::GLenum GL_SELECTION_BUFFER_SIZE = gl::GLenum::GL_SELECTION_BUFFER_SIZE;
static const gl::GLenum GL_POLYGON_OFFSET_UNITS = gl::GLenum::GL_POLYGON_OFFSET_UNITS;
// static const gl::GLenum GL_POLYGON_OFFSET_POINT = gl::GLenum::GL_POLYGON_OFFSET_POINT; // reuse EnableCap
// static const gl::GLenum GL_POLYGON_OFFSET_LINE = gl::GLenum::GL_POLYGON_OFFSET_LINE; // reuse EnableCap
// static const gl::GLenum GL_CLIP_PLANE0 = gl::GLenum::GL_CLIP_PLANE0; // reuse ClipPlaneName
// static const gl::GLenum GL_CLIP_PLANE1 = gl::GLenum::GL_CLIP_PLANE1; // reuse ClipPlaneName
// static const gl::GLenum GL_CLIP_PLANE2 = gl::GLenum::GL_CLIP_PLANE2; // reuse ClipPlaneName
// static const gl::GLenum GL_CLIP_PLANE3 = gl::GLenum::GL_CLIP_PLANE3; // reuse ClipPlaneName
// static const gl::GLenum GL_CLIP_PLANE4 = gl::GLenum::GL_CLIP_PLANE4; // reuse ClipPlaneName
// static const gl::GLenum GL_CLIP_PLANE5 = gl::GLenum::GL_CLIP_PLANE5; // reuse ClipPlaneName
// static const gl::GLenum GL_LIGHT0 = gl::GLenum::GL_LIGHT0; // reuse EnableCap
// static const gl::GLenum GL_LIGHT1 = gl::GLenum::GL_LIGHT1; // reuse EnableCap
// static const gl::GLenum GL_LIGHT2 = gl::GLenum::GL_LIGHT2; // reuse EnableCap
// static const gl::GLenum GL_LIGHT3 = gl::GLenum::GL_LIGHT3; // reuse EnableCap
// static const gl::GLenum GL_LIGHT4 = gl::GLenum::GL_LIGHT4; // reuse EnableCap
// static const gl::GLenum GL_LIGHT5 = gl::GLenum::GL_LIGHT5; // reuse EnableCap
// static const gl::GLenum GL_LIGHT6 = gl::GLenum::GL_LIGHT6; // reuse EnableCap
// static const gl::GLenum GL_LIGHT7 = gl::GLenum::GL_LIGHT7; // reuse EnableCap
// static const gl::GLenum GL_POLYGON_OFFSET_FILL = gl::GLenum::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
static const gl::GLenum GL_POLYGON_OFFSET_FACTOR = gl::GLenum::GL_POLYGON_OFFSET_FACTOR;
static const gl::GLenum GL_TEXTURE_BINDING_1D = gl::GLenum::GL_TEXTURE_BINDING_1D;
static const gl::GLenum GL_TEXTURE_BINDING_2D = gl::GLenum::GL_TEXTURE_BINDING_2D;
static const gl::GLenum GL_TEXTURE_BINDING_3D = gl::GLenum::GL_TEXTURE_BINDING_3D;
// static const gl::GLenum GL_VERTEX_ARRAY = gl::GLenum::GL_VERTEX_ARRAY; // reuse EnableCap
// static const gl::GLenum GL_NORMAL_ARRAY = gl::GLenum::GL_NORMAL_ARRAY; // reuse EnableCap
// static const gl::GLenum GL_COLOR_ARRAY = gl::GLenum::GL_COLOR_ARRAY; // reuse EnableCap
// static const gl::GLenum GL_INDEX_ARRAY = gl::GLenum::GL_INDEX_ARRAY; // reuse EnableCap
// static const gl::GLenum GL_TEXTURE_COORD_ARRAY = gl::GLenum::GL_TEXTURE_COORD_ARRAY; // reuse EnableCap
// static const gl::GLenum GL_EDGE_FLAG_ARRAY = gl::GLenum::GL_EDGE_FLAG_ARRAY; // reuse EnableCap
static const gl::GLenum GL_VERTEX_ARRAY_SIZE = gl::GLenum::GL_VERTEX_ARRAY_SIZE;
static const gl::GLenum GL_VERTEX_ARRAY_TYPE = gl::GLenum::GL_VERTEX_ARRAY_TYPE;
static const gl::GLenum GL_VERTEX_ARRAY_STRIDE = gl::GLenum::GL_VERTEX_ARRAY_STRIDE;
static const gl::GLenum GL_NORMAL_ARRAY_TYPE = gl::GLenum::GL_NORMAL_ARRAY_TYPE;
static const gl::GLenum GL_NORMAL_ARRAY_STRIDE = gl::GLenum::GL_NORMAL_ARRAY_STRIDE;
static const gl::GLenum GL_COLOR_ARRAY_SIZE = gl::GLenum::GL_COLOR_ARRAY_SIZE;
static const gl::GLenum GL_COLOR_ARRAY_TYPE = gl::GLenum::GL_COLOR_ARRAY_TYPE;
static const gl::GLenum GL_COLOR_ARRAY_STRIDE = gl::GLenum::GL_COLOR_ARRAY_STRIDE;
static const gl::GLenum GL_INDEX_ARRAY_TYPE = gl::GLenum::GL_INDEX_ARRAY_TYPE;
static const gl::GLenum GL_INDEX_ARRAY_STRIDE = gl::GLenum::GL_INDEX_ARRAY_STRIDE;
static const gl::GLenum GL_TEXTURE_COORD_ARRAY_SIZE = gl::GLenum::GL_TEXTURE_COORD_ARRAY_SIZE;
static const gl::GLenum GL_TEXTURE_COORD_ARRAY_TYPE = gl::GLenum::GL_TEXTURE_COORD_ARRAY_TYPE;
static const gl::GLenum GL_TEXTURE_COORD_ARRAY_STRIDE = gl::GLenum::GL_TEXTURE_COORD_ARRAY_STRIDE;
static const gl::GLenum GL_EDGE_FLAG_ARRAY_STRIDE = gl::GLenum::GL_EDGE_FLAG_ARRAY_STRIDE;
static const gl::GLenum GL_LIGHT_MODEL_COLOR_CONTROL = gl::GLenum::GL_LIGHT_MODEL_COLOR_CONTROL;
static const gl::GLenum GL_ALIASED_POINT_SIZE_RANGE = gl::GLenum::GL_ALIASED_POINT_SIZE_RANGE;
static const gl::GLenum GL_ALIASED_LINE_WIDTH_RANGE = gl::GLenum::GL_ALIASED_LINE_WIDTH_RANGE;

// GetPixelMap

static const gl::GLenum GL_PIXEL_MAP_I_TO_I = gl::GLenum::GL_PIXEL_MAP_I_TO_I;
static const gl::GLenum GL_PIXEL_MAP_S_TO_S = gl::GLenum::GL_PIXEL_MAP_S_TO_S;
static const gl::GLenum GL_PIXEL_MAP_I_TO_R = gl::GLenum::GL_PIXEL_MAP_I_TO_R;
static const gl::GLenum GL_PIXEL_MAP_I_TO_G = gl::GLenum::GL_PIXEL_MAP_I_TO_G;
static const gl::GLenum GL_PIXEL_MAP_I_TO_B = gl::GLenum::GL_PIXEL_MAP_I_TO_B;
static const gl::GLenum GL_PIXEL_MAP_I_TO_A = gl::GLenum::GL_PIXEL_MAP_I_TO_A;
static const gl::GLenum GL_PIXEL_MAP_R_TO_R = gl::GLenum::GL_PIXEL_MAP_R_TO_R;
static const gl::GLenum GL_PIXEL_MAP_G_TO_G = gl::GLenum::GL_PIXEL_MAP_G_TO_G;
static const gl::GLenum GL_PIXEL_MAP_B_TO_B = gl::GLenum::GL_PIXEL_MAP_B_TO_B;
static const gl::GLenum GL_PIXEL_MAP_A_TO_A = gl::GLenum::GL_PIXEL_MAP_A_TO_A;

// GetPointervPName

static const gl::GLenum GL_FEEDBACK_BUFFER_POINTER = gl::GLenum::GL_FEEDBACK_BUFFER_POINTER;
static const gl::GLenum GL_SELECTION_BUFFER_POINTER = gl::GLenum::GL_SELECTION_BUFFER_POINTER;
static const gl::GLenum GL_VERTEX_ARRAY_POINTER = gl::GLenum::GL_VERTEX_ARRAY_POINTER;
static const gl::GLenum GL_NORMAL_ARRAY_POINTER = gl::GLenum::GL_NORMAL_ARRAY_POINTER;
static const gl::GLenum GL_COLOR_ARRAY_POINTER = gl::GLenum::GL_COLOR_ARRAY_POINTER;
static const gl::GLenum GL_INDEX_ARRAY_POINTER = gl::GLenum::GL_INDEX_ARRAY_POINTER;
static const gl::GLenum GL_TEXTURE_COORD_ARRAY_POINTER = gl::GLenum::GL_TEXTURE_COORD_ARRAY_POINTER;
static const gl::GLenum GL_EDGE_FLAG_ARRAY_POINTER = gl::GLenum::GL_EDGE_FLAG_ARRAY_POINTER;

// GetTextureParameter

static const gl::GLenum GL_TEXTURE_WIDTH = gl::GLenum::GL_TEXTURE_WIDTH;
static const gl::GLenum GL_TEXTURE_HEIGHT = gl::GLenum::GL_TEXTURE_HEIGHT;
static const gl::GLenum GL_TEXTURE_COMPONENTS = gl::GLenum::GL_TEXTURE_COMPONENTS;
static const gl::GLenum GL_TEXTURE_INTERNAL_FORMAT = gl::GLenum::GL_TEXTURE_INTERNAL_FORMAT;
static const gl::GLenum GL_TEXTURE_BORDER_COLOR = gl::GLenum::GL_TEXTURE_BORDER_COLOR;
static const gl::GLenum GL_TEXTURE_BORDER = gl::GLenum::GL_TEXTURE_BORDER;
static const gl::GLenum GL_TEXTURE_MAG_FILTER = gl::GLenum::GL_TEXTURE_MAG_FILTER;
static const gl::GLenum GL_TEXTURE_MIN_FILTER = gl::GLenum::GL_TEXTURE_MIN_FILTER;
static const gl::GLenum GL_TEXTURE_WRAP_S = gl::GLenum::GL_TEXTURE_WRAP_S;
static const gl::GLenum GL_TEXTURE_WRAP_T = gl::GLenum::GL_TEXTURE_WRAP_T;
static const gl::GLenum GL_TEXTURE_RED_SIZE = gl::GLenum::GL_TEXTURE_RED_SIZE;
static const gl::GLenum GL_TEXTURE_GREEN_SIZE = gl::GLenum::GL_TEXTURE_GREEN_SIZE;
static const gl::GLenum GL_TEXTURE_BLUE_SIZE = gl::GLenum::GL_TEXTURE_BLUE_SIZE;
static const gl::GLenum GL_TEXTURE_ALPHA_SIZE = gl::GLenum::GL_TEXTURE_ALPHA_SIZE;
static const gl::GLenum GL_TEXTURE_LUMINANCE_SIZE = gl::GLenum::GL_TEXTURE_LUMINANCE_SIZE;
static const gl::GLenum GL_TEXTURE_INTENSITY_SIZE = gl::GLenum::GL_TEXTURE_INTENSITY_SIZE;
static const gl::GLenum GL_TEXTURE_PRIORITY = gl::GLenum::GL_TEXTURE_PRIORITY;
static const gl::GLenum GL_TEXTURE_RESIDENT = gl::GLenum::GL_TEXTURE_RESIDENT;

// HintMode

static const gl::GLenum GL_DONT_CARE = gl::GLenum::GL_DONT_CARE;
static const gl::GLenum GL_FASTEST = gl::GLenum::GL_FASTEST;
static const gl::GLenum GL_NICEST = gl::GLenum::GL_NICEST;

// HintTarget

// static const gl::GLenum GL_PERSPECTIVE_CORRECTION_HINT = gl::GLenum::GL_PERSPECTIVE_CORRECTION_HINT; // reuse GetPName
// static const gl::GLenum GL_POINT_SMOOTH_HINT = gl::GLenum::GL_POINT_SMOOTH_HINT; // reuse GetPName
// static const gl::GLenum GL_LINE_SMOOTH_HINT = gl::GLenum::GL_LINE_SMOOTH_HINT; // reuse GetPName
// static const gl::GLenum GL_POLYGON_SMOOTH_HINT = gl::GLenum::GL_POLYGON_SMOOTH_HINT; // reuse GetPName
// static const gl::GLenum GL_FOG_HINT = gl::GLenum::GL_FOG_HINT; // reuse GetPName
static const gl::GLenum GL_GENERATE_MIPMAP_HINT = gl::GLenum::GL_GENERATE_MIPMAP_HINT;
static const gl::GLenum GL_PROGRAM_BINARY_RETRIEVABLE_HINT = gl::GLenum::GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
static const gl::GLenum GL_TEXTURE_COMPRESSION_HINT = gl::GLenum::GL_TEXTURE_COMPRESSION_HINT;
static const gl::GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT = gl::GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;

// IndexPointerType

// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// InterleavedArrayFormat

static const gl::GLenum GL_V2F = gl::GLenum::GL_V2F;
static const gl::GLenum GL_V3F = gl::GLenum::GL_V3F;
static const gl::GLenum GL_C4UB_V2F = gl::GLenum::GL_C4UB_V2F;
static const gl::GLenum GL_C4UB_V3F = gl::GLenum::GL_C4UB_V3F;
static const gl::GLenum GL_C3F_V3F = gl::GLenum::GL_C3F_V3F;
static const gl::GLenum GL_N3F_V3F = gl::GLenum::GL_N3F_V3F;
static const gl::GLenum GL_C4F_N3F_V3F = gl::GLenum::GL_C4F_N3F_V3F;
static const gl::GLenum GL_T2F_V3F = gl::GLenum::GL_T2F_V3F;
static const gl::GLenum GL_T4F_V4F = gl::GLenum::GL_T4F_V4F;
static const gl::GLenum GL_T2F_C4UB_V3F = gl::GLenum::GL_T2F_C4UB_V3F;
static const gl::GLenum GL_T2F_C3F_V3F = gl::GLenum::GL_T2F_C3F_V3F;
static const gl::GLenum GL_T2F_N3F_V3F = gl::GLenum::GL_T2F_N3F_V3F;
static const gl::GLenum GL_T2F_C4F_N3F_V3F = gl::GLenum::GL_T2F_C4F_N3F_V3F;
static const gl::GLenum GL_T4F_C4F_N3F_V4F = gl::GLenum::GL_T4F_C4F_N3F_V4F;

// InternalFormat

static const gl::GLenum GL_R3_G3_B2 = gl::GLenum::GL_R3_G3_B2;
static const gl::GLenum GL_ALPHA4 = gl::GLenum::GL_ALPHA4;
static const gl::GLenum GL_ALPHA8 = gl::GLenum::GL_ALPHA8;
static const gl::GLenum GL_ALPHA12 = gl::GLenum::GL_ALPHA12;
static const gl::GLenum GL_ALPHA16 = gl::GLenum::GL_ALPHA16;
static const gl::GLenum GL_LUMINANCE4 = gl::GLenum::GL_LUMINANCE4;
static const gl::GLenum GL_LUMINANCE8 = gl::GLenum::GL_LUMINANCE8;
static const gl::GLenum GL_LUMINANCE12 = gl::GLenum::GL_LUMINANCE12;
static const gl::GLenum GL_LUMINANCE16 = gl::GLenum::GL_LUMINANCE16;
static const gl::GLenum GL_LUMINANCE4_ALPHA4 = gl::GLenum::GL_LUMINANCE4_ALPHA4;
static const gl::GLenum GL_LUMINANCE6_ALPHA2 = gl::GLenum::GL_LUMINANCE6_ALPHA2;
static const gl::GLenum GL_LUMINANCE8_ALPHA8 = gl::GLenum::GL_LUMINANCE8_ALPHA8;
static const gl::GLenum GL_LUMINANCE12_ALPHA4 = gl::GLenum::GL_LUMINANCE12_ALPHA4;
static const gl::GLenum GL_LUMINANCE12_ALPHA12 = gl::GLenum::GL_LUMINANCE12_ALPHA12;
static const gl::GLenum GL_LUMINANCE16_ALPHA16 = gl::GLenum::GL_LUMINANCE16_ALPHA16;
static const gl::GLenum GL_INTENSITY = gl::GLenum::GL_INTENSITY;
static const gl::GLenum GL_INTENSITY4 = gl::GLenum::GL_INTENSITY4;
static const gl::GLenum GL_INTENSITY8 = gl::GLenum::GL_INTENSITY8;
static const gl::GLenum GL_INTENSITY12 = gl::GLenum::GL_INTENSITY12;
static const gl::GLenum GL_INTENSITY16 = gl::GLenum::GL_INTENSITY16;
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

// static const gl::GLenum GL_ADD = gl::GLenum::GL_ADD; // reuse AccumOp
static const gl::GLenum GL_REPLACE = gl::GLenum::GL_REPLACE;
static const gl::GLenum GL_MODULATE = gl::GLenum::GL_MODULATE;

// LightModelColorControl

static const gl::GLenum GL_SINGLE_COLOR = gl::GLenum::GL_SINGLE_COLOR;
static const gl::GLenum GL_SEPARATE_SPECULAR_COLOR = gl::GLenum::GL_SEPARATE_SPECULAR_COLOR;

// LightModelParameter

// static const gl::GLenum GL_LIGHT_MODEL_LOCAL_VIEWER = gl::GLenum::GL_LIGHT_MODEL_LOCAL_VIEWER; // reuse GetPName
// static const gl::GLenum GL_LIGHT_MODEL_TWO_SIDE = gl::GLenum::GL_LIGHT_MODEL_TWO_SIDE; // reuse GetPName
// static const gl::GLenum GL_LIGHT_MODEL_AMBIENT = gl::GLenum::GL_LIGHT_MODEL_AMBIENT; // reuse GetPName
// static const gl::GLenum GL_LIGHT_MODEL_COLOR_CONTROL = gl::GLenum::GL_LIGHT_MODEL_COLOR_CONTROL; // reuse GetPName

// LightName

// static const gl::GLenum GL_LIGHT0 = gl::GLenum::GL_LIGHT0; // reuse EnableCap
// static const gl::GLenum GL_LIGHT1 = gl::GLenum::GL_LIGHT1; // reuse EnableCap
// static const gl::GLenum GL_LIGHT2 = gl::GLenum::GL_LIGHT2; // reuse EnableCap
// static const gl::GLenum GL_LIGHT3 = gl::GLenum::GL_LIGHT3; // reuse EnableCap
// static const gl::GLenum GL_LIGHT4 = gl::GLenum::GL_LIGHT4; // reuse EnableCap
// static const gl::GLenum GL_LIGHT5 = gl::GLenum::GL_LIGHT5; // reuse EnableCap
// static const gl::GLenum GL_LIGHT6 = gl::GLenum::GL_LIGHT6; // reuse EnableCap
// static const gl::GLenum GL_LIGHT7 = gl::GLenum::GL_LIGHT7; // reuse EnableCap

// LightParameter

// static const gl::GLenum GL_AMBIENT = gl::GLenum::GL_AMBIENT; // reuse ColorMaterialParameter
// static const gl::GLenum GL_DIFFUSE = gl::GLenum::GL_DIFFUSE; // reuse ColorMaterialParameter
// static const gl::GLenum GL_SPECULAR = gl::GLenum::GL_SPECULAR; // reuse ColorMaterialParameter
static const gl::GLenum GL_POSITION = gl::GLenum::GL_POSITION;
static const gl::GLenum GL_SPOT_DIRECTION = gl::GLenum::GL_SPOT_DIRECTION;
static const gl::GLenum GL_SPOT_EXPONENT = gl::GLenum::GL_SPOT_EXPONENT;
static const gl::GLenum GL_SPOT_CUTOFF = gl::GLenum::GL_SPOT_CUTOFF;
static const gl::GLenum GL_CONSTANT_ATTENUATION = gl::GLenum::GL_CONSTANT_ATTENUATION;
static const gl::GLenum GL_LINEAR_ATTENUATION = gl::GLenum::GL_LINEAR_ATTENUATION;
static const gl::GLenum GL_QUADRATIC_ATTENUATION = gl::GLenum::GL_QUADRATIC_ATTENUATION;

// ListMode

static const gl::GLenum GL_COMPILE = gl::GLenum::GL_COMPILE;
static const gl::GLenum GL_COMPILE_AND_EXECUTE = gl::GLenum::GL_COMPILE_AND_EXECUTE;

// ListNameType

// static const gl::GLenum GL_BYTE = gl::GLenum::GL_BYTE; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_BYTE = gl::GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_SHORT = gl::GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_INT = gl::GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
static const gl::GLenum GL_2_BYTES = gl::GLenum::GL_2_BYTES;
static const gl::GLenum GL_3_BYTES = gl::GLenum::GL_3_BYTES;
static const gl::GLenum GL_4_BYTES = gl::GLenum::GL_4_BYTES;

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

// MapTarget

// static const gl::GLenum GL_MAP1_COLOR_4 = gl::GLenum::GL_MAP1_COLOR_4; // reuse EnableCap
// static const gl::GLenum GL_MAP1_INDEX = gl::GLenum::GL_MAP1_INDEX; // reuse EnableCap
// static const gl::GLenum GL_MAP1_NORMAL = gl::GLenum::GL_MAP1_NORMAL; // reuse EnableCap
// static const gl::GLenum GL_MAP1_TEXTURE_COORD_1 = gl::GLenum::GL_MAP1_TEXTURE_COORD_1; // reuse EnableCap
// static const gl::GLenum GL_MAP1_TEXTURE_COORD_2 = gl::GLenum::GL_MAP1_TEXTURE_COORD_2; // reuse EnableCap
// static const gl::GLenum GL_MAP1_TEXTURE_COORD_3 = gl::GLenum::GL_MAP1_TEXTURE_COORD_3; // reuse EnableCap
// static const gl::GLenum GL_MAP1_TEXTURE_COORD_4 = gl::GLenum::GL_MAP1_TEXTURE_COORD_4; // reuse EnableCap
// static const gl::GLenum GL_MAP1_VERTEX_3 = gl::GLenum::GL_MAP1_VERTEX_3; // reuse EnableCap
// static const gl::GLenum GL_MAP1_VERTEX_4 = gl::GLenum::GL_MAP1_VERTEX_4; // reuse EnableCap
// static const gl::GLenum GL_MAP2_COLOR_4 = gl::GLenum::GL_MAP2_COLOR_4; // reuse EnableCap
// static const gl::GLenum GL_MAP2_INDEX = gl::GLenum::GL_MAP2_INDEX; // reuse EnableCap
// static const gl::GLenum GL_MAP2_NORMAL = gl::GLenum::GL_MAP2_NORMAL; // reuse EnableCap
// static const gl::GLenum GL_MAP2_TEXTURE_COORD_1 = gl::GLenum::GL_MAP2_TEXTURE_COORD_1; // reuse EnableCap
// static const gl::GLenum GL_MAP2_TEXTURE_COORD_2 = gl::GLenum::GL_MAP2_TEXTURE_COORD_2; // reuse EnableCap
// static const gl::GLenum GL_MAP2_TEXTURE_COORD_3 = gl::GLenum::GL_MAP2_TEXTURE_COORD_3; // reuse EnableCap
// static const gl::GLenum GL_MAP2_TEXTURE_COORD_4 = gl::GLenum::GL_MAP2_TEXTURE_COORD_4; // reuse EnableCap
// static const gl::GLenum GL_MAP2_VERTEX_3 = gl::GLenum::GL_MAP2_VERTEX_3; // reuse EnableCap
// static const gl::GLenum GL_MAP2_VERTEX_4 = gl::GLenum::GL_MAP2_VERTEX_4; // reuse EnableCap

// MaterialFace

// static const gl::GLenum GL_FRONT = gl::GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const gl::GLenum GL_BACK = gl::GLenum::GL_BACK; // reuse ColorMaterialFace
// static const gl::GLenum GL_FRONT_AND_BACK = gl::GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// MaterialParameter

// static const gl::GLenum GL_AMBIENT = gl::GLenum::GL_AMBIENT; // reuse ColorMaterialParameter
// static const gl::GLenum GL_DIFFUSE = gl::GLenum::GL_DIFFUSE; // reuse ColorMaterialParameter
// static const gl::GLenum GL_SPECULAR = gl::GLenum::GL_SPECULAR; // reuse ColorMaterialParameter
// static const gl::GLenum GL_EMISSION = gl::GLenum::GL_EMISSION; // reuse ColorMaterialParameter
static const gl::GLenum GL_SHININESS = gl::GLenum::GL_SHININESS;
// static const gl::GLenum GL_AMBIENT_AND_DIFFUSE = gl::GLenum::GL_AMBIENT_AND_DIFFUSE; // reuse ColorMaterialParameter
static const gl::GLenum GL_COLOR_INDEXES = gl::GLenum::GL_COLOR_INDEXES;

// MatrixMode

static const gl::GLenum GL_MODELVIEW = gl::GLenum::GL_MODELVIEW;
static const gl::GLenum GL_PROJECTION = gl::GLenum::GL_PROJECTION;
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
static const gl::GLenum GL_COLOR_INDEX = gl::GLenum::GL_COLOR_INDEX;
static const gl::GLenum GL_STENCIL_INDEX = gl::GLenum::GL_STENCIL_INDEX;
static const gl::GLenum GL_DEPTH_COMPONENT = gl::GLenum::GL_DEPTH_COMPONENT;
static const gl::GLenum GL_RED = gl::GLenum::GL_RED;
static const gl::GLenum GL_GREEN = gl::GLenum::GL_GREEN;
static const gl::GLenum GL_BLUE = gl::GLenum::GL_BLUE;
static const gl::GLenum GL_ALPHA = gl::GLenum::GL_ALPHA;
static const gl::GLenum GL_RGB = gl::GLenum::GL_RGB;
static const gl::GLenum GL_RGBA = gl::GLenum::GL_RGBA;
static const gl::GLenum GL_LUMINANCE = gl::GLenum::GL_LUMINANCE;
static const gl::GLenum GL_LUMINANCE_ALPHA = gl::GLenum::GL_LUMINANCE_ALPHA;

// PixelMap

// static const gl::GLenum GL_PIXEL_MAP_I_TO_I = gl::GLenum::GL_PIXEL_MAP_I_TO_I; // reuse GetPixelMap
// static const gl::GLenum GL_PIXEL_MAP_S_TO_S = gl::GLenum::GL_PIXEL_MAP_S_TO_S; // reuse GetPixelMap
// static const gl::GLenum GL_PIXEL_MAP_I_TO_R = gl::GLenum::GL_PIXEL_MAP_I_TO_R; // reuse GetPixelMap
// static const gl::GLenum GL_PIXEL_MAP_I_TO_G = gl::GLenum::GL_PIXEL_MAP_I_TO_G; // reuse GetPixelMap
// static const gl::GLenum GL_PIXEL_MAP_I_TO_B = gl::GLenum::GL_PIXEL_MAP_I_TO_B; // reuse GetPixelMap
// static const gl::GLenum GL_PIXEL_MAP_I_TO_A = gl::GLenum::GL_PIXEL_MAP_I_TO_A; // reuse GetPixelMap
// static const gl::GLenum GL_PIXEL_MAP_R_TO_R = gl::GLenum::GL_PIXEL_MAP_R_TO_R; // reuse GetPixelMap
// static const gl::GLenum GL_PIXEL_MAP_G_TO_G = gl::GLenum::GL_PIXEL_MAP_G_TO_G; // reuse GetPixelMap
// static const gl::GLenum GL_PIXEL_MAP_B_TO_B = gl::GLenum::GL_PIXEL_MAP_B_TO_B; // reuse GetPixelMap
// static const gl::GLenum GL_PIXEL_MAP_A_TO_A = gl::GLenum::GL_PIXEL_MAP_A_TO_A; // reuse GetPixelMap

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
// static const gl::GLenum GL_LUMINANCE = gl::GLenum::GL_LUMINANCE; // reuse PixelFormat
// static const gl::GLenum GL_LUMINANCE_ALPHA = gl::GLenum::GL_LUMINANCE_ALPHA; // reuse PixelFormat

// PixelTransferParameter

// static const gl::GLenum GL_MAP_COLOR = gl::GLenum::GL_MAP_COLOR; // reuse GetPName
// static const gl::GLenum GL_MAP_STENCIL = gl::GLenum::GL_MAP_STENCIL; // reuse GetPName
// static const gl::GLenum GL_INDEX_SHIFT = gl::GLenum::GL_INDEX_SHIFT; // reuse GetPName
// static const gl::GLenum GL_INDEX_OFFSET = gl::GLenum::GL_INDEX_OFFSET; // reuse GetPName
// static const gl::GLenum GL_RED_SCALE = gl::GLenum::GL_RED_SCALE; // reuse GetPName
// static const gl::GLenum GL_RED_BIAS = gl::GLenum::GL_RED_BIAS; // reuse GetPName
// static const gl::GLenum GL_GREEN_SCALE = gl::GLenum::GL_GREEN_SCALE; // reuse GetPName
// static const gl::GLenum GL_GREEN_BIAS = gl::GLenum::GL_GREEN_BIAS; // reuse GetPName
// static const gl::GLenum GL_BLUE_SCALE = gl::GLenum::GL_BLUE_SCALE; // reuse GetPName
// static const gl::GLenum GL_BLUE_BIAS = gl::GLenum::GL_BLUE_BIAS; // reuse GetPName
// static const gl::GLenum GL_ALPHA_SCALE = gl::GLenum::GL_ALPHA_SCALE; // reuse GetPName
// static const gl::GLenum GL_ALPHA_BIAS = gl::GLenum::GL_ALPHA_BIAS; // reuse GetPName
// static const gl::GLenum GL_DEPTH_SCALE = gl::GLenum::GL_DEPTH_SCALE; // reuse GetPName
// static const gl::GLenum GL_DEPTH_BIAS = gl::GLenum::GL_DEPTH_BIAS; // reuse GetPName

// PixelType

// static const gl::GLenum GL_BYTE = gl::GLenum::GL_BYTE; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_BYTE = gl::GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_SHORT = gl::GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_UNSIGNED_INT = gl::GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
static const gl::GLenum GL_BITMAP = gl::GLenum::GL_BITMAP;
static const gl::GLenum GL_UNSIGNED_BYTE_3_3_2 = gl::GLenum::GL_UNSIGNED_BYTE_3_3_2;
static const gl::GLenum GL_UNSIGNED_SHORT_4_4_4_4 = gl::GLenum::GL_UNSIGNED_SHORT_4_4_4_4;
static const gl::GLenum GL_UNSIGNED_SHORT_5_5_5_1 = gl::GLenum::GL_UNSIGNED_SHORT_5_5_5_1;
static const gl::GLenum GL_UNSIGNED_INT_8_8_8_8 = gl::GLenum::GL_UNSIGNED_INT_8_8_8_8;
static const gl::GLenum GL_UNSIGNED_INT_10_10_10_2 = gl::GLenum::GL_UNSIGNED_INT_10_10_10_2;

// PointParameterNameSGIS

static const gl::GLenum GL_POINT_SIZE_MIN = gl::GLenum::GL_POINT_SIZE_MIN;
static const gl::GLenum GL_POINT_SIZE_MAX = gl::GLenum::GL_POINT_SIZE_MAX;
static const gl::GLenum GL_POINT_FADE_THRESHOLD_SIZE = gl::GLenum::GL_POINT_FADE_THRESHOLD_SIZE;
static const gl::GLenum GL_POINT_DISTANCE_ATTENUATION = gl::GLenum::GL_POINT_DISTANCE_ATTENUATION;

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
static const gl::GLenum GL_QUADS = gl::GLenum::GL_QUADS;
static const gl::GLenum GL_QUAD_STRIP = gl::GLenum::GL_QUAD_STRIP;
static const gl::GLenum GL_POLYGON = gl::GLenum::GL_POLYGON;
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
// static const gl::GLenum GL_AUX0 = gl::GLenum::GL_AUX0; // reuse DrawBufferMode
// static const gl::GLenum GL_AUX1 = gl::GLenum::GL_AUX1; // reuse DrawBufferMode
// static const gl::GLenum GL_AUX2 = gl::GLenum::GL_AUX2; // reuse DrawBufferMode
// static const gl::GLenum GL_AUX3 = gl::GLenum::GL_AUX3; // reuse DrawBufferMode

// RenderingMode

static const gl::GLenum GL_RENDER = gl::GLenum::GL_RENDER;
static const gl::GLenum GL_FEEDBACK = gl::GLenum::GL_FEEDBACK;
static const gl::GLenum GL_SELECT = gl::GLenum::GL_SELECT;

// ShadingModel

static const gl::GLenum GL_FLAT = gl::GLenum::GL_FLAT;
static const gl::GLenum GL_SMOOTH = gl::GLenum::GL_SMOOTH;

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

// TextureCoordName

static const gl::GLenum GL_S = gl::GLenum::GL_S;
static const gl::GLenum GL_T = gl::GLenum::GL_T;
static const gl::GLenum GL_R = gl::GLenum::GL_R;
static const gl::GLenum GL_Q = gl::GLenum::GL_Q;

// TextureEnvMode

// static const gl::GLenum GL_ADD = gl::GLenum::GL_ADD; // reuse AccumOp
// static const gl::GLenum GL_BLEND = gl::GLenum::GL_BLEND; // reuse EnableCap
// static const gl::GLenum GL_MODULATE = gl::GLenum::GL_MODULATE; // reuse LightEnvModeSGIX
static const gl::GLenum GL_DECAL = gl::GLenum::GL_DECAL;

// TextureEnvParameter

static const gl::GLenum GL_TEXTURE_ENV_MODE = gl::GLenum::GL_TEXTURE_ENV_MODE;
static const gl::GLenum GL_TEXTURE_ENV_COLOR = gl::GLenum::GL_TEXTURE_ENV_COLOR;

// TextureEnvTarget

static const gl::GLenum GL_TEXTURE_ENV = gl::GLenum::GL_TEXTURE_ENV;

// TextureGenMode

static const gl::GLenum GL_EYE_LINEAR = gl::GLenum::GL_EYE_LINEAR;
static const gl::GLenum GL_OBJECT_LINEAR = gl::GLenum::GL_OBJECT_LINEAR;
static const gl::GLenum GL_SPHERE_MAP = gl::GLenum::GL_SPHERE_MAP;

// TextureGenParameter

static const gl::GLenum GL_TEXTURE_GEN_MODE = gl::GLenum::GL_TEXTURE_GEN_MODE;
static const gl::GLenum GL_OBJECT_PLANE = gl::GLenum::GL_OBJECT_PLANE;
static const gl::GLenum GL_EYE_PLANE = gl::GLenum::GL_EYE_PLANE;

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
// static const gl::GLenum GL_TEXTURE_PRIORITY = gl::GLenum::GL_TEXTURE_PRIORITY; // reuse GetTextureParameter
static const gl::GLenum GL_TEXTURE_WRAP_R = gl::GLenum::GL_TEXTURE_WRAP_R;
static const gl::GLenum GL_GENERATE_MIPMAP = gl::GLenum::GL_GENERATE_MIPMAP;

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

static const gl::GLenum GL_CLAMP = gl::GLenum::GL_CLAMP;
static const gl::GLenum GL_REPEAT = gl::GLenum::GL_REPEAT;
static const gl::GLenum GL_CLAMP_TO_BORDER = gl::GLenum::GL_CLAMP_TO_BORDER;
static const gl::GLenum GL_CLAMP_TO_EDGE = gl::GLenum::GL_CLAMP_TO_EDGE;

// VertexPointerType

// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// __UNGROUPED__

static const gl::GLenum GL_CONTEXT_LOST = gl::GLenum::GL_CONTEXT_LOST;
static const gl::GLenum GL_TEXTURE_TARGET = gl::GLenum::GL_TEXTURE_TARGET;
static const gl::GLenum GL_HALF_FLOAT = gl::GLenum::GL_HALF_FLOAT;
static const gl::GLenum GL_FIXED = gl::GLenum::GL_FIXED;
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
static const gl::GLenum GL_RESCALE_NORMAL = gl::GLenum::GL_RESCALE_NORMAL;
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
static const gl::GLenum GL_BUFFER_IMMUTABLE_STORAGE = gl::GLenum::GL_BUFFER_IMMUTABLE_STORAGE;
static const gl::GLenum GL_BUFFER_STORAGE_FLAGS = gl::GLenum::GL_BUFFER_STORAGE_FLAGS;
static const gl::GLenum GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = gl::GLenum::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED;
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
static const gl::GLenum GL_DEBUG_OUTPUT_SYNCHRONOUS = gl::GLenum::GL_DEBUG_OUTPUT_SYNCHRONOUS;
static const gl::GLenum GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = gl::GLenum::GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH;
static const gl::GLenum GL_DEBUG_CALLBACK_FUNCTION = gl::GLenum::GL_DEBUG_CALLBACK_FUNCTION;
static const gl::GLenum GL_DEBUG_CALLBACK_USER_PARAM = gl::GLenum::GL_DEBUG_CALLBACK_USER_PARAM;
static const gl::GLenum GL_DEBUG_SOURCE_API = gl::GLenum::GL_DEBUG_SOURCE_API;
static const gl::GLenum GL_DEBUG_SOURCE_WINDOW_SYSTEM = gl::GLenum::GL_DEBUG_SOURCE_WINDOW_SYSTEM;
static const gl::GLenum GL_DEBUG_SOURCE_SHADER_COMPILER = gl::GLenum::GL_DEBUG_SOURCE_SHADER_COMPILER;
static const gl::GLenum GL_DEBUG_SOURCE_THIRD_PARTY = gl::GLenum::GL_DEBUG_SOURCE_THIRD_PARTY;
static const gl::GLenum GL_DEBUG_SOURCE_APPLICATION = gl::GLenum::GL_DEBUG_SOURCE_APPLICATION;
static const gl::GLenum GL_DEBUG_SOURCE_OTHER = gl::GLenum::GL_DEBUG_SOURCE_OTHER;
static const gl::GLenum GL_DEBUG_TYPE_ERROR = gl::GLenum::GL_DEBUG_TYPE_ERROR;
static const gl::GLenum GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = gl::GLenum::GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR;
static const gl::GLenum GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = gl::GLenum::GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR;
static const gl::GLenum GL_DEBUG_TYPE_PORTABILITY = gl::GLenum::GL_DEBUG_TYPE_PORTABILITY;
static const gl::GLenum GL_DEBUG_TYPE_PERFORMANCE = gl::GLenum::GL_DEBUG_TYPE_PERFORMANCE;
static const gl::GLenum GL_DEBUG_TYPE_OTHER = gl::GLenum::GL_DEBUG_TYPE_OTHER;
static const gl::GLenum GL_LOSE_CONTEXT_ON_RESET = gl::GLenum::GL_LOSE_CONTEXT_ON_RESET;
static const gl::GLenum GL_GUILTY_CONTEXT_RESET = gl::GLenum::GL_GUILTY_CONTEXT_RESET;
static const gl::GLenum GL_INNOCENT_CONTEXT_RESET = gl::GLenum::GL_INNOCENT_CONTEXT_RESET;
static const gl::GLenum GL_UNKNOWN_CONTEXT_RESET = gl::GLenum::GL_UNKNOWN_CONTEXT_RESET;
static const gl::GLenum GL_RESET_NOTIFICATION_STRATEGY = gl::GLenum::GL_RESET_NOTIFICATION_STRATEGY;
static const gl::GLenum GL_PROGRAM_SEPARABLE = gl::GLenum::GL_PROGRAM_SEPARABLE;
static const gl::GLenum GL_ACTIVE_PROGRAM = gl::GLenum::GL_ACTIVE_PROGRAM;
static const gl::GLenum GL_PROGRAM_PIPELINE_BINDING = gl::GLenum::GL_PROGRAM_PIPELINE_BINDING;
static const gl::GLenum GL_MAX_VIEWPORTS = gl::GLenum::GL_MAX_VIEWPORTS;
static const gl::GLenum GL_VIEWPORT_SUBPIXEL_BITS = gl::GLenum::GL_VIEWPORT_SUBPIXEL_BITS;
static const gl::GLenum GL_VIEWPORT_BOUNDS_RANGE = gl::GLenum::GL_VIEWPORT_BOUNDS_RANGE;
static const gl::GLenum GL_LAYER_PROVOKING_VERTEX = gl::GLenum::GL_LAYER_PROVOKING_VERTEX;
static const gl::GLenum GL_VIEWPORT_INDEX_PROVOKING_VERTEX = gl::GLenum::GL_VIEWPORT_INDEX_PROVOKING_VERTEX;
static const gl::GLenum GL_UNDEFINED_VERTEX = gl::GLenum::GL_UNDEFINED_VERTEX;
static const gl::GLenum GL_NO_RESET_NOTIFICATION = gl::GLenum::GL_NO_RESET_NOTIFICATION;
static const gl::GLenum GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = gl::GLenum::GL_MAX_COMPUTE_SHARED_MEMORY_SIZE;
static const gl::GLenum GL_MAX_COMPUTE_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_COMPUTE_UNIFORM_COMPONENTS;
static const gl::GLenum GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = gl::GLenum::GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS;
static const gl::GLenum GL_MAX_COMPUTE_ATOMIC_COUNTERS = gl::GLenum::GL_MAX_COMPUTE_ATOMIC_COUNTERS;
static const gl::GLenum GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = gl::GLenum::GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS;
static const gl::GLenum GL_COMPUTE_WORK_GROUP_SIZE = gl::GLenum::GL_COMPUTE_WORK_GROUP_SIZE;
static const gl::GLenum GL_DEBUG_TYPE_MARKER = gl::GLenum::GL_DEBUG_TYPE_MARKER;
static const gl::GLenum GL_DEBUG_TYPE_PUSH_GROUP = gl::GLenum::GL_DEBUG_TYPE_PUSH_GROUP;
static const gl::GLenum GL_DEBUG_TYPE_POP_GROUP = gl::GLenum::GL_DEBUG_TYPE_POP_GROUP;
static const gl::GLenum GL_DEBUG_SEVERITY_NOTIFICATION = gl::GLenum::GL_DEBUG_SEVERITY_NOTIFICATION;
static const gl::GLenum GL_MAX_DEBUG_GROUP_STACK_DEPTH = gl::GLenum::GL_MAX_DEBUG_GROUP_STACK_DEPTH;
static const gl::GLenum GL_DEBUG_GROUP_STACK_DEPTH = gl::GLenum::GL_DEBUG_GROUP_STACK_DEPTH;
static const gl::GLenum GL_MAX_UNIFORM_LOCATIONS = gl::GLenum::GL_MAX_UNIFORM_LOCATIONS;
static const gl::GLenum GL_INTERNALFORMAT_SUPPORTED = gl::GLenum::GL_INTERNALFORMAT_SUPPORTED;
static const gl::GLenum GL_INTERNALFORMAT_PREFERRED = gl::GLenum::GL_INTERNALFORMAT_PREFERRED;
static const gl::GLenum GL_INTERNALFORMAT_RED_SIZE = gl::GLenum::GL_INTERNALFORMAT_RED_SIZE;
static const gl::GLenum GL_INTERNALFORMAT_GREEN_SIZE = gl::GLenum::GL_INTERNALFORMAT_GREEN_SIZE;
static const gl::GLenum GL_INTERNALFORMAT_BLUE_SIZE = gl::GLenum::GL_INTERNALFORMAT_BLUE_SIZE;
static const gl::GLenum GL_INTERNALFORMAT_ALPHA_SIZE = gl::GLenum::GL_INTERNALFORMAT_ALPHA_SIZE;
static const gl::GLenum GL_INTERNALFORMAT_DEPTH_SIZE = gl::GLenum::GL_INTERNALFORMAT_DEPTH_SIZE;
static const gl::GLenum GL_INTERNALFORMAT_STENCIL_SIZE = gl::GLenum::GL_INTERNALFORMAT_STENCIL_SIZE;
static const gl::GLenum GL_INTERNALFORMAT_SHARED_SIZE = gl::GLenum::GL_INTERNALFORMAT_SHARED_SIZE;
static const gl::GLenum GL_INTERNALFORMAT_RED_TYPE = gl::GLenum::GL_INTERNALFORMAT_RED_TYPE;
static const gl::GLenum GL_INTERNALFORMAT_GREEN_TYPE = gl::GLenum::GL_INTERNALFORMAT_GREEN_TYPE;
static const gl::GLenum GL_INTERNALFORMAT_BLUE_TYPE = gl::GLenum::GL_INTERNALFORMAT_BLUE_TYPE;
static const gl::GLenum GL_INTERNALFORMAT_ALPHA_TYPE = gl::GLenum::GL_INTERNALFORMAT_ALPHA_TYPE;
static const gl::GLenum GL_INTERNALFORMAT_DEPTH_TYPE = gl::GLenum::GL_INTERNALFORMAT_DEPTH_TYPE;
static const gl::GLenum GL_INTERNALFORMAT_STENCIL_TYPE = gl::GLenum::GL_INTERNALFORMAT_STENCIL_TYPE;
static const gl::GLenum GL_MAX_WIDTH = gl::GLenum::GL_MAX_WIDTH;
static const gl::GLenum GL_MAX_HEIGHT = gl::GLenum::GL_MAX_HEIGHT;
static const gl::GLenum GL_MAX_DEPTH = gl::GLenum::GL_MAX_DEPTH;
static const gl::GLenum GL_MAX_LAYERS = gl::GLenum::GL_MAX_LAYERS;
static const gl::GLenum GL_MAX_COMBINED_DIMENSIONS = gl::GLenum::GL_MAX_COMBINED_DIMENSIONS;
static const gl::GLenum GL_COLOR_COMPONENTS = gl::GLenum::GL_COLOR_COMPONENTS;
static const gl::GLenum GL_DEPTH_COMPONENTS = gl::GLenum::GL_DEPTH_COMPONENTS;
static const gl::GLenum GL_STENCIL_COMPONENTS = gl::GLenum::GL_STENCIL_COMPONENTS;
static const gl::GLenum GL_COLOR_RENDERABLE = gl::GLenum::GL_COLOR_RENDERABLE;
static const gl::GLenum GL_DEPTH_RENDERABLE = gl::GLenum::GL_DEPTH_RENDERABLE;
static const gl::GLenum GL_STENCIL_RENDERABLE = gl::GLenum::GL_STENCIL_RENDERABLE;
static const gl::GLenum GL_FRAMEBUFFER_RENDERABLE = gl::GLenum::GL_FRAMEBUFFER_RENDERABLE;
static const gl::GLenum GL_FRAMEBUFFER_RENDERABLE_LAYERED = gl::GLenum::GL_FRAMEBUFFER_RENDERABLE_LAYERED;
static const gl::GLenum GL_FRAMEBUFFER_BLEND = gl::GLenum::GL_FRAMEBUFFER_BLEND;
static const gl::GLenum GL_READ_PIXELS = gl::GLenum::GL_READ_PIXELS;
static const gl::GLenum GL_READ_PIXELS_FORMAT = gl::GLenum::GL_READ_PIXELS_FORMAT;
static const gl::GLenum GL_READ_PIXELS_TYPE = gl::GLenum::GL_READ_PIXELS_TYPE;
static const gl::GLenum GL_TEXTURE_IMAGE_FORMAT = gl::GLenum::GL_TEXTURE_IMAGE_FORMAT;
static const gl::GLenum GL_TEXTURE_IMAGE_TYPE = gl::GLenum::GL_TEXTURE_IMAGE_TYPE;
static const gl::GLenum GL_GET_TEXTURE_IMAGE_FORMAT = gl::GLenum::GL_GET_TEXTURE_IMAGE_FORMAT;
static const gl::GLenum GL_GET_TEXTURE_IMAGE_TYPE = gl::GLenum::GL_GET_TEXTURE_IMAGE_TYPE;
static const gl::GLenum GL_MIPMAP = gl::GLenum::GL_MIPMAP;
static const gl::GLenum GL_MANUAL_GENERATE_MIPMAP = gl::GLenum::GL_MANUAL_GENERATE_MIPMAP;
static const gl::GLenum GL_AUTO_GENERATE_MIPMAP = gl::GLenum::GL_AUTO_GENERATE_MIPMAP;
static const gl::GLenum GL_COLOR_ENCODING = gl::GLenum::GL_COLOR_ENCODING;
static const gl::GLenum GL_SRGB_READ = gl::GLenum::GL_SRGB_READ;
static const gl::GLenum GL_SRGB_WRITE = gl::GLenum::GL_SRGB_WRITE;
static const gl::GLenum GL_FILTER = gl::GLenum::GL_FILTER;
static const gl::GLenum GL_VERTEX_TEXTURE = gl::GLenum::GL_VERTEX_TEXTURE;
static const gl::GLenum GL_TESS_CONTROL_TEXTURE = gl::GLenum::GL_TESS_CONTROL_TEXTURE;
static const gl::GLenum GL_TESS_EVALUATION_TEXTURE = gl::GLenum::GL_TESS_EVALUATION_TEXTURE;
static const gl::GLenum GL_GEOMETRY_TEXTURE = gl::GLenum::GL_GEOMETRY_TEXTURE;
static const gl::GLenum GL_FRAGMENT_TEXTURE = gl::GLenum::GL_FRAGMENT_TEXTURE;
static const gl::GLenum GL_COMPUTE_TEXTURE = gl::GLenum::GL_COMPUTE_TEXTURE;
static const gl::GLenum GL_TEXTURE_SHADOW = gl::GLenum::GL_TEXTURE_SHADOW;
static const gl::GLenum GL_TEXTURE_GATHER = gl::GLenum::GL_TEXTURE_GATHER;
static const gl::GLenum GL_TEXTURE_GATHER_SHADOW = gl::GLenum::GL_TEXTURE_GATHER_SHADOW;
static const gl::GLenum GL_SHADER_IMAGE_LOAD = gl::GLenum::GL_SHADER_IMAGE_LOAD;
static const gl::GLenum GL_SHADER_IMAGE_STORE = gl::GLenum::GL_SHADER_IMAGE_STORE;
static const gl::GLenum GL_SHADER_IMAGE_ATOMIC = gl::GLenum::GL_SHADER_IMAGE_ATOMIC;
static const gl::GLenum GL_IMAGE_TEXEL_SIZE = gl::GLenum::GL_IMAGE_TEXEL_SIZE;
static const gl::GLenum GL_IMAGE_COMPATIBILITY_CLASS = gl::GLenum::GL_IMAGE_COMPATIBILITY_CLASS;
static const gl::GLenum GL_IMAGE_PIXEL_FORMAT = gl::GLenum::GL_IMAGE_PIXEL_FORMAT;
static const gl::GLenum GL_IMAGE_PIXEL_TYPE = gl::GLenum::GL_IMAGE_PIXEL_TYPE;
static const gl::GLenum GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST = gl::GLenum::GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST;
static const gl::GLenum GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST = gl::GLenum::GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST;
static const gl::GLenum GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE = gl::GLenum::GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE;
static const gl::GLenum GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE = gl::GLenum::GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE;
static const gl::GLenum GL_TEXTURE_COMPRESSED_BLOCK_WIDTH = gl::GLenum::GL_TEXTURE_COMPRESSED_BLOCK_WIDTH;
static const gl::GLenum GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT = gl::GLenum::GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT;
static const gl::GLenum GL_TEXTURE_COMPRESSED_BLOCK_SIZE = gl::GLenum::GL_TEXTURE_COMPRESSED_BLOCK_SIZE;
static const gl::GLenum GL_CLEAR_BUFFER = gl::GLenum::GL_CLEAR_BUFFER;
static const gl::GLenum GL_TEXTURE_VIEW = gl::GLenum::GL_TEXTURE_VIEW;
static const gl::GLenum GL_VIEW_COMPATIBILITY_CLASS = gl::GLenum::GL_VIEW_COMPATIBILITY_CLASS;
static const gl::GLenum GL_FULL_SUPPORT = gl::GLenum::GL_FULL_SUPPORT;
static const gl::GLenum GL_CAVEAT_SUPPORT = gl::GLenum::GL_CAVEAT_SUPPORT;
static const gl::GLenum GL_IMAGE_CLASS_4_X_32 = gl::GLenum::GL_IMAGE_CLASS_4_X_32;
static const gl::GLenum GL_IMAGE_CLASS_2_X_32 = gl::GLenum::GL_IMAGE_CLASS_2_X_32;
static const gl::GLenum GL_IMAGE_CLASS_1_X_32 = gl::GLenum::GL_IMAGE_CLASS_1_X_32;
static const gl::GLenum GL_IMAGE_CLASS_4_X_16 = gl::GLenum::GL_IMAGE_CLASS_4_X_16;
static const gl::GLenum GL_IMAGE_CLASS_2_X_16 = gl::GLenum::GL_IMAGE_CLASS_2_X_16;
static const gl::GLenum GL_IMAGE_CLASS_1_X_16 = gl::GLenum::GL_IMAGE_CLASS_1_X_16;
static const gl::GLenum GL_IMAGE_CLASS_4_X_8 = gl::GLenum::GL_IMAGE_CLASS_4_X_8;
static const gl::GLenum GL_IMAGE_CLASS_2_X_8 = gl::GLenum::GL_IMAGE_CLASS_2_X_8;
static const gl::GLenum GL_IMAGE_CLASS_1_X_8 = gl::GLenum::GL_IMAGE_CLASS_1_X_8;
static const gl::GLenum GL_IMAGE_CLASS_11_11_10 = gl::GLenum::GL_IMAGE_CLASS_11_11_10;
static const gl::GLenum GL_IMAGE_CLASS_10_10_10_2 = gl::GLenum::GL_IMAGE_CLASS_10_10_10_2;
static const gl::GLenum GL_VIEW_CLASS_128_BITS = gl::GLenum::GL_VIEW_CLASS_128_BITS;
static const gl::GLenum GL_VIEW_CLASS_96_BITS = gl::GLenum::GL_VIEW_CLASS_96_BITS;
static const gl::GLenum GL_VIEW_CLASS_64_BITS = gl::GLenum::GL_VIEW_CLASS_64_BITS;
static const gl::GLenum GL_VIEW_CLASS_48_BITS = gl::GLenum::GL_VIEW_CLASS_48_BITS;
static const gl::GLenum GL_VIEW_CLASS_32_BITS = gl::GLenum::GL_VIEW_CLASS_32_BITS;
static const gl::GLenum GL_VIEW_CLASS_24_BITS = gl::GLenum::GL_VIEW_CLASS_24_BITS;
static const gl::GLenum GL_VIEW_CLASS_16_BITS = gl::GLenum::GL_VIEW_CLASS_16_BITS;
static const gl::GLenum GL_VIEW_CLASS_8_BITS = gl::GLenum::GL_VIEW_CLASS_8_BITS;
static const gl::GLenum GL_VIEW_CLASS_S3TC_DXT1_RGB = gl::GLenum::GL_VIEW_CLASS_S3TC_DXT1_RGB;
static const gl::GLenum GL_VIEW_CLASS_S3TC_DXT1_RGBA = gl::GLenum::GL_VIEW_CLASS_S3TC_DXT1_RGBA;
static const gl::GLenum GL_VIEW_CLASS_S3TC_DXT3_RGBA = gl::GLenum::GL_VIEW_CLASS_S3TC_DXT3_RGBA;
static const gl::GLenum GL_VIEW_CLASS_S3TC_DXT5_RGBA = gl::GLenum::GL_VIEW_CLASS_S3TC_DXT5_RGBA;
static const gl::GLenum GL_VIEW_CLASS_RGTC1_RED = gl::GLenum::GL_VIEW_CLASS_RGTC1_RED;
static const gl::GLenum GL_VIEW_CLASS_RGTC2_RG = gl::GLenum::GL_VIEW_CLASS_RGTC2_RG;
static const gl::GLenum GL_VIEW_CLASS_BPTC_UNORM = gl::GLenum::GL_VIEW_CLASS_BPTC_UNORM;
static const gl::GLenum GL_VIEW_CLASS_BPTC_FLOAT = gl::GLenum::GL_VIEW_CLASS_BPTC_FLOAT;
static const gl::GLenum GL_VERTEX_ATTRIB_BINDING = gl::GLenum::GL_VERTEX_ATTRIB_BINDING;
static const gl::GLenum GL_VERTEX_ATTRIB_RELATIVE_OFFSET = gl::GLenum::GL_VERTEX_ATTRIB_RELATIVE_OFFSET;
static const gl::GLenum GL_VERTEX_BINDING_DIVISOR = gl::GLenum::GL_VERTEX_BINDING_DIVISOR;
static const gl::GLenum GL_VERTEX_BINDING_OFFSET = gl::GLenum::GL_VERTEX_BINDING_OFFSET;
static const gl::GLenum GL_VERTEX_BINDING_STRIDE = gl::GLenum::GL_VERTEX_BINDING_STRIDE;
static const gl::GLenum GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = gl::GLenum::GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET;
static const gl::GLenum GL_MAX_VERTEX_ATTRIB_BINDINGS = gl::GLenum::GL_MAX_VERTEX_ATTRIB_BINDINGS;
static const gl::GLenum GL_TEXTURE_VIEW_MIN_LEVEL = gl::GLenum::GL_TEXTURE_VIEW_MIN_LEVEL;
static const gl::GLenum GL_TEXTURE_VIEW_NUM_LEVELS = gl::GLenum::GL_TEXTURE_VIEW_NUM_LEVELS;
static const gl::GLenum GL_TEXTURE_VIEW_MIN_LAYER = gl::GLenum::GL_TEXTURE_VIEW_MIN_LAYER;
static const gl::GLenum GL_TEXTURE_VIEW_NUM_LAYERS = gl::GLenum::GL_TEXTURE_VIEW_NUM_LAYERS;
static const gl::GLenum GL_TEXTURE_IMMUTABLE_LEVELS = gl::GLenum::GL_TEXTURE_IMMUTABLE_LEVELS;
static const gl::GLenum GL_BUFFER = gl::GLenum::GL_BUFFER;
static const gl::GLenum GL_SHADER = gl::GLenum::GL_SHADER;
static const gl::GLenum GL_PROGRAM = gl::GLenum::GL_PROGRAM;
static const gl::GLenum GL_QUERY = gl::GLenum::GL_QUERY;
static const gl::GLenum GL_PROGRAM_PIPELINE = gl::GLenum::GL_PROGRAM_PIPELINE;
static const gl::GLenum GL_MAX_VERTEX_ATTRIB_STRIDE = gl::GLenum::GL_MAX_VERTEX_ATTRIB_STRIDE;
static const gl::GLenum GL_SAMPLER = gl::GLenum::GL_SAMPLER;
static const gl::GLenum GL_DISPLAY_LIST = gl::GLenum::GL_DISPLAY_LIST;
static const gl::GLenum GL_MAX_LABEL_LENGTH = gl::GLenum::GL_MAX_LABEL_LENGTH;
static const gl::GLenum GL_NUM_SHADING_LANGUAGE_VERSIONS = gl::GLenum::GL_NUM_SHADING_LANGUAGE_VERSIONS;
static const gl::GLenum GL_QUERY_TARGET = gl::GLenum::GL_QUERY_TARGET;
static const gl::GLenum GL_TEXTURE_BINDING = gl::GLenum::GL_TEXTURE_BINDING;
static const gl::GLenum GL_MAX_CULL_DISTANCES = gl::GLenum::GL_MAX_CULL_DISTANCES;
static const gl::GLenum GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES = gl::GLenum::GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES;
static const gl::GLenum GL_CONTEXT_RELEASE_BEHAVIOR = gl::GLenum::GL_CONTEXT_RELEASE_BEHAVIOR;
static const gl::GLenum GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH = gl::GLenum::GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH;
static const gl::GLenum GL_UNSIGNED_BYTE_2_3_3_REV = gl::GLenum::GL_UNSIGNED_BYTE_2_3_3_REV;
static const gl::GLenum GL_UNSIGNED_SHORT_5_6_5 = gl::GLenum::GL_UNSIGNED_SHORT_5_6_5;
static const gl::GLenum GL_UNSIGNED_SHORT_5_6_5_REV = gl::GLenum::GL_UNSIGNED_SHORT_5_6_5_REV;
static const gl::GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV = gl::GLenum::GL_UNSIGNED_SHORT_4_4_4_4_REV;
static const gl::GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV = gl::GLenum::GL_UNSIGNED_SHORT_1_5_5_5_REV;
static const gl::GLenum GL_UNSIGNED_INT_8_8_8_8_REV = gl::GLenum::GL_UNSIGNED_INT_8_8_8_8_REV;
static const gl::GLenum GL_UNSIGNED_INT_2_10_10_10_REV = gl::GLenum::GL_UNSIGNED_INT_2_10_10_10_REV;
static const gl::GLenum GL_MIRRORED_REPEAT = gl::GLenum::GL_MIRRORED_REPEAT;
static const gl::GLenum GL_FOG_COORDINATE_SOURCE = gl::GLenum::GL_FOG_COORDINATE_SOURCE;
static const gl::GLenum GL_FOG_COORD_SRC = gl::GLenum::GL_FOG_COORD_SRC;
static const gl::GLenum GL_FOG_COORD = gl::GLenum::GL_FOG_COORD;
static const gl::GLenum GL_FOG_COORDINATE = gl::GLenum::GL_FOG_COORDINATE;
static const gl::GLenum GL_FRAGMENT_DEPTH = gl::GLenum::GL_FRAGMENT_DEPTH;
static const gl::GLenum GL_CURRENT_FOG_COORD = gl::GLenum::GL_CURRENT_FOG_COORD;
static const gl::GLenum GL_CURRENT_FOG_COORDINATE = gl::GLenum::GL_CURRENT_FOG_COORDINATE;
static const gl::GLenum GL_FOG_COORDINATE_ARRAY_TYPE = gl::GLenum::GL_FOG_COORDINATE_ARRAY_TYPE;
static const gl::GLenum GL_FOG_COORD_ARRAY_TYPE = gl::GLenum::GL_FOG_COORD_ARRAY_TYPE;
static const gl::GLenum GL_FOG_COORDINATE_ARRAY_STRIDE = gl::GLenum::GL_FOG_COORDINATE_ARRAY_STRIDE;
static const gl::GLenum GL_FOG_COORD_ARRAY_STRIDE = gl::GLenum::GL_FOG_COORD_ARRAY_STRIDE;
static const gl::GLenum GL_FOG_COORDINATE_ARRAY_POINTER = gl::GLenum::GL_FOG_COORDINATE_ARRAY_POINTER;
static const gl::GLenum GL_FOG_COORD_ARRAY_POINTER = gl::GLenum::GL_FOG_COORD_ARRAY_POINTER;
static const gl::GLenum GL_FOG_COORDINATE_ARRAY = gl::GLenum::GL_FOG_COORDINATE_ARRAY;
static const gl::GLenum GL_FOG_COORD_ARRAY = gl::GLenum::GL_FOG_COORD_ARRAY;
static const gl::GLenum GL_COLOR_SUM = gl::GLenum::GL_COLOR_SUM;
static const gl::GLenum GL_CURRENT_SECONDARY_COLOR = gl::GLenum::GL_CURRENT_SECONDARY_COLOR;
static const gl::GLenum GL_SECONDARY_COLOR_ARRAY_SIZE = gl::GLenum::GL_SECONDARY_COLOR_ARRAY_SIZE;
static const gl::GLenum GL_SECONDARY_COLOR_ARRAY_TYPE = gl::GLenum::GL_SECONDARY_COLOR_ARRAY_TYPE;
static const gl::GLenum GL_SECONDARY_COLOR_ARRAY_STRIDE = gl::GLenum::GL_SECONDARY_COLOR_ARRAY_STRIDE;
static const gl::GLenum GL_SECONDARY_COLOR_ARRAY_POINTER = gl::GLenum::GL_SECONDARY_COLOR_ARRAY_POINTER;
static const gl::GLenum GL_SECONDARY_COLOR_ARRAY = gl::GLenum::GL_SECONDARY_COLOR_ARRAY;
static const gl::GLenum GL_CURRENT_RASTER_SECONDARY_COLOR = gl::GLenum::GL_CURRENT_RASTER_SECONDARY_COLOR;
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
static const gl::GLenum GL_CLIENT_ACTIVE_TEXTURE = gl::GLenum::GL_CLIENT_ACTIVE_TEXTURE;
static const gl::GLenum GL_MAX_TEXTURE_UNITS = gl::GLenum::GL_MAX_TEXTURE_UNITS;
static const gl::GLenum GL_TRANSPOSE_MODELVIEW_MATRIX = gl::GLenum::GL_TRANSPOSE_MODELVIEW_MATRIX;
static const gl::GLenum GL_TRANSPOSE_PROJECTION_MATRIX = gl::GLenum::GL_TRANSPOSE_PROJECTION_MATRIX;
static const gl::GLenum GL_TRANSPOSE_TEXTURE_MATRIX = gl::GLenum::GL_TRANSPOSE_TEXTURE_MATRIX;
static const gl::GLenum GL_TRANSPOSE_COLOR_MATRIX = gl::GLenum::GL_TRANSPOSE_COLOR_MATRIX;
static const gl::GLenum GL_SUBTRACT = gl::GLenum::GL_SUBTRACT;
static const gl::GLenum GL_MAX_RENDERBUFFER_SIZE = gl::GLenum::GL_MAX_RENDERBUFFER_SIZE;
static const gl::GLenum GL_COMPRESSED_ALPHA = gl::GLenum::GL_COMPRESSED_ALPHA;
static const gl::GLenum GL_COMPRESSED_LUMINANCE = gl::GLenum::GL_COMPRESSED_LUMINANCE;
static const gl::GLenum GL_COMPRESSED_LUMINANCE_ALPHA = gl::GLenum::GL_COMPRESSED_LUMINANCE_ALPHA;
static const gl::GLenum GL_COMPRESSED_INTENSITY = gl::GLenum::GL_COMPRESSED_INTENSITY;
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
static const gl::GLenum GL_TEXTURE_FILTER_CONTROL = gl::GLenum::GL_TEXTURE_FILTER_CONTROL;
static const gl::GLenum GL_TEXTURE_LOD_BIAS = gl::GLenum::GL_TEXTURE_LOD_BIAS;
static const gl::GLenum GL_INCR_WRAP = gl::GLenum::GL_INCR_WRAP;
static const gl::GLenum GL_DECR_WRAP = gl::GLenum::GL_DECR_WRAP;
static const gl::GLenum GL_NORMAL_MAP = gl::GLenum::GL_NORMAL_MAP;
static const gl::GLenum GL_REFLECTION_MAP = gl::GLenum::GL_REFLECTION_MAP;
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
static const gl::GLenum GL_COMBINE = gl::GLenum::GL_COMBINE;
static const gl::GLenum GL_COMBINE_RGB = gl::GLenum::GL_COMBINE_RGB;
static const gl::GLenum GL_COMBINE_ALPHA = gl::GLenum::GL_COMBINE_ALPHA;
static const gl::GLenum GL_RGB_SCALE = gl::GLenum::GL_RGB_SCALE;
static const gl::GLenum GL_ADD_SIGNED = gl::GLenum::GL_ADD_SIGNED;
static const gl::GLenum GL_INTERPOLATE = gl::GLenum::GL_INTERPOLATE;
static const gl::GLenum GL_CONSTANT = gl::GLenum::GL_CONSTANT;
static const gl::GLenum GL_PRIMARY_COLOR = gl::GLenum::GL_PRIMARY_COLOR;
static const gl::GLenum GL_PREVIOUS = gl::GLenum::GL_PREVIOUS;
static const gl::GLenum GL_SOURCE0_RGB = gl::GLenum::GL_SOURCE0_RGB;
static const gl::GLenum GL_SRC0_RGB = gl::GLenum::GL_SRC0_RGB;
static const gl::GLenum GL_SOURCE1_RGB = gl::GLenum::GL_SOURCE1_RGB;
static const gl::GLenum GL_SRC1_RGB = gl::GLenum::GL_SRC1_RGB;
static const gl::GLenum GL_SOURCE2_RGB = gl::GLenum::GL_SOURCE2_RGB;
static const gl::GLenum GL_SRC2_RGB = gl::GLenum::GL_SRC2_RGB;
static const gl::GLenum GL_SOURCE0_ALPHA = gl::GLenum::GL_SOURCE0_ALPHA;
static const gl::GLenum GL_SRC0_ALPHA = gl::GLenum::GL_SRC0_ALPHA;
static const gl::GLenum GL_SOURCE1_ALPHA = gl::GLenum::GL_SOURCE1_ALPHA;
static const gl::GLenum GL_SRC1_ALPHA = gl::GLenum::GL_SRC1_ALPHA;
static const gl::GLenum GL_SOURCE2_ALPHA = gl::GLenum::GL_SOURCE2_ALPHA;
static const gl::GLenum GL_SRC2_ALPHA = gl::GLenum::GL_SRC2_ALPHA;
static const gl::GLenum GL_OPERAND0_RGB = gl::GLenum::GL_OPERAND0_RGB;
static const gl::GLenum GL_OPERAND1_RGB = gl::GLenum::GL_OPERAND1_RGB;
static const gl::GLenum GL_OPERAND2_RGB = gl::GLenum::GL_OPERAND2_RGB;
static const gl::GLenum GL_OPERAND0_ALPHA = gl::GLenum::GL_OPERAND0_ALPHA;
static const gl::GLenum GL_OPERAND1_ALPHA = gl::GLenum::GL_OPERAND1_ALPHA;
static const gl::GLenum GL_OPERAND2_ALPHA = gl::GLenum::GL_OPERAND2_ALPHA;
static const gl::GLenum GL_VERTEX_ARRAY_BINDING = gl::GLenum::GL_VERTEX_ARRAY_BINDING;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE;
static const gl::GLenum GL_CURRENT_VERTEX_ATTRIB = gl::GLenum::GL_CURRENT_VERTEX_ATTRIB;
static const gl::GLenum GL_PROGRAM_POINT_SIZE = gl::GLenum::GL_PROGRAM_POINT_SIZE;
static const gl::GLenum GL_VERTEX_PROGRAM_POINT_SIZE = gl::GLenum::GL_VERTEX_PROGRAM_POINT_SIZE;
static const gl::GLenum GL_VERTEX_PROGRAM_TWO_SIDE = gl::GLenum::GL_VERTEX_PROGRAM_TWO_SIDE;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_POINTER;
static const gl::GLenum GL_DEPTH_CLAMP = gl::GLenum::GL_DEPTH_CLAMP;
static const gl::GLenum GL_TEXTURE_COMPRESSED_IMAGE_SIZE = gl::GLenum::GL_TEXTURE_COMPRESSED_IMAGE_SIZE;
static const gl::GLenum GL_TEXTURE_COMPRESSED = gl::GLenum::GL_TEXTURE_COMPRESSED;
static const gl::GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS = gl::GLenum::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
static const gl::GLenum GL_COMPRESSED_TEXTURE_FORMATS = gl::GLenum::GL_COMPRESSED_TEXTURE_FORMATS;
static const gl::GLenum GL_DOT3_RGB = gl::GLenum::GL_DOT3_RGB;
static const gl::GLenum GL_DOT3_RGBA = gl::GLenum::GL_DOT3_RGBA;
static const gl::GLenum GL_PROGRAM_BINARY_LENGTH = gl::GLenum::GL_PROGRAM_BINARY_LENGTH;
static const gl::GLenum GL_MIRROR_CLAMP_TO_EDGE = gl::GLenum::GL_MIRROR_CLAMP_TO_EDGE;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_LONG = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_LONG;
static const gl::GLenum GL_BUFFER_SIZE = gl::GLenum::GL_BUFFER_SIZE;
static const gl::GLenum GL_BUFFER_USAGE = gl::GLenum::GL_BUFFER_USAGE;
static const gl::GLenum GL_NUM_PROGRAM_BINARY_FORMATS = gl::GLenum::GL_NUM_PROGRAM_BINARY_FORMATS;
static const gl::GLenum GL_PROGRAM_BINARY_FORMATS = gl::GLenum::GL_PROGRAM_BINARY_FORMATS;
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
static const gl::GLenum GL_DEPTH_TEXTURE_MODE = gl::GLenum::GL_DEPTH_TEXTURE_MODE;
static const gl::GLenum GL_TEXTURE_COMPARE_MODE = gl::GLenum::GL_TEXTURE_COMPARE_MODE;
static const gl::GLenum GL_TEXTURE_COMPARE_FUNC = gl::GLenum::GL_TEXTURE_COMPARE_FUNC;
static const gl::GLenum GL_COMPARE_REF_TO_TEXTURE = gl::GLenum::GL_COMPARE_REF_TO_TEXTURE;
static const gl::GLenum GL_COMPARE_R_TO_TEXTURE = gl::GLenum::GL_COMPARE_R_TO_TEXTURE;
static const gl::GLenum GL_TEXTURE_CUBE_MAP_SEAMLESS = gl::GLenum::GL_TEXTURE_CUBE_MAP_SEAMLESS;
static const gl::GLenum GL_POINT_SPRITE = gl::GLenum::GL_POINT_SPRITE;
static const gl::GLenum GL_COORD_REPLACE = gl::GLenum::GL_COORD_REPLACE;
static const gl::GLenum GL_QUERY_COUNTER_BITS = gl::GLenum::GL_QUERY_COUNTER_BITS;
static const gl::GLenum GL_CURRENT_QUERY = gl::GLenum::GL_CURRENT_QUERY;
static const gl::GLenum GL_QUERY_RESULT = gl::GLenum::GL_QUERY_RESULT;
static const gl::GLenum GL_QUERY_RESULT_AVAILABLE = gl::GLenum::GL_QUERY_RESULT_AVAILABLE;
static const gl::GLenum GL_MAX_VERTEX_ATTRIBS = gl::GLenum::GL_MAX_VERTEX_ATTRIBS;
static const gl::GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = gl::GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
static const gl::GLenum GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = gl::GLenum::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
static const gl::GLenum GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = gl::GLenum::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
static const gl::GLenum GL_MAX_TEXTURE_COORDS = gl::GLenum::GL_MAX_TEXTURE_COORDS;
static const gl::GLenum GL_MAX_TEXTURE_IMAGE_UNITS = gl::GLenum::GL_MAX_TEXTURE_IMAGE_UNITS;
static const gl::GLenum GL_GEOMETRY_SHADER_INVOCATIONS = gl::GLenum::GL_GEOMETRY_SHADER_INVOCATIONS;
static const gl::GLenum GL_ARRAY_BUFFER = gl::GLenum::GL_ARRAY_BUFFER;
static const gl::GLenum GL_ELEMENT_ARRAY_BUFFER = gl::GLenum::GL_ELEMENT_ARRAY_BUFFER;
static const gl::GLenum GL_ARRAY_BUFFER_BINDING = gl::GLenum::GL_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING = gl::GLenum::GL_ELEMENT_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_VERTEX_ARRAY_BUFFER_BINDING = gl::GLenum::GL_VERTEX_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_NORMAL_ARRAY_BUFFER_BINDING = gl::GLenum::GL_NORMAL_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_COLOR_ARRAY_BUFFER_BINDING = gl::GLenum::GL_COLOR_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_INDEX_ARRAY_BUFFER_BINDING = gl::GLenum::GL_INDEX_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = gl::GLenum::GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_EDGE_FLAG_ARRAY_BUFFER_BINDING = gl::GLenum::GL_EDGE_FLAG_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING = gl::GLenum::GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING = gl::GLenum::GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_FOG_COORD_ARRAY_BUFFER_BINDING = gl::GLenum::GL_FOG_COORD_ARRAY_BUFFER_BINDING;
static const gl::GLenum GL_WEIGHT_ARRAY_BUFFER_BINDING = gl::GLenum::GL_WEIGHT_ARRAY_BUFFER_BINDING;
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
static const gl::GLenum GL_CLAMP_VERTEX_COLOR = gl::GLenum::GL_CLAMP_VERTEX_COLOR;
static const gl::GLenum GL_CLAMP_FRAGMENT_COLOR = gl::GLenum::GL_CLAMP_FRAGMENT_COLOR;
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
static const gl::GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE = gl::GLenum::GL_IMPLEMENTATION_COLOR_READ_TYPE;
static const gl::GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT = gl::GLenum::GL_IMPLEMENTATION_COLOR_READ_FORMAT;
static const gl::GLenum GL_TEXTURE_RED_TYPE = gl::GLenum::GL_TEXTURE_RED_TYPE;
static const gl::GLenum GL_TEXTURE_GREEN_TYPE = gl::GLenum::GL_TEXTURE_GREEN_TYPE;
static const gl::GLenum GL_TEXTURE_BLUE_TYPE = gl::GLenum::GL_TEXTURE_BLUE_TYPE;
static const gl::GLenum GL_TEXTURE_ALPHA_TYPE = gl::GLenum::GL_TEXTURE_ALPHA_TYPE;
static const gl::GLenum GL_TEXTURE_LUMINANCE_TYPE = gl::GLenum::GL_TEXTURE_LUMINANCE_TYPE;
static const gl::GLenum GL_TEXTURE_INTENSITY_TYPE = gl::GLenum::GL_TEXTURE_INTENSITY_TYPE;
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
static const gl::GLenum GL_TEXTURE_BUFFER_BINDING = gl::GLenum::GL_TEXTURE_BUFFER_BINDING;
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
static const gl::GLenum GL_SLUMINANCE_ALPHA = gl::GLenum::GL_SLUMINANCE_ALPHA;
static const gl::GLenum GL_SLUMINANCE8_ALPHA8 = gl::GLenum::GL_SLUMINANCE8_ALPHA8;
static const gl::GLenum GL_SLUMINANCE = gl::GLenum::GL_SLUMINANCE;
static const gl::GLenum GL_SLUMINANCE8 = gl::GLenum::GL_SLUMINANCE8;
static const gl::GLenum GL_COMPRESSED_SRGB = gl::GLenum::GL_COMPRESSED_SRGB;
static const gl::GLenum GL_COMPRESSED_SRGB_ALPHA = gl::GLenum::GL_COMPRESSED_SRGB_ALPHA;
static const gl::GLenum GL_COMPRESSED_SLUMINANCE = gl::GLenum::GL_COMPRESSED_SLUMINANCE;
static const gl::GLenum GL_COMPRESSED_SLUMINANCE_ALPHA = gl::GLenum::GL_COMPRESSED_SLUMINANCE_ALPHA;
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
static const gl::GLenum GL_RGB565 = gl::GLenum::GL_RGB565;
static const gl::GLenum GL_PRIMITIVE_RESTART_FIXED_INDEX = gl::GLenum::GL_PRIMITIVE_RESTART_FIXED_INDEX;
static const gl::GLenum GL_ANY_SAMPLES_PASSED_CONSERVATIVE = gl::GLenum::GL_ANY_SAMPLES_PASSED_CONSERVATIVE;
static const gl::GLenum GL_MAX_ELEMENT_INDEX = gl::GLenum::GL_MAX_ELEMENT_INDEX;
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
static const gl::GLenum GL_ALPHA_INTEGER = gl::GLenum::GL_ALPHA_INTEGER;
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
static const gl::GLenum GL_LOW_FLOAT = gl::GLenum::GL_LOW_FLOAT;
static const gl::GLenum GL_MEDIUM_FLOAT = gl::GLenum::GL_MEDIUM_FLOAT;
static const gl::GLenum GL_HIGH_FLOAT = gl::GLenum::GL_HIGH_FLOAT;
static const gl::GLenum GL_LOW_INT = gl::GLenum::GL_LOW_INT;
static const gl::GLenum GL_MEDIUM_INT = gl::GLenum::GL_MEDIUM_INT;
static const gl::GLenum GL_HIGH_INT = gl::GLenum::GL_HIGH_INT;
static const gl::GLenum GL_SHADER_BINARY_FORMATS = gl::GLenum::GL_SHADER_BINARY_FORMATS;
static const gl::GLenum GL_NUM_SHADER_BINARY_FORMATS = gl::GLenum::GL_NUM_SHADER_BINARY_FORMATS;
static const gl::GLenum GL_SHADER_COMPILER = gl::GLenum::GL_SHADER_COMPILER;
static const gl::GLenum GL_MAX_VERTEX_UNIFORM_VECTORS = gl::GLenum::GL_MAX_VERTEX_UNIFORM_VECTORS;
static const gl::GLenum GL_MAX_VARYING_VECTORS = gl::GLenum::GL_MAX_VARYING_VECTORS;
static const gl::GLenum GL_MAX_FRAGMENT_UNIFORM_VECTORS = gl::GLenum::GL_MAX_FRAGMENT_UNIFORM_VECTORS;
static const gl::GLenum GL_QUERY_WAIT = gl::GLenum::GL_QUERY_WAIT;
static const gl::GLenum GL_QUERY_NO_WAIT = gl::GLenum::GL_QUERY_NO_WAIT;
static const gl::GLenum GL_QUERY_BY_REGION_WAIT = gl::GLenum::GL_QUERY_BY_REGION_WAIT;
static const gl::GLenum GL_QUERY_BY_REGION_NO_WAIT = gl::GLenum::GL_QUERY_BY_REGION_NO_WAIT;
static const gl::GLenum GL_QUERY_WAIT_INVERTED = gl::GLenum::GL_QUERY_WAIT_INVERTED;
static const gl::GLenum GL_QUERY_NO_WAIT_INVERTED = gl::GLenum::GL_QUERY_NO_WAIT_INVERTED;
static const gl::GLenum GL_QUERY_BY_REGION_WAIT_INVERTED = gl::GLenum::GL_QUERY_BY_REGION_WAIT_INVERTED;
static const gl::GLenum GL_QUERY_BY_REGION_NO_WAIT_INVERTED = gl::GLenum::GL_QUERY_BY_REGION_NO_WAIT_INVERTED;
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
static const gl::GLenum GL_COMPRESSED_RGBA_BPTC_UNORM = gl::GLenum::GL_COMPRESSED_RGBA_BPTC_UNORM;
static const gl::GLenum GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM = gl::GLenum::GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM;
static const gl::GLenum GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT = gl::GLenum::GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT;
static const gl::GLenum GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = gl::GLenum::GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT;
static const gl::GLenum GL_COPY_READ_BUFFER = gl::GLenum::GL_COPY_READ_BUFFER;
static const gl::GLenum GL_COPY_READ_BUFFER_BINDING = gl::GLenum::GL_COPY_READ_BUFFER_BINDING;
static const gl::GLenum GL_COPY_WRITE_BUFFER = gl::GLenum::GL_COPY_WRITE_BUFFER;
static const gl::GLenum GL_COPY_WRITE_BUFFER_BINDING = gl::GLenum::GL_COPY_WRITE_BUFFER_BINDING;
static const gl::GLenum GL_MAX_IMAGE_UNITS = gl::GLenum::GL_MAX_IMAGE_UNITS;
static const gl::GLenum GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS = gl::GLenum::GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS;
static const gl::GLenum GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = gl::GLenum::GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES;
static const gl::GLenum GL_IMAGE_BINDING_NAME = gl::GLenum::GL_IMAGE_BINDING_NAME;
static const gl::GLenum GL_IMAGE_BINDING_LEVEL = gl::GLenum::GL_IMAGE_BINDING_LEVEL;
static const gl::GLenum GL_IMAGE_BINDING_LAYERED = gl::GLenum::GL_IMAGE_BINDING_LAYERED;
static const gl::GLenum GL_IMAGE_BINDING_LAYER = gl::GLenum::GL_IMAGE_BINDING_LAYER;
static const gl::GLenum GL_IMAGE_BINDING_ACCESS = gl::GLenum::GL_IMAGE_BINDING_ACCESS;
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
static const gl::GLenum GL_VERTEX_BINDING_BUFFER = gl::GLenum::GL_VERTEX_BINDING_BUFFER;
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
static const gl::GLenum GL_IMAGE_1D = gl::GLenum::GL_IMAGE_1D;
static const gl::GLenum GL_IMAGE_2D = gl::GLenum::GL_IMAGE_2D;
static const gl::GLenum GL_IMAGE_3D = gl::GLenum::GL_IMAGE_3D;
static const gl::GLenum GL_IMAGE_2D_RECT = gl::GLenum::GL_IMAGE_2D_RECT;
static const gl::GLenum GL_IMAGE_CUBE = gl::GLenum::GL_IMAGE_CUBE;
static const gl::GLenum GL_IMAGE_BUFFER = gl::GLenum::GL_IMAGE_BUFFER;
static const gl::GLenum GL_IMAGE_1D_ARRAY = gl::GLenum::GL_IMAGE_1D_ARRAY;
static const gl::GLenum GL_IMAGE_2D_ARRAY = gl::GLenum::GL_IMAGE_2D_ARRAY;
static const gl::GLenum GL_IMAGE_CUBE_MAP_ARRAY = gl::GLenum::GL_IMAGE_CUBE_MAP_ARRAY;
static const gl::GLenum GL_IMAGE_2D_MULTISAMPLE = gl::GLenum::GL_IMAGE_2D_MULTISAMPLE;
static const gl::GLenum GL_IMAGE_2D_MULTISAMPLE_ARRAY = gl::GLenum::GL_IMAGE_2D_MULTISAMPLE_ARRAY;
static const gl::GLenum GL_INT_IMAGE_1D = gl::GLenum::GL_INT_IMAGE_1D;
static const gl::GLenum GL_INT_IMAGE_2D = gl::GLenum::GL_INT_IMAGE_2D;
static const gl::GLenum GL_INT_IMAGE_3D = gl::GLenum::GL_INT_IMAGE_3D;
static const gl::GLenum GL_INT_IMAGE_2D_RECT = gl::GLenum::GL_INT_IMAGE_2D_RECT;
static const gl::GLenum GL_INT_IMAGE_CUBE = gl::GLenum::GL_INT_IMAGE_CUBE;
static const gl::GLenum GL_INT_IMAGE_BUFFER = gl::GLenum::GL_INT_IMAGE_BUFFER;
static const gl::GLenum GL_INT_IMAGE_1D_ARRAY = gl::GLenum::GL_INT_IMAGE_1D_ARRAY;
static const gl::GLenum GL_INT_IMAGE_2D_ARRAY = gl::GLenum::GL_INT_IMAGE_2D_ARRAY;
static const gl::GLenum GL_INT_IMAGE_CUBE_MAP_ARRAY = gl::GLenum::GL_INT_IMAGE_CUBE_MAP_ARRAY;
static const gl::GLenum GL_INT_IMAGE_2D_MULTISAMPLE = gl::GLenum::GL_INT_IMAGE_2D_MULTISAMPLE;
static const gl::GLenum GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY = gl::GLenum::GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_1D = gl::GLenum::GL_UNSIGNED_INT_IMAGE_1D;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_2D = gl::GLenum::GL_UNSIGNED_INT_IMAGE_2D;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_3D = gl::GLenum::GL_UNSIGNED_INT_IMAGE_3D;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_2D_RECT = gl::GLenum::GL_UNSIGNED_INT_IMAGE_2D_RECT;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_CUBE = gl::GLenum::GL_UNSIGNED_INT_IMAGE_CUBE;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_BUFFER = gl::GLenum::GL_UNSIGNED_INT_IMAGE_BUFFER;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_1D_ARRAY = gl::GLenum::GL_UNSIGNED_INT_IMAGE_1D_ARRAY;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_2D_ARRAY = gl::GLenum::GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = gl::GLenum::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE = gl::GLenum::GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE;
static const gl::GLenum GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY = gl::GLenum::GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY;
static const gl::GLenum GL_MAX_IMAGE_SAMPLES = gl::GLenum::GL_MAX_IMAGE_SAMPLES;
static const gl::GLenum GL_IMAGE_BINDING_FORMAT = gl::GLenum::GL_IMAGE_BINDING_FORMAT;
static const gl::GLenum GL_RGB10_A2UI = gl::GLenum::GL_RGB10_A2UI;
static const gl::GLenum GL_MIN_MAP_BUFFER_ALIGNMENT = gl::GLenum::GL_MIN_MAP_BUFFER_ALIGNMENT;
static const gl::GLenum GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = gl::GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
static const gl::GLenum GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = gl::GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
static const gl::GLenum GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = gl::GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
static const gl::GLenum GL_MAX_VERTEX_IMAGE_UNIFORMS = gl::GLenum::GL_MAX_VERTEX_IMAGE_UNIFORMS;
static const gl::GLenum GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = gl::GLenum::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS;
static const gl::GLenum GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = gl::GLenum::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS;
static const gl::GLenum GL_MAX_GEOMETRY_IMAGE_UNIFORMS = gl::GLenum::GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
static const gl::GLenum GL_MAX_FRAGMENT_IMAGE_UNIFORMS = gl::GLenum::GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
static const gl::GLenum GL_MAX_COMBINED_IMAGE_UNIFORMS = gl::GLenum::GL_MAX_COMBINED_IMAGE_UNIFORMS;
static const gl::GLenum GL_SHADER_STORAGE_BUFFER = gl::GLenum::GL_SHADER_STORAGE_BUFFER;
static const gl::GLenum GL_SHADER_STORAGE_BUFFER_BINDING = gl::GLenum::GL_SHADER_STORAGE_BUFFER_BINDING;
static const gl::GLenum GL_SHADER_STORAGE_BUFFER_START = gl::GLenum::GL_SHADER_STORAGE_BUFFER_START;
static const gl::GLenum GL_SHADER_STORAGE_BUFFER_SIZE = gl::GLenum::GL_SHADER_STORAGE_BUFFER_SIZE;
static const gl::GLenum GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = gl::GLenum::GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS;
static const gl::GLenum GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = gl::GLenum::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS;
static const gl::GLenum GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = gl::GLenum::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS;
static const gl::GLenum GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = gl::GLenum::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS;
static const gl::GLenum GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = gl::GLenum::GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS;
static const gl::GLenum GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = gl::GLenum::GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS;
static const gl::GLenum GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = gl::GLenum::GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS;
static const gl::GLenum GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = gl::GLenum::GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS;
static const gl::GLenum GL_MAX_SHADER_STORAGE_BLOCK_SIZE = gl::GLenum::GL_MAX_SHADER_STORAGE_BLOCK_SIZE;
static const gl::GLenum GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = gl::GLenum::GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT;
static const gl::GLenum GL_DEPTH_STENCIL_TEXTURE_MODE = gl::GLenum::GL_DEPTH_STENCIL_TEXTURE_MODE;
static const gl::GLenum GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB = gl::GLenum::GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB;
static const gl::GLenum GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = gl::GLenum::GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS;
static const gl::GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER = gl::GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER;
static const gl::GLenum GL_DISPATCH_INDIRECT_BUFFER = gl::GLenum::GL_DISPATCH_INDIRECT_BUFFER;
static const gl::GLenum GL_DISPATCH_INDIRECT_BUFFER_BINDING = gl::GLenum::GL_DISPATCH_INDIRECT_BUFFER_BINDING;
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
static const gl::GLenum GL_UNPACK_COMPRESSED_BLOCK_WIDTH = gl::GLenum::GL_UNPACK_COMPRESSED_BLOCK_WIDTH;
static const gl::GLenum GL_UNPACK_COMPRESSED_BLOCK_HEIGHT = gl::GLenum::GL_UNPACK_COMPRESSED_BLOCK_HEIGHT;
static const gl::GLenum GL_UNPACK_COMPRESSED_BLOCK_DEPTH = gl::GLenum::GL_UNPACK_COMPRESSED_BLOCK_DEPTH;
static const gl::GLenum GL_UNPACK_COMPRESSED_BLOCK_SIZE = gl::GLenum::GL_UNPACK_COMPRESSED_BLOCK_SIZE;
static const gl::GLenum GL_PACK_COMPRESSED_BLOCK_WIDTH = gl::GLenum::GL_PACK_COMPRESSED_BLOCK_WIDTH;
static const gl::GLenum GL_PACK_COMPRESSED_BLOCK_HEIGHT = gl::GLenum::GL_PACK_COMPRESSED_BLOCK_HEIGHT;
static const gl::GLenum GL_PACK_COMPRESSED_BLOCK_DEPTH = gl::GLenum::GL_PACK_COMPRESSED_BLOCK_DEPTH;
static const gl::GLenum GL_PACK_COMPRESSED_BLOCK_SIZE = gl::GLenum::GL_PACK_COMPRESSED_BLOCK_SIZE;
static const gl::GLenum GL_TEXTURE_IMMUTABLE_FORMAT = gl::GLenum::GL_TEXTURE_IMMUTABLE_FORMAT;
static const gl::GLenum GL_MAX_DEBUG_MESSAGE_LENGTH = gl::GLenum::GL_MAX_DEBUG_MESSAGE_LENGTH;
static const gl::GLenum GL_MAX_DEBUG_LOGGED_MESSAGES = gl::GLenum::GL_MAX_DEBUG_LOGGED_MESSAGES;
static const gl::GLenum GL_DEBUG_LOGGED_MESSAGES = gl::GLenum::GL_DEBUG_LOGGED_MESSAGES;
static const gl::GLenum GL_DEBUG_SEVERITY_HIGH = gl::GLenum::GL_DEBUG_SEVERITY_HIGH;
static const gl::GLenum GL_DEBUG_SEVERITY_MEDIUM = gl::GLenum::GL_DEBUG_SEVERITY_MEDIUM;
static const gl::GLenum GL_DEBUG_SEVERITY_LOW = gl::GLenum::GL_DEBUG_SEVERITY_LOW;
static const gl::GLenum GL_QUERY_BUFFER = gl::GLenum::GL_QUERY_BUFFER;
static const gl::GLenum GL_QUERY_BUFFER_BINDING = gl::GLenum::GL_QUERY_BUFFER_BINDING;
static const gl::GLenum GL_QUERY_RESULT_NO_WAIT = gl::GLenum::GL_QUERY_RESULT_NO_WAIT;
static const gl::GLenum GL_TEXTURE_BUFFER_OFFSET = gl::GLenum::GL_TEXTURE_BUFFER_OFFSET;
static const gl::GLenum GL_TEXTURE_BUFFER_SIZE = gl::GLenum::GL_TEXTURE_BUFFER_SIZE;
static const gl::GLenum GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = gl::GLenum::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT;
static const gl::GLenum GL_COMPUTE_SHADER = gl::GLenum::GL_COMPUTE_SHADER;
static const gl::GLenum GL_MAX_COMPUTE_UNIFORM_BLOCKS = gl::GLenum::GL_MAX_COMPUTE_UNIFORM_BLOCKS;
static const gl::GLenum GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = gl::GLenum::GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS;
static const gl::GLenum GL_MAX_COMPUTE_IMAGE_UNIFORMS = gl::GLenum::GL_MAX_COMPUTE_IMAGE_UNIFORMS;
static const gl::GLenum GL_MAX_COMPUTE_WORK_GROUP_COUNT = gl::GLenum::GL_MAX_COMPUTE_WORK_GROUP_COUNT;
static const gl::GLenum GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB = gl::GLenum::GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB;
static const gl::GLenum GL_MAX_COMPUTE_WORK_GROUP_SIZE = gl::GLenum::GL_MAX_COMPUTE_WORK_GROUP_SIZE;
static const gl::GLenum GL_COMPRESSED_R11_EAC = gl::GLenum::GL_COMPRESSED_R11_EAC;
static const gl::GLenum GL_COMPRESSED_SIGNED_R11_EAC = gl::GLenum::GL_COMPRESSED_SIGNED_R11_EAC;
static const gl::GLenum GL_COMPRESSED_RG11_EAC = gl::GLenum::GL_COMPRESSED_RG11_EAC;
static const gl::GLenum GL_COMPRESSED_SIGNED_RG11_EAC = gl::GLenum::GL_COMPRESSED_SIGNED_RG11_EAC;
static const gl::GLenum GL_COMPRESSED_RGB8_ETC2 = gl::GLenum::GL_COMPRESSED_RGB8_ETC2;
static const gl::GLenum GL_COMPRESSED_SRGB8_ETC2 = gl::GLenum::GL_COMPRESSED_SRGB8_ETC2;
static const gl::GLenum GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = gl::GLenum::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2;
static const gl::GLenum GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = gl::GLenum::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2;
static const gl::GLenum GL_COMPRESSED_RGBA8_ETC2_EAC = gl::GLenum::GL_COMPRESSED_RGBA8_ETC2_EAC;
static const gl::GLenum GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = gl::GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_BINDING = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_BINDING;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_START = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_START;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_SIZE = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_SIZE;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER;
static const gl::GLenum GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = gl::GLenum::GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
static const gl::GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = gl::GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
static const gl::GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = gl::GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
static const gl::GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = gl::GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
static const gl::GLenum GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = gl::GLenum::GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
static const gl::GLenum GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = gl::GLenum::GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
static const gl::GLenum GL_MAX_VERTEX_ATOMIC_COUNTERS = gl::GLenum::GL_MAX_VERTEX_ATOMIC_COUNTERS;
static const gl::GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = gl::GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
static const gl::GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = gl::GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
static const gl::GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTERS = gl::GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
static const gl::GLenum GL_MAX_FRAGMENT_ATOMIC_COUNTERS = gl::GLenum::GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
static const gl::GLenum GL_MAX_COMBINED_ATOMIC_COUNTERS = gl::GLenum::GL_MAX_COMBINED_ATOMIC_COUNTERS;
static const gl::GLenum GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = gl::GLenum::GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
static const gl::GLenum GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = gl::GLenum::GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;
static const gl::GLenum GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX = gl::GLenum::GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX;
static const gl::GLenum GL_UNSIGNED_INT_ATOMIC_COUNTER = gl::GLenum::GL_UNSIGNED_INT_ATOMIC_COUNTER;
static const gl::GLenum GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = gl::GLenum::GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;
static const gl::GLenum GL_DEBUG_OUTPUT = gl::GLenum::GL_DEBUG_OUTPUT;
static const gl::GLenum GL_UNIFORM = gl::GLenum::GL_UNIFORM;
static const gl::GLenum GL_UNIFORM_BLOCK = gl::GLenum::GL_UNIFORM_BLOCK;
static const gl::GLenum GL_PROGRAM_INPUT = gl::GLenum::GL_PROGRAM_INPUT;
static const gl::GLenum GL_PROGRAM_OUTPUT = gl::GLenum::GL_PROGRAM_OUTPUT;
static const gl::GLenum GL_BUFFER_VARIABLE = gl::GLenum::GL_BUFFER_VARIABLE;
static const gl::GLenum GL_SHADER_STORAGE_BLOCK = gl::GLenum::GL_SHADER_STORAGE_BLOCK;
static const gl::GLenum GL_IS_PER_PATCH = gl::GLenum::GL_IS_PER_PATCH;
static const gl::GLenum GL_VERTEX_SUBROUTINE = gl::GLenum::GL_VERTEX_SUBROUTINE;
static const gl::GLenum GL_TESS_CONTROL_SUBROUTINE = gl::GLenum::GL_TESS_CONTROL_SUBROUTINE;
static const gl::GLenum GL_TESS_EVALUATION_SUBROUTINE = gl::GLenum::GL_TESS_EVALUATION_SUBROUTINE;
static const gl::GLenum GL_GEOMETRY_SUBROUTINE = gl::GLenum::GL_GEOMETRY_SUBROUTINE;
static const gl::GLenum GL_FRAGMENT_SUBROUTINE = gl::GLenum::GL_FRAGMENT_SUBROUTINE;
static const gl::GLenum GL_COMPUTE_SUBROUTINE = gl::GLenum::GL_COMPUTE_SUBROUTINE;
static const gl::GLenum GL_VERTEX_SUBROUTINE_UNIFORM = gl::GLenum::GL_VERTEX_SUBROUTINE_UNIFORM;
static const gl::GLenum GL_TESS_CONTROL_SUBROUTINE_UNIFORM = gl::GLenum::GL_TESS_CONTROL_SUBROUTINE_UNIFORM;
static const gl::GLenum GL_TESS_EVALUATION_SUBROUTINE_UNIFORM = gl::GLenum::GL_TESS_EVALUATION_SUBROUTINE_UNIFORM;
static const gl::GLenum GL_GEOMETRY_SUBROUTINE_UNIFORM = gl::GLenum::GL_GEOMETRY_SUBROUTINE_UNIFORM;
static const gl::GLenum GL_FRAGMENT_SUBROUTINE_UNIFORM = gl::GLenum::GL_FRAGMENT_SUBROUTINE_UNIFORM;
static const gl::GLenum GL_COMPUTE_SUBROUTINE_UNIFORM = gl::GLenum::GL_COMPUTE_SUBROUTINE_UNIFORM;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_VARYING = gl::GLenum::GL_TRANSFORM_FEEDBACK_VARYING;
static const gl::GLenum GL_ACTIVE_RESOURCES = gl::GLenum::GL_ACTIVE_RESOURCES;
static const gl::GLenum GL_MAX_NAME_LENGTH = gl::GLenum::GL_MAX_NAME_LENGTH;
static const gl::GLenum GL_MAX_NUM_ACTIVE_VARIABLES = gl::GLenum::GL_MAX_NUM_ACTIVE_VARIABLES;
static const gl::GLenum GL_MAX_NUM_COMPATIBLE_SUBROUTINES = gl::GLenum::GL_MAX_NUM_COMPATIBLE_SUBROUTINES;
static const gl::GLenum GL_NAME_LENGTH = gl::GLenum::GL_NAME_LENGTH;
static const gl::GLenum GL_TYPE = gl::GLenum::GL_TYPE;
static const gl::GLenum GL_ARRAY_SIZE = gl::GLenum::GL_ARRAY_SIZE;
static const gl::GLenum GL_OFFSET = gl::GLenum::GL_OFFSET;
static const gl::GLenum GL_BLOCK_INDEX = gl::GLenum::GL_BLOCK_INDEX;
static const gl::GLenum GL_ARRAY_STRIDE = gl::GLenum::GL_ARRAY_STRIDE;
static const gl::GLenum GL_MATRIX_STRIDE = gl::GLenum::GL_MATRIX_STRIDE;
static const gl::GLenum GL_IS_ROW_MAJOR = gl::GLenum::GL_IS_ROW_MAJOR;
static const gl::GLenum GL_ATOMIC_COUNTER_BUFFER_INDEX = gl::GLenum::GL_ATOMIC_COUNTER_BUFFER_INDEX;
static const gl::GLenum GL_BUFFER_BINDING = gl::GLenum::GL_BUFFER_BINDING;
static const gl::GLenum GL_BUFFER_DATA_SIZE = gl::GLenum::GL_BUFFER_DATA_SIZE;
static const gl::GLenum GL_NUM_ACTIVE_VARIABLES = gl::GLenum::GL_NUM_ACTIVE_VARIABLES;
static const gl::GLenum GL_ACTIVE_VARIABLES = gl::GLenum::GL_ACTIVE_VARIABLES;
static const gl::GLenum GL_REFERENCED_BY_VERTEX_SHADER = gl::GLenum::GL_REFERENCED_BY_VERTEX_SHADER;
static const gl::GLenum GL_REFERENCED_BY_TESS_CONTROL_SHADER = gl::GLenum::GL_REFERENCED_BY_TESS_CONTROL_SHADER;
static const gl::GLenum GL_REFERENCED_BY_TESS_EVALUATION_SHADER = gl::GLenum::GL_REFERENCED_BY_TESS_EVALUATION_SHADER;
static const gl::GLenum GL_REFERENCED_BY_GEOMETRY_SHADER = gl::GLenum::GL_REFERENCED_BY_GEOMETRY_SHADER;
static const gl::GLenum GL_REFERENCED_BY_FRAGMENT_SHADER = gl::GLenum::GL_REFERENCED_BY_FRAGMENT_SHADER;
static const gl::GLenum GL_REFERENCED_BY_COMPUTE_SHADER = gl::GLenum::GL_REFERENCED_BY_COMPUTE_SHADER;
static const gl::GLenum GL_TOP_LEVEL_ARRAY_SIZE = gl::GLenum::GL_TOP_LEVEL_ARRAY_SIZE;
static const gl::GLenum GL_TOP_LEVEL_ARRAY_STRIDE = gl::GLenum::GL_TOP_LEVEL_ARRAY_STRIDE;
static const gl::GLenum GL_LOCATION = gl::GLenum::GL_LOCATION;
static const gl::GLenum GL_LOCATION_INDEX = gl::GLenum::GL_LOCATION_INDEX;
static const gl::GLenum GL_FRAMEBUFFER_DEFAULT_WIDTH = gl::GLenum::GL_FRAMEBUFFER_DEFAULT_WIDTH;
static const gl::GLenum GL_FRAMEBUFFER_DEFAULT_HEIGHT = gl::GLenum::GL_FRAMEBUFFER_DEFAULT_HEIGHT;
static const gl::GLenum GL_FRAMEBUFFER_DEFAULT_LAYERS = gl::GLenum::GL_FRAMEBUFFER_DEFAULT_LAYERS;
static const gl::GLenum GL_FRAMEBUFFER_DEFAULT_SAMPLES = gl::GLenum::GL_FRAMEBUFFER_DEFAULT_SAMPLES;
static const gl::GLenum GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = gl::GLenum::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS;
static const gl::GLenum GL_MAX_FRAMEBUFFER_WIDTH = gl::GLenum::GL_MAX_FRAMEBUFFER_WIDTH;
static const gl::GLenum GL_MAX_FRAMEBUFFER_HEIGHT = gl::GLenum::GL_MAX_FRAMEBUFFER_HEIGHT;
static const gl::GLenum GL_MAX_FRAMEBUFFER_LAYERS = gl::GLenum::GL_MAX_FRAMEBUFFER_LAYERS;
static const gl::GLenum GL_MAX_FRAMEBUFFER_SAMPLES = gl::GLenum::GL_MAX_FRAMEBUFFER_SAMPLES;
static const gl::GLenum GL_LOCATION_COMPONENT = gl::GLenum::GL_LOCATION_COMPONENT;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_BUFFER_INDEX = gl::GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_INDEX;
static const gl::GLenum GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE = gl::GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE;
static const gl::GLenum GL_CLIP_ORIGIN = gl::GLenum::GL_CLIP_ORIGIN;
static const gl::GLenum GL_CLIP_DEPTH_MODE = gl::GLenum::GL_CLIP_DEPTH_MODE;
static const gl::GLenum GL_NEGATIVE_ONE_TO_ONE = gl::GLenum::GL_NEGATIVE_ONE_TO_ONE;
static const gl::GLenum GL_ZERO_TO_ONE = gl::GLenum::GL_ZERO_TO_ONE;
static const gl::GLenum GL_CLEAR_TEXTURE = gl::GLenum::GL_CLEAR_TEXTURE;
static const gl::GLenum GL_NUM_SAMPLE_COUNTS = gl::GLenum::GL_NUM_SAMPLE_COUNTS;

} // namespace gl45
