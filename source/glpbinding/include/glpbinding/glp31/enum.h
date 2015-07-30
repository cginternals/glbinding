#pragma once

#include <glpbinding/noglp.h>

#include <glpbinding/glp/enum.h>


namespace glp31
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
using glp::GL_READ_BUFFER;
using glp::GL_SCISSOR_BOX;
// using glp::GL_SCISSOR_TEST; // reuse EnableCap
using glp::GL_COLOR_CLEAR_VALUE;
using glp::GL_COLOR_WRITEMASK;
using glp::GL_UNPACK_ROW_LENGTH;
using glp::GL_UNPACK_SKIP_ROWS;
using glp::GL_UNPACK_SKIP_PIXELS;
using glp::GL_UNPACK_ALIGNMENT;
using glp::GL_PACK_ROW_LENGTH;
using glp::GL_PACK_SKIP_ROWS;
using glp::GL_PACK_SKIP_PIXELS;
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
using glp::GL_TEXTURE_BINDING_3D;
using glp::GL_ALIASED_POINT_SIZE_RANGE;
using glp::GL_ALIASED_LINE_WIDTH_RANGE;

// GetTextureParameter

using glp::GL_TEXTURE_WIDTH;
using glp::GL_TEXTURE_HEIGHT;
using glp::GL_TEXTURE_INTERNAL_FORMAT;
using glp::GL_TEXTURE_MAG_FILTER;
using glp::GL_TEXTURE_MIN_FILTER;
using glp::GL_TEXTURE_WRAP_S;
using glp::GL_TEXTURE_WRAP_T;
using glp::GL_TEXTURE_RED_SIZE;
using glp::GL_TEXTURE_GREEN_SIZE;
using glp::GL_TEXTURE_BLUE_SIZE;
using glp::GL_TEXTURE_ALPHA_SIZE;

// HintMode

using glp::GL_DONT_CARE;
using glp::GL_FASTEST;
using glp::GL_NICEST;

// HintTarget

using glp::GL_GENERATE_MIPMAP_HINT;
using glp::GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
using glp::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;

// IndexPointerType

// using glp::GL_SHORT; // reuse ColorPointerType
// using glp::GL_INT; // reuse ColorPointerType
// using glp::GL_FLOAT; // reuse ColorPointerType

// InternalFormat

using glp::GL_RGB8;
using glp::GL_RGBA4;
using glp::GL_RGB5_A1;
using glp::GL_RGBA8;
using glp::GL_RGB10_A2;

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

// PixelCopyType

using glp::GL_COLOR;
using glp::GL_DEPTH;
using glp::GL_STENCIL;

// PixelFormat

// using glp::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using glp::GL_UNSIGNED_INT; // reuse ColorPointerType
using glp::GL_STENCIL_INDEX;
using glp::GL_DEPTH_COMPONENT;
using glp::GL_RED;
using glp::GL_GREEN;
using glp::GL_BLUE;
using glp::GL_ALPHA;
using glp::GL_RGB;
using glp::GL_RGBA;
using glp::GL_LUMINANCE;
using glp::GL_LUMINANCE_ALPHA;

// PixelStoreParameter

// using glp::GL_UNPACK_ROW_LENGTH; // reuse GetPName
// using glp::GL_UNPACK_SKIP_ROWS; // reuse GetPName
// using glp::GL_UNPACK_SKIP_PIXELS; // reuse GetPName
// using glp::GL_UNPACK_ALIGNMENT; // reuse GetPName
// using glp::GL_PACK_ROW_LENGTH; // reuse GetPName
// using glp::GL_PACK_SKIP_ROWS; // reuse GetPName
// using glp::GL_PACK_SKIP_PIXELS; // reuse GetPName
// using glp::GL_PACK_ALIGNMENT; // reuse GetPName
using glp::GL_UNPACK_SKIP_IMAGES;
using glp::GL_UNPACK_IMAGE_HEIGHT;

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
using glp::GL_TEXTURE_WRAP_R;

// TextureTarget

// using glp::GL_TEXTURE_2D; // reuse EnableCap
using glp::GL_TEXTURE_3D;
using glp::GL_TEXTURE_MIN_LOD;
using glp::GL_TEXTURE_MAX_LOD;
using glp::GL_TEXTURE_BASE_LEVEL;
using glp::GL_TEXTURE_MAX_LEVEL;

// TextureWrapMode

using glp::GL_REPEAT;
using glp::GL_CLAMP_TO_EDGE;

// VertexPointerType

// using glp::GL_SHORT; // reuse ColorPointerType
// using glp::GL_INT; // reuse ColorPointerType
// using glp::GL_FLOAT; // reuse ColorPointerType

// __UNGROUPED__

using glp::GL_HALF_FLOAT;
using glp::GL_FIXED;
using glp::GL_CONSTANT_COLOR;
using glp::GL_ONE_MINUS_CONSTANT_COLOR;
using glp::GL_CONSTANT_ALPHA;
using glp::GL_ONE_MINUS_CONSTANT_ALPHA;
using glp::GL_BLEND_COLOR;
using glp::GL_FUNC_ADD;
using glp::GL_MIN;
using glp::GL_MAX;
using glp::GL_BLEND_EQUATION;
using glp::GL_BLEND_EQUATION_RGB;
using glp::GL_FUNC_SUBTRACT;
using glp::GL_FUNC_REVERSE_SUBTRACT;
using glp::GL_TEXTURE_DEPTH;
using glp::GL_MAX_3D_TEXTURE_SIZE;
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
using glp::GL_MAX_ELEMENTS_VERTICES;
using glp::GL_MAX_ELEMENTS_INDICES;
using glp::GL_DEPTH_COMPONENT16;
using glp::GL_DEPTH_COMPONENT24;
using glp::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
using glp::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
using glp::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
using glp::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
using glp::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
using glp::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
using glp::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
using glp::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
using glp::GL_FRAMEBUFFER_DEFAULT;
using glp::GL_FRAMEBUFFER_UNDEFINED;
using glp::GL_DEPTH_STENCIL_ATTACHMENT;
using glp::GL_MAJOR_VERSION;
using glp::GL_MINOR_VERSION;
using glp::GL_NUM_EXTENSIONS;
using glp::GL_RG;
using glp::GL_RG_INTEGER;
using glp::GL_R8;
using glp::GL_RG8;
using glp::GL_R16F;
using glp::GL_R32F;
using glp::GL_RG16F;
using glp::GL_RG32F;
using glp::GL_R8I;
using glp::GL_R8UI;
using glp::GL_R16I;
using glp::GL_R16UI;
using glp::GL_R32I;
using glp::GL_R32UI;
using glp::GL_RG8I;
using glp::GL_RG8UI;
using glp::GL_RG16I;
using glp::GL_RG16UI;
using glp::GL_RG32I;
using glp::GL_RG32UI;
using glp::GL_PROGRAM_SEPARABLE;
using glp::GL_ACTIVE_PROGRAM;
using glp::GL_PROGRAM_PIPELINE_BINDING;
using glp::GL_MAX_COMPUTE_SHARED_MEMORY_SIZE;
using glp::GL_MAX_COMPUTE_UNIFORM_COMPONENTS;
using glp::GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS;
using glp::GL_MAX_COMPUTE_ATOMIC_COUNTERS;
using glp::GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS;
using glp::GL_COMPUTE_WORK_GROUP_SIZE;
using glp::GL_MAX_UNIFORM_LOCATIONS;
using glp::GL_VERTEX_ATTRIB_BINDING;
using glp::GL_VERTEX_ATTRIB_RELATIVE_OFFSET;
using glp::GL_VERTEX_BINDING_DIVISOR;
using glp::GL_VERTEX_BINDING_OFFSET;
using glp::GL_VERTEX_BINDING_STRIDE;
using glp::GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET;
using glp::GL_MAX_VERTEX_ATTRIB_BINDINGS;
using glp::GL_TEXTURE_IMMUTABLE_LEVELS;
using glp::GL_MAX_VERTEX_ATTRIB_STRIDE;
using glp::GL_UNSIGNED_SHORT_5_6_5;
using glp::GL_UNSIGNED_INT_2_10_10_10_REV;
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
using glp::GL_DEPTH_STENCIL;
using glp::GL_UNSIGNED_INT_24_8;
using glp::GL_MAX_TEXTURE_LOD_BIAS;
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
using glp::GL_VERTEX_ARRAY_BINDING;
using glp::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
using glp::GL_VERTEX_ATTRIB_ARRAY_SIZE;
using glp::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
using glp::GL_VERTEX_ATTRIB_ARRAY_TYPE;
using glp::GL_CURRENT_VERTEX_ATTRIB;
using glp::GL_VERTEX_ATTRIB_ARRAY_POINTER;
using glp::GL_TEXTURE_COMPRESSED;
using glp::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
using glp::GL_COMPRESSED_TEXTURE_FORMATS;
using glp::GL_PROGRAM_BINARY_LENGTH;
using glp::GL_BUFFER_SIZE;
using glp::GL_BUFFER_USAGE;
using glp::GL_NUM_PROGRAM_BINARY_FORMATS;
using glp::GL_PROGRAM_BINARY_FORMATS;
using glp::GL_STENCIL_BACK_FUNC;
using glp::GL_STENCIL_BACK_FAIL;
using glp::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
using glp::GL_STENCIL_BACK_PASS_DEPTH_PASS;
using glp::GL_RGBA32F;
using glp::GL_RGB32F;
using glp::GL_RGBA16F;
using glp::GL_RGB16F;
using glp::GL_MAX_DRAW_BUFFERS;
using glp::GL_DRAW_BUFFER0;
using glp::GL_DRAW_BUFFER1;
using glp::GL_DRAW_BUFFER2;
using glp::GL_DRAW_BUFFER3;
using glp::GL_DRAW_BUFFER4;
using glp::GL_DRAW_BUFFER5;
using glp::GL_DRAW_BUFFER6;
using glp::GL_DRAW_BUFFER7;
using glp::GL_DRAW_BUFFER8;
using glp::GL_DRAW_BUFFER9;
using glp::GL_DRAW_BUFFER10;
using glp::GL_DRAW_BUFFER11;
using glp::GL_DRAW_BUFFER12;
using glp::GL_DRAW_BUFFER13;
using glp::GL_DRAW_BUFFER14;
using glp::GL_DRAW_BUFFER15;
using glp::GL_BLEND_EQUATION_ALPHA;
using glp::GL_TEXTURE_DEPTH_SIZE;
using glp::GL_TEXTURE_COMPARE_MODE;
using glp::GL_TEXTURE_COMPARE_FUNC;
using glp::GL_COMPARE_REF_TO_TEXTURE;
using glp::GL_CURRENT_QUERY;
using glp::GL_QUERY_RESULT;
using glp::GL_QUERY_RESULT_AVAILABLE;
using glp::GL_MAX_VERTEX_ATTRIBS;
using glp::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
using glp::GL_MAX_TEXTURE_IMAGE_UNITS;
using glp::GL_ARRAY_BUFFER;
using glp::GL_ELEMENT_ARRAY_BUFFER;
using glp::GL_ARRAY_BUFFER_BINDING;
using glp::GL_ELEMENT_ARRAY_BUFFER_BINDING;
using glp::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
using glp::GL_READ_ONLY;
using glp::GL_WRITE_ONLY;
using glp::GL_READ_WRITE;
using glp::GL_BUFFER_MAPPED;
using glp::GL_BUFFER_MAP_POINTER;
using glp::GL_STREAM_DRAW;
using glp::GL_STREAM_READ;
using glp::GL_STREAM_COPY;
using glp::GL_STATIC_DRAW;
using glp::GL_STATIC_READ;
using glp::GL_STATIC_COPY;
using glp::GL_DYNAMIC_DRAW;
using glp::GL_DYNAMIC_READ;
using glp::GL_DYNAMIC_COPY;
using glp::GL_PIXEL_PACK_BUFFER;
using glp::GL_PIXEL_UNPACK_BUFFER;
using glp::GL_PIXEL_PACK_BUFFER_BINDING;
using glp::GL_PIXEL_UNPACK_BUFFER_BINDING;
using glp::GL_DEPTH24_STENCIL8;
using glp::GL_TEXTURE_STENCIL_SIZE;
using glp::GL_VERTEX_ATTRIB_ARRAY_INTEGER;
using glp::GL_VERTEX_ATTRIB_ARRAY_DIVISOR;
using glp::GL_MAX_ARRAY_TEXTURE_LAYERS;
using glp::GL_MIN_PROGRAM_TEXEL_OFFSET;
using glp::GL_MAX_PROGRAM_TEXEL_OFFSET;
using glp::GL_SAMPLER_BINDING;
using glp::GL_UNIFORM_BUFFER;
using glp::GL_UNIFORM_BUFFER_BINDING;
using glp::GL_UNIFORM_BUFFER_START;
using glp::GL_UNIFORM_BUFFER_SIZE;
using glp::GL_MAX_VERTEX_UNIFORM_BLOCKS;
using glp::GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
using glp::GL_MAX_COMBINED_UNIFORM_BLOCKS;
using glp::GL_MAX_UNIFORM_BUFFER_BINDINGS;
using glp::GL_MAX_UNIFORM_BLOCK_SIZE;
using glp::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
using glp::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
using glp::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
using glp::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
using glp::GL_ACTIVE_UNIFORM_BLOCKS;
using glp::GL_UNIFORM_TYPE;
using glp::GL_UNIFORM_SIZE;
using glp::GL_UNIFORM_NAME_LENGTH;
using glp::GL_UNIFORM_BLOCK_INDEX;
using glp::GL_UNIFORM_OFFSET;
using glp::GL_UNIFORM_ARRAY_STRIDE;
using glp::GL_UNIFORM_MATRIX_STRIDE;
using glp::GL_UNIFORM_IS_ROW_MAJOR;
using glp::GL_UNIFORM_BLOCK_BINDING;
using glp::GL_UNIFORM_BLOCK_DATA_SIZE;
using glp::GL_UNIFORM_BLOCK_NAME_LENGTH;
using glp::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
using glp::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
using glp::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
using glp::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;
using glp::GL_FRAGMENT_SHADER;
using glp::GL_VERTEX_SHADER;
using glp::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
using glp::GL_MAX_VERTEX_UNIFORM_COMPONENTS;
using glp::GL_MAX_VARYING_COMPONENTS;
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
using glp::GL_SAMPLER_3D;
using glp::GL_SAMPLER_CUBE;
using glp::GL_SAMPLER_2D_SHADOW;
using glp::GL_FLOAT_MAT2x3;
using glp::GL_FLOAT_MAT2x4;
using glp::GL_FLOAT_MAT3x2;
using glp::GL_FLOAT_MAT3x4;
using glp::GL_FLOAT_MAT4x2;
using glp::GL_FLOAT_MAT4x3;
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
using glp::GL_TEXTURE_RED_TYPE;
using glp::GL_TEXTURE_GREEN_TYPE;
using glp::GL_TEXTURE_BLUE_TYPE;
using glp::GL_TEXTURE_ALPHA_TYPE;
using glp::GL_TEXTURE_DEPTH_TYPE;
using glp::GL_UNSIGNED_NORMALIZED;
using glp::GL_TEXTURE_2D_ARRAY;
using glp::GL_TEXTURE_BINDING_2D_ARRAY;
using glp::GL_ANY_SAMPLES_PASSED;
using glp::GL_R11F_G11F_B10F;
using glp::GL_UNSIGNED_INT_10F_11F_11F_REV;
using glp::GL_RGB9_E5;
using glp::GL_UNSIGNED_INT_5_9_9_9_REV;
using glp::GL_TEXTURE_SHARED_SIZE;
using glp::GL_SRGB;
using glp::GL_SRGB8;
using glp::GL_SRGB8_ALPHA8;
using glp::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
using glp::GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
using glp::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
using glp::GL_TRANSFORM_FEEDBACK_VARYINGS;
using glp::GL_TRANSFORM_FEEDBACK_BUFFER_START;
using glp::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
using glp::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
using glp::GL_RASTERIZER_DISCARD;
using glp::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
using glp::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
using glp::GL_INTERLEAVED_ATTRIBS;
using glp::GL_SEPARATE_ATTRIBS;
using glp::GL_TRANSFORM_FEEDBACK_BUFFER;
using glp::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
using glp::GL_STENCIL_BACK_REF;
using glp::GL_STENCIL_BACK_VALUE_MASK;
using glp::GL_STENCIL_BACK_WRITEMASK;
using glp::GL_DRAW_FRAMEBUFFER_BINDING;
using glp::GL_FRAMEBUFFER_BINDING;
using glp::GL_RENDERBUFFER_BINDING;
using glp::GL_READ_FRAMEBUFFER;
using glp::GL_DRAW_FRAMEBUFFER;
using glp::GL_READ_FRAMEBUFFER_BINDING;
using glp::GL_RENDERBUFFER_SAMPLES;
using glp::GL_DEPTH_COMPONENT32F;
using glp::GL_DEPTH32F_STENCIL8;
using glp::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
using glp::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
using glp::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
using glp::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
using glp::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
using glp::GL_FRAMEBUFFER_COMPLETE;
using glp::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
using glp::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
using glp::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
using glp::GL_FRAMEBUFFER_UNSUPPORTED;
using glp::GL_MAX_COLOR_ATTACHMENTS;
using glp::GL_COLOR_ATTACHMENT0;
using glp::GL_COLOR_ATTACHMENT1;
using glp::GL_COLOR_ATTACHMENT2;
using glp::GL_COLOR_ATTACHMENT3;
using glp::GL_COLOR_ATTACHMENT4;
using glp::GL_COLOR_ATTACHMENT5;
using glp::GL_COLOR_ATTACHMENT6;
using glp::GL_COLOR_ATTACHMENT7;
using glp::GL_COLOR_ATTACHMENT8;
using glp::GL_COLOR_ATTACHMENT9;
using glp::GL_COLOR_ATTACHMENT10;
using glp::GL_COLOR_ATTACHMENT11;
using glp::GL_COLOR_ATTACHMENT12;
using glp::GL_COLOR_ATTACHMENT13;
using glp::GL_COLOR_ATTACHMENT14;
using glp::GL_COLOR_ATTACHMENT15;
using glp::GL_COLOR_ATTACHMENT16;
using glp::GL_COLOR_ATTACHMENT17;
using glp::GL_COLOR_ATTACHMENT18;
using glp::GL_COLOR_ATTACHMENT19;
using glp::GL_COLOR_ATTACHMENT20;
using glp::GL_COLOR_ATTACHMENT21;
using glp::GL_COLOR_ATTACHMENT22;
using glp::GL_COLOR_ATTACHMENT23;
using glp::GL_COLOR_ATTACHMENT24;
using glp::GL_COLOR_ATTACHMENT25;
using glp::GL_COLOR_ATTACHMENT26;
using glp::GL_COLOR_ATTACHMENT27;
using glp::GL_COLOR_ATTACHMENT28;
using glp::GL_COLOR_ATTACHMENT29;
using glp::GL_COLOR_ATTACHMENT30;
using glp::GL_COLOR_ATTACHMENT31;
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
using glp::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
using glp::GL_MAX_SAMPLES;
using glp::GL_RGB565;
using glp::GL_PRIMITIVE_RESTART_FIXED_INDEX;
using glp::GL_ANY_SAMPLES_PASSED_CONSERVATIVE;
using glp::GL_MAX_ELEMENT_INDEX;
using glp::GL_RGBA32UI;
using glp::GL_RGB32UI;
using glp::GL_RGBA16UI;
using glp::GL_RGB16UI;
using glp::GL_RGBA8UI;
using glp::GL_RGB8UI;
using glp::GL_RGBA32I;
using glp::GL_RGB32I;
using glp::GL_RGBA16I;
using glp::GL_RGB16I;
using glp::GL_RGBA8I;
using glp::GL_RGB8I;
using glp::GL_RED_INTEGER;
using glp::GL_RGB_INTEGER;
using glp::GL_RGBA_INTEGER;
using glp::GL_INT_2_10_10_10_REV;
using glp::GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
using glp::GL_SAMPLER_2D_ARRAY;
using glp::GL_SAMPLER_2D_ARRAY_SHADOW;
using glp::GL_SAMPLER_CUBE_SHADOW;
using glp::GL_UNSIGNED_INT_VEC2;
using glp::GL_UNSIGNED_INT_VEC3;
using glp::GL_UNSIGNED_INT_VEC4;
using glp::GL_INT_SAMPLER_2D;
using glp::GL_INT_SAMPLER_3D;
using glp::GL_INT_SAMPLER_CUBE;
using glp::GL_INT_SAMPLER_2D_ARRAY;
using glp::GL_UNSIGNED_INT_SAMPLER_2D;
using glp::GL_UNSIGNED_INT_SAMPLER_3D;
using glp::GL_UNSIGNED_INT_SAMPLER_CUBE;
using glp::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
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
using glp::GL_TRANSFORM_FEEDBACK;
using glp::GL_TRANSFORM_FEEDBACK_PAUSED;
using glp::GL_TRANSFORM_FEEDBACK_ACTIVE;
using glp::GL_TRANSFORM_FEEDBACK_BINDING;
using glp::GL_TEXTURE_SWIZZLE_R;
using glp::GL_TEXTURE_SWIZZLE_G;
using glp::GL_TEXTURE_SWIZZLE_B;
using glp::GL_TEXTURE_SWIZZLE_A;
using glp::GL_SAMPLE_POSITION;
using glp::GL_SAMPLE_MASK;
using glp::GL_SAMPLE_MASK_VALUE;
using glp::GL_MAX_SAMPLE_MASK_WORDS;
using glp::GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
using glp::GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
using glp::GL_COPY_READ_BUFFER;
using glp::GL_COPY_READ_BUFFER_BINDING;
using glp::GL_COPY_WRITE_BUFFER;
using glp::GL_COPY_WRITE_BUFFER_BINDING;
using glp::GL_MAX_IMAGE_UNITS;
using glp::GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES;
using glp::GL_IMAGE_BINDING_NAME;
using glp::GL_IMAGE_BINDING_LEVEL;
using glp::GL_IMAGE_BINDING_LAYERED;
using glp::GL_IMAGE_BINDING_LAYER;
using glp::GL_IMAGE_BINDING_ACCESS;
using glp::GL_DRAW_INDIRECT_BUFFER;
using glp::GL_DRAW_INDIRECT_BUFFER_BINDING;
using glp::GL_VERTEX_BINDING_BUFFER;
using glp::GL_R8_SNORM;
using glp::GL_RG8_SNORM;
using glp::GL_RGB8_SNORM;
using glp::GL_RGBA8_SNORM;
using glp::GL_SIGNED_NORMALIZED;
using glp::GL_IMAGE_2D;
using glp::GL_IMAGE_3D;
using glp::GL_IMAGE_CUBE;
using glp::GL_IMAGE_2D_ARRAY;
using glp::GL_INT_IMAGE_2D;
using glp::GL_INT_IMAGE_3D;
using glp::GL_INT_IMAGE_CUBE;
using glp::GL_INT_IMAGE_2D_ARRAY;
using glp::GL_UNSIGNED_INT_IMAGE_2D;
using glp::GL_UNSIGNED_INT_IMAGE_3D;
using glp::GL_UNSIGNED_INT_IMAGE_CUBE;
using glp::GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
using glp::GL_IMAGE_BINDING_FORMAT;
using glp::GL_RGB10_A2UI;
using glp::GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
using glp::GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
using glp::GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
using glp::GL_MAX_VERTEX_IMAGE_UNIFORMS;
using glp::GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
using glp::GL_MAX_COMBINED_IMAGE_UNIFORMS;
using glp::GL_SHADER_STORAGE_BUFFER;
using glp::GL_SHADER_STORAGE_BUFFER_BINDING;
using glp::GL_SHADER_STORAGE_BUFFER_START;
using glp::GL_SHADER_STORAGE_BUFFER_SIZE;
using glp::GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS;
using glp::GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS;
using glp::GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS;
using glp::GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS;
using glp::GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS;
using glp::GL_MAX_SHADER_STORAGE_BLOCK_SIZE;
using glp::GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT;
using glp::GL_DEPTH_STENCIL_TEXTURE_MODE;
using glp::GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS;
using glp::GL_DISPATCH_INDIRECT_BUFFER;
using glp::GL_DISPATCH_INDIRECT_BUFFER_BINDING;
using glp::GL_TEXTURE_2D_MULTISAMPLE;
using glp::GL_TEXTURE_BINDING_2D_MULTISAMPLE;
using glp::GL_TEXTURE_SAMPLES;
using glp::GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
using glp::GL_SAMPLER_2D_MULTISAMPLE;
using glp::GL_INT_SAMPLER_2D_MULTISAMPLE;
using glp::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
using glp::GL_MAX_COLOR_TEXTURE_SAMPLES;
using glp::GL_MAX_DEPTH_TEXTURE_SAMPLES;
using glp::GL_MAX_INTEGER_SAMPLES;
using glp::GL_MAX_SERVER_WAIT_TIMEOUT;
using glp::GL_OBJECT_TYPE;
using glp::GL_SYNC_CONDITION;
using glp::GL_SYNC_STATUS;
using glp::GL_SYNC_FLAGS;
using glp::GL_SYNC_FENCE;
using glp::GL_SYNC_GPU_COMMANDS_COMPLETE;
using glp::GL_UNSIGNALED;
using glp::GL_SIGNALED;
using glp::GL_ALREADY_SIGNALED;
using glp::GL_TIMEOUT_EXPIRED;
using glp::GL_CONDITION_SATISFIED;
using glp::GL_WAIT_FAILED;
using glp::GL_BUFFER_ACCESS_FLAGS;
using glp::GL_BUFFER_MAP_LENGTH;
using glp::GL_BUFFER_MAP_OFFSET;
using glp::GL_MAX_VERTEX_OUTPUT_COMPONENTS;
using glp::GL_MAX_FRAGMENT_INPUT_COMPONENTS;
using glp::GL_TEXTURE_IMMUTABLE_FORMAT;
using glp::GL_COMPUTE_SHADER;
using glp::GL_MAX_COMPUTE_UNIFORM_BLOCKS;
using glp::GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS;
using glp::GL_MAX_COMPUTE_IMAGE_UNIFORMS;
using glp::GL_MAX_COMPUTE_WORK_GROUP_COUNT;
using glp::GL_MAX_COMPUTE_WORK_GROUP_SIZE;
using glp::GL_COMPRESSED_R11_EAC;
using glp::GL_COMPRESSED_SIGNED_R11_EAC;
using glp::GL_COMPRESSED_RG11_EAC;
using glp::GL_COMPRESSED_SIGNED_RG11_EAC;
using glp::GL_COMPRESSED_RGB8_ETC2;
using glp::GL_COMPRESSED_SRGB8_ETC2;
using glp::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2;
using glp::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2;
using glp::GL_COMPRESSED_RGBA8_ETC2_EAC;
using glp::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC;
using glp::GL_ATOMIC_COUNTER_BUFFER;
using glp::GL_ATOMIC_COUNTER_BUFFER_BINDING;
using glp::GL_ATOMIC_COUNTER_BUFFER_START;
using glp::GL_ATOMIC_COUNTER_BUFFER_SIZE;
using glp::GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
using glp::GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
using glp::GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
using glp::GL_MAX_VERTEX_ATOMIC_COUNTERS;
using glp::GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
using glp::GL_MAX_COMBINED_ATOMIC_COUNTERS;
using glp::GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
using glp::GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;
using glp::GL_UNSIGNED_INT_ATOMIC_COUNTER;
using glp::GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;
using glp::GL_UNIFORM;
using glp::GL_UNIFORM_BLOCK;
using glp::GL_PROGRAM_INPUT;
using glp::GL_PROGRAM_OUTPUT;
using glp::GL_BUFFER_VARIABLE;
using glp::GL_SHADER_STORAGE_BLOCK;
using glp::GL_TRANSFORM_FEEDBACK_VARYING;
using glp::GL_ACTIVE_RESOURCES;
using glp::GL_MAX_NAME_LENGTH;
using glp::GL_MAX_NUM_ACTIVE_VARIABLES;
using glp::GL_NAME_LENGTH;
using glp::GL_TYPE;
using glp::GL_ARRAY_SIZE;
using glp::GL_OFFSET;
using glp::GL_BLOCK_INDEX;
using glp::GL_ARRAY_STRIDE;
using glp::GL_MATRIX_STRIDE;
using glp::GL_IS_ROW_MAJOR;
using glp::GL_ATOMIC_COUNTER_BUFFER_INDEX;
using glp::GL_BUFFER_BINDING;
using glp::GL_BUFFER_DATA_SIZE;
using glp::GL_NUM_ACTIVE_VARIABLES;
using glp::GL_ACTIVE_VARIABLES;
using glp::GL_REFERENCED_BY_VERTEX_SHADER;
using glp::GL_REFERENCED_BY_FRAGMENT_SHADER;
using glp::GL_REFERENCED_BY_COMPUTE_SHADER;
using glp::GL_TOP_LEVEL_ARRAY_SIZE;
using glp::GL_TOP_LEVEL_ARRAY_STRIDE;
using glp::GL_LOCATION;
using glp::GL_FRAMEBUFFER_DEFAULT_WIDTH;
using glp::GL_FRAMEBUFFER_DEFAULT_HEIGHT;
using glp::GL_FRAMEBUFFER_DEFAULT_SAMPLES;
using glp::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS;
using glp::GL_MAX_FRAMEBUFFER_WIDTH;
using glp::GL_MAX_FRAMEBUFFER_HEIGHT;
using glp::GL_MAX_FRAMEBUFFER_SAMPLES;
using glp::GL_NUM_SAMPLE_COUNTS;

} // namespace glp31
