#pragma once

#include <glesbinding/nogles.h>

#include <glesbinding/gles/enum.h>


namespace gles30
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
using gles2::GL_READ_BUFFER;
using gles2::GL_SCISSOR_BOX;
// using gles2::GL_SCISSOR_TEST; // reuse EnableCap
using gles2::GL_COLOR_CLEAR_VALUE;
using gles2::GL_COLOR_WRITEMASK;
using gles2::GL_UNPACK_ROW_LENGTH;
using gles2::GL_UNPACK_SKIP_ROWS;
using gles2::GL_UNPACK_SKIP_PIXELS;
using gles2::GL_UNPACK_ALIGNMENT;
using gles2::GL_PACK_ROW_LENGTH;
using gles2::GL_PACK_SKIP_ROWS;
using gles2::GL_PACK_SKIP_PIXELS;
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
using gles2::GL_TEXTURE_BINDING_3D;
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
using gles2::GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
using gles2::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;

// IndexPointerType

// using gles2::GL_SHORT; // reuse ColorPointerType
// using gles2::GL_INT; // reuse ColorPointerType
// using gles2::GL_FLOAT; // reuse ColorPointerType

// InternalFormat

using gles2::GL_RGB8;
using gles2::GL_RGBA4;
using gles2::GL_RGB5_A1;
using gles2::GL_RGBA8;
using gles2::GL_RGB10_A2;

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

// PixelCopyType

using gles2::GL_COLOR;
using gles2::GL_DEPTH;
using gles2::GL_STENCIL;

// PixelFormat

// using gles2::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gles2::GL_UNSIGNED_INT; // reuse ColorPointerType
using gles2::GL_DEPTH_COMPONENT;
using gles2::GL_RED;
using gles2::GL_GREEN;
using gles2::GL_BLUE;
using gles2::GL_ALPHA;
using gles2::GL_RGB;
using gles2::GL_RGBA;
using gles2::GL_LUMINANCE;
using gles2::GL_LUMINANCE_ALPHA;

// PixelStoreParameter

// using gles2::GL_UNPACK_ROW_LENGTH; // reuse GetPName
// using gles2::GL_UNPACK_SKIP_ROWS; // reuse GetPName
// using gles2::GL_UNPACK_SKIP_PIXELS; // reuse GetPName
// using gles2::GL_UNPACK_ALIGNMENT; // reuse GetPName
// using gles2::GL_PACK_ROW_LENGTH; // reuse GetPName
// using gles2::GL_PACK_SKIP_ROWS; // reuse GetPName
// using gles2::GL_PACK_SKIP_PIXELS; // reuse GetPName
// using gles2::GL_PACK_ALIGNMENT; // reuse GetPName
using gles2::GL_UNPACK_SKIP_IMAGES;
using gles2::GL_UNPACK_IMAGE_HEIGHT;

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
using gles2::GL_TEXTURE_WRAP_R;

// TextureTarget

// using gles2::GL_TEXTURE_2D; // reuse EnableCap
using gles2::GL_TEXTURE_3D;
using gles2::GL_TEXTURE_MIN_LOD;
using gles2::GL_TEXTURE_MAX_LOD;
using gles2::GL_TEXTURE_BASE_LEVEL;
using gles2::GL_TEXTURE_MAX_LEVEL;

// TextureWrapMode

using gles2::GL_REPEAT;
using gles2::GL_CLAMP_TO_EDGE;

// VertexPointerType

// using gles2::GL_SHORT; // reuse ColorPointerType
// using gles2::GL_INT; // reuse ColorPointerType
// using gles2::GL_FLOAT; // reuse ColorPointerType

// __UNGROUPED__

using gles2::GL_HALF_FLOAT;
using gles2::GL_FIXED;
using gles2::GL_CONSTANT_COLOR;
using gles2::GL_ONE_MINUS_CONSTANT_COLOR;
using gles2::GL_CONSTANT_ALPHA;
using gles2::GL_ONE_MINUS_CONSTANT_ALPHA;
using gles2::GL_BLEND_COLOR;
using gles2::GL_FUNC_ADD;
using gles2::GL_MIN;
using gles2::GL_MAX;
using gles2::GL_BLEND_EQUATION;
using gles2::GL_BLEND_EQUATION_RGB;
using gles2::GL_FUNC_SUBTRACT;
using gles2::GL_FUNC_REVERSE_SUBTRACT;
using gles2::GL_MAX_3D_TEXTURE_SIZE;
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
using gles2::GL_MAX_ELEMENTS_VERTICES;
using gles2::GL_MAX_ELEMENTS_INDICES;
using gles2::GL_DEPTH_COMPONENT16;
using gles2::GL_DEPTH_COMPONENT24;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
using gles2::GL_FRAMEBUFFER_DEFAULT;
using gles2::GL_FRAMEBUFFER_UNDEFINED;
using gles2::GL_DEPTH_STENCIL_ATTACHMENT;
using gles2::GL_MAJOR_VERSION;
using gles2::GL_MINOR_VERSION;
using gles2::GL_NUM_EXTENSIONS;
using gles2::GL_RG;
using gles2::GL_RG_INTEGER;
using gles2::GL_R8;
using gles2::GL_RG8;
using gles2::GL_R16F;
using gles2::GL_R32F;
using gles2::GL_RG16F;
using gles2::GL_RG32F;
using gles2::GL_R8I;
using gles2::GL_R8UI;
using gles2::GL_R16I;
using gles2::GL_R16UI;
using gles2::GL_R32I;
using gles2::GL_R32UI;
using gles2::GL_RG8I;
using gles2::GL_RG8UI;
using gles2::GL_RG16I;
using gles2::GL_RG16UI;
using gles2::GL_RG32I;
using gles2::GL_RG32UI;
using gles2::GL_TEXTURE_IMMUTABLE_LEVELS;
using gles2::GL_UNSIGNED_SHORT_5_6_5;
using gles2::GL_UNSIGNED_INT_2_10_10_10_REV;
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
using gles2::GL_DEPTH_STENCIL;
using gles2::GL_UNSIGNED_INT_24_8;
using gles2::GL_MAX_TEXTURE_LOD_BIAS;
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
using gles2::GL_VERTEX_ARRAY_BINDING;
using gles2::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
using gles2::GL_VERTEX_ATTRIB_ARRAY_SIZE;
using gles2::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
using gles2::GL_VERTEX_ATTRIB_ARRAY_TYPE;
using gles2::GL_CURRENT_VERTEX_ATTRIB;
using gles2::GL_VERTEX_ATTRIB_ARRAY_POINTER;
using gles2::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
using gles2::GL_COMPRESSED_TEXTURE_FORMATS;
using gles2::GL_PROGRAM_BINARY_LENGTH;
using gles2::GL_BUFFER_SIZE;
using gles2::GL_BUFFER_USAGE;
using gles2::GL_NUM_PROGRAM_BINARY_FORMATS;
using gles2::GL_PROGRAM_BINARY_FORMATS;
using gles2::GL_STENCIL_BACK_FUNC;
using gles2::GL_STENCIL_BACK_FAIL;
using gles2::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
using gles2::GL_STENCIL_BACK_PASS_DEPTH_PASS;
using gles2::GL_RGBA32F;
using gles2::GL_RGB32F;
using gles2::GL_RGBA16F;
using gles2::GL_RGB16F;
using gles2::GL_MAX_DRAW_BUFFERS;
using gles2::GL_DRAW_BUFFER0;
using gles2::GL_DRAW_BUFFER1;
using gles2::GL_DRAW_BUFFER2;
using gles2::GL_DRAW_BUFFER3;
using gles2::GL_DRAW_BUFFER4;
using gles2::GL_DRAW_BUFFER5;
using gles2::GL_DRAW_BUFFER6;
using gles2::GL_DRAW_BUFFER7;
using gles2::GL_DRAW_BUFFER8;
using gles2::GL_DRAW_BUFFER9;
using gles2::GL_DRAW_BUFFER10;
using gles2::GL_DRAW_BUFFER11;
using gles2::GL_DRAW_BUFFER12;
using gles2::GL_DRAW_BUFFER13;
using gles2::GL_DRAW_BUFFER14;
using gles2::GL_DRAW_BUFFER15;
using gles2::GL_BLEND_EQUATION_ALPHA;
using gles2::GL_TEXTURE_COMPARE_MODE;
using gles2::GL_TEXTURE_COMPARE_FUNC;
using gles2::GL_COMPARE_REF_TO_TEXTURE;
using gles2::GL_CURRENT_QUERY;
using gles2::GL_QUERY_RESULT;
using gles2::GL_QUERY_RESULT_AVAILABLE;
using gles2::GL_MAX_VERTEX_ATTRIBS;
using gles2::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
using gles2::GL_MAX_TEXTURE_IMAGE_UNITS;
using gles2::GL_ARRAY_BUFFER;
using gles2::GL_ELEMENT_ARRAY_BUFFER;
using gles2::GL_ARRAY_BUFFER_BINDING;
using gles2::GL_ELEMENT_ARRAY_BUFFER_BINDING;
using gles2::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
using gles2::GL_BUFFER_MAPPED;
using gles2::GL_BUFFER_MAP_POINTER;
using gles2::GL_STREAM_DRAW;
using gles2::GL_STREAM_READ;
using gles2::GL_STREAM_COPY;
using gles2::GL_STATIC_DRAW;
using gles2::GL_STATIC_READ;
using gles2::GL_STATIC_COPY;
using gles2::GL_DYNAMIC_DRAW;
using gles2::GL_DYNAMIC_READ;
using gles2::GL_DYNAMIC_COPY;
using gles2::GL_PIXEL_PACK_BUFFER;
using gles2::GL_PIXEL_UNPACK_BUFFER;
using gles2::GL_PIXEL_PACK_BUFFER_BINDING;
using gles2::GL_PIXEL_UNPACK_BUFFER_BINDING;
using gles2::GL_DEPTH24_STENCIL8;
using gles2::GL_VERTEX_ATTRIB_ARRAY_INTEGER;
using gles2::GL_VERTEX_ATTRIB_ARRAY_DIVISOR;
using gles2::GL_MAX_ARRAY_TEXTURE_LAYERS;
using gles2::GL_MIN_PROGRAM_TEXEL_OFFSET;
using gles2::GL_MAX_PROGRAM_TEXEL_OFFSET;
using gles2::GL_SAMPLER_BINDING;
using gles2::GL_UNIFORM_BUFFER;
using gles2::GL_UNIFORM_BUFFER_BINDING;
using gles2::GL_UNIFORM_BUFFER_START;
using gles2::GL_UNIFORM_BUFFER_SIZE;
using gles2::GL_MAX_VERTEX_UNIFORM_BLOCKS;
using gles2::GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
using gles2::GL_MAX_COMBINED_UNIFORM_BLOCKS;
using gles2::GL_MAX_UNIFORM_BUFFER_BINDINGS;
using gles2::GL_MAX_UNIFORM_BLOCK_SIZE;
using gles2::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
using gles2::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
using gles2::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
using gles2::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
using gles2::GL_ACTIVE_UNIFORM_BLOCKS;
using gles2::GL_UNIFORM_TYPE;
using gles2::GL_UNIFORM_SIZE;
using gles2::GL_UNIFORM_NAME_LENGTH;
using gles2::GL_UNIFORM_BLOCK_INDEX;
using gles2::GL_UNIFORM_OFFSET;
using gles2::GL_UNIFORM_ARRAY_STRIDE;
using gles2::GL_UNIFORM_MATRIX_STRIDE;
using gles2::GL_UNIFORM_IS_ROW_MAJOR;
using gles2::GL_UNIFORM_BLOCK_BINDING;
using gles2::GL_UNIFORM_BLOCK_DATA_SIZE;
using gles2::GL_UNIFORM_BLOCK_NAME_LENGTH;
using gles2::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
using gles2::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
using gles2::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
using gles2::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;
using gles2::GL_FRAGMENT_SHADER;
using gles2::GL_VERTEX_SHADER;
using gles2::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
using gles2::GL_MAX_VERTEX_UNIFORM_COMPONENTS;
using gles2::GL_MAX_VARYING_COMPONENTS;
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
using gles2::GL_SAMPLER_3D;
using gles2::GL_SAMPLER_CUBE;
using gles2::GL_SAMPLER_2D_SHADOW;
using gles2::GL_FLOAT_MAT2x3;
using gles2::GL_FLOAT_MAT2x4;
using gles2::GL_FLOAT_MAT3x2;
using gles2::GL_FLOAT_MAT3x4;
using gles2::GL_FLOAT_MAT4x2;
using gles2::GL_FLOAT_MAT4x3;
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
using gles2::GL_UNSIGNED_NORMALIZED;
using gles2::GL_TEXTURE_2D_ARRAY;
using gles2::GL_TEXTURE_BINDING_2D_ARRAY;
using gles2::GL_ANY_SAMPLES_PASSED;
using gles2::GL_R11F_G11F_B10F;
using gles2::GL_UNSIGNED_INT_10F_11F_11F_REV;
using gles2::GL_RGB9_E5;
using gles2::GL_UNSIGNED_INT_5_9_9_9_REV;
using gles2::GL_SRGB;
using gles2::GL_SRGB8;
using gles2::GL_SRGB8_ALPHA8;
using gles2::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
using gles2::GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
using gles2::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
using gles2::GL_TRANSFORM_FEEDBACK_VARYINGS;
using gles2::GL_TRANSFORM_FEEDBACK_BUFFER_START;
using gles2::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
using gles2::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
using gles2::GL_RASTERIZER_DISCARD;
using gles2::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
using gles2::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
using gles2::GL_INTERLEAVED_ATTRIBS;
using gles2::GL_SEPARATE_ATTRIBS;
using gles2::GL_TRANSFORM_FEEDBACK_BUFFER;
using gles2::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
using gles2::GL_STENCIL_BACK_REF;
using gles2::GL_STENCIL_BACK_VALUE_MASK;
using gles2::GL_STENCIL_BACK_WRITEMASK;
using gles2::GL_DRAW_FRAMEBUFFER_BINDING;
using gles2::GL_FRAMEBUFFER_BINDING;
using gles2::GL_RENDERBUFFER_BINDING;
using gles2::GL_READ_FRAMEBUFFER;
using gles2::GL_DRAW_FRAMEBUFFER;
using gles2::GL_READ_FRAMEBUFFER_BINDING;
using gles2::GL_RENDERBUFFER_SAMPLES;
using gles2::GL_DEPTH_COMPONENT32F;
using gles2::GL_DEPTH32F_STENCIL8;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
using gles2::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
using gles2::GL_FRAMEBUFFER_COMPLETE;
using gles2::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
using gles2::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
using gles2::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
using gles2::GL_FRAMEBUFFER_UNSUPPORTED;
using gles2::GL_MAX_COLOR_ATTACHMENTS;
using gles2::GL_COLOR_ATTACHMENT0;
using gles2::GL_COLOR_ATTACHMENT1;
using gles2::GL_COLOR_ATTACHMENT2;
using gles2::GL_COLOR_ATTACHMENT3;
using gles2::GL_COLOR_ATTACHMENT4;
using gles2::GL_COLOR_ATTACHMENT5;
using gles2::GL_COLOR_ATTACHMENT6;
using gles2::GL_COLOR_ATTACHMENT7;
using gles2::GL_COLOR_ATTACHMENT8;
using gles2::GL_COLOR_ATTACHMENT9;
using gles2::GL_COLOR_ATTACHMENT10;
using gles2::GL_COLOR_ATTACHMENT11;
using gles2::GL_COLOR_ATTACHMENT12;
using gles2::GL_COLOR_ATTACHMENT13;
using gles2::GL_COLOR_ATTACHMENT14;
using gles2::GL_COLOR_ATTACHMENT15;
using gles2::GL_COLOR_ATTACHMENT16;
using gles2::GL_COLOR_ATTACHMENT17;
using gles2::GL_COLOR_ATTACHMENT18;
using gles2::GL_COLOR_ATTACHMENT19;
using gles2::GL_COLOR_ATTACHMENT20;
using gles2::GL_COLOR_ATTACHMENT21;
using gles2::GL_COLOR_ATTACHMENT22;
using gles2::GL_COLOR_ATTACHMENT23;
using gles2::GL_COLOR_ATTACHMENT24;
using gles2::GL_COLOR_ATTACHMENT25;
using gles2::GL_COLOR_ATTACHMENT26;
using gles2::GL_COLOR_ATTACHMENT27;
using gles2::GL_COLOR_ATTACHMENT28;
using gles2::GL_COLOR_ATTACHMENT29;
using gles2::GL_COLOR_ATTACHMENT30;
using gles2::GL_COLOR_ATTACHMENT31;
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
using gles2::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
using gles2::GL_MAX_SAMPLES;
using gles2::GL_RGB565;
using gles2::GL_PRIMITIVE_RESTART_FIXED_INDEX;
using gles2::GL_ANY_SAMPLES_PASSED_CONSERVATIVE;
using gles2::GL_MAX_ELEMENT_INDEX;
using gles2::GL_RGBA32UI;
using gles2::GL_RGB32UI;
using gles2::GL_RGBA16UI;
using gles2::GL_RGB16UI;
using gles2::GL_RGBA8UI;
using gles2::GL_RGB8UI;
using gles2::GL_RGBA32I;
using gles2::GL_RGB32I;
using gles2::GL_RGBA16I;
using gles2::GL_RGB16I;
using gles2::GL_RGBA8I;
using gles2::GL_RGB8I;
using gles2::GL_RED_INTEGER;
using gles2::GL_RGB_INTEGER;
using gles2::GL_RGBA_INTEGER;
using gles2::GL_INT_2_10_10_10_REV;
using gles2::GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
using gles2::GL_SAMPLER_2D_ARRAY;
using gles2::GL_SAMPLER_2D_ARRAY_SHADOW;
using gles2::GL_SAMPLER_CUBE_SHADOW;
using gles2::GL_UNSIGNED_INT_VEC2;
using gles2::GL_UNSIGNED_INT_VEC3;
using gles2::GL_UNSIGNED_INT_VEC4;
using gles2::GL_INT_SAMPLER_2D;
using gles2::GL_INT_SAMPLER_3D;
using gles2::GL_INT_SAMPLER_CUBE;
using gles2::GL_INT_SAMPLER_2D_ARRAY;
using gles2::GL_UNSIGNED_INT_SAMPLER_2D;
using gles2::GL_UNSIGNED_INT_SAMPLER_3D;
using gles2::GL_UNSIGNED_INT_SAMPLER_CUBE;
using gles2::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
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
using gles2::GL_TRANSFORM_FEEDBACK;
using gles2::GL_TRANSFORM_FEEDBACK_PAUSED;
using gles2::GL_TRANSFORM_FEEDBACK_ACTIVE;
using gles2::GL_TRANSFORM_FEEDBACK_BINDING;
using gles2::GL_TEXTURE_SWIZZLE_R;
using gles2::GL_TEXTURE_SWIZZLE_G;
using gles2::GL_TEXTURE_SWIZZLE_B;
using gles2::GL_TEXTURE_SWIZZLE_A;
using gles2::GL_COPY_READ_BUFFER;
using gles2::GL_COPY_READ_BUFFER_BINDING;
using gles2::GL_COPY_WRITE_BUFFER;
using gles2::GL_COPY_WRITE_BUFFER_BINDING;
using gles2::GL_R8_SNORM;
using gles2::GL_RG8_SNORM;
using gles2::GL_RGB8_SNORM;
using gles2::GL_RGBA8_SNORM;
using gles2::GL_SIGNED_NORMALIZED;
using gles2::GL_RGB10_A2UI;
using gles2::GL_MAX_SERVER_WAIT_TIMEOUT;
using gles2::GL_OBJECT_TYPE;
using gles2::GL_SYNC_CONDITION;
using gles2::GL_SYNC_STATUS;
using gles2::GL_SYNC_FLAGS;
using gles2::GL_SYNC_FENCE;
using gles2::GL_SYNC_GPU_COMMANDS_COMPLETE;
using gles2::GL_UNSIGNALED;
using gles2::GL_SIGNALED;
using gles2::GL_ALREADY_SIGNALED;
using gles2::GL_TIMEOUT_EXPIRED;
using gles2::GL_CONDITION_SATISFIED;
using gles2::GL_WAIT_FAILED;
using gles2::GL_BUFFER_ACCESS_FLAGS;
using gles2::GL_BUFFER_MAP_LENGTH;
using gles2::GL_BUFFER_MAP_OFFSET;
using gles2::GL_MAX_VERTEX_OUTPUT_COMPONENTS;
using gles2::GL_MAX_FRAGMENT_INPUT_COMPONENTS;
using gles2::GL_TEXTURE_IMMUTABLE_FORMAT;
using gles2::GL_COMPRESSED_R11_EAC;
using gles2::GL_COMPRESSED_SIGNED_R11_EAC;
using gles2::GL_COMPRESSED_RG11_EAC;
using gles2::GL_COMPRESSED_SIGNED_RG11_EAC;
using gles2::GL_COMPRESSED_RGB8_ETC2;
using gles2::GL_COMPRESSED_SRGB8_ETC2;
using gles2::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2;
using gles2::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2;
using gles2::GL_COMPRESSED_RGBA8_ETC2_EAC;
using gles2::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC;
using gles2::GL_NUM_SAMPLE_COUNTS;

} // namespace gles30
