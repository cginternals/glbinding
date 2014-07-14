#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/enum.h>


namespace gl44
{

using namespace gl;

// import enums to namespace


// AccumOp

static const GLenum GL_ACCUM = GLenum::GL_ACCUM;
static const GLenum GL_LOAD = GLenum::GL_LOAD;
static const GLenum GL_RETURN = GLenum::GL_RETURN;
static const GLenum GL_MULT = GLenum::GL_MULT;
static const GLenum GL_ADD = GLenum::GL_ADD;

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

static const GLenum GL_LOGIC_OP = GLenum::GL_LOGIC_OP;

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
static const GLenum GL_CLIP_PLANE0 = GLenum::GL_CLIP_PLANE0;
static const GLenum GL_CLIP_DISTANCE1 = GLenum::GL_CLIP_DISTANCE1;
static const GLenum GL_CLIP_PLANE1 = GLenum::GL_CLIP_PLANE1;
static const GLenum GL_CLIP_DISTANCE2 = GLenum::GL_CLIP_DISTANCE2;
static const GLenum GL_CLIP_PLANE2 = GLenum::GL_CLIP_PLANE2;
static const GLenum GL_CLIP_DISTANCE3 = GLenum::GL_CLIP_DISTANCE3;
static const GLenum GL_CLIP_PLANE3 = GLenum::GL_CLIP_PLANE3;
static const GLenum GL_CLIP_DISTANCE4 = GLenum::GL_CLIP_DISTANCE4;
static const GLenum GL_CLIP_PLANE4 = GLenum::GL_CLIP_PLANE4;
static const GLenum GL_CLIP_DISTANCE5 = GLenum::GL_CLIP_DISTANCE5;
static const GLenum GL_CLIP_PLANE5 = GLenum::GL_CLIP_PLANE5;
static const GLenum GL_CLIP_DISTANCE6 = GLenum::GL_CLIP_DISTANCE6;
static const GLenum GL_CLIP_DISTANCE7 = GLenum::GL_CLIP_DISTANCE7;

// ColorMaterialFace

static const GLenum GL_FRONT = GLenum::GL_FRONT;
static const GLenum GL_BACK = GLenum::GL_BACK;
static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK;

// ColorMaterialParameter

static const GLenum GL_AMBIENT = GLenum::GL_AMBIENT;
static const GLenum GL_DIFFUSE = GLenum::GL_DIFFUSE;
static const GLenum GL_SPECULAR = GLenum::GL_SPECULAR;
static const GLenum GL_EMISSION = GLenum::GL_EMISSION;
static const GLenum GL_AMBIENT_AND_DIFFUSE = GLenum::GL_AMBIENT_AND_DIFFUSE;

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
static const GLenum GL_AUX0 = GLenum::GL_AUX0;
static const GLenum GL_AUX1 = GLenum::GL_AUX1;
static const GLenum GL_AUX2 = GLenum::GL_AUX2;
static const GLenum GL_AUX3 = GLenum::GL_AUX3;

// EnableCap

static const GLenum GL_POINT_SMOOTH = GLenum::GL_POINT_SMOOTH;
static const GLenum GL_LINE_SMOOTH = GLenum::GL_LINE_SMOOTH;
static const GLenum GL_LINE_STIPPLE = GLenum::GL_LINE_STIPPLE;
static const GLenum GL_POLYGON_SMOOTH = GLenum::GL_POLYGON_SMOOTH;
static const GLenum GL_POLYGON_STIPPLE = GLenum::GL_POLYGON_STIPPLE;
static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE;
static const GLenum GL_LIGHTING = GLenum::GL_LIGHTING;
static const GLenum GL_COLOR_MATERIAL = GLenum::GL_COLOR_MATERIAL;
static const GLenum GL_FOG = GLenum::GL_FOG;
static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST;
static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST;
static const GLenum GL_NORMALIZE = GLenum::GL_NORMALIZE;
static const GLenum GL_ALPHA_TEST = GLenum::GL_ALPHA_TEST;
static const GLenum GL_DITHER = GLenum::GL_DITHER;
static const GLenum GL_BLEND = GLenum::GL_BLEND;
static const GLenum GL_INDEX_LOGIC_OP = GLenum::GL_INDEX_LOGIC_OP;
static const GLenum GL_COLOR_LOGIC_OP = GLenum::GL_COLOR_LOGIC_OP;
static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST;
static const GLenum GL_TEXTURE_GEN_S = GLenum::GL_TEXTURE_GEN_S;
static const GLenum GL_TEXTURE_GEN_T = GLenum::GL_TEXTURE_GEN_T;
static const GLenum GL_TEXTURE_GEN_R = GLenum::GL_TEXTURE_GEN_R;
static const GLenum GL_TEXTURE_GEN_Q = GLenum::GL_TEXTURE_GEN_Q;
static const GLenum GL_AUTO_NORMAL = GLenum::GL_AUTO_NORMAL;
static const GLenum GL_MAP1_COLOR_4 = GLenum::GL_MAP1_COLOR_4;
static const GLenum GL_MAP1_INDEX = GLenum::GL_MAP1_INDEX;
static const GLenum GL_MAP1_NORMAL = GLenum::GL_MAP1_NORMAL;
static const GLenum GL_MAP1_TEXTURE_COORD_1 = GLenum::GL_MAP1_TEXTURE_COORD_1;
static const GLenum GL_MAP1_TEXTURE_COORD_2 = GLenum::GL_MAP1_TEXTURE_COORD_2;
static const GLenum GL_MAP1_TEXTURE_COORD_3 = GLenum::GL_MAP1_TEXTURE_COORD_3;
static const GLenum GL_MAP1_TEXTURE_COORD_4 = GLenum::GL_MAP1_TEXTURE_COORD_4;
static const GLenum GL_MAP1_VERTEX_3 = GLenum::GL_MAP1_VERTEX_3;
static const GLenum GL_MAP1_VERTEX_4 = GLenum::GL_MAP1_VERTEX_4;
static const GLenum GL_MAP2_COLOR_4 = GLenum::GL_MAP2_COLOR_4;
static const GLenum GL_MAP2_INDEX = GLenum::GL_MAP2_INDEX;
static const GLenum GL_MAP2_NORMAL = GLenum::GL_MAP2_NORMAL;
static const GLenum GL_MAP2_TEXTURE_COORD_1 = GLenum::GL_MAP2_TEXTURE_COORD_1;
static const GLenum GL_MAP2_TEXTURE_COORD_2 = GLenum::GL_MAP2_TEXTURE_COORD_2;
static const GLenum GL_MAP2_TEXTURE_COORD_3 = GLenum::GL_MAP2_TEXTURE_COORD_3;
static const GLenum GL_MAP2_TEXTURE_COORD_4 = GLenum::GL_MAP2_TEXTURE_COORD_4;
static const GLenum GL_MAP2_VERTEX_3 = GLenum::GL_MAP2_VERTEX_3;
static const GLenum GL_MAP2_VERTEX_4 = GLenum::GL_MAP2_VERTEX_4;
static const GLenum GL_TEXTURE_1D = GLenum::GL_TEXTURE_1D;
static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D;
static const GLenum GL_POLYGON_OFFSET_POINT = GLenum::GL_POLYGON_OFFSET_POINT;
static const GLenum GL_POLYGON_OFFSET_LINE = GLenum::GL_POLYGON_OFFSET_LINE;
// static const GLenum GL_CLIP_PLANE0 = GLenum::GL_CLIP_PLANE0; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE1 = GLenum::GL_CLIP_PLANE1; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE2 = GLenum::GL_CLIP_PLANE2; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE3 = GLenum::GL_CLIP_PLANE3; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE4 = GLenum::GL_CLIP_PLANE4; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE5 = GLenum::GL_CLIP_PLANE5; // reuse ClipPlaneName
static const GLenum GL_LIGHT0 = GLenum::GL_LIGHT0;
static const GLenum GL_LIGHT1 = GLenum::GL_LIGHT1;
static const GLenum GL_LIGHT2 = GLenum::GL_LIGHT2;
static const GLenum GL_LIGHT3 = GLenum::GL_LIGHT3;
static const GLenum GL_LIGHT4 = GLenum::GL_LIGHT4;
static const GLenum GL_LIGHT5 = GLenum::GL_LIGHT5;
static const GLenum GL_LIGHT6 = GLenum::GL_LIGHT6;
static const GLenum GL_LIGHT7 = GLenum::GL_LIGHT7;
static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL;
static const GLenum GL_VERTEX_ARRAY = GLenum::GL_VERTEX_ARRAY;
static const GLenum GL_NORMAL_ARRAY = GLenum::GL_NORMAL_ARRAY;
static const GLenum GL_COLOR_ARRAY = GLenum::GL_COLOR_ARRAY;
static const GLenum GL_INDEX_ARRAY = GLenum::GL_INDEX_ARRAY;
static const GLenum GL_TEXTURE_COORD_ARRAY = GLenum::GL_TEXTURE_COORD_ARRAY;
static const GLenum GL_EDGE_FLAG_ARRAY = GLenum::GL_EDGE_FLAG_ARRAY;

// ErrorCode

static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR;
static const GLenum GL_INVALID_ENUM = GLenum::GL_INVALID_ENUM;
static const GLenum GL_INVALID_VALUE = GLenum::GL_INVALID_VALUE;
static const GLenum GL_INVALID_OPERATION = GLenum::GL_INVALID_OPERATION;
static const GLenum GL_STACK_OVERFLOW = GLenum::GL_STACK_OVERFLOW;
static const GLenum GL_STACK_UNDERFLOW = GLenum::GL_STACK_UNDERFLOW;
static const GLenum GL_OUT_OF_MEMORY = GLenum::GL_OUT_OF_MEMORY;
static const GLenum GL_INVALID_FRAMEBUFFER_OPERATION = GLenum::GL_INVALID_FRAMEBUFFER_OPERATION;

// FeedBackToken

static const GLenum GL_PASS_THROUGH_TOKEN = GLenum::GL_PASS_THROUGH_TOKEN;
static const GLenum GL_POINT_TOKEN = GLenum::GL_POINT_TOKEN;
static const GLenum GL_LINE_TOKEN = GLenum::GL_LINE_TOKEN;
static const GLenum GL_POLYGON_TOKEN = GLenum::GL_POLYGON_TOKEN;
static const GLenum GL_BITMAP_TOKEN = GLenum::GL_BITMAP_TOKEN;
static const GLenum GL_DRAW_PIXEL_TOKEN = GLenum::GL_DRAW_PIXEL_TOKEN;
static const GLenum GL_COPY_PIXEL_TOKEN = GLenum::GL_COPY_PIXEL_TOKEN;
static const GLenum GL_LINE_RESET_TOKEN = GLenum::GL_LINE_RESET_TOKEN;

// FeedbackType

static const GLenum GL_2D = GLenum::GL_2D;
static const GLenum GL_3D = GLenum::GL_3D;
static const GLenum GL_3D_COLOR = GLenum::GL_3D_COLOR;
static const GLenum GL_3D_COLOR_TEXTURE = GLenum::GL_3D_COLOR_TEXTURE;
static const GLenum GL_4D_COLOR_TEXTURE = GLenum::GL_4D_COLOR_TEXTURE;

// FfdTargetSGIX



// FogCoordinatePointerType

// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// FogMode

static const GLenum GL_EXP = GLenum::GL_EXP;
static const GLenum GL_EXP2 = GLenum::GL_EXP2;
static const GLenum GL_LINEAR = GLenum::GL_LINEAR;

// FogParameter

static const GLenum GL_FOG_INDEX = GLenum::GL_FOG_INDEX;
static const GLenum GL_FOG_DENSITY = GLenum::GL_FOG_DENSITY;
static const GLenum GL_FOG_START = GLenum::GL_FOG_START;
static const GLenum GL_FOG_END = GLenum::GL_FOG_END;
static const GLenum GL_FOG_MODE = GLenum::GL_FOG_MODE;
static const GLenum GL_FOG_COLOR = GLenum::GL_FOG_COLOR;

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

static const GLenum GL_COEFF = GLenum::GL_COEFF;
static const GLenum GL_ORDER = GLenum::GL_ORDER;
static const GLenum GL_DOMAIN = GLenum::GL_DOMAIN;

// GetMinmaxParameterPNameEXT



// GetPName

static const GLenum GL_CURRENT_COLOR = GLenum::GL_CURRENT_COLOR;
static const GLenum GL_CURRENT_INDEX = GLenum::GL_CURRENT_INDEX;
static const GLenum GL_CURRENT_NORMAL = GLenum::GL_CURRENT_NORMAL;
static const GLenum GL_CURRENT_TEXTURE_COORDS = GLenum::GL_CURRENT_TEXTURE_COORDS;
static const GLenum GL_CURRENT_RASTER_COLOR = GLenum::GL_CURRENT_RASTER_COLOR;
static const GLenum GL_CURRENT_RASTER_INDEX = GLenum::GL_CURRENT_RASTER_INDEX;
static const GLenum GL_CURRENT_RASTER_TEXTURE_COORDS = GLenum::GL_CURRENT_RASTER_TEXTURE_COORDS;
static const GLenum GL_CURRENT_RASTER_POSITION = GLenum::GL_CURRENT_RASTER_POSITION;
static const GLenum GL_CURRENT_RASTER_POSITION_VALID = GLenum::GL_CURRENT_RASTER_POSITION_VALID;
static const GLenum GL_CURRENT_RASTER_DISTANCE = GLenum::GL_CURRENT_RASTER_DISTANCE;
// static const GLenum GL_POINT_SMOOTH = GLenum::GL_POINT_SMOOTH; // reuse EnableCap
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
// static const GLenum GL_LINE_STIPPLE = GLenum::GL_LINE_STIPPLE; // reuse EnableCap
static const GLenum GL_LINE_STIPPLE_PATTERN = GLenum::GL_LINE_STIPPLE_PATTERN;
static const GLenum GL_LINE_STIPPLE_REPEAT = GLenum::GL_LINE_STIPPLE_REPEAT;
static const GLenum GL_LIST_MODE = GLenum::GL_LIST_MODE;
static const GLenum GL_MAX_LIST_NESTING = GLenum::GL_MAX_LIST_NESTING;
static const GLenum GL_LIST_BASE = GLenum::GL_LIST_BASE;
static const GLenum GL_LIST_INDEX = GLenum::GL_LIST_INDEX;
static const GLenum GL_POLYGON_MODE = GLenum::GL_POLYGON_MODE;
// static const GLenum GL_POLYGON_SMOOTH = GLenum::GL_POLYGON_SMOOTH; // reuse EnableCap
// static const GLenum GL_POLYGON_STIPPLE = GLenum::GL_POLYGON_STIPPLE; // reuse EnableCap
static const GLenum GL_EDGE_FLAG = GLenum::GL_EDGE_FLAG;
// static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE; // reuse EnableCap
static const GLenum GL_CULL_FACE_MODE = GLenum::GL_CULL_FACE_MODE;
static const GLenum GL_FRONT_FACE = GLenum::GL_FRONT_FACE;
// static const GLenum GL_LIGHTING = GLenum::GL_LIGHTING; // reuse EnableCap
static const GLenum GL_LIGHT_MODEL_LOCAL_VIEWER = GLenum::GL_LIGHT_MODEL_LOCAL_VIEWER;
static const GLenum GL_LIGHT_MODEL_TWO_SIDE = GLenum::GL_LIGHT_MODEL_TWO_SIDE;
static const GLenum GL_LIGHT_MODEL_AMBIENT = GLenum::GL_LIGHT_MODEL_AMBIENT;
static const GLenum GL_SHADE_MODEL = GLenum::GL_SHADE_MODEL;
static const GLenum GL_COLOR_MATERIAL_FACE = GLenum::GL_COLOR_MATERIAL_FACE;
static const GLenum GL_COLOR_MATERIAL_PARAMETER = GLenum::GL_COLOR_MATERIAL_PARAMETER;
// static const GLenum GL_COLOR_MATERIAL = GLenum::GL_COLOR_MATERIAL; // reuse EnableCap
// static const GLenum GL_FOG = GLenum::GL_FOG; // reuse EnableCap
// static const GLenum GL_FOG_INDEX = GLenum::GL_FOG_INDEX; // reuse FogParameter
// static const GLenum GL_FOG_DENSITY = GLenum::GL_FOG_DENSITY; // reuse FogParameter
// static const GLenum GL_FOG_START = GLenum::GL_FOG_START; // reuse FogParameter
// static const GLenum GL_FOG_END = GLenum::GL_FOG_END; // reuse FogParameter
// static const GLenum GL_FOG_MODE = GLenum::GL_FOG_MODE; // reuse FogParameter
// static const GLenum GL_FOG_COLOR = GLenum::GL_FOG_COLOR; // reuse FogParameter
static const GLenum GL_DEPTH_RANGE = GLenum::GL_DEPTH_RANGE;
// static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST; // reuse EnableCap
static const GLenum GL_DEPTH_WRITEMASK = GLenum::GL_DEPTH_WRITEMASK;
static const GLenum GL_DEPTH_CLEAR_VALUE = GLenum::GL_DEPTH_CLEAR_VALUE;
static const GLenum GL_DEPTH_FUNC = GLenum::GL_DEPTH_FUNC;
static const GLenum GL_ACCUM_CLEAR_VALUE = GLenum::GL_ACCUM_CLEAR_VALUE;
// static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST; // reuse EnableCap
static const GLenum GL_STENCIL_CLEAR_VALUE = GLenum::GL_STENCIL_CLEAR_VALUE;
static const GLenum GL_STENCIL_FUNC = GLenum::GL_STENCIL_FUNC;
static const GLenum GL_STENCIL_VALUE_MASK = GLenum::GL_STENCIL_VALUE_MASK;
static const GLenum GL_STENCIL_FAIL = GLenum::GL_STENCIL_FAIL;
static const GLenum GL_STENCIL_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_PASS_DEPTH_FAIL;
static const GLenum GL_STENCIL_PASS_DEPTH_PASS = GLenum::GL_STENCIL_PASS_DEPTH_PASS;
static const GLenum GL_STENCIL_REF = GLenum::GL_STENCIL_REF;
static const GLenum GL_STENCIL_WRITEMASK = GLenum::GL_STENCIL_WRITEMASK;
static const GLenum GL_MATRIX_MODE = GLenum::GL_MATRIX_MODE;
// static const GLenum GL_NORMALIZE = GLenum::GL_NORMALIZE; // reuse EnableCap
static const GLenum GL_VIEWPORT = GLenum::GL_VIEWPORT;
static const GLenum GL_MODELVIEW_STACK_DEPTH = GLenum::GL_MODELVIEW_STACK_DEPTH;
static const GLenum GL_PROJECTION_STACK_DEPTH = GLenum::GL_PROJECTION_STACK_DEPTH;
static const GLenum GL_TEXTURE_STACK_DEPTH = GLenum::GL_TEXTURE_STACK_DEPTH;
static const GLenum GL_MODELVIEW_MATRIX = GLenum::GL_MODELVIEW_MATRIX;
static const GLenum GL_PROJECTION_MATRIX = GLenum::GL_PROJECTION_MATRIX;
static const GLenum GL_TEXTURE_MATRIX = GLenum::GL_TEXTURE_MATRIX;
static const GLenum GL_ATTRIB_STACK_DEPTH = GLenum::GL_ATTRIB_STACK_DEPTH;
static const GLenum GL_CLIENT_ATTRIB_STACK_DEPTH = GLenum::GL_CLIENT_ATTRIB_STACK_DEPTH;
// static const GLenum GL_ALPHA_TEST = GLenum::GL_ALPHA_TEST; // reuse EnableCap
static const GLenum GL_ALPHA_TEST_FUNC = GLenum::GL_ALPHA_TEST_FUNC;
static const GLenum GL_ALPHA_TEST_REF = GLenum::GL_ALPHA_TEST_REF;
// static const GLenum GL_DITHER = GLenum::GL_DITHER; // reuse EnableCap
static const GLenum GL_BLEND_DST = GLenum::GL_BLEND_DST;
static const GLenum GL_BLEND_SRC = GLenum::GL_BLEND_SRC;
// static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap
static const GLenum GL_LOGIC_OP_MODE = GLenum::GL_LOGIC_OP_MODE;
// static const GLenum GL_INDEX_LOGIC_OP = GLenum::GL_INDEX_LOGIC_OP; // reuse EnableCap
// static const GLenum GL_LOGIC_OP = GLenum::GL_LOGIC_OP; // reuse BlendEquationModeEXT
// static const GLenum GL_COLOR_LOGIC_OP = GLenum::GL_COLOR_LOGIC_OP; // reuse EnableCap
static const GLenum GL_AUX_BUFFERS = GLenum::GL_AUX_BUFFERS;
static const GLenum GL_DRAW_BUFFER = GLenum::GL_DRAW_BUFFER;
static const GLenum GL_READ_BUFFER = GLenum::GL_READ_BUFFER;
static const GLenum GL_SCISSOR_BOX = GLenum::GL_SCISSOR_BOX;
// static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST; // reuse EnableCap
static const GLenum GL_INDEX_CLEAR_VALUE = GLenum::GL_INDEX_CLEAR_VALUE;
static const GLenum GL_INDEX_WRITEMASK = GLenum::GL_INDEX_WRITEMASK;
static const GLenum GL_COLOR_CLEAR_VALUE = GLenum::GL_COLOR_CLEAR_VALUE;
static const GLenum GL_COLOR_WRITEMASK = GLenum::GL_COLOR_WRITEMASK;
static const GLenum GL_INDEX_MODE = GLenum::GL_INDEX_MODE;
static const GLenum GL_RGBA_MODE = GLenum::GL_RGBA_MODE;
static const GLenum GL_DOUBLEBUFFER = GLenum::GL_DOUBLEBUFFER;
static const GLenum GL_STEREO = GLenum::GL_STEREO;
static const GLenum GL_RENDER_MODE = GLenum::GL_RENDER_MODE;
static const GLenum GL_PERSPECTIVE_CORRECTION_HINT = GLenum::GL_PERSPECTIVE_CORRECTION_HINT;
static const GLenum GL_POINT_SMOOTH_HINT = GLenum::GL_POINT_SMOOTH_HINT;
static const GLenum GL_LINE_SMOOTH_HINT = GLenum::GL_LINE_SMOOTH_HINT;
static const GLenum GL_POLYGON_SMOOTH_HINT = GLenum::GL_POLYGON_SMOOTH_HINT;
static const GLenum GL_FOG_HINT = GLenum::GL_FOG_HINT;
// static const GLenum GL_TEXTURE_GEN_S = GLenum::GL_TEXTURE_GEN_S; // reuse EnableCap
// static const GLenum GL_TEXTURE_GEN_T = GLenum::GL_TEXTURE_GEN_T; // reuse EnableCap
// static const GLenum GL_TEXTURE_GEN_R = GLenum::GL_TEXTURE_GEN_R; // reuse EnableCap
// static const GLenum GL_TEXTURE_GEN_Q = GLenum::GL_TEXTURE_GEN_Q; // reuse EnableCap
static const GLenum GL_PIXEL_MAP_I_TO_I_SIZE = GLenum::GL_PIXEL_MAP_I_TO_I_SIZE;
static const GLenum GL_PIXEL_MAP_S_TO_S_SIZE = GLenum::GL_PIXEL_MAP_S_TO_S_SIZE;
static const GLenum GL_PIXEL_MAP_I_TO_R_SIZE = GLenum::GL_PIXEL_MAP_I_TO_R_SIZE;
static const GLenum GL_PIXEL_MAP_I_TO_G_SIZE = GLenum::GL_PIXEL_MAP_I_TO_G_SIZE;
static const GLenum GL_PIXEL_MAP_I_TO_B_SIZE = GLenum::GL_PIXEL_MAP_I_TO_B_SIZE;
static const GLenum GL_PIXEL_MAP_I_TO_A_SIZE = GLenum::GL_PIXEL_MAP_I_TO_A_SIZE;
static const GLenum GL_PIXEL_MAP_R_TO_R_SIZE = GLenum::GL_PIXEL_MAP_R_TO_R_SIZE;
static const GLenum GL_PIXEL_MAP_G_TO_G_SIZE = GLenum::GL_PIXEL_MAP_G_TO_G_SIZE;
static const GLenum GL_PIXEL_MAP_B_TO_B_SIZE = GLenum::GL_PIXEL_MAP_B_TO_B_SIZE;
static const GLenum GL_PIXEL_MAP_A_TO_A_SIZE = GLenum::GL_PIXEL_MAP_A_TO_A_SIZE;
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
static const GLenum GL_MAP_COLOR = GLenum::GL_MAP_COLOR;
static const GLenum GL_MAP_STENCIL = GLenum::GL_MAP_STENCIL;
static const GLenum GL_INDEX_SHIFT = GLenum::GL_INDEX_SHIFT;
static const GLenum GL_INDEX_OFFSET = GLenum::GL_INDEX_OFFSET;
static const GLenum GL_RED_SCALE = GLenum::GL_RED_SCALE;
static const GLenum GL_RED_BIAS = GLenum::GL_RED_BIAS;
static const GLenum GL_ZOOM_X = GLenum::GL_ZOOM_X;
static const GLenum GL_ZOOM_Y = GLenum::GL_ZOOM_Y;
static const GLenum GL_GREEN_SCALE = GLenum::GL_GREEN_SCALE;
static const GLenum GL_GREEN_BIAS = GLenum::GL_GREEN_BIAS;
static const GLenum GL_BLUE_SCALE = GLenum::GL_BLUE_SCALE;
static const GLenum GL_BLUE_BIAS = GLenum::GL_BLUE_BIAS;
static const GLenum GL_ALPHA_SCALE = GLenum::GL_ALPHA_SCALE;
static const GLenum GL_ALPHA_BIAS = GLenum::GL_ALPHA_BIAS;
static const GLenum GL_DEPTH_SCALE = GLenum::GL_DEPTH_SCALE;
static const GLenum GL_DEPTH_BIAS = GLenum::GL_DEPTH_BIAS;
static const GLenum GL_MAX_EVAL_ORDER = GLenum::GL_MAX_EVAL_ORDER;
static const GLenum GL_MAX_LIGHTS = GLenum::GL_MAX_LIGHTS;
static const GLenum GL_MAX_CLIP_DISTANCES = GLenum::GL_MAX_CLIP_DISTANCES;
static const GLenum GL_MAX_CLIP_PLANES = GLenum::GL_MAX_CLIP_PLANES;
static const GLenum GL_MAX_TEXTURE_SIZE = GLenum::GL_MAX_TEXTURE_SIZE;
static const GLenum GL_MAX_PIXEL_MAP_TABLE = GLenum::GL_MAX_PIXEL_MAP_TABLE;
static const GLenum GL_MAX_ATTRIB_STACK_DEPTH = GLenum::GL_MAX_ATTRIB_STACK_DEPTH;
static const GLenum GL_MAX_MODELVIEW_STACK_DEPTH = GLenum::GL_MAX_MODELVIEW_STACK_DEPTH;
static const GLenum GL_MAX_NAME_STACK_DEPTH = GLenum::GL_MAX_NAME_STACK_DEPTH;
static const GLenum GL_MAX_PROJECTION_STACK_DEPTH = GLenum::GL_MAX_PROJECTION_STACK_DEPTH;
static const GLenum GL_MAX_TEXTURE_STACK_DEPTH = GLenum::GL_MAX_TEXTURE_STACK_DEPTH;
static const GLenum GL_MAX_VIEWPORT_DIMS = GLenum::GL_MAX_VIEWPORT_DIMS;
static const GLenum GL_MAX_CLIENT_ATTRIB_STACK_DEPTH = GLenum::GL_MAX_CLIENT_ATTRIB_STACK_DEPTH;
static const GLenum GL_SUBPIXEL_BITS = GLenum::GL_SUBPIXEL_BITS;
static const GLenum GL_INDEX_BITS = GLenum::GL_INDEX_BITS;
static const GLenum GL_RED_BITS = GLenum::GL_RED_BITS;
static const GLenum GL_GREEN_BITS = GLenum::GL_GREEN_BITS;
static const GLenum GL_BLUE_BITS = GLenum::GL_BLUE_BITS;
static const GLenum GL_ALPHA_BITS = GLenum::GL_ALPHA_BITS;
static const GLenum GL_DEPTH_BITS = GLenum::GL_DEPTH_BITS;
static const GLenum GL_STENCIL_BITS = GLenum::GL_STENCIL_BITS;
static const GLenum GL_ACCUM_RED_BITS = GLenum::GL_ACCUM_RED_BITS;
static const GLenum GL_ACCUM_GREEN_BITS = GLenum::GL_ACCUM_GREEN_BITS;
static const GLenum GL_ACCUM_BLUE_BITS = GLenum::GL_ACCUM_BLUE_BITS;
static const GLenum GL_ACCUM_ALPHA_BITS = GLenum::GL_ACCUM_ALPHA_BITS;
static const GLenum GL_NAME_STACK_DEPTH = GLenum::GL_NAME_STACK_DEPTH;
// static const GLenum GL_AUTO_NORMAL = GLenum::GL_AUTO_NORMAL; // reuse EnableCap
// static const GLenum GL_MAP1_COLOR_4 = GLenum::GL_MAP1_COLOR_4; // reuse EnableCap
// static const GLenum GL_MAP1_INDEX = GLenum::GL_MAP1_INDEX; // reuse EnableCap
// static const GLenum GL_MAP1_NORMAL = GLenum::GL_MAP1_NORMAL; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_1 = GLenum::GL_MAP1_TEXTURE_COORD_1; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_2 = GLenum::GL_MAP1_TEXTURE_COORD_2; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_3 = GLenum::GL_MAP1_TEXTURE_COORD_3; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_4 = GLenum::GL_MAP1_TEXTURE_COORD_4; // reuse EnableCap
// static const GLenum GL_MAP1_VERTEX_3 = GLenum::GL_MAP1_VERTEX_3; // reuse EnableCap
// static const GLenum GL_MAP1_VERTEX_4 = GLenum::GL_MAP1_VERTEX_4; // reuse EnableCap
// static const GLenum GL_MAP2_COLOR_4 = GLenum::GL_MAP2_COLOR_4; // reuse EnableCap
// static const GLenum GL_MAP2_INDEX = GLenum::GL_MAP2_INDEX; // reuse EnableCap
// static const GLenum GL_MAP2_NORMAL = GLenum::GL_MAP2_NORMAL; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_1 = GLenum::GL_MAP2_TEXTURE_COORD_1; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_2 = GLenum::GL_MAP2_TEXTURE_COORD_2; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_3 = GLenum::GL_MAP2_TEXTURE_COORD_3; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_4 = GLenum::GL_MAP2_TEXTURE_COORD_4; // reuse EnableCap
// static const GLenum GL_MAP2_VERTEX_3 = GLenum::GL_MAP2_VERTEX_3; // reuse EnableCap
// static const GLenum GL_MAP2_VERTEX_4 = GLenum::GL_MAP2_VERTEX_4; // reuse EnableCap
static const GLenum GL_MAP1_GRID_DOMAIN = GLenum::GL_MAP1_GRID_DOMAIN;
static const GLenum GL_MAP1_GRID_SEGMENTS = GLenum::GL_MAP1_GRID_SEGMENTS;
static const GLenum GL_MAP2_GRID_DOMAIN = GLenum::GL_MAP2_GRID_DOMAIN;
static const GLenum GL_MAP2_GRID_SEGMENTS = GLenum::GL_MAP2_GRID_SEGMENTS;
// static const GLenum GL_TEXTURE_1D = GLenum::GL_TEXTURE_1D; // reuse EnableCap
// static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap
static const GLenum GL_FEEDBACK_BUFFER_SIZE = GLenum::GL_FEEDBACK_BUFFER_SIZE;
static const GLenum GL_FEEDBACK_BUFFER_TYPE = GLenum::GL_FEEDBACK_BUFFER_TYPE;
static const GLenum GL_SELECTION_BUFFER_SIZE = GLenum::GL_SELECTION_BUFFER_SIZE;
static const GLenum GL_POLYGON_OFFSET_UNITS = GLenum::GL_POLYGON_OFFSET_UNITS;
// static const GLenum GL_POLYGON_OFFSET_POINT = GLenum::GL_POLYGON_OFFSET_POINT; // reuse EnableCap
// static const GLenum GL_POLYGON_OFFSET_LINE = GLenum::GL_POLYGON_OFFSET_LINE; // reuse EnableCap
// static const GLenum GL_CLIP_PLANE0 = GLenum::GL_CLIP_PLANE0; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE1 = GLenum::GL_CLIP_PLANE1; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE2 = GLenum::GL_CLIP_PLANE2; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE3 = GLenum::GL_CLIP_PLANE3; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE4 = GLenum::GL_CLIP_PLANE4; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE5 = GLenum::GL_CLIP_PLANE5; // reuse ClipPlaneName
// static const GLenum GL_LIGHT0 = GLenum::GL_LIGHT0; // reuse EnableCap
// static const GLenum GL_LIGHT1 = GLenum::GL_LIGHT1; // reuse EnableCap
// static const GLenum GL_LIGHT2 = GLenum::GL_LIGHT2; // reuse EnableCap
// static const GLenum GL_LIGHT3 = GLenum::GL_LIGHT3; // reuse EnableCap
// static const GLenum GL_LIGHT4 = GLenum::GL_LIGHT4; // reuse EnableCap
// static const GLenum GL_LIGHT5 = GLenum::GL_LIGHT5; // reuse EnableCap
// static const GLenum GL_LIGHT6 = GLenum::GL_LIGHT6; // reuse EnableCap
// static const GLenum GL_LIGHT7 = GLenum::GL_LIGHT7; // reuse EnableCap
// static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
static const GLenum GL_POLYGON_OFFSET_FACTOR = GLenum::GL_POLYGON_OFFSET_FACTOR;
static const GLenum GL_TEXTURE_BINDING_1D = GLenum::GL_TEXTURE_BINDING_1D;
static const GLenum GL_TEXTURE_BINDING_2D = GLenum::GL_TEXTURE_BINDING_2D;
static const GLenum GL_TEXTURE_BINDING_3D = GLenum::GL_TEXTURE_BINDING_3D;
// static const GLenum GL_VERTEX_ARRAY = GLenum::GL_VERTEX_ARRAY; // reuse EnableCap
// static const GLenum GL_NORMAL_ARRAY = GLenum::GL_NORMAL_ARRAY; // reuse EnableCap
// static const GLenum GL_COLOR_ARRAY = GLenum::GL_COLOR_ARRAY; // reuse EnableCap
// static const GLenum GL_INDEX_ARRAY = GLenum::GL_INDEX_ARRAY; // reuse EnableCap
// static const GLenum GL_TEXTURE_COORD_ARRAY = GLenum::GL_TEXTURE_COORD_ARRAY; // reuse EnableCap
// static const GLenum GL_EDGE_FLAG_ARRAY = GLenum::GL_EDGE_FLAG_ARRAY; // reuse EnableCap
static const GLenum GL_VERTEX_ARRAY_SIZE = GLenum::GL_VERTEX_ARRAY_SIZE;
static const GLenum GL_VERTEX_ARRAY_TYPE = GLenum::GL_VERTEX_ARRAY_TYPE;
static const GLenum GL_VERTEX_ARRAY_STRIDE = GLenum::GL_VERTEX_ARRAY_STRIDE;
static const GLenum GL_NORMAL_ARRAY_TYPE = GLenum::GL_NORMAL_ARRAY_TYPE;
static const GLenum GL_NORMAL_ARRAY_STRIDE = GLenum::GL_NORMAL_ARRAY_STRIDE;
static const GLenum GL_COLOR_ARRAY_SIZE = GLenum::GL_COLOR_ARRAY_SIZE;
static const GLenum GL_COLOR_ARRAY_TYPE = GLenum::GL_COLOR_ARRAY_TYPE;
static const GLenum GL_COLOR_ARRAY_STRIDE = GLenum::GL_COLOR_ARRAY_STRIDE;
static const GLenum GL_INDEX_ARRAY_TYPE = GLenum::GL_INDEX_ARRAY_TYPE;
static const GLenum GL_INDEX_ARRAY_STRIDE = GLenum::GL_INDEX_ARRAY_STRIDE;
static const GLenum GL_TEXTURE_COORD_ARRAY_SIZE = GLenum::GL_TEXTURE_COORD_ARRAY_SIZE;
static const GLenum GL_TEXTURE_COORD_ARRAY_TYPE = GLenum::GL_TEXTURE_COORD_ARRAY_TYPE;
static const GLenum GL_TEXTURE_COORD_ARRAY_STRIDE = GLenum::GL_TEXTURE_COORD_ARRAY_STRIDE;
static const GLenum GL_EDGE_FLAG_ARRAY_STRIDE = GLenum::GL_EDGE_FLAG_ARRAY_STRIDE;
static const GLenum GL_LIGHT_MODEL_COLOR_CONTROL = GLenum::GL_LIGHT_MODEL_COLOR_CONTROL;
static const GLenum GL_ALIASED_POINT_SIZE_RANGE = GLenum::GL_ALIASED_POINT_SIZE_RANGE;
static const GLenum GL_ALIASED_LINE_WIDTH_RANGE = GLenum::GL_ALIASED_LINE_WIDTH_RANGE;

// GetPixelMap

static const GLenum GL_PIXEL_MAP_I_TO_I = GLenum::GL_PIXEL_MAP_I_TO_I;
static const GLenum GL_PIXEL_MAP_S_TO_S = GLenum::GL_PIXEL_MAP_S_TO_S;
static const GLenum GL_PIXEL_MAP_I_TO_R = GLenum::GL_PIXEL_MAP_I_TO_R;
static const GLenum GL_PIXEL_MAP_I_TO_G = GLenum::GL_PIXEL_MAP_I_TO_G;
static const GLenum GL_PIXEL_MAP_I_TO_B = GLenum::GL_PIXEL_MAP_I_TO_B;
static const GLenum GL_PIXEL_MAP_I_TO_A = GLenum::GL_PIXEL_MAP_I_TO_A;
static const GLenum GL_PIXEL_MAP_R_TO_R = GLenum::GL_PIXEL_MAP_R_TO_R;
static const GLenum GL_PIXEL_MAP_G_TO_G = GLenum::GL_PIXEL_MAP_G_TO_G;
static const GLenum GL_PIXEL_MAP_B_TO_B = GLenum::GL_PIXEL_MAP_B_TO_B;
static const GLenum GL_PIXEL_MAP_A_TO_A = GLenum::GL_PIXEL_MAP_A_TO_A;

// GetPointervPName

static const GLenum GL_FEEDBACK_BUFFER_POINTER = GLenum::GL_FEEDBACK_BUFFER_POINTER;
static const GLenum GL_SELECTION_BUFFER_POINTER = GLenum::GL_SELECTION_BUFFER_POINTER;
static const GLenum GL_VERTEX_ARRAY_POINTER = GLenum::GL_VERTEX_ARRAY_POINTER;
static const GLenum GL_NORMAL_ARRAY_POINTER = GLenum::GL_NORMAL_ARRAY_POINTER;
static const GLenum GL_COLOR_ARRAY_POINTER = GLenum::GL_COLOR_ARRAY_POINTER;
static const GLenum GL_INDEX_ARRAY_POINTER = GLenum::GL_INDEX_ARRAY_POINTER;
static const GLenum GL_TEXTURE_COORD_ARRAY_POINTER = GLenum::GL_TEXTURE_COORD_ARRAY_POINTER;
static const GLenum GL_EDGE_FLAG_ARRAY_POINTER = GLenum::GL_EDGE_FLAG_ARRAY_POINTER;

// GetTextureParameter

static const GLenum GL_TEXTURE_WIDTH = GLenum::GL_TEXTURE_WIDTH;
static const GLenum GL_TEXTURE_HEIGHT = GLenum::GL_TEXTURE_HEIGHT;
static const GLenum GL_TEXTURE_COMPONENTS = GLenum::GL_TEXTURE_COMPONENTS;
static const GLenum GL_TEXTURE_INTERNAL_FORMAT = GLenum::GL_TEXTURE_INTERNAL_FORMAT;
static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR;
static const GLenum GL_TEXTURE_BORDER = GLenum::GL_TEXTURE_BORDER;
static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER;
static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER;
static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S;
static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T;
static const GLenum GL_TEXTURE_RED_SIZE = GLenum::GL_TEXTURE_RED_SIZE;
static const GLenum GL_TEXTURE_GREEN_SIZE = GLenum::GL_TEXTURE_GREEN_SIZE;
static const GLenum GL_TEXTURE_BLUE_SIZE = GLenum::GL_TEXTURE_BLUE_SIZE;
static const GLenum GL_TEXTURE_ALPHA_SIZE = GLenum::GL_TEXTURE_ALPHA_SIZE;
static const GLenum GL_TEXTURE_LUMINANCE_SIZE = GLenum::GL_TEXTURE_LUMINANCE_SIZE;
static const GLenum GL_TEXTURE_INTENSITY_SIZE = GLenum::GL_TEXTURE_INTENSITY_SIZE;
static const GLenum GL_TEXTURE_PRIORITY = GLenum::GL_TEXTURE_PRIORITY;
static const GLenum GL_TEXTURE_RESIDENT = GLenum::GL_TEXTURE_RESIDENT;

// HintMode

static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE;
static const GLenum GL_FASTEST = GLenum::GL_FASTEST;
static const GLenum GL_NICEST = GLenum::GL_NICEST;

// HintTarget

// static const GLenum GL_PERSPECTIVE_CORRECTION_HINT = GLenum::GL_PERSPECTIVE_CORRECTION_HINT; // reuse GetPName
// static const GLenum GL_POINT_SMOOTH_HINT = GLenum::GL_POINT_SMOOTH_HINT; // reuse GetPName
// static const GLenum GL_LINE_SMOOTH_HINT = GLenum::GL_LINE_SMOOTH_HINT; // reuse GetPName
// static const GLenum GL_POLYGON_SMOOTH_HINT = GLenum::GL_POLYGON_SMOOTH_HINT; // reuse GetPName
// static const GLenum GL_FOG_HINT = GLenum::GL_FOG_HINT; // reuse GetPName
static const GLenum GL_GENERATE_MIPMAP_HINT = GLenum::GL_GENERATE_MIPMAP_HINT;
static const GLenum GL_PROGRAM_BINARY_RETRIEVABLE_HINT = GLenum::GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
static const GLenum GL_TEXTURE_COMPRESSION_HINT = GLenum::GL_TEXTURE_COMPRESSION_HINT;
static const GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT = GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;

// HistogramTargetEXT



// IndexPointerType

// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// InterleavedArrayFormat

static const GLenum GL_V2F = GLenum::GL_V2F;
static const GLenum GL_V3F = GLenum::GL_V3F;
static const GLenum GL_C4UB_V2F = GLenum::GL_C4UB_V2F;
static const GLenum GL_C4UB_V3F = GLenum::GL_C4UB_V3F;
static const GLenum GL_C3F_V3F = GLenum::GL_C3F_V3F;
static const GLenum GL_N3F_V3F = GLenum::GL_N3F_V3F;
static const GLenum GL_C4F_N3F_V3F = GLenum::GL_C4F_N3F_V3F;
static const GLenum GL_T2F_V3F = GLenum::GL_T2F_V3F;
static const GLenum GL_T4F_V4F = GLenum::GL_T4F_V4F;
static const GLenum GL_T2F_C4UB_V3F = GLenum::GL_T2F_C4UB_V3F;
static const GLenum GL_T2F_C3F_V3F = GLenum::GL_T2F_C3F_V3F;
static const GLenum GL_T2F_N3F_V3F = GLenum::GL_T2F_N3F_V3F;
static const GLenum GL_T2F_C4F_N3F_V3F = GLenum::GL_T2F_C4F_N3F_V3F;
static const GLenum GL_T4F_C4F_N3F_V4F = GLenum::GL_T4F_C4F_N3F_V4F;

// InternalFormat

static const GLenum GL_R3_G3_B2 = GLenum::GL_R3_G3_B2;
static const GLenum GL_ALPHA4 = GLenum::GL_ALPHA4;
static const GLenum GL_ALPHA8 = GLenum::GL_ALPHA8;
static const GLenum GL_ALPHA12 = GLenum::GL_ALPHA12;
static const GLenum GL_ALPHA16 = GLenum::GL_ALPHA16;
static const GLenum GL_LUMINANCE4 = GLenum::GL_LUMINANCE4;
static const GLenum GL_LUMINANCE8 = GLenum::GL_LUMINANCE8;
static const GLenum GL_LUMINANCE12 = GLenum::GL_LUMINANCE12;
static const GLenum GL_LUMINANCE16 = GLenum::GL_LUMINANCE16;
static const GLenum GL_LUMINANCE4_ALPHA4 = GLenum::GL_LUMINANCE4_ALPHA4;
static const GLenum GL_LUMINANCE6_ALPHA2 = GLenum::GL_LUMINANCE6_ALPHA2;
static const GLenum GL_LUMINANCE8_ALPHA8 = GLenum::GL_LUMINANCE8_ALPHA8;
static const GLenum GL_LUMINANCE12_ALPHA4 = GLenum::GL_LUMINANCE12_ALPHA4;
static const GLenum GL_LUMINANCE12_ALPHA12 = GLenum::GL_LUMINANCE12_ALPHA12;
static const GLenum GL_LUMINANCE16_ALPHA16 = GLenum::GL_LUMINANCE16_ALPHA16;
static const GLenum GL_INTENSITY = GLenum::GL_INTENSITY;
static const GLenum GL_INTENSITY4 = GLenum::GL_INTENSITY4;
static const GLenum GL_INTENSITY8 = GLenum::GL_INTENSITY8;
static const GLenum GL_INTENSITY12 = GLenum::GL_INTENSITY12;
static const GLenum GL_INTENSITY16 = GLenum::GL_INTENSITY16;
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

// static const GLenum GL_ADD = GLenum::GL_ADD; // reuse AccumOp
static const GLenum GL_REPLACE = GLenum::GL_REPLACE;
static const GLenum GL_MODULATE = GLenum::GL_MODULATE;

// LightEnvParameterSGIX



// LightModelColorControl

static const GLenum GL_SINGLE_COLOR = GLenum::GL_SINGLE_COLOR;
static const GLenum GL_SEPARATE_SPECULAR_COLOR = GLenum::GL_SEPARATE_SPECULAR_COLOR;

// LightModelParameter

// static const GLenum GL_LIGHT_MODEL_LOCAL_VIEWER = GLenum::GL_LIGHT_MODEL_LOCAL_VIEWER; // reuse GetPName
// static const GLenum GL_LIGHT_MODEL_TWO_SIDE = GLenum::GL_LIGHT_MODEL_TWO_SIDE; // reuse GetPName
// static const GLenum GL_LIGHT_MODEL_AMBIENT = GLenum::GL_LIGHT_MODEL_AMBIENT; // reuse GetPName
// static const GLenum GL_LIGHT_MODEL_COLOR_CONTROL = GLenum::GL_LIGHT_MODEL_COLOR_CONTROL; // reuse GetPName

// LightName

// static const GLenum GL_LIGHT0 = GLenum::GL_LIGHT0; // reuse EnableCap
// static const GLenum GL_LIGHT1 = GLenum::GL_LIGHT1; // reuse EnableCap
// static const GLenum GL_LIGHT2 = GLenum::GL_LIGHT2; // reuse EnableCap
// static const GLenum GL_LIGHT3 = GLenum::GL_LIGHT3; // reuse EnableCap
// static const GLenum GL_LIGHT4 = GLenum::GL_LIGHT4; // reuse EnableCap
// static const GLenum GL_LIGHT5 = GLenum::GL_LIGHT5; // reuse EnableCap
// static const GLenum GL_LIGHT6 = GLenum::GL_LIGHT6; // reuse EnableCap
// static const GLenum GL_LIGHT7 = GLenum::GL_LIGHT7; // reuse EnableCap

// LightParameter

// static const GLenum GL_AMBIENT = GLenum::GL_AMBIENT; // reuse ColorMaterialParameter
// static const GLenum GL_DIFFUSE = GLenum::GL_DIFFUSE; // reuse ColorMaterialParameter
// static const GLenum GL_SPECULAR = GLenum::GL_SPECULAR; // reuse ColorMaterialParameter
static const GLenum GL_POSITION = GLenum::GL_POSITION;
static const GLenum GL_SPOT_DIRECTION = GLenum::GL_SPOT_DIRECTION;
static const GLenum GL_SPOT_EXPONENT = GLenum::GL_SPOT_EXPONENT;
static const GLenum GL_SPOT_CUTOFF = GLenum::GL_SPOT_CUTOFF;
static const GLenum GL_CONSTANT_ATTENUATION = GLenum::GL_CONSTANT_ATTENUATION;
static const GLenum GL_LINEAR_ATTENUATION = GLenum::GL_LINEAR_ATTENUATION;
static const GLenum GL_QUADRATIC_ATTENUATION = GLenum::GL_QUADRATIC_ATTENUATION;

// ListMode

static const GLenum GL_COMPILE = GLenum::GL_COMPILE;
static const GLenum GL_COMPILE_AND_EXECUTE = GLenum::GL_COMPILE_AND_EXECUTE;

// ListNameType

// static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
static const GLenum GL_2_BYTES = GLenum::GL_2_BYTES;
static const GLenum GL_3_BYTES = GLenum::GL_3_BYTES;
static const GLenum GL_4_BYTES = GLenum::GL_4_BYTES;

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

// static const GLenum GL_MAP1_COLOR_4 = GLenum::GL_MAP1_COLOR_4; // reuse EnableCap
// static const GLenum GL_MAP1_INDEX = GLenum::GL_MAP1_INDEX; // reuse EnableCap
// static const GLenum GL_MAP1_NORMAL = GLenum::GL_MAP1_NORMAL; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_1 = GLenum::GL_MAP1_TEXTURE_COORD_1; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_2 = GLenum::GL_MAP1_TEXTURE_COORD_2; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_3 = GLenum::GL_MAP1_TEXTURE_COORD_3; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_4 = GLenum::GL_MAP1_TEXTURE_COORD_4; // reuse EnableCap
// static const GLenum GL_MAP1_VERTEX_3 = GLenum::GL_MAP1_VERTEX_3; // reuse EnableCap
// static const GLenum GL_MAP1_VERTEX_4 = GLenum::GL_MAP1_VERTEX_4; // reuse EnableCap
// static const GLenum GL_MAP2_COLOR_4 = GLenum::GL_MAP2_COLOR_4; // reuse EnableCap
// static const GLenum GL_MAP2_INDEX = GLenum::GL_MAP2_INDEX; // reuse EnableCap
// static const GLenum GL_MAP2_NORMAL = GLenum::GL_MAP2_NORMAL; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_1 = GLenum::GL_MAP2_TEXTURE_COORD_1; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_2 = GLenum::GL_MAP2_TEXTURE_COORD_2; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_3 = GLenum::GL_MAP2_TEXTURE_COORD_3; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_4 = GLenum::GL_MAP2_TEXTURE_COORD_4; // reuse EnableCap
// static const GLenum GL_MAP2_VERTEX_3 = GLenum::GL_MAP2_VERTEX_3; // reuse EnableCap
// static const GLenum GL_MAP2_VERTEX_4 = GLenum::GL_MAP2_VERTEX_4; // reuse EnableCap

// MapTextureFormatINTEL



// MaterialFace

// static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// MaterialParameter

// static const GLenum GL_AMBIENT = GLenum::GL_AMBIENT; // reuse ColorMaterialParameter
// static const GLenum GL_DIFFUSE = GLenum::GL_DIFFUSE; // reuse ColorMaterialParameter
// static const GLenum GL_SPECULAR = GLenum::GL_SPECULAR; // reuse ColorMaterialParameter
// static const GLenum GL_EMISSION = GLenum::GL_EMISSION; // reuse ColorMaterialParameter
static const GLenum GL_SHININESS = GLenum::GL_SHININESS;
// static const GLenum GL_AMBIENT_AND_DIFFUSE = GLenum::GL_AMBIENT_AND_DIFFUSE; // reuse ColorMaterialParameter
static const GLenum GL_COLOR_INDEXES = GLenum::GL_COLOR_INDEXES;

// MatrixMode

static const GLenum GL_MODELVIEW = GLenum::GL_MODELVIEW;
static const GLenum GL_PROJECTION = GLenum::GL_PROJECTION;
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
static const GLenum GL_COLOR_INDEX = GLenum::GL_COLOR_INDEX;
static const GLenum GL_STENCIL_INDEX = GLenum::GL_STENCIL_INDEX;
static const GLenum GL_DEPTH_COMPONENT = GLenum::GL_DEPTH_COMPONENT;
static const GLenum GL_RED = GLenum::GL_RED;
static const GLenum GL_GREEN = GLenum::GL_GREEN;
static const GLenum GL_BLUE = GLenum::GL_BLUE;
static const GLenum GL_ALPHA = GLenum::GL_ALPHA;
static const GLenum GL_RGB = GLenum::GL_RGB;
static const GLenum GL_RGBA = GLenum::GL_RGBA;
static const GLenum GL_LUMINANCE = GLenum::GL_LUMINANCE;
static const GLenum GL_LUMINANCE_ALPHA = GLenum::GL_LUMINANCE_ALPHA;

// PixelMap

// static const GLenum GL_PIXEL_MAP_I_TO_I = GLenum::GL_PIXEL_MAP_I_TO_I; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_S_TO_S = GLenum::GL_PIXEL_MAP_S_TO_S; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_I_TO_R = GLenum::GL_PIXEL_MAP_I_TO_R; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_I_TO_G = GLenum::GL_PIXEL_MAP_I_TO_G; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_I_TO_B = GLenum::GL_PIXEL_MAP_I_TO_B; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_I_TO_A = GLenum::GL_PIXEL_MAP_I_TO_A; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_R_TO_R = GLenum::GL_PIXEL_MAP_R_TO_R; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_G_TO_G = GLenum::GL_PIXEL_MAP_G_TO_G; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_B_TO_B = GLenum::GL_PIXEL_MAP_B_TO_B; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_A_TO_A = GLenum::GL_PIXEL_MAP_A_TO_A; // reuse GetPixelMap

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
// static const GLenum GL_LUMINANCE = GLenum::GL_LUMINANCE; // reuse PixelFormat
// static const GLenum GL_LUMINANCE_ALPHA = GLenum::GL_LUMINANCE_ALPHA; // reuse PixelFormat

// PixelTexGenParameterNameSGIS



// PixelTransferParameter

// static const GLenum GL_MAP_COLOR = GLenum::GL_MAP_COLOR; // reuse GetPName
// static const GLenum GL_MAP_STENCIL = GLenum::GL_MAP_STENCIL; // reuse GetPName
// static const GLenum GL_INDEX_SHIFT = GLenum::GL_INDEX_SHIFT; // reuse GetPName
// static const GLenum GL_INDEX_OFFSET = GLenum::GL_INDEX_OFFSET; // reuse GetPName
// static const GLenum GL_RED_SCALE = GLenum::GL_RED_SCALE; // reuse GetPName
// static const GLenum GL_RED_BIAS = GLenum::GL_RED_BIAS; // reuse GetPName
// static const GLenum GL_GREEN_SCALE = GLenum::GL_GREEN_SCALE; // reuse GetPName
// static const GLenum GL_GREEN_BIAS = GLenum::GL_GREEN_BIAS; // reuse GetPName
// static const GLenum GL_BLUE_SCALE = GLenum::GL_BLUE_SCALE; // reuse GetPName
// static const GLenum GL_BLUE_BIAS = GLenum::GL_BLUE_BIAS; // reuse GetPName
// static const GLenum GL_ALPHA_SCALE = GLenum::GL_ALPHA_SCALE; // reuse GetPName
// static const GLenum GL_ALPHA_BIAS = GLenum::GL_ALPHA_BIAS; // reuse GetPName
// static const GLenum GL_DEPTH_SCALE = GLenum::GL_DEPTH_SCALE; // reuse GetPName
// static const GLenum GL_DEPTH_BIAS = GLenum::GL_DEPTH_BIAS; // reuse GetPName

// PixelType

// static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
static const GLenum GL_BITMAP = GLenum::GL_BITMAP;
static const GLenum GL_UNSIGNED_BYTE_3_3_2 = GLenum::GL_UNSIGNED_BYTE_3_3_2;
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4 = GLenum::GL_UNSIGNED_SHORT_4_4_4_4;
static const GLenum GL_UNSIGNED_SHORT_5_5_5_1 = GLenum::GL_UNSIGNED_SHORT_5_5_5_1;
static const GLenum GL_UNSIGNED_INT_8_8_8_8 = GLenum::GL_UNSIGNED_INT_8_8_8_8;
static const GLenum GL_UNSIGNED_INT_10_10_10_2 = GLenum::GL_UNSIGNED_INT_10_10_10_2;

// PointParameterNameSGIS

static const GLenum GL_POINT_SIZE_MIN = GLenum::GL_POINT_SIZE_MIN;
static const GLenum GL_POINT_SIZE_MAX = GLenum::GL_POINT_SIZE_MAX;
static const GLenum GL_POINT_FADE_THRESHOLD_SIZE = GLenum::GL_POINT_FADE_THRESHOLD_SIZE;
static const GLenum GL_POINT_DISTANCE_ATTENUATION = GLenum::GL_POINT_DISTANCE_ATTENUATION;

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
static const GLenum GL_QUADS = GLenum::GL_QUADS;
static const GLenum GL_QUAD_STRIP = GLenum::GL_QUAD_STRIP;
static const GLenum GL_POLYGON = GLenum::GL_POLYGON;
static const GLenum GL_LINES_ADJACENCY = GLenum::GL_LINES_ADJACENCY;
static const GLenum GL_LINE_STRIP_ADJACENCY = GLenum::GL_LINE_STRIP_ADJACENCY;
static const GLenum GL_TRIANGLES_ADJACENCY = GLenum::GL_TRIANGLES_ADJACENCY;
static const GLenum GL_TRIANGLE_STRIP_ADJACENCY = GLenum::GL_TRIANGLE_STRIP_ADJACENCY;
static const GLenum GL_PATCHES = GLenum::GL_PATCHES;

// ReadBufferMode

// static const GLenum GL_FRONT_LEFT = GLenum::GL_FRONT_LEFT; // reuse DrawBufferMode
// static const GLenum GL_FRONT_RIGHT = GLenum::GL_FRONT_RIGHT; // reuse DrawBufferMode
// static const GLenum GL_BACK_LEFT = GLenum::GL_BACK_LEFT; // reuse DrawBufferMode
// static const GLenum GL_BACK_RIGHT = GLenum::GL_BACK_RIGHT; // reuse DrawBufferMode
// static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// static const GLenum GL_LEFT = GLenum::GL_LEFT; // reuse DrawBufferMode
// static const GLenum GL_RIGHT = GLenum::GL_RIGHT; // reuse DrawBufferMode
// static const GLenum GL_AUX0 = GLenum::GL_AUX0; // reuse DrawBufferMode
// static const GLenum GL_AUX1 = GLenum::GL_AUX1; // reuse DrawBufferMode
// static const GLenum GL_AUX2 = GLenum::GL_AUX2; // reuse DrawBufferMode
// static const GLenum GL_AUX3 = GLenum::GL_AUX3; // reuse DrawBufferMode

// RenderingMode

static const GLenum GL_RENDER = GLenum::GL_RENDER;
static const GLenum GL_FEEDBACK = GLenum::GL_FEEDBACK;
static const GLenum GL_SELECT = GLenum::GL_SELECT;

// SamplePatternSGIS



// SeparableTargetEXT



// ShadingModel

static const GLenum GL_FLAT = GLenum::GL_FLAT;
static const GLenum GL_SMOOTH = GLenum::GL_SMOOTH;

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

static const GLenum GL_S = GLenum::GL_S;
static const GLenum GL_T = GLenum::GL_T;
static const GLenum GL_R = GLenum::GL_R;
static const GLenum GL_Q = GLenum::GL_Q;

// TextureEnvMode

// static const GLenum GL_ADD = GLenum::GL_ADD; // reuse AccumOp
// static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap
// static const GLenum GL_MODULATE = GLenum::GL_MODULATE; // reuse LightEnvModeSGIX
static const GLenum GL_DECAL = GLenum::GL_DECAL;

// TextureEnvParameter

static const GLenum GL_TEXTURE_ENV_MODE = GLenum::GL_TEXTURE_ENV_MODE;
static const GLenum GL_TEXTURE_ENV_COLOR = GLenum::GL_TEXTURE_ENV_COLOR;

// TextureEnvTarget

static const GLenum GL_TEXTURE_ENV = GLenum::GL_TEXTURE_ENV;

// TextureFilterFuncSGIS



// TextureGenMode

static const GLenum GL_EYE_LINEAR = GLenum::GL_EYE_LINEAR;
static const GLenum GL_OBJECT_LINEAR = GLenum::GL_OBJECT_LINEAR;
static const GLenum GL_SPHERE_MAP = GLenum::GL_SPHERE_MAP;

// TextureGenParameter

static const GLenum GL_TEXTURE_GEN_MODE = GLenum::GL_TEXTURE_GEN_MODE;
static const GLenum GL_OBJECT_PLANE = GLenum::GL_OBJECT_PLANE;
static const GLenum GL_EYE_PLANE = GLenum::GL_EYE_PLANE;

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
// static const GLenum GL_TEXTURE_PRIORITY = GLenum::GL_TEXTURE_PRIORITY; // reuse GetTextureParameter
static const GLenum GL_TEXTURE_WRAP_R = GLenum::GL_TEXTURE_WRAP_R;
static const GLenum GL_GENERATE_MIPMAP = GLenum::GL_GENERATE_MIPMAP;

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

static const GLenum GL_CLAMP = GLenum::GL_CLAMP;
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
static const GLenum GL_FIXED = GLenum::GL_FIXED;
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
static const GLenum GL_RESCALE_NORMAL = GLenum::GL_RESCALE_NORMAL;
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
static const GLenum GL_BUFFER_IMMUTABLE_STORAGE = GLenum::GL_BUFFER_IMMUTABLE_STORAGE;
static const GLenum GL_BUFFER_STORAGE_FLAGS = GLenum::GL_BUFFER_STORAGE_FLAGS;
static const GLenum GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = GLenum::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED;
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
static const GLenum GL_DEBUG_OUTPUT_SYNCHRONOUS = GLenum::GL_DEBUG_OUTPUT_SYNCHRONOUS;
static const GLenum GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = GLenum::GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH;
static const GLenum GL_DEBUG_CALLBACK_FUNCTION = GLenum::GL_DEBUG_CALLBACK_FUNCTION;
static const GLenum GL_DEBUG_CALLBACK_USER_PARAM = GLenum::GL_DEBUG_CALLBACK_USER_PARAM;
static const GLenum GL_DEBUG_SOURCE_API = GLenum::GL_DEBUG_SOURCE_API;
static const GLenum GL_DEBUG_SOURCE_WINDOW_SYSTEM = GLenum::GL_DEBUG_SOURCE_WINDOW_SYSTEM;
static const GLenum GL_DEBUG_SOURCE_SHADER_COMPILER = GLenum::GL_DEBUG_SOURCE_SHADER_COMPILER;
static const GLenum GL_DEBUG_SOURCE_THIRD_PARTY = GLenum::GL_DEBUG_SOURCE_THIRD_PARTY;
static const GLenum GL_DEBUG_SOURCE_APPLICATION = GLenum::GL_DEBUG_SOURCE_APPLICATION;
static const GLenum GL_DEBUG_SOURCE_OTHER = GLenum::GL_DEBUG_SOURCE_OTHER;
static const GLenum GL_DEBUG_TYPE_ERROR = GLenum::GL_DEBUG_TYPE_ERROR;
static const GLenum GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = GLenum::GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR;
static const GLenum GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = GLenum::GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR;
static const GLenum GL_DEBUG_TYPE_PORTABILITY = GLenum::GL_DEBUG_TYPE_PORTABILITY;
static const GLenum GL_DEBUG_TYPE_PERFORMANCE = GLenum::GL_DEBUG_TYPE_PERFORMANCE;
static const GLenum GL_DEBUG_TYPE_OTHER = GLenum::GL_DEBUG_TYPE_OTHER;
static const GLenum GL_PROGRAM_SEPARABLE = GLenum::GL_PROGRAM_SEPARABLE;
static const GLenum GL_ACTIVE_PROGRAM = GLenum::GL_ACTIVE_PROGRAM;
static const GLenum GL_PROGRAM_PIPELINE_BINDING = GLenum::GL_PROGRAM_PIPELINE_BINDING;
static const GLenum GL_MAX_VIEWPORTS = GLenum::GL_MAX_VIEWPORTS;
static const GLenum GL_VIEWPORT_SUBPIXEL_BITS = GLenum::GL_VIEWPORT_SUBPIXEL_BITS;
static const GLenum GL_VIEWPORT_BOUNDS_RANGE = GLenum::GL_VIEWPORT_BOUNDS_RANGE;
static const GLenum GL_LAYER_PROVOKING_VERTEX = GLenum::GL_LAYER_PROVOKING_VERTEX;
static const GLenum GL_VIEWPORT_INDEX_PROVOKING_VERTEX = GLenum::GL_VIEWPORT_INDEX_PROVOKING_VERTEX;
static const GLenum GL_UNDEFINED_VERTEX = GLenum::GL_UNDEFINED_VERTEX;
static const GLenum GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = GLenum::GL_MAX_COMPUTE_SHARED_MEMORY_SIZE;
static const GLenum GL_MAX_COMPUTE_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMPUTE_UNIFORM_COMPONENTS;
static const GLenum GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS;
static const GLenum GL_MAX_COMPUTE_ATOMIC_COUNTERS = GLenum::GL_MAX_COMPUTE_ATOMIC_COUNTERS;
static const GLenum GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS;
static const GLenum GL_COMPUTE_WORK_GROUP_SIZE = GLenum::GL_COMPUTE_WORK_GROUP_SIZE;
static const GLenum GL_DEBUG_TYPE_MARKER = GLenum::GL_DEBUG_TYPE_MARKER;
static const GLenum GL_DEBUG_TYPE_PUSH_GROUP = GLenum::GL_DEBUG_TYPE_PUSH_GROUP;
static const GLenum GL_DEBUG_TYPE_POP_GROUP = GLenum::GL_DEBUG_TYPE_POP_GROUP;
static const GLenum GL_DEBUG_SEVERITY_NOTIFICATION = GLenum::GL_DEBUG_SEVERITY_NOTIFICATION;
static const GLenum GL_MAX_DEBUG_GROUP_STACK_DEPTH = GLenum::GL_MAX_DEBUG_GROUP_STACK_DEPTH;
static const GLenum GL_DEBUG_GROUP_STACK_DEPTH = GLenum::GL_DEBUG_GROUP_STACK_DEPTH;
static const GLenum GL_MAX_UNIFORM_LOCATIONS = GLenum::GL_MAX_UNIFORM_LOCATIONS;
static const GLenum GL_INTERNALFORMAT_SUPPORTED = GLenum::GL_INTERNALFORMAT_SUPPORTED;
static const GLenum GL_INTERNALFORMAT_PREFERRED = GLenum::GL_INTERNALFORMAT_PREFERRED;
static const GLenum GL_INTERNALFORMAT_RED_SIZE = GLenum::GL_INTERNALFORMAT_RED_SIZE;
static const GLenum GL_INTERNALFORMAT_GREEN_SIZE = GLenum::GL_INTERNALFORMAT_GREEN_SIZE;
static const GLenum GL_INTERNALFORMAT_BLUE_SIZE = GLenum::GL_INTERNALFORMAT_BLUE_SIZE;
static const GLenum GL_INTERNALFORMAT_ALPHA_SIZE = GLenum::GL_INTERNALFORMAT_ALPHA_SIZE;
static const GLenum GL_INTERNALFORMAT_DEPTH_SIZE = GLenum::GL_INTERNALFORMAT_DEPTH_SIZE;
static const GLenum GL_INTERNALFORMAT_STENCIL_SIZE = GLenum::GL_INTERNALFORMAT_STENCIL_SIZE;
static const GLenum GL_INTERNALFORMAT_SHARED_SIZE = GLenum::GL_INTERNALFORMAT_SHARED_SIZE;
static const GLenum GL_INTERNALFORMAT_RED_TYPE = GLenum::GL_INTERNALFORMAT_RED_TYPE;
static const GLenum GL_INTERNALFORMAT_GREEN_TYPE = GLenum::GL_INTERNALFORMAT_GREEN_TYPE;
static const GLenum GL_INTERNALFORMAT_BLUE_TYPE = GLenum::GL_INTERNALFORMAT_BLUE_TYPE;
static const GLenum GL_INTERNALFORMAT_ALPHA_TYPE = GLenum::GL_INTERNALFORMAT_ALPHA_TYPE;
static const GLenum GL_INTERNALFORMAT_DEPTH_TYPE = GLenum::GL_INTERNALFORMAT_DEPTH_TYPE;
static const GLenum GL_INTERNALFORMAT_STENCIL_TYPE = GLenum::GL_INTERNALFORMAT_STENCIL_TYPE;
static const GLenum GL_MAX_WIDTH = GLenum::GL_MAX_WIDTH;
static const GLenum GL_MAX_HEIGHT = GLenum::GL_MAX_HEIGHT;
static const GLenum GL_MAX_DEPTH = GLenum::GL_MAX_DEPTH;
static const GLenum GL_MAX_LAYERS = GLenum::GL_MAX_LAYERS;
static const GLenum GL_MAX_COMBINED_DIMENSIONS = GLenum::GL_MAX_COMBINED_DIMENSIONS;
static const GLenum GL_COLOR_COMPONENTS = GLenum::GL_COLOR_COMPONENTS;
static const GLenum GL_DEPTH_COMPONENTS = GLenum::GL_DEPTH_COMPONENTS;
static const GLenum GL_STENCIL_COMPONENTS = GLenum::GL_STENCIL_COMPONENTS;
static const GLenum GL_COLOR_RENDERABLE = GLenum::GL_COLOR_RENDERABLE;
static const GLenum GL_DEPTH_RENDERABLE = GLenum::GL_DEPTH_RENDERABLE;
static const GLenum GL_STENCIL_RENDERABLE = GLenum::GL_STENCIL_RENDERABLE;
static const GLenum GL_FRAMEBUFFER_RENDERABLE = GLenum::GL_FRAMEBUFFER_RENDERABLE;
static const GLenum GL_FRAMEBUFFER_RENDERABLE_LAYERED = GLenum::GL_FRAMEBUFFER_RENDERABLE_LAYERED;
static const GLenum GL_FRAMEBUFFER_BLEND = GLenum::GL_FRAMEBUFFER_BLEND;
static const GLenum GL_READ_PIXELS = GLenum::GL_READ_PIXELS;
static const GLenum GL_READ_PIXELS_FORMAT = GLenum::GL_READ_PIXELS_FORMAT;
static const GLenum GL_READ_PIXELS_TYPE = GLenum::GL_READ_PIXELS_TYPE;
static const GLenum GL_TEXTURE_IMAGE_FORMAT = GLenum::GL_TEXTURE_IMAGE_FORMAT;
static const GLenum GL_TEXTURE_IMAGE_TYPE = GLenum::GL_TEXTURE_IMAGE_TYPE;
static const GLenum GL_GET_TEXTURE_IMAGE_FORMAT = GLenum::GL_GET_TEXTURE_IMAGE_FORMAT;
static const GLenum GL_GET_TEXTURE_IMAGE_TYPE = GLenum::GL_GET_TEXTURE_IMAGE_TYPE;
static const GLenum GL_MIPMAP = GLenum::GL_MIPMAP;
static const GLenum GL_MANUAL_GENERATE_MIPMAP = GLenum::GL_MANUAL_GENERATE_MIPMAP;
static const GLenum GL_AUTO_GENERATE_MIPMAP = GLenum::GL_AUTO_GENERATE_MIPMAP;
static const GLenum GL_COLOR_ENCODING = GLenum::GL_COLOR_ENCODING;
static const GLenum GL_SRGB_READ = GLenum::GL_SRGB_READ;
static const GLenum GL_SRGB_WRITE = GLenum::GL_SRGB_WRITE;
static const GLenum GL_FILTER = GLenum::GL_FILTER;
static const GLenum GL_VERTEX_TEXTURE = GLenum::GL_VERTEX_TEXTURE;
static const GLenum GL_TESS_CONTROL_TEXTURE = GLenum::GL_TESS_CONTROL_TEXTURE;
static const GLenum GL_TESS_EVALUATION_TEXTURE = GLenum::GL_TESS_EVALUATION_TEXTURE;
static const GLenum GL_GEOMETRY_TEXTURE = GLenum::GL_GEOMETRY_TEXTURE;
static const GLenum GL_FRAGMENT_TEXTURE = GLenum::GL_FRAGMENT_TEXTURE;
static const GLenum GL_COMPUTE_TEXTURE = GLenum::GL_COMPUTE_TEXTURE;
static const GLenum GL_TEXTURE_SHADOW = GLenum::GL_TEXTURE_SHADOW;
static const GLenum GL_TEXTURE_GATHER = GLenum::GL_TEXTURE_GATHER;
static const GLenum GL_TEXTURE_GATHER_SHADOW = GLenum::GL_TEXTURE_GATHER_SHADOW;
static const GLenum GL_SHADER_IMAGE_LOAD = GLenum::GL_SHADER_IMAGE_LOAD;
static const GLenum GL_SHADER_IMAGE_STORE = GLenum::GL_SHADER_IMAGE_STORE;
static const GLenum GL_SHADER_IMAGE_ATOMIC = GLenum::GL_SHADER_IMAGE_ATOMIC;
static const GLenum GL_IMAGE_TEXEL_SIZE = GLenum::GL_IMAGE_TEXEL_SIZE;
static const GLenum GL_IMAGE_COMPATIBILITY_CLASS = GLenum::GL_IMAGE_COMPATIBILITY_CLASS;
static const GLenum GL_IMAGE_PIXEL_FORMAT = GLenum::GL_IMAGE_PIXEL_FORMAT;
static const GLenum GL_IMAGE_PIXEL_TYPE = GLenum::GL_IMAGE_PIXEL_TYPE;
static const GLenum GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST = GLenum::GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST;
static const GLenum GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST = GLenum::GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST;
static const GLenum GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE = GLenum::GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE;
static const GLenum GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE = GLenum::GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE;
static const GLenum GL_TEXTURE_COMPRESSED_BLOCK_WIDTH = GLenum::GL_TEXTURE_COMPRESSED_BLOCK_WIDTH;
static const GLenum GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT = GLenum::GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT;
static const GLenum GL_TEXTURE_COMPRESSED_BLOCK_SIZE = GLenum::GL_TEXTURE_COMPRESSED_BLOCK_SIZE;
static const GLenum GL_CLEAR_BUFFER = GLenum::GL_CLEAR_BUFFER;
static const GLenum GL_TEXTURE_VIEW = GLenum::GL_TEXTURE_VIEW;
static const GLenum GL_VIEW_COMPATIBILITY_CLASS = GLenum::GL_VIEW_COMPATIBILITY_CLASS;
static const GLenum GL_FULL_SUPPORT = GLenum::GL_FULL_SUPPORT;
static const GLenum GL_CAVEAT_SUPPORT = GLenum::GL_CAVEAT_SUPPORT;
static const GLenum GL_IMAGE_CLASS_4_X_32 = GLenum::GL_IMAGE_CLASS_4_X_32;
static const GLenum GL_IMAGE_CLASS_2_X_32 = GLenum::GL_IMAGE_CLASS_2_X_32;
static const GLenum GL_IMAGE_CLASS_1_X_32 = GLenum::GL_IMAGE_CLASS_1_X_32;
static const GLenum GL_IMAGE_CLASS_4_X_16 = GLenum::GL_IMAGE_CLASS_4_X_16;
static const GLenum GL_IMAGE_CLASS_2_X_16 = GLenum::GL_IMAGE_CLASS_2_X_16;
static const GLenum GL_IMAGE_CLASS_1_X_16 = GLenum::GL_IMAGE_CLASS_1_X_16;
static const GLenum GL_IMAGE_CLASS_4_X_8 = GLenum::GL_IMAGE_CLASS_4_X_8;
static const GLenum GL_IMAGE_CLASS_2_X_8 = GLenum::GL_IMAGE_CLASS_2_X_8;
static const GLenum GL_IMAGE_CLASS_1_X_8 = GLenum::GL_IMAGE_CLASS_1_X_8;
static const GLenum GL_IMAGE_CLASS_11_11_10 = GLenum::GL_IMAGE_CLASS_11_11_10;
static const GLenum GL_IMAGE_CLASS_10_10_10_2 = GLenum::GL_IMAGE_CLASS_10_10_10_2;
static const GLenum GL_VIEW_CLASS_128_BITS = GLenum::GL_VIEW_CLASS_128_BITS;
static const GLenum GL_VIEW_CLASS_96_BITS = GLenum::GL_VIEW_CLASS_96_BITS;
static const GLenum GL_VIEW_CLASS_64_BITS = GLenum::GL_VIEW_CLASS_64_BITS;
static const GLenum GL_VIEW_CLASS_48_BITS = GLenum::GL_VIEW_CLASS_48_BITS;
static const GLenum GL_VIEW_CLASS_32_BITS = GLenum::GL_VIEW_CLASS_32_BITS;
static const GLenum GL_VIEW_CLASS_24_BITS = GLenum::GL_VIEW_CLASS_24_BITS;
static const GLenum GL_VIEW_CLASS_16_BITS = GLenum::GL_VIEW_CLASS_16_BITS;
static const GLenum GL_VIEW_CLASS_8_BITS = GLenum::GL_VIEW_CLASS_8_BITS;
static const GLenum GL_VIEW_CLASS_S3TC_DXT1_RGB = GLenum::GL_VIEW_CLASS_S3TC_DXT1_RGB;
static const GLenum GL_VIEW_CLASS_S3TC_DXT1_RGBA = GLenum::GL_VIEW_CLASS_S3TC_DXT1_RGBA;
static const GLenum GL_VIEW_CLASS_S3TC_DXT3_RGBA = GLenum::GL_VIEW_CLASS_S3TC_DXT3_RGBA;
static const GLenum GL_VIEW_CLASS_S3TC_DXT5_RGBA = GLenum::GL_VIEW_CLASS_S3TC_DXT5_RGBA;
static const GLenum GL_VIEW_CLASS_RGTC1_RED = GLenum::GL_VIEW_CLASS_RGTC1_RED;
static const GLenum GL_VIEW_CLASS_RGTC2_RG = GLenum::GL_VIEW_CLASS_RGTC2_RG;
static const GLenum GL_VIEW_CLASS_BPTC_UNORM = GLenum::GL_VIEW_CLASS_BPTC_UNORM;
static const GLenum GL_VIEW_CLASS_BPTC_FLOAT = GLenum::GL_VIEW_CLASS_BPTC_FLOAT;
static const GLenum GL_VERTEX_ATTRIB_BINDING = GLenum::GL_VERTEX_ATTRIB_BINDING;
static const GLenum GL_VERTEX_ATTRIB_RELATIVE_OFFSET = GLenum::GL_VERTEX_ATTRIB_RELATIVE_OFFSET;
static const GLenum GL_VERTEX_BINDING_DIVISOR = GLenum::GL_VERTEX_BINDING_DIVISOR;
static const GLenum GL_VERTEX_BINDING_OFFSET = GLenum::GL_VERTEX_BINDING_OFFSET;
static const GLenum GL_VERTEX_BINDING_STRIDE = GLenum::GL_VERTEX_BINDING_STRIDE;
static const GLenum GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = GLenum::GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET;
static const GLenum GL_MAX_VERTEX_ATTRIB_BINDINGS = GLenum::GL_MAX_VERTEX_ATTRIB_BINDINGS;
static const GLenum GL_TEXTURE_VIEW_MIN_LEVEL = GLenum::GL_TEXTURE_VIEW_MIN_LEVEL;
static const GLenum GL_TEXTURE_VIEW_NUM_LEVELS = GLenum::GL_TEXTURE_VIEW_NUM_LEVELS;
static const GLenum GL_TEXTURE_VIEW_MIN_LAYER = GLenum::GL_TEXTURE_VIEW_MIN_LAYER;
static const GLenum GL_TEXTURE_VIEW_NUM_LAYERS = GLenum::GL_TEXTURE_VIEW_NUM_LAYERS;
static const GLenum GL_TEXTURE_IMMUTABLE_LEVELS = GLenum::GL_TEXTURE_IMMUTABLE_LEVELS;
static const GLenum GL_BUFFER = GLenum::GL_BUFFER;
static const GLenum GL_SHADER = GLenum::GL_SHADER;
static const GLenum GL_PROGRAM = GLenum::GL_PROGRAM;
static const GLenum GL_QUERY = GLenum::GL_QUERY;
static const GLenum GL_PROGRAM_PIPELINE = GLenum::GL_PROGRAM_PIPELINE;
static const GLenum GL_MAX_VERTEX_ATTRIB_STRIDE = GLenum::GL_MAX_VERTEX_ATTRIB_STRIDE;
static const GLenum GL_SAMPLER = GLenum::GL_SAMPLER;
static const GLenum GL_DISPLAY_LIST = GLenum::GL_DISPLAY_LIST;
static const GLenum GL_MAX_LABEL_LENGTH = GLenum::GL_MAX_LABEL_LENGTH;
static const GLenum GL_NUM_SHADING_LANGUAGE_VERSIONS = GLenum::GL_NUM_SHADING_LANGUAGE_VERSIONS;
static const GLenum GL_UNSIGNED_BYTE_2_3_3_REV = GLenum::GL_UNSIGNED_BYTE_2_3_3_REV;
static const GLenum GL_UNSIGNED_SHORT_5_6_5 = GLenum::GL_UNSIGNED_SHORT_5_6_5;
static const GLenum GL_UNSIGNED_SHORT_5_6_5_REV = GLenum::GL_UNSIGNED_SHORT_5_6_5_REV;
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV = GLenum::GL_UNSIGNED_SHORT_4_4_4_4_REV;
static const GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV = GLenum::GL_UNSIGNED_SHORT_1_5_5_5_REV;
static const GLenum GL_UNSIGNED_INT_8_8_8_8_REV = GLenum::GL_UNSIGNED_INT_8_8_8_8_REV;
static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV;
static const GLenum GL_MIRRORED_REPEAT = GLenum::GL_MIRRORED_REPEAT;
static const GLenum GL_FOG_COORDINATE_SOURCE = GLenum::GL_FOG_COORDINATE_SOURCE;
static const GLenum GL_FOG_COORD_SRC = GLenum::GL_FOG_COORD_SRC;
static const GLenum GL_FOG_COORD = GLenum::GL_FOG_COORD;
static const GLenum GL_FOG_COORDINATE = GLenum::GL_FOG_COORDINATE;
static const GLenum GL_FRAGMENT_DEPTH = GLenum::GL_FRAGMENT_DEPTH;
static const GLenum GL_CURRENT_FOG_COORD = GLenum::GL_CURRENT_FOG_COORD;
static const GLenum GL_CURRENT_FOG_COORDINATE = GLenum::GL_CURRENT_FOG_COORDINATE;
static const GLenum GL_FOG_COORDINATE_ARRAY_TYPE = GLenum::GL_FOG_COORDINATE_ARRAY_TYPE;
static const GLenum GL_FOG_COORD_ARRAY_TYPE = GLenum::GL_FOG_COORD_ARRAY_TYPE;
static const GLenum GL_FOG_COORDINATE_ARRAY_STRIDE = GLenum::GL_FOG_COORDINATE_ARRAY_STRIDE;
static const GLenum GL_FOG_COORD_ARRAY_STRIDE = GLenum::GL_FOG_COORD_ARRAY_STRIDE;
static const GLenum GL_FOG_COORDINATE_ARRAY_POINTER = GLenum::GL_FOG_COORDINATE_ARRAY_POINTER;
static const GLenum GL_FOG_COORD_ARRAY_POINTER = GLenum::GL_FOG_COORD_ARRAY_POINTER;
static const GLenum GL_FOG_COORDINATE_ARRAY = GLenum::GL_FOG_COORDINATE_ARRAY;
static const GLenum GL_FOG_COORD_ARRAY = GLenum::GL_FOG_COORD_ARRAY;
static const GLenum GL_COLOR_SUM = GLenum::GL_COLOR_SUM;
static const GLenum GL_CURRENT_SECONDARY_COLOR = GLenum::GL_CURRENT_SECONDARY_COLOR;
static const GLenum GL_SECONDARY_COLOR_ARRAY_SIZE = GLenum::GL_SECONDARY_COLOR_ARRAY_SIZE;
static const GLenum GL_SECONDARY_COLOR_ARRAY_TYPE = GLenum::GL_SECONDARY_COLOR_ARRAY_TYPE;
static const GLenum GL_SECONDARY_COLOR_ARRAY_STRIDE = GLenum::GL_SECONDARY_COLOR_ARRAY_STRIDE;
static const GLenum GL_SECONDARY_COLOR_ARRAY_POINTER = GLenum::GL_SECONDARY_COLOR_ARRAY_POINTER;
static const GLenum GL_SECONDARY_COLOR_ARRAY = GLenum::GL_SECONDARY_COLOR_ARRAY;
static const GLenum GL_CURRENT_RASTER_SECONDARY_COLOR = GLenum::GL_CURRENT_RASTER_SECONDARY_COLOR;
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
static const GLenum GL_CLIENT_ACTIVE_TEXTURE = GLenum::GL_CLIENT_ACTIVE_TEXTURE;
static const GLenum GL_MAX_TEXTURE_UNITS = GLenum::GL_MAX_TEXTURE_UNITS;
static const GLenum GL_TRANSPOSE_MODELVIEW_MATRIX = GLenum::GL_TRANSPOSE_MODELVIEW_MATRIX;
static const GLenum GL_TRANSPOSE_PROJECTION_MATRIX = GLenum::GL_TRANSPOSE_PROJECTION_MATRIX;
static const GLenum GL_TRANSPOSE_TEXTURE_MATRIX = GLenum::GL_TRANSPOSE_TEXTURE_MATRIX;
static const GLenum GL_TRANSPOSE_COLOR_MATRIX = GLenum::GL_TRANSPOSE_COLOR_MATRIX;
static const GLenum GL_SUBTRACT = GLenum::GL_SUBTRACT;
static const GLenum GL_MAX_RENDERBUFFER_SIZE = GLenum::GL_MAX_RENDERBUFFER_SIZE;
static const GLenum GL_COMPRESSED_ALPHA = GLenum::GL_COMPRESSED_ALPHA;
static const GLenum GL_COMPRESSED_LUMINANCE = GLenum::GL_COMPRESSED_LUMINANCE;
static const GLenum GL_COMPRESSED_LUMINANCE_ALPHA = GLenum::GL_COMPRESSED_LUMINANCE_ALPHA;
static const GLenum GL_COMPRESSED_INTENSITY = GLenum::GL_COMPRESSED_INTENSITY;
static const GLenum GL_COMPRESSED_RGB = GLenum::GL_COMPRESSED_RGB;
static const GLenum GL_COMPRESSED_RGBA = GLenum::GL_COMPRESSED_RGBA;
static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER;
static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER;
static const GLenum GL_TEXTURE_RECTANGLE = GLenum::GL_TEXTURE_RECTANGLE;
static const GLenum GL_TEXTURE_BINDING_RECTANGLE = GLenum::GL_TEXTURE_BINDING_RECTANGLE;
static const GLenum GL_PROXY_TEXTURE_RECTANGLE = GLenum::GL_PROXY_TEXTURE_RECTANGLE;
static const GLenum GL_MAX_RECTANGLE_TEXTURE_SIZE = GLenum::GL_MAX_RECTANGLE_TEXTURE_SIZE;
static const GLenum GL_DEPTH_STENCIL = GLenum::GL_DEPTH_STENCIL;
static const GLenum GL_UNSIGNED_INT_24_8 = GLenum::GL_UNSIGNED_INT_24_8;
static const GLenum GL_MAX_TEXTURE_LOD_BIAS = GLenum::GL_MAX_TEXTURE_LOD_BIAS;
static const GLenum GL_TEXTURE_FILTER_CONTROL = GLenum::GL_TEXTURE_FILTER_CONTROL;
static const GLenum GL_TEXTURE_LOD_BIAS = GLenum::GL_TEXTURE_LOD_BIAS;
static const GLenum GL_INCR_WRAP = GLenum::GL_INCR_WRAP;
static const GLenum GL_DECR_WRAP = GLenum::GL_DECR_WRAP;
static const GLenum GL_NORMAL_MAP = GLenum::GL_NORMAL_MAP;
static const GLenum GL_REFLECTION_MAP = GLenum::GL_REFLECTION_MAP;
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
static const GLenum GL_COMBINE = GLenum::GL_COMBINE;
static const GLenum GL_COMBINE_RGB = GLenum::GL_COMBINE_RGB;
static const GLenum GL_COMBINE_ALPHA = GLenum::GL_COMBINE_ALPHA;
static const GLenum GL_RGB_SCALE = GLenum::GL_RGB_SCALE;
static const GLenum GL_ADD_SIGNED = GLenum::GL_ADD_SIGNED;
static const GLenum GL_INTERPOLATE = GLenum::GL_INTERPOLATE;
static const GLenum GL_CONSTANT = GLenum::GL_CONSTANT;
static const GLenum GL_PRIMARY_COLOR = GLenum::GL_PRIMARY_COLOR;
static const GLenum GL_PREVIOUS = GLenum::GL_PREVIOUS;
static const GLenum GL_SOURCE0_RGB = GLenum::GL_SOURCE0_RGB;
static const GLenum GL_SRC0_RGB = GLenum::GL_SRC0_RGB;
static const GLenum GL_SOURCE1_RGB = GLenum::GL_SOURCE1_RGB;
static const GLenum GL_SRC1_RGB = GLenum::GL_SRC1_RGB;
static const GLenum GL_SOURCE2_RGB = GLenum::GL_SOURCE2_RGB;
static const GLenum GL_SRC2_RGB = GLenum::GL_SRC2_RGB;
static const GLenum GL_SOURCE0_ALPHA = GLenum::GL_SOURCE0_ALPHA;
static const GLenum GL_SRC0_ALPHA = GLenum::GL_SRC0_ALPHA;
static const GLenum GL_SOURCE1_ALPHA = GLenum::GL_SOURCE1_ALPHA;
static const GLenum GL_SRC1_ALPHA = GLenum::GL_SRC1_ALPHA;
static const GLenum GL_SOURCE2_ALPHA = GLenum::GL_SOURCE2_ALPHA;
static const GLenum GL_SRC2_ALPHA = GLenum::GL_SRC2_ALPHA;
static const GLenum GL_OPERAND0_RGB = GLenum::GL_OPERAND0_RGB;
static const GLenum GL_OPERAND1_RGB = GLenum::GL_OPERAND1_RGB;
static const GLenum GL_OPERAND2_RGB = GLenum::GL_OPERAND2_RGB;
static const GLenum GL_OPERAND0_ALPHA = GLenum::GL_OPERAND0_ALPHA;
static const GLenum GL_OPERAND1_ALPHA = GLenum::GL_OPERAND1_ALPHA;
static const GLenum GL_OPERAND2_ALPHA = GLenum::GL_OPERAND2_ALPHA;
static const GLenum GL_VERTEX_ARRAY_BINDING = GLenum::GL_VERTEX_ARRAY_BINDING;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE;
static const GLenum GL_CURRENT_VERTEX_ATTRIB = GLenum::GL_CURRENT_VERTEX_ATTRIB;
static const GLenum GL_PROGRAM_POINT_SIZE = GLenum::GL_PROGRAM_POINT_SIZE;
static const GLenum GL_VERTEX_PROGRAM_POINT_SIZE = GLenum::GL_VERTEX_PROGRAM_POINT_SIZE;
static const GLenum GL_VERTEX_PROGRAM_TWO_SIDE = GLenum::GL_VERTEX_PROGRAM_TWO_SIDE;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER = GLenum::GL_VERTEX_ATTRIB_ARRAY_POINTER;
static const GLenum GL_DEPTH_CLAMP = GLenum::GL_DEPTH_CLAMP;
static const GLenum GL_TEXTURE_COMPRESSED_IMAGE_SIZE = GLenum::GL_TEXTURE_COMPRESSED_IMAGE_SIZE;
static const GLenum GL_TEXTURE_COMPRESSED = GLenum::GL_TEXTURE_COMPRESSED;
static const GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
static const GLenum GL_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_COMPRESSED_TEXTURE_FORMATS;
static const GLenum GL_DOT3_RGB = GLenum::GL_DOT3_RGB;
static const GLenum GL_DOT3_RGBA = GLenum::GL_DOT3_RGBA;
static const GLenum GL_PROGRAM_BINARY_LENGTH = GLenum::GL_PROGRAM_BINARY_LENGTH;
static const GLenum GL_MIRROR_CLAMP_TO_EDGE = GLenum::GL_MIRROR_CLAMP_TO_EDGE;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_LONG = GLenum::GL_VERTEX_ATTRIB_ARRAY_LONG;
static const GLenum GL_BUFFER_SIZE = GLenum::GL_BUFFER_SIZE;
static const GLenum GL_BUFFER_USAGE = GLenum::GL_BUFFER_USAGE;
static const GLenum GL_NUM_PROGRAM_BINARY_FORMATS = GLenum::GL_NUM_PROGRAM_BINARY_FORMATS;
static const GLenum GL_PROGRAM_BINARY_FORMATS = GLenum::GL_PROGRAM_BINARY_FORMATS;
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
static const GLenum GL_DEPTH_TEXTURE_MODE = GLenum::GL_DEPTH_TEXTURE_MODE;
static const GLenum GL_TEXTURE_COMPARE_MODE = GLenum::GL_TEXTURE_COMPARE_MODE;
static const GLenum GL_TEXTURE_COMPARE_FUNC = GLenum::GL_TEXTURE_COMPARE_FUNC;
static const GLenum GL_COMPARE_REF_TO_TEXTURE = GLenum::GL_COMPARE_REF_TO_TEXTURE;
static const GLenum GL_COMPARE_R_TO_TEXTURE = GLenum::GL_COMPARE_R_TO_TEXTURE;
static const GLenum GL_TEXTURE_CUBE_MAP_SEAMLESS = GLenum::GL_TEXTURE_CUBE_MAP_SEAMLESS;
static const GLenum GL_POINT_SPRITE = GLenum::GL_POINT_SPRITE;
static const GLenum GL_COORD_REPLACE = GLenum::GL_COORD_REPLACE;
static const GLenum GL_QUERY_COUNTER_BITS = GLenum::GL_QUERY_COUNTER_BITS;
static const GLenum GL_CURRENT_QUERY = GLenum::GL_CURRENT_QUERY;
static const GLenum GL_QUERY_RESULT = GLenum::GL_QUERY_RESULT;
static const GLenum GL_QUERY_RESULT_AVAILABLE = GLenum::GL_QUERY_RESULT_AVAILABLE;
static const GLenum GL_MAX_VERTEX_ATTRIBS = GLenum::GL_MAX_VERTEX_ATTRIBS;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
static const GLenum GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
static const GLenum GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = GLenum::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
static const GLenum GL_MAX_TEXTURE_COORDS = GLenum::GL_MAX_TEXTURE_COORDS;
static const GLenum GL_MAX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TEXTURE_IMAGE_UNITS;
static const GLenum GL_GEOMETRY_SHADER_INVOCATIONS = GLenum::GL_GEOMETRY_SHADER_INVOCATIONS;
static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER;
static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER;
static const GLenum GL_ARRAY_BUFFER_BINDING = GLenum::GL_ARRAY_BUFFER_BINDING;
static const GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING = GLenum::GL_ELEMENT_ARRAY_BUFFER_BINDING;
static const GLenum GL_VERTEX_ARRAY_BUFFER_BINDING = GLenum::GL_VERTEX_ARRAY_BUFFER_BINDING;
static const GLenum GL_NORMAL_ARRAY_BUFFER_BINDING = GLenum::GL_NORMAL_ARRAY_BUFFER_BINDING;
static const GLenum GL_COLOR_ARRAY_BUFFER_BINDING = GLenum::GL_COLOR_ARRAY_BUFFER_BINDING;
static const GLenum GL_INDEX_ARRAY_BUFFER_BINDING = GLenum::GL_INDEX_ARRAY_BUFFER_BINDING;
static const GLenum GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = GLenum::GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING;
static const GLenum GL_EDGE_FLAG_ARRAY_BUFFER_BINDING = GLenum::GL_EDGE_FLAG_ARRAY_BUFFER_BINDING;
static const GLenum GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING = GLenum::GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING;
static const GLenum GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING = GLenum::GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING;
static const GLenum GL_FOG_COORD_ARRAY_BUFFER_BINDING = GLenum::GL_FOG_COORD_ARRAY_BUFFER_BINDING;
static const GLenum GL_WEIGHT_ARRAY_BUFFER_BINDING = GLenum::GL_WEIGHT_ARRAY_BUFFER_BINDING;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = GLenum::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
static const GLenum GL_READ_ONLY = GLenum::GL_READ_ONLY;
static const GLenum GL_WRITE_ONLY = GLenum::GL_WRITE_ONLY;
static const GLenum GL_READ_WRITE = GLenum::GL_READ_WRITE;
static const GLenum GL_BUFFER_ACCESS = GLenum::GL_BUFFER_ACCESS;
static const GLenum GL_BUFFER_MAPPED = GLenum::GL_BUFFER_MAPPED;
static const GLenum GL_BUFFER_MAP_POINTER = GLenum::GL_BUFFER_MAP_POINTER;
static const GLenum GL_TIME_ELAPSED = GLenum::GL_TIME_ELAPSED;
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
static const GLenum GL_SRC1_COLOR = GLenum::GL_SRC1_COLOR;
static const GLenum GL_ONE_MINUS_SRC1_COLOR = GLenum::GL_ONE_MINUS_SRC1_COLOR;
static const GLenum GL_ONE_MINUS_SRC1_ALPHA = GLenum::GL_ONE_MINUS_SRC1_ALPHA;
static const GLenum GL_MAX_DUAL_SOURCE_DRAW_BUFFERS = GLenum::GL_MAX_DUAL_SOURCE_DRAW_BUFFERS;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_INTEGER = GLenum::GL_VERTEX_ATTRIB_ARRAY_INTEGER;
static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR;
static const GLenum GL_MAX_ARRAY_TEXTURE_LAYERS = GLenum::GL_MAX_ARRAY_TEXTURE_LAYERS;
static const GLenum GL_MIN_PROGRAM_TEXEL_OFFSET = GLenum::GL_MIN_PROGRAM_TEXEL_OFFSET;
static const GLenum GL_MAX_PROGRAM_TEXEL_OFFSET = GLenum::GL_MAX_PROGRAM_TEXEL_OFFSET;
static const GLenum GL_SAMPLES_PASSED = GLenum::GL_SAMPLES_PASSED;
static const GLenum GL_GEOMETRY_VERTICES_OUT = GLenum::GL_GEOMETRY_VERTICES_OUT;
static const GLenum GL_GEOMETRY_INPUT_TYPE = GLenum::GL_GEOMETRY_INPUT_TYPE;
static const GLenum GL_GEOMETRY_OUTPUT_TYPE = GLenum::GL_GEOMETRY_OUTPUT_TYPE;
static const GLenum GL_SAMPLER_BINDING = GLenum::GL_SAMPLER_BINDING;
static const GLenum GL_CLAMP_VERTEX_COLOR = GLenum::GL_CLAMP_VERTEX_COLOR;
static const GLenum GL_CLAMP_FRAGMENT_COLOR = GLenum::GL_CLAMP_FRAGMENT_COLOR;
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
static const GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE = GLenum::GL_IMPLEMENTATION_COLOR_READ_TYPE;
static const GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT = GLenum::GL_IMPLEMENTATION_COLOR_READ_FORMAT;
static const GLenum GL_TEXTURE_RED_TYPE = GLenum::GL_TEXTURE_RED_TYPE;
static const GLenum GL_TEXTURE_GREEN_TYPE = GLenum::GL_TEXTURE_GREEN_TYPE;
static const GLenum GL_TEXTURE_BLUE_TYPE = GLenum::GL_TEXTURE_BLUE_TYPE;
static const GLenum GL_TEXTURE_ALPHA_TYPE = GLenum::GL_TEXTURE_ALPHA_TYPE;
static const GLenum GL_TEXTURE_LUMINANCE_TYPE = GLenum::GL_TEXTURE_LUMINANCE_TYPE;
static const GLenum GL_TEXTURE_INTENSITY_TYPE = GLenum::GL_TEXTURE_INTENSITY_TYPE;
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
static const GLenum GL_TEXTURE_BUFFER_BINDING = GLenum::GL_TEXTURE_BUFFER_BINDING;
static const GLenum GL_MAX_TEXTURE_BUFFER_SIZE = GLenum::GL_MAX_TEXTURE_BUFFER_SIZE;
static const GLenum GL_TEXTURE_BINDING_BUFFER = GLenum::GL_TEXTURE_BINDING_BUFFER;
static const GLenum GL_TEXTURE_BUFFER_DATA_STORE_BINDING = GLenum::GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
static const GLenum GL_ANY_SAMPLES_PASSED = GLenum::GL_ANY_SAMPLES_PASSED;
static const GLenum GL_SAMPLE_SHADING = GLenum::GL_SAMPLE_SHADING;
static const GLenum GL_MIN_SAMPLE_SHADING_VALUE = GLenum::GL_MIN_SAMPLE_SHADING_VALUE;
static const GLenum GL_R11F_G11F_B10F = GLenum::GL_R11F_G11F_B10F;
static const GLenum GL_UNSIGNED_INT_10F_11F_11F_REV = GLenum::GL_UNSIGNED_INT_10F_11F_11F_REV;
static const GLenum GL_RGB9_E5 = GLenum::GL_RGB9_E5;
static const GLenum GL_UNSIGNED_INT_5_9_9_9_REV = GLenum::GL_UNSIGNED_INT_5_9_9_9_REV;
static const GLenum GL_TEXTURE_SHARED_SIZE = GLenum::GL_TEXTURE_SHARED_SIZE;
static const GLenum GL_SRGB = GLenum::GL_SRGB;
static const GLenum GL_SRGB8 = GLenum::GL_SRGB8;
static const GLenum GL_SRGB_ALPHA = GLenum::GL_SRGB_ALPHA;
static const GLenum GL_SRGB8_ALPHA8 = GLenum::GL_SRGB8_ALPHA8;
static const GLenum GL_SLUMINANCE_ALPHA = GLenum::GL_SLUMINANCE_ALPHA;
static const GLenum GL_SLUMINANCE8_ALPHA8 = GLenum::GL_SLUMINANCE8_ALPHA8;
static const GLenum GL_SLUMINANCE = GLenum::GL_SLUMINANCE;
static const GLenum GL_SLUMINANCE8 = GLenum::GL_SLUMINANCE8;
static const GLenum GL_COMPRESSED_SRGB = GLenum::GL_COMPRESSED_SRGB;
static const GLenum GL_COMPRESSED_SRGB_ALPHA = GLenum::GL_COMPRESSED_SRGB_ALPHA;
static const GLenum GL_COMPRESSED_SLUMINANCE = GLenum::GL_COMPRESSED_SLUMINANCE;
static const GLenum GL_COMPRESSED_SLUMINANCE_ALPHA = GLenum::GL_COMPRESSED_SLUMINANCE_ALPHA;
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
static const GLenum GL_RGB565 = GLenum::GL_RGB565;
static const GLenum GL_PRIMITIVE_RESTART_FIXED_INDEX = GLenum::GL_PRIMITIVE_RESTART_FIXED_INDEX;
static const GLenum GL_ANY_SAMPLES_PASSED_CONSERVATIVE = GLenum::GL_ANY_SAMPLES_PASSED_CONSERVATIVE;
static const GLenum GL_MAX_ELEMENT_INDEX = GLenum::GL_MAX_ELEMENT_INDEX;
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
static const GLenum GL_ALPHA_INTEGER = GLenum::GL_ALPHA_INTEGER;
static const GLenum GL_RGB_INTEGER = GLenum::GL_RGB_INTEGER;
static const GLenum GL_RGBA_INTEGER = GLenum::GL_RGBA_INTEGER;
static const GLenum GL_BGR_INTEGER = GLenum::GL_BGR_INTEGER;
static const GLenum GL_BGRA_INTEGER = GLenum::GL_BGRA_INTEGER;
static const GLenum GL_INT_2_10_10_10_REV = GLenum::GL_INT_2_10_10_10_REV;
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
static const GLenum GL_ACTIVE_SUBROUTINES = GLenum::GL_ACTIVE_SUBROUTINES;
static const GLenum GL_ACTIVE_SUBROUTINE_UNIFORMS = GLenum::GL_ACTIVE_SUBROUTINE_UNIFORMS;
static const GLenum GL_MAX_SUBROUTINES = GLenum::GL_MAX_SUBROUTINES;
static const GLenum GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS = GLenum::GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS;
static const GLenum GL_LOW_FLOAT = GLenum::GL_LOW_FLOAT;
static const GLenum GL_MEDIUM_FLOAT = GLenum::GL_MEDIUM_FLOAT;
static const GLenum GL_HIGH_FLOAT = GLenum::GL_HIGH_FLOAT;
static const GLenum GL_LOW_INT = GLenum::GL_LOW_INT;
static const GLenum GL_MEDIUM_INT = GLenum::GL_MEDIUM_INT;
static const GLenum GL_HIGH_INT = GLenum::GL_HIGH_INT;
static const GLenum GL_SHADER_BINARY_FORMATS = GLenum::GL_SHADER_BINARY_FORMATS;
static const GLenum GL_NUM_SHADER_BINARY_FORMATS = GLenum::GL_NUM_SHADER_BINARY_FORMATS;
static const GLenum GL_SHADER_COMPILER = GLenum::GL_SHADER_COMPILER;
static const GLenum GL_MAX_VERTEX_UNIFORM_VECTORS = GLenum::GL_MAX_VERTEX_UNIFORM_VECTORS;
static const GLenum GL_MAX_VARYING_VECTORS = GLenum::GL_MAX_VARYING_VECTORS;
static const GLenum GL_MAX_FRAGMENT_UNIFORM_VECTORS = GLenum::GL_MAX_FRAGMENT_UNIFORM_VECTORS;
static const GLenum GL_QUERY_WAIT = GLenum::GL_QUERY_WAIT;
static const GLenum GL_QUERY_NO_WAIT = GLenum::GL_QUERY_NO_WAIT;
static const GLenum GL_QUERY_BY_REGION_WAIT = GLenum::GL_QUERY_BY_REGION_WAIT;
static const GLenum GL_QUERY_BY_REGION_NO_WAIT = GLenum::GL_QUERY_BY_REGION_NO_WAIT;
static const GLenum GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS;
static const GLenum GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS;
static const GLenum GL_TRANSFORM_FEEDBACK = GLenum::GL_TRANSFORM_FEEDBACK;
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED;
static const GLenum GL_TRANSFORM_FEEDBACK_PAUSED = GLenum::GL_TRANSFORM_FEEDBACK_PAUSED;
static const GLenum GL_TRANSFORM_FEEDBACK_ACTIVE = GLenum::GL_TRANSFORM_FEEDBACK_ACTIVE;
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE;
static const GLenum GL_TRANSFORM_FEEDBACK_BINDING = GLenum::GL_TRANSFORM_FEEDBACK_BINDING;
static const GLenum GL_TIMESTAMP = GLenum::GL_TIMESTAMP;
static const GLenum GL_TEXTURE_SWIZZLE_R = GLenum::GL_TEXTURE_SWIZZLE_R;
static const GLenum GL_TEXTURE_SWIZZLE_G = GLenum::GL_TEXTURE_SWIZZLE_G;
static const GLenum GL_TEXTURE_SWIZZLE_B = GLenum::GL_TEXTURE_SWIZZLE_B;
static const GLenum GL_TEXTURE_SWIZZLE_A = GLenum::GL_TEXTURE_SWIZZLE_A;
static const GLenum GL_TEXTURE_SWIZZLE_RGBA = GLenum::GL_TEXTURE_SWIZZLE_RGBA;
static const GLenum GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS = GLenum::GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS;
static const GLenum GL_ACTIVE_SUBROUTINE_MAX_LENGTH = GLenum::GL_ACTIVE_SUBROUTINE_MAX_LENGTH;
static const GLenum GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH = GLenum::GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH;
static const GLenum GL_NUM_COMPATIBLE_SUBROUTINES = GLenum::GL_NUM_COMPATIBLE_SUBROUTINES;
static const GLenum GL_COMPATIBLE_SUBROUTINES = GLenum::GL_COMPATIBLE_SUBROUTINES;
static const GLenum GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = GLenum::GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION;
static const GLenum GL_FIRST_VERTEX_CONVENTION = GLenum::GL_FIRST_VERTEX_CONVENTION;
static const GLenum GL_LAST_VERTEX_CONVENTION = GLenum::GL_LAST_VERTEX_CONVENTION;
static const GLenum GL_PROVOKING_VERTEX = GLenum::GL_PROVOKING_VERTEX;
static const GLenum GL_SAMPLE_POSITION = GLenum::GL_SAMPLE_POSITION;
static const GLenum GL_SAMPLE_MASK = GLenum::GL_SAMPLE_MASK;
static const GLenum GL_SAMPLE_MASK_VALUE = GLenum::GL_SAMPLE_MASK_VALUE;
static const GLenum GL_MAX_SAMPLE_MASK_WORDS = GLenum::GL_MAX_SAMPLE_MASK_WORDS;
static const GLenum GL_MAX_GEOMETRY_SHADER_INVOCATIONS = GLenum::GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
static const GLenum GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = GLenum::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET;
static const GLenum GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = GLenum::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET;
static const GLenum GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = GLenum::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS;
static const GLenum GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = GLenum::GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
static const GLenum GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = GLenum::GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
static const GLenum GL_MAX_TRANSFORM_FEEDBACK_BUFFERS = GLenum::GL_MAX_TRANSFORM_FEEDBACK_BUFFERS;
static const GLenum GL_MAX_VERTEX_STREAMS = GLenum::GL_MAX_VERTEX_STREAMS;
static const GLenum GL_PATCH_VERTICES = GLenum::GL_PATCH_VERTICES;
static const GLenum GL_PATCH_DEFAULT_INNER_LEVEL = GLenum::GL_PATCH_DEFAULT_INNER_LEVEL;
static const GLenum GL_PATCH_DEFAULT_OUTER_LEVEL = GLenum::GL_PATCH_DEFAULT_OUTER_LEVEL;
static const GLenum GL_TESS_CONTROL_OUTPUT_VERTICES = GLenum::GL_TESS_CONTROL_OUTPUT_VERTICES;
static const GLenum GL_TESS_GEN_MODE = GLenum::GL_TESS_GEN_MODE;
static const GLenum GL_TESS_GEN_SPACING = GLenum::GL_TESS_GEN_SPACING;
static const GLenum GL_TESS_GEN_VERTEX_ORDER = GLenum::GL_TESS_GEN_VERTEX_ORDER;
static const GLenum GL_TESS_GEN_POINT_MODE = GLenum::GL_TESS_GEN_POINT_MODE;
static const GLenum GL_ISOLINES = GLenum::GL_ISOLINES;
static const GLenum GL_FRACTIONAL_ODD = GLenum::GL_FRACTIONAL_ODD;
static const GLenum GL_FRACTIONAL_EVEN = GLenum::GL_FRACTIONAL_EVEN;
static const GLenum GL_MAX_PATCH_VERTICES = GLenum::GL_MAX_PATCH_VERTICES;
static const GLenum GL_MAX_TESS_GEN_LEVEL = GLenum::GL_MAX_TESS_GEN_LEVEL;
static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS;
static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS;
static const GLenum GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS;
static const GLenum GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS;
static const GLenum GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
static const GLenum GL_MAX_TESS_PATCH_COMPONENTS = GLenum::GL_MAX_TESS_PATCH_COMPONENTS;
static const GLenum GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS;
static const GLenum GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = GLenum::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
static const GLenum GL_TESS_EVALUATION_SHADER = GLenum::GL_TESS_EVALUATION_SHADER;
static const GLenum GL_TESS_CONTROL_SHADER = GLenum::GL_TESS_CONTROL_SHADER;
static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS;
static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS;
static const GLenum GL_COMPRESSED_RGBA_BPTC_UNORM = GLenum::GL_COMPRESSED_RGBA_BPTC_UNORM;
static const GLenum GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM = GLenum::GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM;
static const GLenum GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT = GLenum::GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT;
static const GLenum GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = GLenum::GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT;
static const GLenum GL_COPY_READ_BUFFER = GLenum::GL_COPY_READ_BUFFER;
static const GLenum GL_COPY_READ_BUFFER_BINDING = GLenum::GL_COPY_READ_BUFFER_BINDING;
static const GLenum GL_COPY_WRITE_BUFFER = GLenum::GL_COPY_WRITE_BUFFER;
static const GLenum GL_COPY_WRITE_BUFFER_BINDING = GLenum::GL_COPY_WRITE_BUFFER_BINDING;
static const GLenum GL_MAX_IMAGE_UNITS = GLenum::GL_MAX_IMAGE_UNITS;
static const GLenum GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS = GLenum::GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS;
static const GLenum GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = GLenum::GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES;
static const GLenum GL_IMAGE_BINDING_NAME = GLenum::GL_IMAGE_BINDING_NAME;
static const GLenum GL_IMAGE_BINDING_LEVEL = GLenum::GL_IMAGE_BINDING_LEVEL;
static const GLenum GL_IMAGE_BINDING_LAYERED = GLenum::GL_IMAGE_BINDING_LAYERED;
static const GLenum GL_IMAGE_BINDING_LAYER = GLenum::GL_IMAGE_BINDING_LAYER;
static const GLenum GL_IMAGE_BINDING_ACCESS = GLenum::GL_IMAGE_BINDING_ACCESS;
static const GLenum GL_DRAW_INDIRECT_BUFFER = GLenum::GL_DRAW_INDIRECT_BUFFER;
static const GLenum GL_DRAW_INDIRECT_BUFFER_BINDING = GLenum::GL_DRAW_INDIRECT_BUFFER_BINDING;
static const GLenum GL_DOUBLE_MAT2 = GLenum::GL_DOUBLE_MAT2;
static const GLenum GL_DOUBLE_MAT3 = GLenum::GL_DOUBLE_MAT3;
static const GLenum GL_DOUBLE_MAT4 = GLenum::GL_DOUBLE_MAT4;
static const GLenum GL_DOUBLE_MAT2x3 = GLenum::GL_DOUBLE_MAT2x3;
static const GLenum GL_DOUBLE_MAT2x4 = GLenum::GL_DOUBLE_MAT2x4;
static const GLenum GL_DOUBLE_MAT3x2 = GLenum::GL_DOUBLE_MAT3x2;
static const GLenum GL_DOUBLE_MAT3x4 = GLenum::GL_DOUBLE_MAT3x4;
static const GLenum GL_DOUBLE_MAT4x2 = GLenum::GL_DOUBLE_MAT4x2;
static const GLenum GL_DOUBLE_MAT4x3 = GLenum::GL_DOUBLE_MAT4x3;
static const GLenum GL_VERTEX_BINDING_BUFFER = GLenum::GL_VERTEX_BINDING_BUFFER;
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
static const GLenum GL_DOUBLE_VEC2 = GLenum::GL_DOUBLE_VEC2;
static const GLenum GL_DOUBLE_VEC3 = GLenum::GL_DOUBLE_VEC3;
static const GLenum GL_DOUBLE_VEC4 = GLenum::GL_DOUBLE_VEC4;
static const GLenum GL_TEXTURE_CUBE_MAP_ARRAY = GLenum::GL_TEXTURE_CUBE_MAP_ARRAY;
static const GLenum GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = GLenum::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY;
static const GLenum GL_PROXY_TEXTURE_CUBE_MAP_ARRAY = GLenum::GL_PROXY_TEXTURE_CUBE_MAP_ARRAY;
static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY;
static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW;
static const GLenum GL_INT_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_INT_SAMPLER_CUBE_MAP_ARRAY;
static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY;
static const GLenum GL_IMAGE_1D = GLenum::GL_IMAGE_1D;
static const GLenum GL_IMAGE_2D = GLenum::GL_IMAGE_2D;
static const GLenum GL_IMAGE_3D = GLenum::GL_IMAGE_3D;
static const GLenum GL_IMAGE_2D_RECT = GLenum::GL_IMAGE_2D_RECT;
static const GLenum GL_IMAGE_CUBE = GLenum::GL_IMAGE_CUBE;
static const GLenum GL_IMAGE_BUFFER = GLenum::GL_IMAGE_BUFFER;
static const GLenum GL_IMAGE_1D_ARRAY = GLenum::GL_IMAGE_1D_ARRAY;
static const GLenum GL_IMAGE_2D_ARRAY = GLenum::GL_IMAGE_2D_ARRAY;
static const GLenum GL_IMAGE_CUBE_MAP_ARRAY = GLenum::GL_IMAGE_CUBE_MAP_ARRAY;
static const GLenum GL_IMAGE_2D_MULTISAMPLE = GLenum::GL_IMAGE_2D_MULTISAMPLE;
static const GLenum GL_IMAGE_2D_MULTISAMPLE_ARRAY = GLenum::GL_IMAGE_2D_MULTISAMPLE_ARRAY;
static const GLenum GL_INT_IMAGE_1D = GLenum::GL_INT_IMAGE_1D;
static const GLenum GL_INT_IMAGE_2D = GLenum::GL_INT_IMAGE_2D;
static const GLenum GL_INT_IMAGE_3D = GLenum::GL_INT_IMAGE_3D;
static const GLenum GL_INT_IMAGE_2D_RECT = GLenum::GL_INT_IMAGE_2D_RECT;
static const GLenum GL_INT_IMAGE_CUBE = GLenum::GL_INT_IMAGE_CUBE;
static const GLenum GL_INT_IMAGE_BUFFER = GLenum::GL_INT_IMAGE_BUFFER;
static const GLenum GL_INT_IMAGE_1D_ARRAY = GLenum::GL_INT_IMAGE_1D_ARRAY;
static const GLenum GL_INT_IMAGE_2D_ARRAY = GLenum::GL_INT_IMAGE_2D_ARRAY;
static const GLenum GL_INT_IMAGE_CUBE_MAP_ARRAY = GLenum::GL_INT_IMAGE_CUBE_MAP_ARRAY;
static const GLenum GL_INT_IMAGE_2D_MULTISAMPLE = GLenum::GL_INT_IMAGE_2D_MULTISAMPLE;
static const GLenum GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY = GLenum::GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY;
static const GLenum GL_UNSIGNED_INT_IMAGE_1D = GLenum::GL_UNSIGNED_INT_IMAGE_1D;
static const GLenum GL_UNSIGNED_INT_IMAGE_2D = GLenum::GL_UNSIGNED_INT_IMAGE_2D;
static const GLenum GL_UNSIGNED_INT_IMAGE_3D = GLenum::GL_UNSIGNED_INT_IMAGE_3D;
static const GLenum GL_UNSIGNED_INT_IMAGE_2D_RECT = GLenum::GL_UNSIGNED_INT_IMAGE_2D_RECT;
static const GLenum GL_UNSIGNED_INT_IMAGE_CUBE = GLenum::GL_UNSIGNED_INT_IMAGE_CUBE;
static const GLenum GL_UNSIGNED_INT_IMAGE_BUFFER = GLenum::GL_UNSIGNED_INT_IMAGE_BUFFER;
static const GLenum GL_UNSIGNED_INT_IMAGE_1D_ARRAY = GLenum::GL_UNSIGNED_INT_IMAGE_1D_ARRAY;
static const GLenum GL_UNSIGNED_INT_IMAGE_2D_ARRAY = GLenum::GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
static const GLenum GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = GLenum::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY;
static const GLenum GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE = GLenum::GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE;
static const GLenum GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY = GLenum::GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY;
static const GLenum GL_MAX_IMAGE_SAMPLES = GLenum::GL_MAX_IMAGE_SAMPLES;
static const GLenum GL_IMAGE_BINDING_FORMAT = GLenum::GL_IMAGE_BINDING_FORMAT;
static const GLenum GL_RGB10_A2UI = GLenum::GL_RGB10_A2UI;
static const GLenum GL_MIN_MAP_BUFFER_ALIGNMENT = GLenum::GL_MIN_MAP_BUFFER_ALIGNMENT;
static const GLenum GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
static const GLenum GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
static const GLenum GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
static const GLenum GL_MAX_VERTEX_IMAGE_UNIFORMS = GLenum::GL_MAX_VERTEX_IMAGE_UNIFORMS;
static const GLenum GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = GLenum::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS;
static const GLenum GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = GLenum::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS;
static const GLenum GL_MAX_GEOMETRY_IMAGE_UNIFORMS = GLenum::GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
static const GLenum GL_MAX_FRAGMENT_IMAGE_UNIFORMS = GLenum::GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
static const GLenum GL_MAX_COMBINED_IMAGE_UNIFORMS = GLenum::GL_MAX_COMBINED_IMAGE_UNIFORMS;
static const GLenum GL_SHADER_STORAGE_BUFFER = GLenum::GL_SHADER_STORAGE_BUFFER;
static const GLenum GL_SHADER_STORAGE_BUFFER_BINDING = GLenum::GL_SHADER_STORAGE_BUFFER_BINDING;
static const GLenum GL_SHADER_STORAGE_BUFFER_START = GLenum::GL_SHADER_STORAGE_BUFFER_START;
static const GLenum GL_SHADER_STORAGE_BUFFER_SIZE = GLenum::GL_SHADER_STORAGE_BUFFER_SIZE;
static const GLenum GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS;
static const GLenum GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS;
static const GLenum GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS;
static const GLenum GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS;
static const GLenum GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS;
static const GLenum GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS;
static const GLenum GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS;
static const GLenum GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = GLenum::GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS;
static const GLenum GL_MAX_SHADER_STORAGE_BLOCK_SIZE = GLenum::GL_MAX_SHADER_STORAGE_BLOCK_SIZE;
static const GLenum GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = GLenum::GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT;
static const GLenum GL_DEPTH_STENCIL_TEXTURE_MODE = GLenum::GL_DEPTH_STENCIL_TEXTURE_MODE;
static const GLenum GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB = GLenum::GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB;
static const GLenum GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = GLenum::GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS;
static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER = GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER;
static const GLenum GL_DISPATCH_INDIRECT_BUFFER = GLenum::GL_DISPATCH_INDIRECT_BUFFER;
static const GLenum GL_DISPATCH_INDIRECT_BUFFER_BINDING = GLenum::GL_DISPATCH_INDIRECT_BUFFER_BINDING;
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
static const GLenum GL_UNPACK_COMPRESSED_BLOCK_WIDTH = GLenum::GL_UNPACK_COMPRESSED_BLOCK_WIDTH;
static const GLenum GL_UNPACK_COMPRESSED_BLOCK_HEIGHT = GLenum::GL_UNPACK_COMPRESSED_BLOCK_HEIGHT;
static const GLenum GL_UNPACK_COMPRESSED_BLOCK_DEPTH = GLenum::GL_UNPACK_COMPRESSED_BLOCK_DEPTH;
static const GLenum GL_UNPACK_COMPRESSED_BLOCK_SIZE = GLenum::GL_UNPACK_COMPRESSED_BLOCK_SIZE;
static const GLenum GL_PACK_COMPRESSED_BLOCK_WIDTH = GLenum::GL_PACK_COMPRESSED_BLOCK_WIDTH;
static const GLenum GL_PACK_COMPRESSED_BLOCK_HEIGHT = GLenum::GL_PACK_COMPRESSED_BLOCK_HEIGHT;
static const GLenum GL_PACK_COMPRESSED_BLOCK_DEPTH = GLenum::GL_PACK_COMPRESSED_BLOCK_DEPTH;
static const GLenum GL_PACK_COMPRESSED_BLOCK_SIZE = GLenum::GL_PACK_COMPRESSED_BLOCK_SIZE;
static const GLenum GL_TEXTURE_IMMUTABLE_FORMAT = GLenum::GL_TEXTURE_IMMUTABLE_FORMAT;
static const GLenum GL_MAX_DEBUG_MESSAGE_LENGTH = GLenum::GL_MAX_DEBUG_MESSAGE_LENGTH;
static const GLenum GL_MAX_DEBUG_LOGGED_MESSAGES = GLenum::GL_MAX_DEBUG_LOGGED_MESSAGES;
static const GLenum GL_DEBUG_LOGGED_MESSAGES = GLenum::GL_DEBUG_LOGGED_MESSAGES;
static const GLenum GL_DEBUG_SEVERITY_HIGH = GLenum::GL_DEBUG_SEVERITY_HIGH;
static const GLenum GL_DEBUG_SEVERITY_MEDIUM = GLenum::GL_DEBUG_SEVERITY_MEDIUM;
static const GLenum GL_DEBUG_SEVERITY_LOW = GLenum::GL_DEBUG_SEVERITY_LOW;
static const GLenum GL_QUERY_BUFFER = GLenum::GL_QUERY_BUFFER;
static const GLenum GL_QUERY_BUFFER_BINDING = GLenum::GL_QUERY_BUFFER_BINDING;
static const GLenum GL_QUERY_RESULT_NO_WAIT = GLenum::GL_QUERY_RESULT_NO_WAIT;
static const GLenum GL_TEXTURE_BUFFER_OFFSET = GLenum::GL_TEXTURE_BUFFER_OFFSET;
static const GLenum GL_TEXTURE_BUFFER_SIZE = GLenum::GL_TEXTURE_BUFFER_SIZE;
static const GLenum GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = GLenum::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT;
static const GLenum GL_COMPUTE_SHADER = GLenum::GL_COMPUTE_SHADER;
static const GLenum GL_MAX_COMPUTE_UNIFORM_BLOCKS = GLenum::GL_MAX_COMPUTE_UNIFORM_BLOCKS;
static const GLenum GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS;
static const GLenum GL_MAX_COMPUTE_IMAGE_UNIFORMS = GLenum::GL_MAX_COMPUTE_IMAGE_UNIFORMS;
static const GLenum GL_MAX_COMPUTE_WORK_GROUP_COUNT = GLenum::GL_MAX_COMPUTE_WORK_GROUP_COUNT;
static const GLenum GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB = GLenum::GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB;
static const GLenum GL_MAX_COMPUTE_WORK_GROUP_SIZE = GLenum::GL_MAX_COMPUTE_WORK_GROUP_SIZE;
static const GLenum GL_COMPRESSED_R11_EAC = GLenum::GL_COMPRESSED_R11_EAC;
static const GLenum GL_COMPRESSED_SIGNED_R11_EAC = GLenum::GL_COMPRESSED_SIGNED_R11_EAC;
static const GLenum GL_COMPRESSED_RG11_EAC = GLenum::GL_COMPRESSED_RG11_EAC;
static const GLenum GL_COMPRESSED_SIGNED_RG11_EAC = GLenum::GL_COMPRESSED_SIGNED_RG11_EAC;
static const GLenum GL_COMPRESSED_RGB8_ETC2 = GLenum::GL_COMPRESSED_RGB8_ETC2;
static const GLenum GL_COMPRESSED_SRGB8_ETC2 = GLenum::GL_COMPRESSED_SRGB8_ETC2;
static const GLenum GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = GLenum::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2;
static const GLenum GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = GLenum::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2;
static const GLenum GL_COMPRESSED_RGBA8_ETC2_EAC = GLenum::GL_COMPRESSED_RGBA8_ETC2_EAC;
static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC;
static const GLenum GL_ATOMIC_COUNTER_BUFFER = GLenum::GL_ATOMIC_COUNTER_BUFFER;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_BINDING = GLenum::GL_ATOMIC_COUNTER_BUFFER_BINDING;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_START = GLenum::GL_ATOMIC_COUNTER_BUFFER_START;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_SIZE = GLenum::GL_ATOMIC_COUNTER_BUFFER_SIZE;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE = GLenum::GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS = GLenum::GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES = GLenum::GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER = GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER = GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER = GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER = GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER = GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER;
static const GLenum GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
static const GLenum GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
static const GLenum GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
static const GLenum GL_MAX_VERTEX_ATOMIC_COUNTERS = GLenum::GL_MAX_VERTEX_ATOMIC_COUNTERS;
static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTERS = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
static const GLenum GL_MAX_FRAGMENT_ATOMIC_COUNTERS = GLenum::GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
static const GLenum GL_MAX_COMBINED_ATOMIC_COUNTERS = GLenum::GL_MAX_COMBINED_ATOMIC_COUNTERS;
static const GLenum GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = GLenum::GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
static const GLenum GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = GLenum::GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;
static const GLenum GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX = GLenum::GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX;
static const GLenum GL_UNSIGNED_INT_ATOMIC_COUNTER = GLenum::GL_UNSIGNED_INT_ATOMIC_COUNTER;
static const GLenum GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = GLenum::GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;
static const GLenum GL_DEBUG_OUTPUT = GLenum::GL_DEBUG_OUTPUT;
static const GLenum GL_UNIFORM = GLenum::GL_UNIFORM;
static const GLenum GL_UNIFORM_BLOCK = GLenum::GL_UNIFORM_BLOCK;
static const GLenum GL_PROGRAM_INPUT = GLenum::GL_PROGRAM_INPUT;
static const GLenum GL_PROGRAM_OUTPUT = GLenum::GL_PROGRAM_OUTPUT;
static const GLenum GL_BUFFER_VARIABLE = GLenum::GL_BUFFER_VARIABLE;
static const GLenum GL_SHADER_STORAGE_BLOCK = GLenum::GL_SHADER_STORAGE_BLOCK;
static const GLenum GL_IS_PER_PATCH = GLenum::GL_IS_PER_PATCH;
static const GLenum GL_VERTEX_SUBROUTINE = GLenum::GL_VERTEX_SUBROUTINE;
static const GLenum GL_TESS_CONTROL_SUBROUTINE = GLenum::GL_TESS_CONTROL_SUBROUTINE;
static const GLenum GL_TESS_EVALUATION_SUBROUTINE = GLenum::GL_TESS_EVALUATION_SUBROUTINE;
static const GLenum GL_GEOMETRY_SUBROUTINE = GLenum::GL_GEOMETRY_SUBROUTINE;
static const GLenum GL_FRAGMENT_SUBROUTINE = GLenum::GL_FRAGMENT_SUBROUTINE;
static const GLenum GL_COMPUTE_SUBROUTINE = GLenum::GL_COMPUTE_SUBROUTINE;
static const GLenum GL_VERTEX_SUBROUTINE_UNIFORM = GLenum::GL_VERTEX_SUBROUTINE_UNIFORM;
static const GLenum GL_TESS_CONTROL_SUBROUTINE_UNIFORM = GLenum::GL_TESS_CONTROL_SUBROUTINE_UNIFORM;
static const GLenum GL_TESS_EVALUATION_SUBROUTINE_UNIFORM = GLenum::GL_TESS_EVALUATION_SUBROUTINE_UNIFORM;
static const GLenum GL_GEOMETRY_SUBROUTINE_UNIFORM = GLenum::GL_GEOMETRY_SUBROUTINE_UNIFORM;
static const GLenum GL_FRAGMENT_SUBROUTINE_UNIFORM = GLenum::GL_FRAGMENT_SUBROUTINE_UNIFORM;
static const GLenum GL_COMPUTE_SUBROUTINE_UNIFORM = GLenum::GL_COMPUTE_SUBROUTINE_UNIFORM;
static const GLenum GL_TRANSFORM_FEEDBACK_VARYING = GLenum::GL_TRANSFORM_FEEDBACK_VARYING;
static const GLenum GL_ACTIVE_RESOURCES = GLenum::GL_ACTIVE_RESOURCES;
static const GLenum GL_MAX_NAME_LENGTH = GLenum::GL_MAX_NAME_LENGTH;
static const GLenum GL_MAX_NUM_ACTIVE_VARIABLES = GLenum::GL_MAX_NUM_ACTIVE_VARIABLES;
static const GLenum GL_MAX_NUM_COMPATIBLE_SUBROUTINES = GLenum::GL_MAX_NUM_COMPATIBLE_SUBROUTINES;
static const GLenum GL_NAME_LENGTH = GLenum::GL_NAME_LENGTH;
static const GLenum GL_TYPE = GLenum::GL_TYPE;
static const GLenum GL_ARRAY_SIZE = GLenum::GL_ARRAY_SIZE;
static const GLenum GL_OFFSET = GLenum::GL_OFFSET;
static const GLenum GL_BLOCK_INDEX = GLenum::GL_BLOCK_INDEX;
static const GLenum GL_ARRAY_STRIDE = GLenum::GL_ARRAY_STRIDE;
static const GLenum GL_MATRIX_STRIDE = GLenum::GL_MATRIX_STRIDE;
static const GLenum GL_IS_ROW_MAJOR = GLenum::GL_IS_ROW_MAJOR;
static const GLenum GL_ATOMIC_COUNTER_BUFFER_INDEX = GLenum::GL_ATOMIC_COUNTER_BUFFER_INDEX;
static const GLenum GL_BUFFER_BINDING = GLenum::GL_BUFFER_BINDING;
static const GLenum GL_BUFFER_DATA_SIZE = GLenum::GL_BUFFER_DATA_SIZE;
static const GLenum GL_NUM_ACTIVE_VARIABLES = GLenum::GL_NUM_ACTIVE_VARIABLES;
static const GLenum GL_ACTIVE_VARIABLES = GLenum::GL_ACTIVE_VARIABLES;
static const GLenum GL_REFERENCED_BY_VERTEX_SHADER = GLenum::GL_REFERENCED_BY_VERTEX_SHADER;
static const GLenum GL_REFERENCED_BY_TESS_CONTROL_SHADER = GLenum::GL_REFERENCED_BY_TESS_CONTROL_SHADER;
static const GLenum GL_REFERENCED_BY_TESS_EVALUATION_SHADER = GLenum::GL_REFERENCED_BY_TESS_EVALUATION_SHADER;
static const GLenum GL_REFERENCED_BY_GEOMETRY_SHADER = GLenum::GL_REFERENCED_BY_GEOMETRY_SHADER;
static const GLenum GL_REFERENCED_BY_FRAGMENT_SHADER = GLenum::GL_REFERENCED_BY_FRAGMENT_SHADER;
static const GLenum GL_REFERENCED_BY_COMPUTE_SHADER = GLenum::GL_REFERENCED_BY_COMPUTE_SHADER;
static const GLenum GL_TOP_LEVEL_ARRAY_SIZE = GLenum::GL_TOP_LEVEL_ARRAY_SIZE;
static const GLenum GL_TOP_LEVEL_ARRAY_STRIDE = GLenum::GL_TOP_LEVEL_ARRAY_STRIDE;
static const GLenum GL_LOCATION = GLenum::GL_LOCATION;
static const GLenum GL_LOCATION_INDEX = GLenum::GL_LOCATION_INDEX;
static const GLenum GL_FRAMEBUFFER_DEFAULT_WIDTH = GLenum::GL_FRAMEBUFFER_DEFAULT_WIDTH;
static const GLenum GL_FRAMEBUFFER_DEFAULT_HEIGHT = GLenum::GL_FRAMEBUFFER_DEFAULT_HEIGHT;
static const GLenum GL_FRAMEBUFFER_DEFAULT_LAYERS = GLenum::GL_FRAMEBUFFER_DEFAULT_LAYERS;
static const GLenum GL_FRAMEBUFFER_DEFAULT_SAMPLES = GLenum::GL_FRAMEBUFFER_DEFAULT_SAMPLES;
static const GLenum GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = GLenum::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS;
static const GLenum GL_MAX_FRAMEBUFFER_WIDTH = GLenum::GL_MAX_FRAMEBUFFER_WIDTH;
static const GLenum GL_MAX_FRAMEBUFFER_HEIGHT = GLenum::GL_MAX_FRAMEBUFFER_HEIGHT;
static const GLenum GL_MAX_FRAMEBUFFER_LAYERS = GLenum::GL_MAX_FRAMEBUFFER_LAYERS;
static const GLenum GL_MAX_FRAMEBUFFER_SAMPLES = GLenum::GL_MAX_FRAMEBUFFER_SAMPLES;
static const GLenum GL_LOCATION_COMPONENT = GLenum::GL_LOCATION_COMPONENT;
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_INDEX = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_INDEX;
static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE;
static const GLenum GL_CLEAR_TEXTURE = GLenum::GL_CLEAR_TEXTURE;
static const GLenum GL_NUM_SAMPLE_COUNTS = GLenum::GL_NUM_SAMPLE_COUNTS;

} // namespace gl44
