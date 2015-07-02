#pragma once

#include <glesbinding/nogles.h>

#include <glesbinding/gles/enum.h>


namespace gles20
{

// import enums to namespace


// AlphaFunction

using gles2::GL_NEVER;
using gles2::GL_LESS;
using gles2::GL_EQUAL;
using gles2::GL_LEQUAL;
using gles2::GL_GREATER;
using gles2::GL_NOTEQUAL;
using gles2::GL_GEQUAL;
using gles2::GL_ALWAYS;

// BlendingFactorDest

using gles2::GL_ZERO;
using gles2::GL_SRC_COLOR;
using gles2::GL_ONE_MINUS_SRC_COLOR;
using gles2::GL_SRC_ALPHA;
using gles2::GL_ONE_MINUS_SRC_ALPHA;
using gles2::GL_DST_ALPHA;
using gles2::GL_ONE_MINUS_DST_ALPHA;
using gles2::GL_ONE;

// BlendingFactorSrc

// using gles2::GL_ZERO; // reuse BlendingFactorDest
// using gles2::GL_SRC_ALPHA; // reuse BlendingFactorDest
// using gles2::GL_ONE_MINUS_SRC_ALPHA; // reuse BlendingFactorDest
// using gles2::GL_DST_ALPHA; // reuse BlendingFactorDest
// using gles2::GL_ONE_MINUS_DST_ALPHA; // reuse BlendingFactorDest
using gles2::GL_DST_COLOR;
using gles2::GL_ONE_MINUS_DST_COLOR;
using gles2::GL_SRC_ALPHA_SATURATE;
// using gles2::GL_ONE; // reuse BlendingFactorDest

// ColorMaterialFace

using gles2::GL_FRONT;
using gles2::GL_BACK;
using gles2::GL_FRONT_AND_BACK;

// ColorPointerType

using gles2::GL_BYTE;
using gles2::GL_UNSIGNED_BYTE;
using gles2::GL_SHORT;
using gles2::GL_UNSIGNED_SHORT;
using gles2::GL_INT;
using gles2::GL_UNSIGNED_INT;
using gles2::GL_FLOAT;

// CullFaceMode

// using gles2::GL_FRONT; // reuse ColorMaterialFace
// using gles2::GL_BACK; // reuse ColorMaterialFace
// using gles2::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// DepthFunction

// using gles2::GL_NEVER; // reuse AlphaFunction
// using gles2::GL_LESS; // reuse AlphaFunction
// using gles2::GL_EQUAL; // reuse AlphaFunction
// using gles2::GL_LEQUAL; // reuse AlphaFunction
// using gles2::GL_GREATER; // reuse AlphaFunction
// using gles2::GL_NOTEQUAL; // reuse AlphaFunction
// using gles2::GL_GEQUAL; // reuse AlphaFunction
// using gles2::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

using gles2::GL_NONE;
// using gles2::GL_FRONT; // reuse ColorMaterialFace
// using gles2::GL_BACK; // reuse ColorMaterialFace
// using gles2::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// EnableCap

using gles2::GL_CULL_FACE;
using gles2::GL_DEPTH_TEST;
using gles2::GL_STENCIL_TEST;
using gles2::GL_DITHER;
using gles2::GL_BLEND;
using gles2::GL_SCISSOR_TEST;
using gles2::GL_TEXTURE_2D;
using gles2::GL_POLYGON_OFFSET_FILL;

// ErrorCode

using gles2::GL_NO_ERROR;
using gles2::GL_INVALID_ENUM;
using gles2::GL_INVALID_VALUE;
using gles2::GL_INVALID_OPERATION;
using gles2::GL_OUT_OF_MEMORY;
using gles2::GL_INVALID_FRAMEBUFFER_OPERATION;

// FogCoordinatePointerType

// using gles2::GL_FLOAT; // reuse ColorPointerType

// FogMode

using gles2::GL_LINEAR;

// FogPointerTypeEXT

// using gles2::GL_FLOAT; // reuse ColorPointerType

// FogPointerTypeIBM

// using gles2::GL_FLOAT; // reuse ColorPointerType

// FrontFaceDirection

using gles2::GL_CW;
using gles2::GL_CCW;

// GetPName

using gles2::GL_LINE_WIDTH;
// using gles2::GL_CULL_FACE; // reuse EnableCap
using gles2::GL_CULL_FACE_MODE;
using gles2::GL_FRONT_FACE;
using gles2::GL_DEPTH_RANGE;
// using gles2::GL_DEPTH_TEST; // reuse EnableCap
using gles2::GL_DEPTH_WRITEMASK;
using gles2::GL_DEPTH_CLEAR_VALUE;
using gles2::GL_DEPTH_FUNC;
// using gles2::GL_STENCIL_TEST; // reuse EnableCap
using gles2::GL_STENCIL_CLEAR_VALUE;
using gles2::GL_STENCIL_FUNC;
using gles2::GL_STENCIL_VALUE_MASK;
using gles2::GL_STENCIL_FAIL;
using gles2::GL_STENCIL_PASS_DEPTH_FAIL;
using gles2::GL_STENCIL_PASS_DEPTH_PASS;
using gles2::GL_STENCIL_REF;
using gles2::GL_STENCIL_WRITEMASK;
using gles2::GL_VIEWPORT;
// using gles2::GL_DITHER; // reuse EnableCap
// using gles2::GL_BLEND; // reuse EnableCap
using gles2::GL_SCISSOR_BOX;
// using gles2::GL_SCISSOR_TEST; // reuse EnableCap
using gles2::GL_COLOR_CLEAR_VALUE;
using gles2::GL_COLOR_WRITEMASK;
using gles2::GL_UNPACK_ALIGNMENT;
using gles2::GL_PACK_ALIGNMENT;
using gles2::GL_MAX_TEXTURE_SIZE;
using gles2::GL_MAX_VIEWPORT_DIMS;
using gles2::GL_SUBPIXEL_BITS;
using gles2::GL_RED_BITS;
using gles2::GL_GREEN_BITS;
using gles2::GL_BLUE_BITS;
using gles2::GL_ALPHA_BITS;
using gles2::GL_DEPTH_BITS;
using gles2::GL_STENCIL_BITS;
// using gles2::GL_TEXTURE_2D; // reuse EnableCap
using gles2::GL_POLYGON_OFFSET_UNITS;
// using gles2::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
using gles2::GL_POLYGON_OFFSET_FACTOR;
using gles2::GL_TEXTURE_BINDING_2D;
using gles2::GL_ALIASED_POINT_SIZE_RANGE;
using gles2::GL_ALIASED_LINE_WIDTH_RANGE;

// GetTextureParameter

using gles2::GL_TEXTURE_MAG_FILTER;
using gles2::GL_TEXTURE_MIN_FILTER;
using gles2::GL_TEXTURE_WRAP_S;
using gles2::GL_TEXTURE_WRAP_T;

// HintMode

using gles2::GL_DONT_CARE;
using gles2::GL_FASTEST;
using gles2::GL_NICEST;

// HintTarget

using gles2::GL_GENERATE_MIPMAP_HINT;

// IndexPointerType

// using gles2::GL_SHORT; // reuse ColorPointerType
// using gles2::GL_INT; // reuse ColorPointerType
// using gles2::GL_FLOAT; // reuse ColorPointerType

// InternalFormat

using gles2::GL_RGBA4;
using gles2::GL_RGB5_A1;

// LightEnvModeSGIX

using gles2::GL_REPLACE;

// ListNameType

// using gles2::GL_BYTE; // reuse ColorPointerType
// using gles2::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gles2::GL_SHORT; // reuse ColorPointerType
// using gles2::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gles2::GL_INT; // reuse ColorPointerType
// using gles2::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gles2::GL_FLOAT; // reuse ColorPointerType

// LogicOp

using gles2::GL_INVERT;

// MaterialFace

// using gles2::GL_FRONT; // reuse ColorMaterialFace
// using gles2::GL_BACK; // reuse ColorMaterialFace
// using gles2::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// MatrixMode

using gles2::GL_TEXTURE;

// NormalPointerType

// using gles2::GL_BYTE; // reuse ColorPointerType
// using gles2::GL_SHORT; // reuse ColorPointerType
// using gles2::GL_INT; // reuse ColorPointerType
// using gles2::GL_FLOAT; // reuse ColorPointerType

// PixelFormat

// using gles2::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gles2::GL_UNSIGNED_INT; // reuse ColorPointerType
using gles2::GL_DEPTH_COMPONENT;
using gles2::GL_ALPHA;
using gles2::GL_RGB;
using gles2::GL_RGBA;
using gles2::GL_LUMINANCE;
using gles2::GL_LUMINANCE_ALPHA;

// PixelStoreParameter

// using gles2::GL_UNPACK_ALIGNMENT; // reuse GetPName
// using gles2::GL_PACK_ALIGNMENT; // reuse GetPName

// PixelTexGenMode

// using gles2::GL_NONE; // reuse DrawBufferMode
// using gles2::GL_RGB; // reuse PixelFormat
// using gles2::GL_RGBA; // reuse PixelFormat
// using gles2::GL_LUMINANCE; // reuse PixelFormat
// using gles2::GL_LUMINANCE_ALPHA; // reuse PixelFormat

// PixelType

// using gles2::GL_BYTE; // reuse ColorPointerType
// using gles2::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gles2::GL_SHORT; // reuse ColorPointerType
// using gles2::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gles2::GL_INT; // reuse ColorPointerType
// using gles2::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gles2::GL_FLOAT; // reuse ColorPointerType
using gles2::GL_UNSIGNED_SHORT_4_4_4_4;
using gles2::GL_UNSIGNED_SHORT_5_5_5_1;

// PrimitiveType

using gles2::GL_POINTS;
using gles2::GL_LINES;
using gles2::GL_LINE_LOOP;
using gles2::GL_LINE_STRIP;
using gles2::GL_TRIANGLES;
using gles2::GL_TRIANGLE_STRIP;
using gles2::GL_TRIANGLE_FAN;

// ReadBufferMode

// using gles2::GL_FRONT; // reuse ColorMaterialFace
// using gles2::GL_BACK; // reuse ColorMaterialFace

// StencilFunction

// using gles2::GL_NEVER; // reuse AlphaFunction
// using gles2::GL_LESS; // reuse AlphaFunction
// using gles2::GL_EQUAL; // reuse AlphaFunction
// using gles2::GL_LEQUAL; // reuse AlphaFunction
// using gles2::GL_GREATER; // reuse AlphaFunction
// using gles2::GL_NOTEQUAL; // reuse AlphaFunction
// using gles2::GL_GEQUAL; // reuse AlphaFunction
// using gles2::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// using gles2::GL_ZERO; // reuse BlendingFactorDest
// using gles2::GL_INVERT; // reuse LogicOp
using gles2::GL_KEEP;
// using gles2::GL_REPLACE; // reuse LightEnvModeSGIX
using gles2::GL_INCR;
using gles2::GL_DECR;

// StringName

using gles2::GL_VENDOR;
using gles2::GL_RENDERER;
using gles2::GL_VERSION;
using gles2::GL_EXTENSIONS;

// TexCoordPointerType

// using gles2::GL_SHORT; // reuse ColorPointerType
// using gles2::GL_INT; // reuse ColorPointerType
// using gles2::GL_FLOAT; // reuse ColorPointerType

// TextureEnvMode

// using gles2::GL_BLEND; // reuse EnableCap

// TextureMagFilter

using gles2::GL_NEAREST;
// using gles2::GL_LINEAR; // reuse FogMode

// TextureMinFilter

// using gles2::GL_NEAREST; // reuse TextureMagFilter
// using gles2::GL_LINEAR; // reuse FogMode
using gles2::GL_NEAREST_MIPMAP_NEAREST;
using gles2::GL_LINEAR_MIPMAP_NEAREST;
using gles2::GL_NEAREST_MIPMAP_LINEAR;
using gles2::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// using gles2::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// using gles2::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// using gles2::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// using gles2::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter

// TextureTarget

// using gles2::GL_TEXTURE_2D; // reuse EnableCap

// TextureWrapMode

using gles2::GL_REPEAT;
using gles2::GL_CLAMP_TO_EDGE;

// VertexPointerType

// using gles2::GL_SHORT; // reuse ColorPointerType
// using gles2::GL_INT; // reuse ColorPointerType
// using gles2::GL_FLOAT; // reuse ColorPointerType

// __UNGROUPED__

using gles2::GL_FIXED;
using gles2::GL_CONSTANT_COLOR;
using gles2::GL_ONE_MINUS_CONSTANT_COLOR;
using gles2::GL_CONSTANT_ALPHA;
using gles2::GL_ONE_MINUS_CONSTANT_ALPHA;
using gles2::GL_BLEND_COLOR;
using gles2::GL_FUNC_ADD;
using gles2::GL_BLEND_EQUATION;
using gles2::GL_BLEND_EQUATION_RGB;
using gles2::GL_FUNC_SUBTRACT;
using gles2::GL_FUNC_REVERSE_SUBTRACT;
using gles2::GL_SAMPLE_ALPHA_TO_COVERAGE;
using gles2::GL_SAMPLE_COVERAGE;
using gles2::GL_SAMPLE_BUFFERS;
using gles2::GL_SAMPLES;
using gles2::GL_SAMPLE_COVERAGE_VALUE;
using gles2::GL_SAMPLE_COVERAGE_INVERT;
using gles2::GL_BLEND_DST_RGB;
using gles2::GL_BLEND_SRC_RGB;
using gles2::GL_BLEND_DST_ALPHA;
using gles2::GL_BLEND_SRC_ALPHA;
using gles2::GL_DEPTH_COMPONENT16;
using gles2::GL_UNSIGNED_SHORT_5_6_5;
using gles2::GL_MIRRORED_REPEAT;
using gles2::GL_TEXTURE0;
using gles2::GL_TEXTURE1;
using gles2::GL_TEXTURE2;
using gles2::GL_TEXTURE3;
using gles2::GL_TEXTURE4;
using gles2::GL_TEXTURE5;
using gles2::GL_TEXTURE6;
using gles2::GL_TEXTURE7;
using gles2::GL_TEXTURE8;
using gles2::GL_TEXTURE9;
using gles2::GL_TEXTURE10;
using gles2::GL_TEXTURE11;
using gles2::GL_TEXTURE12;
using gles2::GL_TEXTURE13;
using gles2::GL_TEXTURE14;
using gles2::GL_TEXTURE15;
using gles2::GL_TEXTURE16;
using gles2::GL_TEXTURE17;
using gles2::GL_TEXTURE18;
using gles2::GL_TEXTURE19;
using gles2::GL_TEXTURE20;
using gles2::GL_TEXTURE21;
using gles2::GL_TEXTURE22;
using gles2::GL_TEXTURE23;
using gles2::GL_TEXTURE24;
using gles2::GL_TEXTURE25;
using gles2::GL_TEXTURE26;
using gles2::GL_TEXTURE27;
using gles2::GL_TEXTURE28;
using gles2::GL_TEXTURE29;
using gles2::GL_TEXTURE30;
using gles2::GL_TEXTURE31;
using gles2::GL_ACTIVE_TEXTURE;
using gles2::GL_MAX_RENDERBUFFER_SIZE;
using gles2::GL_INCR_WRAP;
using gles2::GL_DECR_WRAP;
using gles2::GL_TEXTURE_CUBE_MAP;
using gles2::GL_TEXTURE_BINDING_CUBE_MAP;
using gles2::GL_TEXTURE_CUBE_MAP_POSITIVE_X;
using gles2::GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
using gles2::GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
using gles2::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
using gles2::GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
using gles2::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
using gles2::GL_MAX_CUBE_MAP_TEXTURE_SIZE;
using gles2::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
using gles2::GL_VERTEX_ATTRIB_ARRAY_SIZE;
using gles2::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
using gles2::GL_VERTEX_ATTRIB_ARRAY_TYPE;
using gles2::GL_CURRENT_VERTEX_ATTRIB;
using gles2::GL_VERTEX_ATTRIB_ARRAY_POINTER;
using gles2::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
using gles2::GL_COMPRESSED_TEXTURE_FORMATS;
using gles2::GL_BUFFER_SIZE;
using gles2::GL_BUFFER_USAGE;
using gles2::GL_STENCIL_BACK_FUNC;
using gles2::GL_STENCIL_BACK_FAIL;
using gles2::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
using gles2::GL_STENCIL_BACK_PASS_DEPTH_PASS;
using gles2::GL_BLEND_EQUATION_ALPHA;
using gles2::GL_MAX_VERTEX_ATTRIBS;
using gles2::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
using gles2::GL_MAX_TEXTURE_IMAGE_UNITS;
using gles2::GL_ARRAY_BUFFER;
using gles2::GL_ELEMENT_ARRAY_BUFFER;
using gles2::GL_ARRAY_BUFFER_BINDING;
using gles2::GL_ELEMENT_ARRAY_BUFFER_BINDING;
using gles2::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
using gles2::GL_STREAM_DRAW;
using gles2::GL_STATIC_DRAW;
using gles2::GL_DYNAMIC_DRAW;
using gles2::GL_FRAGMENT_SHADER;
using gles2::GL_VERTEX_SHADER;
using gles2::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
using gles2::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
using gles2::GL_SHADER_TYPE;
using gles2::GL_FLOAT_VEC2;
using gles2::GL_FLOAT_VEC3;
using gles2::GL_FLOAT_VEC4;
using gles2::GL_INT_VEC2;
using gles2::GL_INT_VEC3;
using gles2::GL_INT_VEC4;
using gles2::GL_BOOL;
using gles2::GL_BOOL_VEC2;
using gles2::GL_BOOL_VEC3;
using gles2::GL_BOOL_VEC4;
using gles2::GL_FLOAT_MAT2;
using gles2::GL_FLOAT_MAT3;
using gles2::GL_FLOAT_MAT4;
using gles2::GL_SAMPLER_2D;
using gles2::GL_SAMPLER_CUBE;
using gles2::GL_DELETE_STATUS;
using gles2::GL_COMPILE_STATUS;
using gles2::GL_LINK_STATUS;
using gles2::GL_VALIDATE_STATUS;
using gles2::GL_INFO_LOG_LENGTH;
using gles2::GL_ATTACHED_SHADERS;
using gles2::GL_ACTIVE_UNIFORMS;
using gles2::GL_ACTIVE_UNIFORM_MAX_LENGTH;
using gles2::GL_SHADER_SOURCE_LENGTH;
using gles2::GL_ACTIVE_ATTRIBUTES;
using gles2::GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
using gles2::GL_SHADING_LANGUAGE_VERSION;
using gles2::GL_CURRENT_PROGRAM;
using gles2::GL_IMPLEMENTATION_COLOR_READ_TYPE;
using gles2::GL_IMPLEMENTATION_COLOR_READ_FORMAT;
using gles2::GL_STENCIL_BACK_REF;
using gles2::GL_STENCIL_BACK_VALUE_MASK;
using gles2::GL_STENCIL_BACK_WRITEMASK;
using gles2::GL_FRAMEBUFFER_BINDING;
using gles2::GL_RENDERBUFFER_BINDING;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
using gles2::GL_FRAMEBUFFER_COMPLETE;
using gles2::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
using gles2::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
using gles2::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
using gles2::GL_FRAMEBUFFER_UNSUPPORTED;
using gles2::GL_COLOR_ATTACHMENT0;
using gles2::GL_DEPTH_ATTACHMENT;
using gles2::GL_STENCIL_ATTACHMENT;
using gles2::GL_FRAMEBUFFER;
using gles2::GL_RENDERBUFFER;
using gles2::GL_RENDERBUFFER_WIDTH;
using gles2::GL_RENDERBUFFER_HEIGHT;
using gles2::GL_RENDERBUFFER_INTERNAL_FORMAT;
using gles2::GL_STENCIL_INDEX8;
using gles2::GL_RENDERBUFFER_RED_SIZE;
using gles2::GL_RENDERBUFFER_GREEN_SIZE;
using gles2::GL_RENDERBUFFER_BLUE_SIZE;
using gles2::GL_RENDERBUFFER_ALPHA_SIZE;
using gles2::GL_RENDERBUFFER_DEPTH_SIZE;
using gles2::GL_RENDERBUFFER_STENCIL_SIZE;
using gles2::GL_RGB565;
using gles2::GL_LOW_FLOAT;
using gles2::GL_MEDIUM_FLOAT;
using gles2::GL_HIGH_FLOAT;
using gles2::GL_LOW_INT;
using gles2::GL_MEDIUM_INT;
using gles2::GL_HIGH_INT;
using gles2::GL_SHADER_BINARY_FORMATS;
using gles2::GL_NUM_SHADER_BINARY_FORMATS;
using gles2::GL_SHADER_COMPILER;
using gles2::GL_MAX_VERTEX_UNIFORM_VECTORS;
using gles2::GL_MAX_VARYING_VECTORS;
using gles2::GL_MAX_FRAGMENT_UNIFORM_VECTORS;

} // namespace gles20
