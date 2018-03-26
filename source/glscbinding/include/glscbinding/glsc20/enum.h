
#pragma once


#include <glscbinding/noglsc.h>

#include <glscbinding/glsc/enum.h>


namespace glsc20
{


// import enums to namespace


// AlphaFunction

using glsc::GL_NEVER;
using glsc::GL_LESS;
using glsc::GL_EQUAL;
using glsc::GL_LEQUAL;
using glsc::GL_GREATER;
using glsc::GL_NOTEQUAL;
using glsc::GL_GEQUAL;
using glsc::GL_ALWAYS;

// AttributeType

using glsc::GL_SAMPLER_2D;

// BlendEquationModeEXT

using glsc::GL_FUNC_ADD;
using glsc::GL_FUNC_SUBTRACT;
using glsc::GL_FUNC_REVERSE_SUBTRACT;

// BlendingFactor

using glsc::GL_ZERO;
using glsc::GL_SRC_COLOR;
using glsc::GL_ONE_MINUS_SRC_COLOR;
using glsc::GL_SRC_ALPHA;
using glsc::GL_ONE_MINUS_SRC_ALPHA;
using glsc::GL_DST_ALPHA;
using glsc::GL_ONE_MINUS_DST_ALPHA;
using glsc::GL_DST_COLOR;
using glsc::GL_ONE_MINUS_DST_COLOR;
using glsc::GL_SRC_ALPHA_SATURATE;
using glsc::GL_CONSTANT_COLOR;
using glsc::GL_ONE_MINUS_CONSTANT_COLOR;
using glsc::GL_CONSTANT_ALPHA;
using glsc::GL_ONE_MINUS_CONSTANT_ALPHA;
using glsc::GL_ONE;

// BlitFramebufferFilter

using glsc::GL_NEAREST;
using glsc::GL_LINEAR;

// BufferStorageTarget

using glsc::GL_ARRAY_BUFFER;
using glsc::GL_ELEMENT_ARRAY_BUFFER;

// BufferTargetARB

// using glsc::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// using glsc::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget

// BufferUsageARB

using glsc::GL_STREAM_DRAW;
using glsc::GL_STATIC_DRAW;
using glsc::GL_DYNAMIC_DRAW;

// CheckFramebufferStatusTarget

using glsc::GL_FRAMEBUFFER;

// ColorBuffer

using glsc::GL_NONE;
using glsc::GL_FRONT;
using glsc::GL_BACK;
using glsc::GL_FRONT_AND_BACK;
using glsc::GL_COLOR_ATTACHMENT0;

// ColorMaterialFace

// using glsc::GL_FRONT; // reuse ColorBuffer
// using glsc::GL_BACK; // reuse ColorBuffer
// using glsc::GL_FRONT_AND_BACK; // reuse ColorBuffer

// ColorPointerType

using glsc::GL_BYTE;
using glsc::GL_UNSIGNED_BYTE;
using glsc::GL_SHORT;
using glsc::GL_UNSIGNED_SHORT;
using glsc::GL_INT;
using glsc::GL_UNSIGNED_INT;
using glsc::GL_FLOAT;

// CopyBufferSubDataTarget

// using glsc::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// using glsc::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget

// CullFaceMode

// using glsc::GL_FRONT; // reuse ColorBuffer
// using glsc::GL_BACK; // reuse ColorBuffer
// using glsc::GL_FRONT_AND_BACK; // reuse ColorBuffer

// DebugSeverity

using glsc::GL_DONT_CARE;

// DebugSource

// using glsc::GL_DONT_CARE; // reuse DebugSeverity

// DebugType

// using glsc::GL_DONT_CARE; // reuse DebugSeverity

// DepthFunction

// using glsc::GL_NEVER; // reuse AlphaFunction
// using glsc::GL_LESS; // reuse AlphaFunction
// using glsc::GL_EQUAL; // reuse AlphaFunction
// using glsc::GL_LEQUAL; // reuse AlphaFunction
// using glsc::GL_GREATER; // reuse AlphaFunction
// using glsc::GL_NOTEQUAL; // reuse AlphaFunction
// using glsc::GL_GEQUAL; // reuse AlphaFunction
// using glsc::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

// using glsc::GL_NONE; // reuse ColorBuffer
// using glsc::GL_FRONT; // reuse ColorBuffer
// using glsc::GL_BACK; // reuse ColorBuffer
// using glsc::GL_FRONT_AND_BACK; // reuse ColorBuffer

// DrawElementsType

// using glsc::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_INT; // reuse ColorPointerType

// EnableCap

using glsc::GL_CULL_FACE;
using glsc::GL_DEPTH_TEST;
using glsc::GL_STENCIL_TEST;
using glsc::GL_DITHER;
using glsc::GL_BLEND;
using glsc::GL_SCISSOR_TEST;
using glsc::GL_TEXTURE_2D;
using glsc::GL_POLYGON_OFFSET_FILL;

// ErrorCode

using glsc::GL_NO_ERROR;
using glsc::GL_INVALID_ENUM;
using glsc::GL_INVALID_VALUE;
using glsc::GL_INVALID_OPERATION;
using glsc::GL_OUT_OF_MEMORY;
using glsc::GL_INVALID_FRAMEBUFFER_OPERATION;

// FogCoordinatePointerType

// using glsc::GL_FLOAT; // reuse ColorPointerType

// FogMode

// using glsc::GL_LINEAR; // reuse BlitFramebufferFilter

// FogPointerTypeEXT

// using glsc::GL_FLOAT; // reuse ColorPointerType

// FogPointerTypeIBM

// using glsc::GL_FLOAT; // reuse ColorPointerType

// FramebufferAttachment

// using glsc::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
using glsc::GL_DEPTH_ATTACHMENT;

// FramebufferAttachmentParameterName

using glsc::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
using glsc::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;

// FramebufferStatus

using glsc::GL_FRAMEBUFFER_UNDEFINED;
using glsc::GL_FRAMEBUFFER_COMPLETE;
using glsc::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
using glsc::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
using glsc::GL_FRAMEBUFFER_UNSUPPORTED;

// FramebufferTarget

// using glsc::GL_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget

// FrontFaceDirection

using glsc::GL_CW;
using glsc::GL_CCW;

// GetFramebufferParameter

using glsc::GL_SAMPLE_BUFFERS;
using glsc::GL_SAMPLES;
using glsc::GL_IMPLEMENTATION_COLOR_READ_TYPE;
using glsc::GL_IMPLEMENTATION_COLOR_READ_FORMAT;

// GetPName

using glsc::GL_LINE_WIDTH;
// using glsc::GL_CULL_FACE; // reuse EnableCap
using glsc::GL_CULL_FACE_MODE;
using glsc::GL_FRONT_FACE;
using glsc::GL_DEPTH_RANGE;
// using glsc::GL_DEPTH_TEST; // reuse EnableCap
using glsc::GL_DEPTH_WRITEMASK;
using glsc::GL_DEPTH_CLEAR_VALUE;
using glsc::GL_DEPTH_FUNC;
// using glsc::GL_STENCIL_TEST; // reuse EnableCap
using glsc::GL_STENCIL_CLEAR_VALUE;
using glsc::GL_STENCIL_FUNC;
using glsc::GL_STENCIL_VALUE_MASK;
using glsc::GL_STENCIL_FAIL;
using glsc::GL_STENCIL_PASS_DEPTH_FAIL;
using glsc::GL_STENCIL_PASS_DEPTH_PASS;
using glsc::GL_STENCIL_REF;
using glsc::GL_STENCIL_WRITEMASK;
using glsc::GL_VIEWPORT;
// using glsc::GL_DITHER; // reuse EnableCap
// using glsc::GL_BLEND; // reuse EnableCap
using glsc::GL_SCISSOR_BOX;
// using glsc::GL_SCISSOR_TEST; // reuse EnableCap
using glsc::GL_COLOR_CLEAR_VALUE;
using glsc::GL_COLOR_WRITEMASK;
using glsc::GL_UNPACK_ALIGNMENT;
using glsc::GL_PACK_ALIGNMENT;
using glsc::GL_MAX_TEXTURE_SIZE;
using glsc::GL_MAX_VIEWPORT_DIMS;
using glsc::GL_SUBPIXEL_BITS;
using glsc::GL_RED_BITS;
using glsc::GL_GREEN_BITS;
using glsc::GL_BLUE_BITS;
using glsc::GL_ALPHA_BITS;
using glsc::GL_DEPTH_BITS;
using glsc::GL_STENCIL_BITS;
// using glsc::GL_TEXTURE_2D; // reuse EnableCap
using glsc::GL_POLYGON_OFFSET_UNITS;
// using glsc::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
using glsc::GL_POLYGON_OFFSET_FACTOR;
using glsc::GL_TEXTURE_BINDING_2D;
using glsc::GL_ALIASED_POINT_SIZE_RANGE;
using glsc::GL_ALIASED_LINE_WIDTH_RANGE;

// GetTextureParameter

using glsc::GL_TEXTURE_MAG_FILTER;
using glsc::GL_TEXTURE_MIN_FILTER;
using glsc::GL_TEXTURE_WRAP_S;
using glsc::GL_TEXTURE_WRAP_T;

// GraphicsResetStatus

// using glsc::GL_NO_ERROR; // reuse ErrorCode
using glsc::GL_GUILTY_CONTEXT_RESET;
using glsc::GL_INNOCENT_CONTEXT_RESET;
using glsc::GL_UNKNOWN_CONTEXT_RESET;

// HintMode

// using glsc::GL_DONT_CARE; // reuse DebugSeverity
using glsc::GL_FASTEST;
using glsc::GL_NICEST;

// HintTarget

using glsc::GL_GENERATE_MIPMAP_HINT;

// IndexPointerType

// using glsc::GL_SHORT; // reuse ColorPointerType
// using glsc::GL_INT; // reuse ColorPointerType
// using glsc::GL_FLOAT; // reuse ColorPointerType

// InternalFormat

using glsc::GL_RED;
using glsc::GL_RGB;
using glsc::GL_RGBA;
using glsc::GL_RGB8;
using glsc::GL_RGBA4;
using glsc::GL_RGB5_A1;
using glsc::GL_RGBA8;
using glsc::GL_DEPTH_COMPONENT16;
using glsc::GL_RG;
using glsc::GL_R8;
using glsc::GL_RG8;

// InternalFormatPName

// using glsc::GL_SAMPLES; // reuse GetFramebufferParameter

// LightEnvModeSGIX

using glsc::GL_REPLACE;

// ListNameType

// using glsc::GL_BYTE; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using glsc::GL_SHORT; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using glsc::GL_INT; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_INT; // reuse ColorPointerType
// using glsc::GL_FLOAT; // reuse ColorPointerType

// LogicOp

using glsc::GL_INVERT;

// MaterialFace

// using glsc::GL_FRONT; // reuse ColorBuffer
// using glsc::GL_BACK; // reuse ColorBuffer
// using glsc::GL_FRONT_AND_BACK; // reuse ColorBuffer

// MatrixMode

using glsc::GL_TEXTURE;

// NormalPointerType

// using glsc::GL_BYTE; // reuse ColorPointerType
// using glsc::GL_SHORT; // reuse ColorPointerType
// using glsc::GL_INT; // reuse ColorPointerType
// using glsc::GL_FLOAT; // reuse ColorPointerType

// ObjectIdentifier

// using glsc::GL_TEXTURE; // reuse MatrixMode
// using glsc::GL_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
using glsc::GL_RENDERBUFFER;

// PathFillMode

// using glsc::GL_INVERT; // reuse LogicOp

// PathFontStyle

// using glsc::GL_NONE; // reuse ColorBuffer

// PathGenMode

// using glsc::GL_NONE; // reuse ColorBuffer

// PathTransformType

// using glsc::GL_NONE; // reuse ColorBuffer

// PixelFormat

// using glsc::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_INT; // reuse ColorPointerType
// using glsc::GL_RED; // reuse InternalFormat
// using glsc::GL_RGB; // reuse InternalFormat
// using glsc::GL_RGBA; // reuse InternalFormat

// PixelStoreParameter

// using glsc::GL_UNPACK_ALIGNMENT; // reuse GetPName
// using glsc::GL_PACK_ALIGNMENT; // reuse GetPName

// PixelTexGenMode

// using glsc::GL_NONE; // reuse ColorBuffer
// using glsc::GL_RGB; // reuse InternalFormat
// using glsc::GL_RGBA; // reuse InternalFormat

// PixelType

// using glsc::GL_BYTE; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using glsc::GL_SHORT; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using glsc::GL_INT; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_INT; // reuse ColorPointerType
// using glsc::GL_FLOAT; // reuse ColorPointerType
using glsc::GL_UNSIGNED_SHORT_4_4_4_4;
using glsc::GL_UNSIGNED_SHORT_5_5_5_1;

// PrecisionType

using glsc::GL_LOW_FLOAT;
using glsc::GL_MEDIUM_FLOAT;
using glsc::GL_HIGH_FLOAT;
using glsc::GL_LOW_INT;
using glsc::GL_MEDIUM_INT;
using glsc::GL_HIGH_INT;

// PrimitiveType

using glsc::GL_POINTS;
using glsc::GL_LINES;
using glsc::GL_LINE_LOOP;
using glsc::GL_LINE_STRIP;
using glsc::GL_TRIANGLES;
using glsc::GL_TRIANGLE_STRIP;
using glsc::GL_TRIANGLE_FAN;

// ProgramPropertyARB

using glsc::GL_LINK_STATUS;

// ReadBufferMode

// using glsc::GL_FRONT; // reuse ColorBuffer
// using glsc::GL_BACK; // reuse ColorBuffer

// RenderbufferParameterName

using glsc::GL_RENDERBUFFER_WIDTH;
using glsc::GL_RENDERBUFFER_HEIGHT;
using glsc::GL_RENDERBUFFER_INTERNAL_FORMAT;
using glsc::GL_RENDERBUFFER_RED_SIZE;
using glsc::GL_RENDERBUFFER_GREEN_SIZE;
using glsc::GL_RENDERBUFFER_BLUE_SIZE;
using glsc::GL_RENDERBUFFER_ALPHA_SIZE;
using glsc::GL_RENDERBUFFER_DEPTH_SIZE;
using glsc::GL_RENDERBUFFER_STENCIL_SIZE;

// RenderbufferTarget

// using glsc::GL_RENDERBUFFER; // reuse ObjectIdentifier

// SamplerParameterName

// using glsc::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// using glsc::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// using glsc::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// using glsc::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter

// StencilFaceDirection

// using glsc::GL_FRONT; // reuse ColorBuffer
// using glsc::GL_BACK; // reuse ColorBuffer
// using glsc::GL_FRONT_AND_BACK; // reuse ColorBuffer

// StencilFunction

// using glsc::GL_NEVER; // reuse AlphaFunction
// using glsc::GL_LESS; // reuse AlphaFunction
// using glsc::GL_EQUAL; // reuse AlphaFunction
// using glsc::GL_LEQUAL; // reuse AlphaFunction
// using glsc::GL_GREATER; // reuse AlphaFunction
// using glsc::GL_NOTEQUAL; // reuse AlphaFunction
// using glsc::GL_GEQUAL; // reuse AlphaFunction
// using glsc::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// using glsc::GL_ZERO; // reuse BlendingFactor
// using glsc::GL_INVERT; // reuse LogicOp
using glsc::GL_KEEP;
// using glsc::GL_REPLACE; // reuse LightEnvModeSGIX
using glsc::GL_INCR;
using glsc::GL_DECR;

// StringName

using glsc::GL_VENDOR;
using glsc::GL_RENDERER;
using glsc::GL_VERSION;
using glsc::GL_EXTENSIONS;
using glsc::GL_SHADING_LANGUAGE_VERSION;

// TexCoordPointerType

// using glsc::GL_SHORT; // reuse ColorPointerType
// using glsc::GL_INT; // reuse ColorPointerType
// using glsc::GL_FLOAT; // reuse ColorPointerType

// TextureEnvMode

// using glsc::GL_BLEND; // reuse EnableCap

// TextureMagFilter

// using glsc::GL_NEAREST; // reuse BlitFramebufferFilter
// using glsc::GL_LINEAR; // reuse BlitFramebufferFilter

// TextureMinFilter

// using glsc::GL_NEAREST; // reuse BlitFramebufferFilter
// using glsc::GL_LINEAR; // reuse BlitFramebufferFilter
using glsc::GL_NEAREST_MIPMAP_NEAREST;
using glsc::GL_LINEAR_MIPMAP_NEAREST;
using glsc::GL_NEAREST_MIPMAP_LINEAR;
using glsc::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// using glsc::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// using glsc::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// using glsc::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// using glsc::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter

// TextureTarget

// using glsc::GL_TEXTURE_2D; // reuse EnableCap

// TextureUnit

using glsc::GL_TEXTURE0;
using glsc::GL_TEXTURE1;
using glsc::GL_TEXTURE2;
using glsc::GL_TEXTURE3;
using glsc::GL_TEXTURE4;
using glsc::GL_TEXTURE5;
using glsc::GL_TEXTURE6;
using glsc::GL_TEXTURE7;
using glsc::GL_TEXTURE8;
using glsc::GL_TEXTURE9;
using glsc::GL_TEXTURE10;
using glsc::GL_TEXTURE11;
using glsc::GL_TEXTURE12;
using glsc::GL_TEXTURE13;
using glsc::GL_TEXTURE14;
using glsc::GL_TEXTURE15;
using glsc::GL_TEXTURE16;
using glsc::GL_TEXTURE17;
using glsc::GL_TEXTURE18;
using glsc::GL_TEXTURE19;
using glsc::GL_TEXTURE20;
using glsc::GL_TEXTURE21;
using glsc::GL_TEXTURE22;
using glsc::GL_TEXTURE23;
using glsc::GL_TEXTURE24;
using glsc::GL_TEXTURE25;
using glsc::GL_TEXTURE26;
using glsc::GL_TEXTURE27;
using glsc::GL_TEXTURE28;
using glsc::GL_TEXTURE29;
using glsc::GL_TEXTURE30;
using glsc::GL_TEXTURE31;

// TextureWrapMode

using glsc::GL_REPEAT;
using glsc::GL_CLAMP_TO_EDGE;

// VertexArrayPName

using glsc::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
using glsc::GL_VERTEX_ATTRIB_ARRAY_SIZE;
using glsc::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
using glsc::GL_VERTEX_ATTRIB_ARRAY_TYPE;
using glsc::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;

// VertexAttribEnum

// using glsc::GL_VERTEX_ATTRIB_ARRAY_ENABLED; // reuse VertexArrayPName
// using glsc::GL_VERTEX_ATTRIB_ARRAY_SIZE; // reuse VertexArrayPName
// using glsc::GL_VERTEX_ATTRIB_ARRAY_STRIDE; // reuse VertexArrayPName
// using glsc::GL_VERTEX_ATTRIB_ARRAY_TYPE; // reuse VertexArrayPName
using glsc::GL_CURRENT_VERTEX_ATTRIB;
// using glsc::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED; // reuse VertexArrayPName
using glsc::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;

// VertexAttribPointerType

// using glsc::GL_BYTE; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using glsc::GL_SHORT; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using glsc::GL_INT; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_INT; // reuse ColorPointerType
// using glsc::GL_FLOAT; // reuse ColorPointerType

// VertexAttribType

// using glsc::GL_BYTE; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using glsc::GL_SHORT; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using glsc::GL_INT; // reuse ColorPointerType
// using glsc::GL_UNSIGNED_INT; // reuse ColorPointerType
// using glsc::GL_FLOAT; // reuse ColorPointerType

// VertexBufferObjectParameter

using glsc::GL_BUFFER_SIZE;
using glsc::GL_BUFFER_USAGE;

// VertexBufferObjectUsage

// using glsc::GL_STREAM_DRAW; // reuse BufferUsageARB
// using glsc::GL_STATIC_DRAW; // reuse BufferUsageARB
// using glsc::GL_DYNAMIC_DRAW; // reuse BufferUsageARB

// VertexPointerType

// using glsc::GL_SHORT; // reuse ColorPointerType
// using glsc::GL_INT; // reuse ColorPointerType
// using glsc::GL_FLOAT; // reuse ColorPointerType

// __UNGROUPED__

using glsc::GL_CONTEXT_LOST;
using glsc::GL_BLEND_COLOR;
using glsc::GL_BLEND_EQUATION;
using glsc::GL_BLEND_EQUATION_RGB;
using glsc::GL_SAMPLE_ALPHA_TO_COVERAGE;
using glsc::GL_SAMPLE_COVERAGE;
using glsc::GL_SAMPLE_COVERAGE_VALUE;
using glsc::GL_SAMPLE_COVERAGE_INVERT;
using glsc::GL_BLEND_DST_RGB;
using glsc::GL_BLEND_SRC_RGB;
using glsc::GL_BLEND_DST_ALPHA;
using glsc::GL_BLEND_SRC_ALPHA;
using glsc::GL_LOSE_CONTEXT_ON_RESET;
using glsc::GL_RESET_NOTIFICATION_STRATEGY;
using glsc::GL_UNSIGNED_SHORT_5_6_5;
using glsc::GL_MIRRORED_REPEAT;
using glsc::GL_ACTIVE_TEXTURE;
using glsc::GL_MAX_RENDERBUFFER_SIZE;
using glsc::GL_INCR_WRAP;
using glsc::GL_DECR_WRAP;
using glsc::GL_VERTEX_ATTRIB_ARRAY_POINTER;
using glsc::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
using glsc::GL_COMPRESSED_TEXTURE_FORMATS;
using glsc::GL_NUM_PROGRAM_BINARY_FORMATS;
using glsc::GL_PROGRAM_BINARY_FORMATS;
using glsc::GL_STENCIL_BACK_FUNC;
using glsc::GL_STENCIL_BACK_FAIL;
using glsc::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
using glsc::GL_STENCIL_BACK_PASS_DEPTH_PASS;
using glsc::GL_BLEND_EQUATION_ALPHA;
using glsc::GL_MAX_VERTEX_ATTRIBS;
using glsc::GL_MAX_TEXTURE_IMAGE_UNITS;
using glsc::GL_ARRAY_BUFFER_BINDING;
using glsc::GL_ELEMENT_ARRAY_BUFFER_BINDING;
using glsc::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
using glsc::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
using glsc::GL_CURRENT_PROGRAM;
using glsc::GL_STENCIL_BACK_REF;
using glsc::GL_STENCIL_BACK_VALUE_MASK;
using glsc::GL_STENCIL_BACK_WRITEMASK;
using glsc::GL_FRAMEBUFFER_BINDING;
using glsc::GL_RENDERBUFFER_BINDING;
using glsc::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
using glsc::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
using glsc::GL_STENCIL_ATTACHMENT;
using glsc::GL_STENCIL_INDEX8;
using glsc::GL_RGB565;
using glsc::GL_MAX_VERTEX_UNIFORM_VECTORS;
using glsc::GL_MAX_VARYING_VECTORS;
using glsc::GL_MAX_FRAGMENT_UNIFORM_VECTORS;
using glsc::GL_CONTEXT_ROBUST_ACCESS;
using glsc::GL_TEXTURE_IMMUTABLE_FORMAT;



} // namespace glsc20
