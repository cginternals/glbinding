#pragma once

#include <glpbinding/noglp.h>

#include <glpbinding/glp/enum.h>


namespace glp20
{

// import enums to namespace


// AlphaFunction

using glp::GL_NEVER;
using glp::GL_LESS;
using glp::GL_EQUAL;
using glp::GL_LEQUAL;
using glp::GL_GREATER;
using glp::GL_NOTEQUAL;
using glp::GL_GEQUAL;
using glp::GL_ALWAYS;

// BlendingFactorDest

using glp::GL_ZERO;
using glp::GL_SRC_COLOR;
using glp::GL_ONE_MINUS_SRC_COLOR;
using glp::GL_SRC_ALPHA;
using glp::GL_ONE_MINUS_SRC_ALPHA;
using glp::GL_DST_ALPHA;
using glp::GL_ONE_MINUS_DST_ALPHA;
using glp::GL_ONE;

// BlendingFactorSrc

// using glp::GL_ZERO; // reuse BlendingFactorDest
// using glp::GL_SRC_ALPHA; // reuse BlendingFactorDest
// using glp::GL_ONE_MINUS_SRC_ALPHA; // reuse BlendingFactorDest
// using glp::GL_DST_ALPHA; // reuse BlendingFactorDest
// using glp::GL_ONE_MINUS_DST_ALPHA; // reuse BlendingFactorDest
using glp::GL_DST_COLOR;
using glp::GL_ONE_MINUS_DST_COLOR;
using glp::GL_SRC_ALPHA_SATURATE;
// using glp::GL_ONE; // reuse BlendingFactorDest

// ColorMaterialFace

using glp::GL_FRONT;
using glp::GL_BACK;
using glp::GL_FRONT_AND_BACK;

// ColorPointerType

using glp::GL_BYTE;
using glp::GL_UNSIGNED_BYTE;
using glp::GL_SHORT;
using glp::GL_UNSIGNED_SHORT;
using glp::GL_INT;
using glp::GL_UNSIGNED_INT;
using glp::GL_FLOAT;

// CullFaceMode

// using glp::GL_FRONT; // reuse ColorMaterialFace
// using glp::GL_BACK; // reuse ColorMaterialFace
// using glp::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// DepthFunction

// using glp::GL_NEVER; // reuse AlphaFunction
// using glp::GL_LESS; // reuse AlphaFunction
// using glp::GL_EQUAL; // reuse AlphaFunction
// using glp::GL_LEQUAL; // reuse AlphaFunction
// using glp::GL_GREATER; // reuse AlphaFunction
// using glp::GL_NOTEQUAL; // reuse AlphaFunction
// using glp::GL_GEQUAL; // reuse AlphaFunction
// using glp::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

using glp::GL_NONE;
// using glp::GL_FRONT; // reuse ColorMaterialFace
// using glp::GL_BACK; // reuse ColorMaterialFace
// using glp::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// EnableCap

using glp::GL_CULL_FACE;
using glp::GL_DEPTH_TEST;
using glp::GL_STENCIL_TEST;
using glp::GL_DITHER;
using glp::GL_BLEND;
using glp::GL_SCISSOR_TEST;
using glp::GL_TEXTURE_2D;
using glp::GL_POLYGON_OFFSET_FILL;

// ErrorCode

using glp::GL_NO_ERROR;
using glp::GL_INVALID_ENUM;
using glp::GL_INVALID_VALUE;
using glp::GL_INVALID_OPERATION;
using glp::GL_OUT_OF_MEMORY;
using glp::GL_INVALID_FRAMEBUFFER_OPERATION;

// FogCoordinatePointerType

// using glp::GL_FLOAT; // reuse ColorPointerType

// FogMode

using glp::GL_LINEAR;

// FogPointerTypeEXT

// using glp::GL_FLOAT; // reuse ColorPointerType

// FogPointerTypeIBM

// using glp::GL_FLOAT; // reuse ColorPointerType

// FrontFaceDirection

using glp::GL_CW;
using glp::GL_CCW;

// GetPName

using glp::GL_LINE_WIDTH;
// using glp::GL_CULL_FACE; // reuse EnableCap
using glp::GL_CULL_FACE_MODE;
using glp::GL_FRONT_FACE;
using glp::GL_DEPTH_RANGE;
// using glp::GL_DEPTH_TEST; // reuse EnableCap
using glp::GL_DEPTH_WRITEMASK;
using glp::GL_DEPTH_CLEAR_VALUE;
using glp::GL_DEPTH_FUNC;
// using glp::GL_STENCIL_TEST; // reuse EnableCap
using glp::GL_STENCIL_CLEAR_VALUE;
using glp::GL_STENCIL_FUNC;
using glp::GL_STENCIL_VALUE_MASK;
using glp::GL_STENCIL_FAIL;
using glp::GL_STENCIL_PASS_DEPTH_FAIL;
using glp::GL_STENCIL_PASS_DEPTH_PASS;
using glp::GL_STENCIL_REF;
using glp::GL_STENCIL_WRITEMASK;
using glp::GL_VIEWPORT;
// using glp::GL_DITHER; // reuse EnableCap
// using glp::GL_BLEND; // reuse EnableCap
using glp::GL_SCISSOR_BOX;
// using glp::GL_SCISSOR_TEST; // reuse EnableCap
using glp::GL_COLOR_CLEAR_VALUE;
using glp::GL_COLOR_WRITEMASK;
using glp::GL_UNPACK_ALIGNMENT;
using glp::GL_PACK_ALIGNMENT;
using glp::GL_MAX_TEXTURE_SIZE;
using glp::GL_MAX_VIEWPORT_DIMS;
using glp::GL_SUBPIXEL_BITS;
using glp::GL_RED_BITS;
using glp::GL_GREEN_BITS;
using glp::GL_BLUE_BITS;
using glp::GL_ALPHA_BITS;
using glp::GL_DEPTH_BITS;
using glp::GL_STENCIL_BITS;
// using glp::GL_TEXTURE_2D; // reuse EnableCap
using glp::GL_POLYGON_OFFSET_UNITS;
// using glp::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
using glp::GL_POLYGON_OFFSET_FACTOR;
using glp::GL_TEXTURE_BINDING_2D;
using glp::GL_ALIASED_POINT_SIZE_RANGE;
using glp::GL_ALIASED_LINE_WIDTH_RANGE;

// GetTextureParameter

using glp::GL_TEXTURE_MAG_FILTER;
using glp::GL_TEXTURE_MIN_FILTER;
using glp::GL_TEXTURE_WRAP_S;
using glp::GL_TEXTURE_WRAP_T;

// HintMode

using glp::GL_DONT_CARE;
using glp::GL_FASTEST;
using glp::GL_NICEST;

// HintTarget

using glp::GL_GENERATE_MIPMAP_HINT;

// IndexPointerType

// using glp::GL_SHORT; // reuse ColorPointerType
// using glp::GL_INT; // reuse ColorPointerType
// using glp::GL_FLOAT; // reuse ColorPointerType

// InternalFormat

using glp::GL_RGBA4;
using glp::GL_RGB5_A1;

// LightEnvModeSGIX

using glp::GL_REPLACE;

// ListNameType

// using glp::GL_BYTE; // reuse ColorPointerType
// using glp::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using glp::GL_SHORT; // reuse ColorPointerType
// using glp::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using glp::GL_INT; // reuse ColorPointerType
// using glp::GL_UNSIGNED_INT; // reuse ColorPointerType
// using glp::GL_FLOAT; // reuse ColorPointerType

// LogicOp

using glp::GL_INVERT;

// MaterialFace

// using glp::GL_FRONT; // reuse ColorMaterialFace
// using glp::GL_BACK; // reuse ColorMaterialFace
// using glp::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// MatrixMode

using glp::GL_TEXTURE;

// NormalPointerType

// using glp::GL_BYTE; // reuse ColorPointerType
// using glp::GL_SHORT; // reuse ColorPointerType
// using glp::GL_INT; // reuse ColorPointerType
// using glp::GL_FLOAT; // reuse ColorPointerType

// PixelFormat

// using glp::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using glp::GL_UNSIGNED_INT; // reuse ColorPointerType
using glp::GL_DEPTH_COMPONENT;
using glp::GL_ALPHA;
using glp::GL_RGB;
using glp::GL_RGBA;
using glp::GL_LUMINANCE;
using glp::GL_LUMINANCE_ALPHA;

// PixelStoreParameter

// using glp::GL_UNPACK_ALIGNMENT; // reuse GetPName
// using glp::GL_PACK_ALIGNMENT; // reuse GetPName

// PixelTexGenMode

// using glp::GL_NONE; // reuse DrawBufferMode
// using glp::GL_RGB; // reuse PixelFormat
// using glp::GL_RGBA; // reuse PixelFormat
// using glp::GL_LUMINANCE; // reuse PixelFormat
// using glp::GL_LUMINANCE_ALPHA; // reuse PixelFormat

// PixelType

// using glp::GL_BYTE; // reuse ColorPointerType
// using glp::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using glp::GL_SHORT; // reuse ColorPointerType
// using glp::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using glp::GL_INT; // reuse ColorPointerType
// using glp::GL_UNSIGNED_INT; // reuse ColorPointerType
// using glp::GL_FLOAT; // reuse ColorPointerType
using glp::GL_UNSIGNED_SHORT_4_4_4_4;
using glp::GL_UNSIGNED_SHORT_5_5_5_1;

// PrimitiveType

using glp::GL_POINTS;
using glp::GL_LINES;
using glp::GL_LINE_LOOP;
using glp::GL_LINE_STRIP;
using glp::GL_TRIANGLES;
using glp::GL_TRIANGLE_STRIP;
using glp::GL_TRIANGLE_FAN;

// ReadBufferMode

// using glp::GL_FRONT; // reuse ColorMaterialFace
// using glp::GL_BACK; // reuse ColorMaterialFace

// StencilFunction

// using glp::GL_NEVER; // reuse AlphaFunction
// using glp::GL_LESS; // reuse AlphaFunction
// using glp::GL_EQUAL; // reuse AlphaFunction
// using glp::GL_LEQUAL; // reuse AlphaFunction
// using glp::GL_GREATER; // reuse AlphaFunction
// using glp::GL_NOTEQUAL; // reuse AlphaFunction
// using glp::GL_GEQUAL; // reuse AlphaFunction
// using glp::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// using glp::GL_ZERO; // reuse BlendingFactorDest
// using glp::GL_INVERT; // reuse LogicOp
using glp::GL_KEEP;
// using glp::GL_REPLACE; // reuse LightEnvModeSGIX
using glp::GL_INCR;
using glp::GL_DECR;

// StringName

using glp::GL_VENDOR;
using glp::GL_RENDERER;
using glp::GL_VERSION;
using glp::GL_EXTENSIONS;

// TexCoordPointerType

// using glp::GL_SHORT; // reuse ColorPointerType
// using glp::GL_INT; // reuse ColorPointerType
// using glp::GL_FLOAT; // reuse ColorPointerType

// TextureEnvMode

// using glp::GL_BLEND; // reuse EnableCap

// TextureMagFilter

using glp::GL_NEAREST;
// using glp::GL_LINEAR; // reuse FogMode

// TextureMinFilter

// using glp::GL_NEAREST; // reuse TextureMagFilter
// using glp::GL_LINEAR; // reuse FogMode
using glp::GL_NEAREST_MIPMAP_NEAREST;
using glp::GL_LINEAR_MIPMAP_NEAREST;
using glp::GL_NEAREST_MIPMAP_LINEAR;
using glp::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// using glp::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// using glp::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// using glp::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// using glp::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter

// TextureTarget

// using glp::GL_TEXTURE_2D; // reuse EnableCap

// TextureWrapMode

using glp::GL_REPEAT;
using glp::GL_CLAMP_TO_EDGE;

// VertexPointerType

// using glp::GL_SHORT; // reuse ColorPointerType
// using glp::GL_INT; // reuse ColorPointerType
// using glp::GL_FLOAT; // reuse ColorPointerType

// __UNGROUPED__

using glp::GL_FIXED;
using glp::GL_CONSTANT_COLOR;
using glp::GL_ONE_MINUS_CONSTANT_COLOR;
using glp::GL_CONSTANT_ALPHA;
using glp::GL_ONE_MINUS_CONSTANT_ALPHA;
using glp::GL_BLEND_COLOR;
using glp::GL_FUNC_ADD;
using glp::GL_BLEND_EQUATION;
using glp::GL_BLEND_EQUATION_RGB;
using glp::GL_FUNC_SUBTRACT;
using glp::GL_FUNC_REVERSE_SUBTRACT;
using glp::GL_SAMPLE_ALPHA_TO_COVERAGE;
using glp::GL_SAMPLE_COVERAGE;
using glp::GL_SAMPLE_BUFFERS;
using glp::GL_SAMPLES;
using glp::GL_SAMPLE_COVERAGE_VALUE;
using glp::GL_SAMPLE_COVERAGE_INVERT;
using glp::GL_BLEND_DST_RGB;
using glp::GL_BLEND_SRC_RGB;
using glp::GL_BLEND_DST_ALPHA;
using glp::GL_BLEND_SRC_ALPHA;
using glp::GL_DEPTH_COMPONENT16;
using glp::GL_UNSIGNED_SHORT_5_6_5;
using glp::GL_MIRRORED_REPEAT;
using glp::GL_TEXTURE0;
using glp::GL_TEXTURE1;
using glp::GL_TEXTURE2;
using glp::GL_TEXTURE3;
using glp::GL_TEXTURE4;
using glp::GL_TEXTURE5;
using glp::GL_TEXTURE6;
using glp::GL_TEXTURE7;
using glp::GL_TEXTURE8;
using glp::GL_TEXTURE9;
using glp::GL_TEXTURE10;
using glp::GL_TEXTURE11;
using glp::GL_TEXTURE12;
using glp::GL_TEXTURE13;
using glp::GL_TEXTURE14;
using glp::GL_TEXTURE15;
using glp::GL_TEXTURE16;
using glp::GL_TEXTURE17;
using glp::GL_TEXTURE18;
using glp::GL_TEXTURE19;
using glp::GL_TEXTURE20;
using glp::GL_TEXTURE21;
using glp::GL_TEXTURE22;
using glp::GL_TEXTURE23;
using glp::GL_TEXTURE24;
using glp::GL_TEXTURE25;
using glp::GL_TEXTURE26;
using glp::GL_TEXTURE27;
using glp::GL_TEXTURE28;
using glp::GL_TEXTURE29;
using glp::GL_TEXTURE30;
using glp::GL_TEXTURE31;
using glp::GL_ACTIVE_TEXTURE;
using glp::GL_MAX_RENDERBUFFER_SIZE;
using glp::GL_INCR_WRAP;
using glp::GL_DECR_WRAP;
using glp::GL_TEXTURE_CUBE_MAP;
using glp::GL_TEXTURE_BINDING_CUBE_MAP;
using glp::GL_TEXTURE_CUBE_MAP_POSITIVE_X;
using glp::GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
using glp::GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
using glp::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
using glp::GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
using glp::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
using glp::GL_MAX_CUBE_MAP_TEXTURE_SIZE;
using glp::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
using glp::GL_VERTEX_ATTRIB_ARRAY_SIZE;
using glp::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
using glp::GL_VERTEX_ATTRIB_ARRAY_TYPE;
using glp::GL_CURRENT_VERTEX_ATTRIB;
using glp::GL_VERTEX_ATTRIB_ARRAY_POINTER;
using glp::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
using glp::GL_COMPRESSED_TEXTURE_FORMATS;
using glp::GL_BUFFER_SIZE;
using glp::GL_BUFFER_USAGE;
using glp::GL_STENCIL_BACK_FUNC;
using glp::GL_STENCIL_BACK_FAIL;
using glp::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
using glp::GL_STENCIL_BACK_PASS_DEPTH_PASS;
using glp::GL_BLEND_EQUATION_ALPHA;
using glp::GL_MAX_VERTEX_ATTRIBS;
using glp::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
using glp::GL_MAX_TEXTURE_IMAGE_UNITS;
using glp::GL_ARRAY_BUFFER;
using glp::GL_ELEMENT_ARRAY_BUFFER;
using glp::GL_ARRAY_BUFFER_BINDING;
using glp::GL_ELEMENT_ARRAY_BUFFER_BINDING;
using glp::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
using glp::GL_STREAM_DRAW;
using glp::GL_STATIC_DRAW;
using glp::GL_DYNAMIC_DRAW;
using glp::GL_FRAGMENT_SHADER;
using glp::GL_VERTEX_SHADER;
using glp::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
using glp::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
using glp::GL_SHADER_TYPE;
using glp::GL_FLOAT_VEC2;
using glp::GL_FLOAT_VEC3;
using glp::GL_FLOAT_VEC4;
using glp::GL_INT_VEC2;
using glp::GL_INT_VEC3;
using glp::GL_INT_VEC4;
using glp::GL_BOOL;
using glp::GL_BOOL_VEC2;
using glp::GL_BOOL_VEC3;
using glp::GL_BOOL_VEC4;
using glp::GL_FLOAT_MAT2;
using glp::GL_FLOAT_MAT3;
using glp::GL_FLOAT_MAT4;
using glp::GL_SAMPLER_2D;
using glp::GL_SAMPLER_CUBE;
using glp::GL_DELETE_STATUS;
using glp::GL_COMPILE_STATUS;
using glp::GL_LINK_STATUS;
using glp::GL_VALIDATE_STATUS;
using glp::GL_INFO_LOG_LENGTH;
using glp::GL_ATTACHED_SHADERS;
using glp::GL_ACTIVE_UNIFORMS;
using glp::GL_ACTIVE_UNIFORM_MAX_LENGTH;
using glp::GL_SHADER_SOURCE_LENGTH;
using glp::GL_ACTIVE_ATTRIBUTES;
using glp::GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
using glp::GL_SHADING_LANGUAGE_VERSION;
using glp::GL_CURRENT_PROGRAM;
using glp::GL_IMPLEMENTATION_COLOR_READ_TYPE;
using glp::GL_IMPLEMENTATION_COLOR_READ_FORMAT;
using glp::GL_STENCIL_BACK_REF;
using glp::GL_STENCIL_BACK_VALUE_MASK;
using glp::GL_STENCIL_BACK_WRITEMASK;
using glp::GL_FRAMEBUFFER_BINDING;
using glp::GL_RENDERBUFFER_BINDING;
using glp::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
using glp::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
using glp::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
using glp::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
using glp::GL_FRAMEBUFFER_COMPLETE;
using glp::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
using glp::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
using glp::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
using glp::GL_FRAMEBUFFER_UNSUPPORTED;
using glp::GL_COLOR_ATTACHMENT0;
using glp::GL_DEPTH_ATTACHMENT;
using glp::GL_STENCIL_ATTACHMENT;
using glp::GL_FRAMEBUFFER;
using glp::GL_RENDERBUFFER;
using glp::GL_RENDERBUFFER_WIDTH;
using glp::GL_RENDERBUFFER_HEIGHT;
using glp::GL_RENDERBUFFER_INTERNAL_FORMAT;
using glp::GL_STENCIL_INDEX8;
using glp::GL_RENDERBUFFER_RED_SIZE;
using glp::GL_RENDERBUFFER_GREEN_SIZE;
using glp::GL_RENDERBUFFER_BLUE_SIZE;
using glp::GL_RENDERBUFFER_ALPHA_SIZE;
using glp::GL_RENDERBUFFER_DEPTH_SIZE;
using glp::GL_RENDERBUFFER_STENCIL_SIZE;
using glp::GL_RGB565;
using glp::GL_LOW_FLOAT;
using glp::GL_MEDIUM_FLOAT;
using glp::GL_HIGH_FLOAT;
using glp::GL_LOW_INT;
using glp::GL_MEDIUM_INT;
using glp::GL_HIGH_INT;
using glp::GL_SHADER_BINARY_FORMATS;
using glp::GL_NUM_SHADER_BINARY_FORMATS;
using glp::GL_SHADER_COMPILER;
using glp::GL_MAX_VERTEX_UNIFORM_VECTORS;
using glp::GL_MAX_VARYING_VECTORS;
using glp::GL_MAX_FRAGMENT_UNIFORM_VECTORS;

} // namespace glp20
