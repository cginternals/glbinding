#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/gl/types.h>

#include <glbinding/gl/enum.h>


namespace gl12
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
static const gl::GLenum GL_CLAMP_TO_EDGE = gl::GLenum::GL_CLAMP_TO_EDGE;

// VertexPointerType

// static const gl::GLenum GL_SHORT = gl::GLenum::GL_SHORT; // reuse ColorPointerType
// static const gl::GLenum GL_INT = gl::GLenum::GL_INT; // reuse ColorPointerType
// static const gl::GLenum GL_FLOAT = gl::GLenum::GL_FLOAT; // reuse ColorPointerType
// static const gl::GLenum GL_DOUBLE = gl::GLenum::GL_DOUBLE; // reuse ColorPointerType

// __UNGROUPED__

static const gl::GLenum GL_RESCALE_NORMAL = gl::GLenum::GL_RESCALE_NORMAL;
static const gl::GLenum GL_TEXTURE_DEPTH = gl::GLenum::GL_TEXTURE_DEPTH;
static const gl::GLenum GL_MAX_3D_TEXTURE_SIZE = gl::GLenum::GL_MAX_3D_TEXTURE_SIZE;
static const gl::GLenum GL_BGR = gl::GLenum::GL_BGR;
static const gl::GLenum GL_BGRA = gl::GLenum::GL_BGRA;
static const gl::GLenum GL_MAX_ELEMENTS_VERTICES = gl::GLenum::GL_MAX_ELEMENTS_VERTICES;
static const gl::GLenum GL_MAX_ELEMENTS_INDICES = gl::GLenum::GL_MAX_ELEMENTS_INDICES;
static const gl::GLenum GL_UNSIGNED_BYTE_2_3_3_REV = gl::GLenum::GL_UNSIGNED_BYTE_2_3_3_REV;
static const gl::GLenum GL_UNSIGNED_SHORT_5_6_5 = gl::GLenum::GL_UNSIGNED_SHORT_5_6_5;
static const gl::GLenum GL_UNSIGNED_SHORT_5_6_5_REV = gl::GLenum::GL_UNSIGNED_SHORT_5_6_5_REV;
static const gl::GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV = gl::GLenum::GL_UNSIGNED_SHORT_4_4_4_4_REV;
static const gl::GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV = gl::GLenum::GL_UNSIGNED_SHORT_1_5_5_5_REV;
static const gl::GLenum GL_UNSIGNED_INT_8_8_8_8_REV = gl::GLenum::GL_UNSIGNED_INT_8_8_8_8_REV;
static const gl::GLenum GL_UNSIGNED_INT_2_10_10_10_REV = gl::GLenum::GL_UNSIGNED_INT_2_10_10_10_REV;

} // namespace gl12
