
#pragma once


#include <glesbinding/nogles.h>

#include <glesbinding/gles/enum.h>


namespace gles32
{


// import enums to namespace


// AlphaFunction

using gles::GL_NEVER;
using gles::GL_LESS;
using gles::GL_EQUAL;
using gles::GL_LEQUAL;
using gles::GL_GREATER;
using gles::GL_NOTEQUAL;
using gles::GL_GEQUAL;
using gles::GL_ALWAYS;

// AtomicCounterBufferPName

using gles::GL_ATOMIC_COUNTER_BUFFER_BINDING;

// AttributeType

using gles::GL_FLOAT_VEC2;
using gles::GL_FLOAT_VEC3;
using gles::GL_FLOAT_VEC4;
using gles::GL_INT_VEC2;
using gles::GL_INT_VEC3;
using gles::GL_INT_VEC4;
using gles::GL_BOOL;
using gles::GL_BOOL_VEC2;
using gles::GL_BOOL_VEC3;
using gles::GL_BOOL_VEC4;
using gles::GL_FLOAT_MAT2;
using gles::GL_FLOAT_MAT3;
using gles::GL_FLOAT_MAT4;
using gles::GL_SAMPLER_2D;
using gles::GL_SAMPLER_3D;
using gles::GL_SAMPLER_CUBE;
using gles::GL_SAMPLER_2D_SHADOW;
using gles::GL_FLOAT_MAT2x3;
using gles::GL_FLOAT_MAT2x4;
using gles::GL_FLOAT_MAT3x2;
using gles::GL_FLOAT_MAT3x4;
using gles::GL_FLOAT_MAT4x2;
using gles::GL_FLOAT_MAT4x3;

// BindTransformFeedbackTarget

using gles::GL_TRANSFORM_FEEDBACK;

// BlendEquationModeEXT

using gles::GL_FUNC_ADD;
using gles::GL_FUNC_SUBTRACT;
using gles::GL_FUNC_REVERSE_SUBTRACT;

// BlendingFactor

using gles::GL_ZERO;
using gles::GL_SRC_COLOR;
using gles::GL_ONE_MINUS_SRC_COLOR;
using gles::GL_SRC_ALPHA;
using gles::GL_ONE_MINUS_SRC_ALPHA;
using gles::GL_DST_ALPHA;
using gles::GL_ONE_MINUS_DST_ALPHA;
using gles::GL_DST_COLOR;
using gles::GL_ONE_MINUS_DST_COLOR;
using gles::GL_SRC_ALPHA_SATURATE;
using gles::GL_CONSTANT_COLOR;
using gles::GL_ONE_MINUS_CONSTANT_COLOR;
using gles::GL_CONSTANT_ALPHA;
using gles::GL_ONE_MINUS_CONSTANT_ALPHA;
using gles::GL_ONE;

// BlitFramebufferFilter

using gles::GL_NEAREST;
using gles::GL_LINEAR;

// Buffer

using gles::GL_COLOR;
using gles::GL_DEPTH;
using gles::GL_STENCIL;

// BufferAccessARB

using gles::GL_READ_ONLY;
using gles::GL_WRITE_ONLY;
using gles::GL_READ_WRITE;

// BufferStorageTarget

using gles::GL_ARRAY_BUFFER;
using gles::GL_ELEMENT_ARRAY_BUFFER;
using gles::GL_PIXEL_PACK_BUFFER;
using gles::GL_PIXEL_UNPACK_BUFFER;
using gles::GL_UNIFORM_BUFFER;
using gles::GL_TEXTURE_BUFFER;
using gles::GL_TRANSFORM_FEEDBACK_BUFFER;
using gles::GL_COPY_READ_BUFFER;
using gles::GL_COPY_WRITE_BUFFER;
using gles::GL_DRAW_INDIRECT_BUFFER;
using gles::GL_SHADER_STORAGE_BUFFER;
using gles::GL_DISPATCH_INDIRECT_BUFFER;
using gles::GL_ATOMIC_COUNTER_BUFFER;

// BufferTargetARB

// using gles::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// using gles::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget
// using gles::GL_PIXEL_PACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_PIXEL_UNPACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_UNIFORM_BUFFER; // reuse BufferStorageTarget
// using gles::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_COPY_READ_BUFFER; // reuse BufferStorageTarget
// using gles::GL_COPY_WRITE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_DRAW_INDIRECT_BUFFER; // reuse BufferStorageTarget
// using gles::GL_SHADER_STORAGE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_DISPATCH_INDIRECT_BUFFER; // reuse BufferStorageTarget
// using gles::GL_ATOMIC_COUNTER_BUFFER; // reuse BufferStorageTarget

// BufferUsageARB

using gles::GL_STREAM_DRAW;
using gles::GL_STREAM_READ;
using gles::GL_STREAM_COPY;
using gles::GL_STATIC_DRAW;
using gles::GL_STATIC_READ;
using gles::GL_STATIC_COPY;
using gles::GL_DYNAMIC_DRAW;
using gles::GL_DYNAMIC_READ;
using gles::GL_DYNAMIC_COPY;

// CheckFramebufferStatusTarget

using gles::GL_READ_FRAMEBUFFER;
using gles::GL_DRAW_FRAMEBUFFER;
using gles::GL_FRAMEBUFFER;

// ColorBuffer

using gles::GL_NONE;
using gles::GL_FRONT;
using gles::GL_BACK;
using gles::GL_FRONT_AND_BACK;
using gles::GL_COLOR_ATTACHMENT0;
using gles::GL_COLOR_ATTACHMENT1;
using gles::GL_COLOR_ATTACHMENT2;
using gles::GL_COLOR_ATTACHMENT3;
using gles::GL_COLOR_ATTACHMENT4;
using gles::GL_COLOR_ATTACHMENT5;
using gles::GL_COLOR_ATTACHMENT6;
using gles::GL_COLOR_ATTACHMENT7;
using gles::GL_COLOR_ATTACHMENT8;
using gles::GL_COLOR_ATTACHMENT9;
using gles::GL_COLOR_ATTACHMENT10;
using gles::GL_COLOR_ATTACHMENT11;
using gles::GL_COLOR_ATTACHMENT12;
using gles::GL_COLOR_ATTACHMENT13;
using gles::GL_COLOR_ATTACHMENT14;
using gles::GL_COLOR_ATTACHMENT15;
using gles::GL_COLOR_ATTACHMENT16;
using gles::GL_COLOR_ATTACHMENT17;
using gles::GL_COLOR_ATTACHMENT18;
using gles::GL_COLOR_ATTACHMENT19;
using gles::GL_COLOR_ATTACHMENT20;
using gles::GL_COLOR_ATTACHMENT21;
using gles::GL_COLOR_ATTACHMENT22;
using gles::GL_COLOR_ATTACHMENT23;
using gles::GL_COLOR_ATTACHMENT24;
using gles::GL_COLOR_ATTACHMENT25;
using gles::GL_COLOR_ATTACHMENT26;
using gles::GL_COLOR_ATTACHMENT27;
using gles::GL_COLOR_ATTACHMENT28;
using gles::GL_COLOR_ATTACHMENT29;
using gles::GL_COLOR_ATTACHMENT30;
using gles::GL_COLOR_ATTACHMENT31;

// ColorMaterialFace

// using gles::GL_FRONT; // reuse ColorBuffer
// using gles::GL_BACK; // reuse ColorBuffer
// using gles::GL_FRONT_AND_BACK; // reuse ColorBuffer

// ColorPointerType

using gles::GL_BYTE;
using gles::GL_UNSIGNED_BYTE;
using gles::GL_SHORT;
using gles::GL_UNSIGNED_SHORT;
using gles::GL_INT;
using gles::GL_UNSIGNED_INT;
using gles::GL_FLOAT;

// CopyBufferSubDataTarget

// using gles::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// using gles::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget
// using gles::GL_PIXEL_PACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_PIXEL_UNPACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_UNIFORM_BUFFER; // reuse BufferStorageTarget
// using gles::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_COPY_READ_BUFFER; // reuse BufferStorageTarget
// using gles::GL_COPY_WRITE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_DRAW_INDIRECT_BUFFER; // reuse BufferStorageTarget
// using gles::GL_SHADER_STORAGE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_DISPATCH_INDIRECT_BUFFER; // reuse BufferStorageTarget
// using gles::GL_ATOMIC_COUNTER_BUFFER; // reuse BufferStorageTarget

// CullFaceMode

// using gles::GL_FRONT; // reuse ColorBuffer
// using gles::GL_BACK; // reuse ColorBuffer
// using gles::GL_FRONT_AND_BACK; // reuse ColorBuffer

// DebugSeverity

using gles::GL_DONT_CARE;
using gles::GL_DEBUG_SEVERITY_HIGH;
using gles::GL_DEBUG_SEVERITY_MEDIUM;
using gles::GL_DEBUG_SEVERITY_LOW;

// DebugSource

// using gles::GL_DONT_CARE; // reuse DebugSeverity
using gles::GL_DEBUG_SOURCE_API;
using gles::GL_DEBUG_SOURCE_WINDOW_SYSTEM;
using gles::GL_DEBUG_SOURCE_SHADER_COMPILER;
using gles::GL_DEBUG_SOURCE_THIRD_PARTY;
using gles::GL_DEBUG_SOURCE_APPLICATION;
using gles::GL_DEBUG_SOURCE_OTHER;

// DebugType

// using gles::GL_DONT_CARE; // reuse DebugSeverity
using gles::GL_DEBUG_TYPE_ERROR;
using gles::GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR;
using gles::GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR;
using gles::GL_DEBUG_TYPE_PORTABILITY;
using gles::GL_DEBUG_TYPE_PERFORMANCE;
using gles::GL_DEBUG_TYPE_OTHER;
using gles::GL_DEBUG_TYPE_MARKER;
using gles::GL_DEBUG_TYPE_PUSH_GROUP;
using gles::GL_DEBUG_TYPE_POP_GROUP;

// DepthFunction

// using gles::GL_NEVER; // reuse AlphaFunction
// using gles::GL_LESS; // reuse AlphaFunction
// using gles::GL_EQUAL; // reuse AlphaFunction
// using gles::GL_LEQUAL; // reuse AlphaFunction
// using gles::GL_GREATER; // reuse AlphaFunction
// using gles::GL_NOTEQUAL; // reuse AlphaFunction
// using gles::GL_GEQUAL; // reuse AlphaFunction
// using gles::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

// using gles::GL_NONE; // reuse ColorBuffer
// using gles::GL_FRONT; // reuse ColorBuffer
// using gles::GL_BACK; // reuse ColorBuffer
// using gles::GL_FRONT_AND_BACK; // reuse ColorBuffer

// DrawElementsType

// using gles::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gles::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gles::GL_UNSIGNED_INT; // reuse ColorPointerType

// EnableCap

using gles::GL_CULL_FACE;
using gles::GL_DEPTH_TEST;
using gles::GL_STENCIL_TEST;
using gles::GL_DITHER;
using gles::GL_BLEND;
using gles::GL_SCISSOR_TEST;
using gles::GL_TEXTURE_2D;
using gles::GL_POLYGON_OFFSET_FILL;
using gles::GL_VERTEX_ARRAY;

// ErrorCode

using gles::GL_NO_ERROR;
using gles::GL_INVALID_ENUM;
using gles::GL_INVALID_VALUE;
using gles::GL_INVALID_OPERATION;
using gles::GL_STACK_OVERFLOW;
using gles::GL_STACK_UNDERFLOW;
using gles::GL_OUT_OF_MEMORY;
using gles::GL_INVALID_FRAMEBUFFER_OPERATION;

// FogCoordinatePointerType

// using gles::GL_FLOAT; // reuse ColorPointerType

// FogMode

// using gles::GL_LINEAR; // reuse BlitFramebufferFilter

// FogPointerTypeEXT

// using gles::GL_FLOAT; // reuse ColorPointerType

// FogPointerTypeIBM

// using gles::GL_FLOAT; // reuse ColorPointerType

// FramebufferAttachment

using gles::GL_MAX_COLOR_ATTACHMENTS;
// using gles::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT1; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT2; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT3; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT4; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT5; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT6; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT7; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT8; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT9; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT10; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT11; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT12; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT13; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT14; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT15; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT16; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT17; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT18; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT19; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT20; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT21; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT22; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT23; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT24; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT25; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT26; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT27; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT28; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT29; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT30; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT31; // reuse ColorBuffer
using gles::GL_DEPTH_ATTACHMENT;

// FramebufferAttachmentParameterName

using gles::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
using gles::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
using gles::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
using gles::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
using gles::GL_FRAMEBUFFER_ATTACHMENT_LAYERED;

// FramebufferParameterName

using gles::GL_FRAMEBUFFER_DEFAULT_WIDTH;
using gles::GL_FRAMEBUFFER_DEFAULT_HEIGHT;
using gles::GL_FRAMEBUFFER_DEFAULT_LAYERS;
using gles::GL_FRAMEBUFFER_DEFAULT_SAMPLES;
using gles::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS;

// FramebufferStatus

using gles::GL_FRAMEBUFFER_UNDEFINED;
using gles::GL_FRAMEBUFFER_COMPLETE;
using gles::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
using gles::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
using gles::GL_FRAMEBUFFER_UNSUPPORTED;
using gles::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
using gles::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;

// FramebufferTarget

// using gles::GL_READ_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
// using gles::GL_DRAW_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
// using gles::GL_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget

// FrontFaceDirection

using gles::GL_CW;
using gles::GL_CCW;

// GetFramebufferParameter

using gles::GL_SAMPLE_BUFFERS;
using gles::GL_SAMPLES;
using gles::GL_IMPLEMENTATION_COLOR_READ_TYPE;
using gles::GL_IMPLEMENTATION_COLOR_READ_FORMAT;
// using gles::GL_FRAMEBUFFER_DEFAULT_WIDTH; // reuse FramebufferParameterName
// using gles::GL_FRAMEBUFFER_DEFAULT_HEIGHT; // reuse FramebufferParameterName
// using gles::GL_FRAMEBUFFER_DEFAULT_LAYERS; // reuse FramebufferParameterName
// using gles::GL_FRAMEBUFFER_DEFAULT_SAMPLES; // reuse FramebufferParameterName
// using gles::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS; // reuse FramebufferParameterName

// GetPName

using gles::GL_LINE_WIDTH;
// using gles::GL_CULL_FACE; // reuse EnableCap
using gles::GL_CULL_FACE_MODE;
using gles::GL_FRONT_FACE;
using gles::GL_DEPTH_RANGE;
// using gles::GL_DEPTH_TEST; // reuse EnableCap
using gles::GL_DEPTH_WRITEMASK;
using gles::GL_DEPTH_CLEAR_VALUE;
using gles::GL_DEPTH_FUNC;
// using gles::GL_STENCIL_TEST; // reuse EnableCap
using gles::GL_STENCIL_CLEAR_VALUE;
using gles::GL_STENCIL_FUNC;
using gles::GL_STENCIL_VALUE_MASK;
using gles::GL_STENCIL_FAIL;
using gles::GL_STENCIL_PASS_DEPTH_FAIL;
using gles::GL_STENCIL_PASS_DEPTH_PASS;
using gles::GL_STENCIL_REF;
using gles::GL_STENCIL_WRITEMASK;
using gles::GL_VIEWPORT;
// using gles::GL_DITHER; // reuse EnableCap
// using gles::GL_BLEND; // reuse EnableCap
using gles::GL_READ_BUFFER;
using gles::GL_SCISSOR_BOX;
// using gles::GL_SCISSOR_TEST; // reuse EnableCap
using gles::GL_COLOR_CLEAR_VALUE;
using gles::GL_COLOR_WRITEMASK;
using gles::GL_UNPACK_ROW_LENGTH;
using gles::GL_UNPACK_SKIP_ROWS;
using gles::GL_UNPACK_SKIP_PIXELS;
using gles::GL_UNPACK_ALIGNMENT;
using gles::GL_PACK_ROW_LENGTH;
using gles::GL_PACK_SKIP_ROWS;
using gles::GL_PACK_SKIP_PIXELS;
using gles::GL_PACK_ALIGNMENT;
using gles::GL_MAX_TEXTURE_SIZE;
using gles::GL_MAX_VIEWPORT_DIMS;
using gles::GL_SUBPIXEL_BITS;
using gles::GL_RED_BITS;
using gles::GL_GREEN_BITS;
using gles::GL_BLUE_BITS;
using gles::GL_ALPHA_BITS;
using gles::GL_DEPTH_BITS;
using gles::GL_STENCIL_BITS;
// using gles::GL_TEXTURE_2D; // reuse EnableCap
using gles::GL_POLYGON_OFFSET_UNITS;
// using gles::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
using gles::GL_POLYGON_OFFSET_FACTOR;
using gles::GL_TEXTURE_BINDING_2D;
using gles::GL_TEXTURE_BINDING_3D;
// using gles::GL_VERTEX_ARRAY; // reuse EnableCap
using gles::GL_ALIASED_POINT_SIZE_RANGE;
using gles::GL_ALIASED_LINE_WIDTH_RANGE;

// GetPointervPName

using gles::GL_DEBUG_CALLBACK_FUNCTION;
using gles::GL_DEBUG_CALLBACK_USER_PARAM;

// GetTextureParameter

using gles::GL_TEXTURE_WIDTH;
using gles::GL_TEXTURE_HEIGHT;
using gles::GL_TEXTURE_INTERNAL_FORMAT;
using gles::GL_TEXTURE_BORDER_COLOR;
using gles::GL_TEXTURE_MAG_FILTER;
using gles::GL_TEXTURE_MIN_FILTER;
using gles::GL_TEXTURE_WRAP_S;
using gles::GL_TEXTURE_WRAP_T;
using gles::GL_TEXTURE_RED_SIZE;
using gles::GL_TEXTURE_GREEN_SIZE;
using gles::GL_TEXTURE_BLUE_SIZE;
using gles::GL_TEXTURE_ALPHA_SIZE;

// GraphicsResetStatus

// using gles::GL_NO_ERROR; // reuse ErrorCode
using gles::GL_GUILTY_CONTEXT_RESET;
using gles::GL_INNOCENT_CONTEXT_RESET;
using gles::GL_UNKNOWN_CONTEXT_RESET;

// HintMode

// using gles::GL_DONT_CARE; // reuse DebugSeverity
using gles::GL_FASTEST;
using gles::GL_NICEST;

// HintTarget

using gles::GL_GENERATE_MIPMAP_HINT;
using gles::GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
using gles::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;

// IndexPointerType

// using gles::GL_SHORT; // reuse ColorPointerType
// using gles::GL_INT; // reuse ColorPointerType
// using gles::GL_FLOAT; // reuse ColorPointerType

// InternalFormat

using gles::GL_DEPTH_COMPONENT;
using gles::GL_RED;
using gles::GL_RGB;
using gles::GL_RGBA;
using gles::GL_RGB8;
using gles::GL_RGBA4;
using gles::GL_RGB5_A1;
using gles::GL_RGBA8;
using gles::GL_RGB10_A2;
using gles::GL_DEPTH_COMPONENT16;
using gles::GL_RG;
using gles::GL_R8;
using gles::GL_RG8;
using gles::GL_R16F;
using gles::GL_R32F;
using gles::GL_RG16F;
using gles::GL_RG32F;
using gles::GL_R8I;
using gles::GL_R8UI;
using gles::GL_R16I;
using gles::GL_R16UI;
using gles::GL_R32I;
using gles::GL_R32UI;
using gles::GL_RG8I;
using gles::GL_RG8UI;
using gles::GL_RG16I;
using gles::GL_RG16UI;
using gles::GL_RG32I;
using gles::GL_RG32UI;
using gles::GL_DEPTH_STENCIL;
using gles::GL_RGBA32F;
using gles::GL_RGBA16F;
using gles::GL_RGB16F;
using gles::GL_DEPTH24_STENCIL8;
using gles::GL_R11F_G11F_B10F;
using gles::GL_RGB9_E5;
using gles::GL_SRGB;
using gles::GL_SRGB8;
using gles::GL_SRGB8_ALPHA8;
using gles::GL_DEPTH_COMPONENT32F;
using gles::GL_DEPTH32F_STENCIL8;
using gles::GL_RGBA32UI;
using gles::GL_RGB32UI;
using gles::GL_RGBA16UI;
using gles::GL_RGB16UI;
using gles::GL_RGBA8UI;
using gles::GL_RGB8UI;
using gles::GL_RGBA32I;
using gles::GL_RGB32I;
using gles::GL_RGBA16I;
using gles::GL_RGB16I;
using gles::GL_RGBA8I;
using gles::GL_RGB8I;
using gles::GL_R8_SNORM;
using gles::GL_RG8_SNORM;
using gles::GL_RGB8_SNORM;
using gles::GL_RGBA8_SNORM;
using gles::GL_RGB10_A2UI;
using gles::GL_COMPRESSED_R11_EAC;
using gles::GL_COMPRESSED_SIGNED_R11_EAC;
using gles::GL_COMPRESSED_RG11_EAC;
using gles::GL_COMPRESSED_SIGNED_RG11_EAC;
using gles::GL_COMPRESSED_RGB8_ETC2;
using gles::GL_COMPRESSED_SRGB8_ETC2;
using gles::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2;
using gles::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2;
using gles::GL_COMPRESSED_RGBA8_ETC2_EAC;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC;

// InternalFormatPName

// using gles::GL_SAMPLES; // reuse GetFramebufferParameter
using gles::GL_TEXTURE_COMPRESSED;
using gles::GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
using gles::GL_NUM_SAMPLE_COUNTS;

// LightEnvModeSGIX

using gles::GL_REPLACE;

// ListNameType

// using gles::GL_BYTE; // reuse ColorPointerType
// using gles::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gles::GL_SHORT; // reuse ColorPointerType
// using gles::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gles::GL_INT; // reuse ColorPointerType
// using gles::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gles::GL_FLOAT; // reuse ColorPointerType

// LogicOp

using gles::GL_INVERT;

// MaterialFace

// using gles::GL_FRONT; // reuse ColorBuffer
// using gles::GL_BACK; // reuse ColorBuffer
// using gles::GL_FRONT_AND_BACK; // reuse ColorBuffer

// MatrixMode

using gles::GL_TEXTURE;

// NormalPointerType

// using gles::GL_BYTE; // reuse ColorPointerType
// using gles::GL_SHORT; // reuse ColorPointerType
// using gles::GL_INT; // reuse ColorPointerType
// using gles::GL_FLOAT; // reuse ColorPointerType

// ObjectIdentifier

// using gles::GL_TEXTURE; // reuse MatrixMode
// using gles::GL_VERTEX_ARRAY; // reuse EnableCap
using gles::GL_BUFFER;
using gles::GL_SHADER;
using gles::GL_PROGRAM;
using gles::GL_QUERY;
using gles::GL_PROGRAM_PIPELINE;
using gles::GL_SAMPLER;
// using gles::GL_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
using gles::GL_RENDERBUFFER;
// using gles::GL_TRANSFORM_FEEDBACK; // reuse BindTransformFeedbackTarget

// PatchParameterName

using gles::GL_PATCH_VERTICES;

// PathFillMode

// using gles::GL_INVERT; // reuse LogicOp

// PathFontStyle

// using gles::GL_NONE; // reuse ColorBuffer

// PathGenMode

// using gles::GL_NONE; // reuse ColorBuffer

// PathTransformType

// using gles::GL_NONE; // reuse ColorBuffer

// PipelineParameterName

using gles::GL_ACTIVE_PROGRAM;
using gles::GL_FRAGMENT_SHADER;
using gles::GL_VERTEX_SHADER;
using gles::GL_INFO_LOG_LENGTH;
using gles::GL_GEOMETRY_SHADER;
using gles::GL_TESS_EVALUATION_SHADER;
using gles::GL_TESS_CONTROL_SHADER;

// PixelCopyType

// using gles::GL_COLOR; // reuse Buffer
// using gles::GL_DEPTH; // reuse Buffer
// using gles::GL_STENCIL; // reuse Buffer

// PixelFormat

// using gles::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gles::GL_UNSIGNED_INT; // reuse ColorPointerType
using gles::GL_STENCIL_INDEX;
// using gles::GL_DEPTH_COMPONENT; // reuse InternalFormat
// using gles::GL_RED; // reuse InternalFormat
using gles::GL_GREEN;
using gles::GL_BLUE;
using gles::GL_ALPHA;
// using gles::GL_RGB; // reuse InternalFormat
// using gles::GL_RGBA; // reuse InternalFormat
using gles::GL_LUMINANCE;
using gles::GL_LUMINANCE_ALPHA;

// PixelStoreParameter

// using gles::GL_UNPACK_ROW_LENGTH; // reuse GetPName
// using gles::GL_UNPACK_SKIP_ROWS; // reuse GetPName
// using gles::GL_UNPACK_SKIP_PIXELS; // reuse GetPName
// using gles::GL_UNPACK_ALIGNMENT; // reuse GetPName
// using gles::GL_PACK_ROW_LENGTH; // reuse GetPName
// using gles::GL_PACK_SKIP_ROWS; // reuse GetPName
// using gles::GL_PACK_SKIP_PIXELS; // reuse GetPName
// using gles::GL_PACK_ALIGNMENT; // reuse GetPName
using gles::GL_UNPACK_SKIP_IMAGES;
using gles::GL_UNPACK_IMAGE_HEIGHT;

// PixelTexGenMode

// using gles::GL_NONE; // reuse ColorBuffer
// using gles::GL_RGB; // reuse InternalFormat
// using gles::GL_RGBA; // reuse InternalFormat
// using gles::GL_LUMINANCE; // reuse PixelFormat
// using gles::GL_LUMINANCE_ALPHA; // reuse PixelFormat

// PixelType

// using gles::GL_BYTE; // reuse ColorPointerType
// using gles::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gles::GL_SHORT; // reuse ColorPointerType
// using gles::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gles::GL_INT; // reuse ColorPointerType
// using gles::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gles::GL_FLOAT; // reuse ColorPointerType
using gles::GL_UNSIGNED_SHORT_4_4_4_4;
using gles::GL_UNSIGNED_SHORT_5_5_5_1;

// PrecisionType

using gles::GL_LOW_FLOAT;
using gles::GL_MEDIUM_FLOAT;
using gles::GL_HIGH_FLOAT;
using gles::GL_LOW_INT;
using gles::GL_MEDIUM_INT;
using gles::GL_HIGH_INT;

// PrimitiveType

using gles::GL_POINTS;
using gles::GL_LINES;
using gles::GL_LINE_LOOP;
using gles::GL_LINE_STRIP;
using gles::GL_TRIANGLES;
using gles::GL_TRIANGLE_STRIP;
using gles::GL_TRIANGLE_FAN;
using gles::GL_QUADS;
using gles::GL_LINES_ADJACENCY;
using gles::GL_LINE_STRIP_ADJACENCY;
using gles::GL_TRIANGLES_ADJACENCY;
using gles::GL_TRIANGLE_STRIP_ADJACENCY;
using gles::GL_PATCHES;

// ProgramInterface

// using gles::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
using gles::GL_UNIFORM;
using gles::GL_UNIFORM_BLOCK;
using gles::GL_PROGRAM_INPUT;
using gles::GL_PROGRAM_OUTPUT;
using gles::GL_BUFFER_VARIABLE;
using gles::GL_SHADER_STORAGE_BLOCK;
using gles::GL_TRANSFORM_FEEDBACK_VARYING;

// ProgramInterfacePName

using gles::GL_ACTIVE_RESOURCES;
using gles::GL_MAX_NAME_LENGTH;
using gles::GL_MAX_NUM_ACTIVE_VARIABLES;

// ProgramParameterPName

// using gles::GL_PROGRAM_BINARY_RETRIEVABLE_HINT; // reuse HintTarget
using gles::GL_PROGRAM_SEPARABLE;

// ProgramPropertyARB

using gles::GL_COMPUTE_WORK_GROUP_SIZE;
using gles::GL_PROGRAM_BINARY_LENGTH;
using gles::GL_GEOMETRY_VERTICES_OUT;
using gles::GL_GEOMETRY_INPUT_TYPE;
using gles::GL_GEOMETRY_OUTPUT_TYPE;
using gles::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
using gles::GL_ACTIVE_UNIFORM_BLOCKS;
using gles::GL_DELETE_STATUS;
using gles::GL_LINK_STATUS;
using gles::GL_VALIDATE_STATUS;
// using gles::GL_INFO_LOG_LENGTH; // reuse PipelineParameterName
using gles::GL_ATTACHED_SHADERS;
using gles::GL_ACTIVE_UNIFORMS;
using gles::GL_ACTIVE_UNIFORM_MAX_LENGTH;
using gles::GL_ACTIVE_ATTRIBUTES;
using gles::GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
using gles::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
using gles::GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
using gles::GL_TRANSFORM_FEEDBACK_VARYINGS;
using gles::GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;

// QueryObjectParameterName

using gles::GL_QUERY_RESULT;
using gles::GL_QUERY_RESULT_AVAILABLE;

// QueryParameterName

using gles::GL_CURRENT_QUERY;

// QueryTarget

using gles::GL_ANY_SAMPLES_PASSED;
using gles::GL_PRIMITIVES_GENERATED;
using gles::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
using gles::GL_ANY_SAMPLES_PASSED_CONSERVATIVE;

// ReadBufferMode

// using gles::GL_FRONT; // reuse ColorBuffer
// using gles::GL_BACK; // reuse ColorBuffer

// RenderbufferParameterName

using gles::GL_RENDERBUFFER_SAMPLES;
using gles::GL_RENDERBUFFER_WIDTH;
using gles::GL_RENDERBUFFER_HEIGHT;
using gles::GL_RENDERBUFFER_INTERNAL_FORMAT;
using gles::GL_RENDERBUFFER_RED_SIZE;
using gles::GL_RENDERBUFFER_GREEN_SIZE;
using gles::GL_RENDERBUFFER_BLUE_SIZE;
using gles::GL_RENDERBUFFER_ALPHA_SIZE;
using gles::GL_RENDERBUFFER_DEPTH_SIZE;
using gles::GL_RENDERBUFFER_STENCIL_SIZE;

// RenderbufferTarget

// using gles::GL_RENDERBUFFER; // reuse ObjectIdentifier

// SamplerParameterName

// using gles::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
// using gles::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// using gles::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// using gles::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// using gles::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
using gles::GL_TEXTURE_WRAP_R;
using gles::GL_TEXTURE_MIN_LOD;
using gles::GL_TEXTURE_MAX_LOD;
using gles::GL_TEXTURE_COMPARE_MODE;
using gles::GL_TEXTURE_COMPARE_FUNC;

// ShaderParameterName

using gles::GL_SHADER_TYPE;
// using gles::GL_DELETE_STATUS; // reuse ProgramPropertyARB
using gles::GL_COMPILE_STATUS;
// using gles::GL_INFO_LOG_LENGTH; // reuse PipelineParameterName
using gles::GL_SHADER_SOURCE_LENGTH;

// ShaderType

// using gles::GL_FRAGMENT_SHADER; // reuse PipelineParameterName
// using gles::GL_VERTEX_SHADER; // reuse PipelineParameterName
// using gles::GL_GEOMETRY_SHADER; // reuse PipelineParameterName
// using gles::GL_TESS_EVALUATION_SHADER; // reuse PipelineParameterName
// using gles::GL_TESS_CONTROL_SHADER; // reuse PipelineParameterName
using gles::GL_COMPUTE_SHADER;

// StencilFaceDirection

// using gles::GL_FRONT; // reuse ColorBuffer
// using gles::GL_BACK; // reuse ColorBuffer
// using gles::GL_FRONT_AND_BACK; // reuse ColorBuffer

// StencilFunction

// using gles::GL_NEVER; // reuse AlphaFunction
// using gles::GL_LESS; // reuse AlphaFunction
// using gles::GL_EQUAL; // reuse AlphaFunction
// using gles::GL_LEQUAL; // reuse AlphaFunction
// using gles::GL_GREATER; // reuse AlphaFunction
// using gles::GL_NOTEQUAL; // reuse AlphaFunction
// using gles::GL_GEQUAL; // reuse AlphaFunction
// using gles::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// using gles::GL_ZERO; // reuse BlendingFactor
// using gles::GL_INVERT; // reuse LogicOp
using gles::GL_KEEP;
// using gles::GL_REPLACE; // reuse LightEnvModeSGIX
using gles::GL_INCR;
using gles::GL_DECR;

// StringName

using gles::GL_VENDOR;
using gles::GL_RENDERER;
using gles::GL_VERSION;
using gles::GL_EXTENSIONS;
using gles::GL_SHADING_LANGUAGE_VERSION;

// SubroutineParameterName

using gles::GL_UNIFORM_SIZE;
using gles::GL_UNIFORM_NAME_LENGTH;

// SyncCondition

using gles::GL_SYNC_GPU_COMMANDS_COMPLETE;

// SyncParameterName

using gles::GL_OBJECT_TYPE;
using gles::GL_SYNC_CONDITION;
using gles::GL_SYNC_STATUS;
using gles::GL_SYNC_FLAGS;

// SyncStatus

using gles::GL_ALREADY_SIGNALED;
using gles::GL_TIMEOUT_EXPIRED;
using gles::GL_CONDITION_SATISFIED;
using gles::GL_WAIT_FAILED;

// TexCoordPointerType

// using gles::GL_SHORT; // reuse ColorPointerType
// using gles::GL_INT; // reuse ColorPointerType
// using gles::GL_FLOAT; // reuse ColorPointerType

// TextureEnvMode

// using gles::GL_BLEND; // reuse EnableCap

// TextureMagFilter

// using gles::GL_NEAREST; // reuse BlitFramebufferFilter
// using gles::GL_LINEAR; // reuse BlitFramebufferFilter

// TextureMinFilter

// using gles::GL_NEAREST; // reuse BlitFramebufferFilter
// using gles::GL_LINEAR; // reuse BlitFramebufferFilter
using gles::GL_NEAREST_MIPMAP_NEAREST;
using gles::GL_LINEAR_MIPMAP_NEAREST;
using gles::GL_NEAREST_MIPMAP_LINEAR;
using gles::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// using gles::GL_TEXTURE_WIDTH; // reuse GetTextureParameter
// using gles::GL_TEXTURE_HEIGHT; // reuse GetTextureParameter
// using gles::GL_TEXTURE_INTERNAL_FORMAT; // reuse GetTextureParameter
// using gles::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
// using gles::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// using gles::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// using gles::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// using gles::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
// using gles::GL_TEXTURE_RED_SIZE; // reuse GetTextureParameter
// using gles::GL_TEXTURE_GREEN_SIZE; // reuse GetTextureParameter
// using gles::GL_TEXTURE_BLUE_SIZE; // reuse GetTextureParameter
// using gles::GL_TEXTURE_ALPHA_SIZE; // reuse GetTextureParameter
// using gles::GL_TEXTURE_WRAP_R; // reuse SamplerParameterName
// using gles::GL_TEXTURE_MIN_LOD; // reuse SamplerParameterName
// using gles::GL_TEXTURE_MAX_LOD; // reuse SamplerParameterName
using gles::GL_TEXTURE_BASE_LEVEL;
using gles::GL_TEXTURE_MAX_LEVEL;
// using gles::GL_TEXTURE_COMPARE_MODE; // reuse SamplerParameterName
// using gles::GL_TEXTURE_COMPARE_FUNC; // reuse SamplerParameterName
using gles::GL_TEXTURE_SWIZZLE_R;
using gles::GL_TEXTURE_SWIZZLE_G;
using gles::GL_TEXTURE_SWIZZLE_B;
using gles::GL_TEXTURE_SWIZZLE_A;
using gles::GL_DEPTH_STENCIL_TEXTURE_MODE;

// TextureTarget

// using gles::GL_TEXTURE_2D; // reuse EnableCap
using gles::GL_TEXTURE_3D;
using gles::GL_TEXTURE_CUBE_MAP;
using gles::GL_TEXTURE_CUBE_MAP_POSITIVE_X;
using gles::GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
using gles::GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
using gles::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
using gles::GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
using gles::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
using gles::GL_TEXTURE_2D_ARRAY;
using gles::GL_TEXTURE_CUBE_MAP_ARRAY;
using gles::GL_TEXTURE_2D_MULTISAMPLE;
using gles::GL_TEXTURE_2D_MULTISAMPLE_ARRAY;

// TextureUnit

using gles::GL_TEXTURE0;
using gles::GL_TEXTURE1;
using gles::GL_TEXTURE2;
using gles::GL_TEXTURE3;
using gles::GL_TEXTURE4;
using gles::GL_TEXTURE5;
using gles::GL_TEXTURE6;
using gles::GL_TEXTURE7;
using gles::GL_TEXTURE8;
using gles::GL_TEXTURE9;
using gles::GL_TEXTURE10;
using gles::GL_TEXTURE11;
using gles::GL_TEXTURE12;
using gles::GL_TEXTURE13;
using gles::GL_TEXTURE14;
using gles::GL_TEXTURE15;
using gles::GL_TEXTURE16;
using gles::GL_TEXTURE17;
using gles::GL_TEXTURE18;
using gles::GL_TEXTURE19;
using gles::GL_TEXTURE20;
using gles::GL_TEXTURE21;
using gles::GL_TEXTURE22;
using gles::GL_TEXTURE23;
using gles::GL_TEXTURE24;
using gles::GL_TEXTURE25;
using gles::GL_TEXTURE26;
using gles::GL_TEXTURE27;
using gles::GL_TEXTURE28;
using gles::GL_TEXTURE29;
using gles::GL_TEXTURE30;
using gles::GL_TEXTURE31;

// TextureWrapMode

using gles::GL_REPEAT;
using gles::GL_CLAMP_TO_BORDER;
using gles::GL_CLAMP_TO_EDGE;

// TransformFeedbackPName

using gles::GL_TRANSFORM_FEEDBACK_BUFFER_START;
using gles::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
using gles::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
using gles::GL_TRANSFORM_FEEDBACK_PAUSED;
using gles::GL_TRANSFORM_FEEDBACK_ACTIVE;

// UniformBlockPName

using gles::GL_UNIFORM_BLOCK_BINDING;
using gles::GL_UNIFORM_BLOCK_DATA_SIZE;
using gles::GL_UNIFORM_BLOCK_NAME_LENGTH;
using gles::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
using gles::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
using gles::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
using gles::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;

// UniformPName

using gles::GL_UNIFORM_TYPE;
// using gles::GL_UNIFORM_SIZE; // reuse SubroutineParameterName
// using gles::GL_UNIFORM_NAME_LENGTH; // reuse SubroutineParameterName
using gles::GL_UNIFORM_BLOCK_INDEX;
using gles::GL_UNIFORM_OFFSET;
using gles::GL_UNIFORM_ARRAY_STRIDE;
using gles::GL_UNIFORM_MATRIX_STRIDE;
using gles::GL_UNIFORM_IS_ROW_MAJOR;

// VertexArrayPName

using gles::GL_VERTEX_ATTRIB_RELATIVE_OFFSET;
using gles::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
using gles::GL_VERTEX_ATTRIB_ARRAY_SIZE;
using gles::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
using gles::GL_VERTEX_ATTRIB_ARRAY_TYPE;
using gles::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
using gles::GL_VERTEX_ATTRIB_ARRAY_INTEGER;
using gles::GL_VERTEX_ATTRIB_ARRAY_DIVISOR;

// VertexAttribEnum

// using gles::GL_VERTEX_ATTRIB_ARRAY_ENABLED; // reuse VertexArrayPName
// using gles::GL_VERTEX_ATTRIB_ARRAY_SIZE; // reuse VertexArrayPName
// using gles::GL_VERTEX_ATTRIB_ARRAY_STRIDE; // reuse VertexArrayPName
// using gles::GL_VERTEX_ATTRIB_ARRAY_TYPE; // reuse VertexArrayPName
using gles::GL_CURRENT_VERTEX_ATTRIB;
// using gles::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED; // reuse VertexArrayPName
using gles::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
// using gles::GL_VERTEX_ATTRIB_ARRAY_INTEGER; // reuse VertexArrayPName
// using gles::GL_VERTEX_ATTRIB_ARRAY_DIVISOR; // reuse VertexArrayPName

// VertexAttribPointerType

// using gles::GL_BYTE; // reuse ColorPointerType
// using gles::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gles::GL_SHORT; // reuse ColorPointerType
// using gles::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gles::GL_INT; // reuse ColorPointerType
// using gles::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gles::GL_FLOAT; // reuse ColorPointerType
using gles::GL_HALF_FLOAT;
using gles::GL_FIXED;
using gles::GL_UNSIGNED_INT_2_10_10_10_REV;
using gles::GL_UNSIGNED_INT_10F_11F_11F_REV;
using gles::GL_INT_2_10_10_10_REV;

// VertexAttribType

// using gles::GL_BYTE; // reuse ColorPointerType
// using gles::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gles::GL_SHORT; // reuse ColorPointerType
// using gles::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gles::GL_INT; // reuse ColorPointerType
// using gles::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gles::GL_FLOAT; // reuse ColorPointerType
// using gles::GL_HALF_FLOAT; // reuse VertexAttribPointerType
// using gles::GL_FIXED; // reuse VertexAttribPointerType
// using gles::GL_UNSIGNED_INT_2_10_10_10_REV; // reuse VertexAttribPointerType
// using gles::GL_UNSIGNED_INT_10F_11F_11F_REV; // reuse VertexAttribPointerType
// using gles::GL_INT_2_10_10_10_REV; // reuse VertexAttribPointerType

// VertexBufferObjectParameter

using gles::GL_BUFFER_SIZE;
using gles::GL_BUFFER_USAGE;
using gles::GL_BUFFER_MAPPED;
using gles::GL_BUFFER_ACCESS_FLAGS;
using gles::GL_BUFFER_MAP_LENGTH;
using gles::GL_BUFFER_MAP_OFFSET;

// VertexBufferObjectUsage

// using gles::GL_STREAM_DRAW; // reuse BufferUsageARB
// using gles::GL_STREAM_READ; // reuse BufferUsageARB
// using gles::GL_STREAM_COPY; // reuse BufferUsageARB
// using gles::GL_STATIC_DRAW; // reuse BufferUsageARB
// using gles::GL_STATIC_READ; // reuse BufferUsageARB
// using gles::GL_STATIC_COPY; // reuse BufferUsageARB
// using gles::GL_DYNAMIC_DRAW; // reuse BufferUsageARB
// using gles::GL_DYNAMIC_READ; // reuse BufferUsageARB
// using gles::GL_DYNAMIC_COPY; // reuse BufferUsageARB

// VertexPointerType

// using gles::GL_SHORT; // reuse ColorPointerType
// using gles::GL_INT; // reuse ColorPointerType
// using gles::GL_FLOAT; // reuse ColorPointerType

// VertexProvokingMode

using gles::GL_FIRST_VERTEX_CONVENTION;
using gles::GL_LAST_VERTEX_CONVENTION;

// __UNGROUPED__

using gles::GL_CONTEXT_LOST;
using gles::GL_BLEND_COLOR;
using gles::GL_MIN;
using gles::GL_MAX;
using gles::GL_BLEND_EQUATION;
using gles::GL_BLEND_EQUATION_RGB;
using gles::GL_TEXTURE_DEPTH;
using gles::GL_MAX_3D_TEXTURE_SIZE;
using gles::GL_SAMPLE_ALPHA_TO_COVERAGE;
using gles::GL_SAMPLE_COVERAGE;
using gles::GL_SAMPLE_COVERAGE_VALUE;
using gles::GL_SAMPLE_COVERAGE_INVERT;
using gles::GL_BLEND_DST_RGB;
using gles::GL_BLEND_SRC_RGB;
using gles::GL_BLEND_DST_ALPHA;
using gles::GL_BLEND_SRC_ALPHA;
using gles::GL_MAX_ELEMENTS_VERTICES;
using gles::GL_MAX_ELEMENTS_INDICES;
using gles::GL_DEPTH_COMPONENT24;
using gles::GL_FRAMEBUFFER_DEFAULT;
using gles::GL_DEPTH_STENCIL_ATTACHMENT;
using gles::GL_MAJOR_VERSION;
using gles::GL_MINOR_VERSION;
using gles::GL_NUM_EXTENSIONS;
using gles::GL_CONTEXT_FLAGS;
using gles::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED;
using gles::GL_RG_INTEGER;
using gles::GL_DEBUG_OUTPUT_SYNCHRONOUS;
using gles::GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH;
using gles::GL_LOSE_CONTEXT_ON_RESET;
using gles::GL_RESET_NOTIFICATION_STRATEGY;
using gles::GL_PROGRAM_PIPELINE_BINDING;
using gles::GL_LAYER_PROVOKING_VERTEX;
using gles::GL_UNDEFINED_VERTEX;
using gles::GL_NO_RESET_NOTIFICATION;
using gles::GL_MAX_COMPUTE_SHARED_MEMORY_SIZE;
using gles::GL_MAX_COMPUTE_UNIFORM_COMPONENTS;
using gles::GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_COMPUTE_ATOMIC_COUNTERS;
using gles::GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS;
using gles::GL_DEBUG_SEVERITY_NOTIFICATION;
using gles::GL_MAX_DEBUG_GROUP_STACK_DEPTH;
using gles::GL_DEBUG_GROUP_STACK_DEPTH;
using gles::GL_MAX_UNIFORM_LOCATIONS;
using gles::GL_VERTEX_ATTRIB_BINDING;
using gles::GL_VERTEX_BINDING_DIVISOR;
using gles::GL_VERTEX_BINDING_OFFSET;
using gles::GL_VERTEX_BINDING_STRIDE;
using gles::GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET;
using gles::GL_MAX_VERTEX_ATTRIB_BINDINGS;
using gles::GL_TEXTURE_IMMUTABLE_LEVELS;
using gles::GL_MAX_VERTEX_ATTRIB_STRIDE;
using gles::GL_MAX_LABEL_LENGTH;
using gles::GL_UNSIGNED_SHORT_5_6_5;
using gles::GL_MIRRORED_REPEAT;
using gles::GL_ACTIVE_TEXTURE;
using gles::GL_MAX_RENDERBUFFER_SIZE;
using gles::GL_UNSIGNED_INT_24_8;
using gles::GL_MAX_TEXTURE_LOD_BIAS;
using gles::GL_INCR_WRAP;
using gles::GL_DECR_WRAP;
using gles::GL_TEXTURE_BINDING_CUBE_MAP;
using gles::GL_MAX_CUBE_MAP_TEXTURE_SIZE;
using gles::GL_VERTEX_ARRAY_BINDING;
using gles::GL_VERTEX_ATTRIB_ARRAY_POINTER;
using gles::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
using gles::GL_COMPRESSED_TEXTURE_FORMATS;
using gles::GL_NUM_PROGRAM_BINARY_FORMATS;
using gles::GL_PROGRAM_BINARY_FORMATS;
using gles::GL_STENCIL_BACK_FUNC;
using gles::GL_STENCIL_BACK_FAIL;
using gles::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
using gles::GL_STENCIL_BACK_PASS_DEPTH_PASS;
using gles::GL_RGB32F;
using gles::GL_MAX_DRAW_BUFFERS;
using gles::GL_DRAW_BUFFER0;
using gles::GL_DRAW_BUFFER1;
using gles::GL_DRAW_BUFFER2;
using gles::GL_DRAW_BUFFER3;
using gles::GL_DRAW_BUFFER4;
using gles::GL_DRAW_BUFFER5;
using gles::GL_DRAW_BUFFER6;
using gles::GL_DRAW_BUFFER7;
using gles::GL_DRAW_BUFFER8;
using gles::GL_DRAW_BUFFER9;
using gles::GL_DRAW_BUFFER10;
using gles::GL_DRAW_BUFFER11;
using gles::GL_DRAW_BUFFER12;
using gles::GL_DRAW_BUFFER13;
using gles::GL_DRAW_BUFFER14;
using gles::GL_DRAW_BUFFER15;
using gles::GL_BLEND_EQUATION_ALPHA;
using gles::GL_TEXTURE_DEPTH_SIZE;
using gles::GL_COMPARE_REF_TO_TEXTURE;
using gles::GL_MAX_VERTEX_ATTRIBS;
using gles::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
using gles::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
using gles::GL_MAX_TEXTURE_IMAGE_UNITS;
using gles::GL_GEOMETRY_SHADER_INVOCATIONS;
using gles::GL_ARRAY_BUFFER_BINDING;
using gles::GL_ELEMENT_ARRAY_BUFFER_BINDING;
using gles::GL_BUFFER_MAP_POINTER;
using gles::GL_PIXEL_PACK_BUFFER_BINDING;
using gles::GL_PIXEL_UNPACK_BUFFER_BINDING;
using gles::GL_TEXTURE_STENCIL_SIZE;
using gles::GL_MAX_ARRAY_TEXTURE_LAYERS;
using gles::GL_MIN_PROGRAM_TEXEL_OFFSET;
using gles::GL_MAX_PROGRAM_TEXEL_OFFSET;
using gles::GL_SAMPLER_BINDING;
using gles::GL_UNIFORM_BUFFER_BINDING;
using gles::GL_UNIFORM_BUFFER_START;
using gles::GL_UNIFORM_BUFFER_SIZE;
using gles::GL_MAX_VERTEX_UNIFORM_BLOCKS;
using gles::GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
using gles::GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
using gles::GL_MAX_COMBINED_UNIFORM_BLOCKS;
using gles::GL_MAX_UNIFORM_BUFFER_BINDINGS;
using gles::GL_MAX_UNIFORM_BLOCK_SIZE;
using gles::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
using gles::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
using gles::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
using gles::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
using gles::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
using gles::GL_MAX_VERTEX_UNIFORM_COMPONENTS;
using gles::GL_MAX_VARYING_COMPONENTS;
using gles::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
using gles::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
using gles::GL_CURRENT_PROGRAM;
using gles::GL_TEXTURE_RED_TYPE;
using gles::GL_TEXTURE_GREEN_TYPE;
using gles::GL_TEXTURE_BLUE_TYPE;
using gles::GL_TEXTURE_ALPHA_TYPE;
using gles::GL_TEXTURE_DEPTH_TYPE;
using gles::GL_UNSIGNED_NORMALIZED;
using gles::GL_TEXTURE_BINDING_2D_ARRAY;
using gles::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
using gles::GL_TEXTURE_BUFFER_BINDING;
using gles::GL_MAX_TEXTURE_BUFFER_SIZE;
using gles::GL_TEXTURE_BINDING_BUFFER;
using gles::GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
using gles::GL_SAMPLE_SHADING;
using gles::GL_MIN_SAMPLE_SHADING_VALUE;
using gles::GL_UNSIGNED_INT_5_9_9_9_REV;
using gles::GL_TEXTURE_SHARED_SIZE;
using gles::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
using gles::GL_RASTERIZER_DISCARD;
using gles::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
using gles::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
using gles::GL_INTERLEAVED_ATTRIBS;
using gles::GL_SEPARATE_ATTRIBS;
using gles::GL_STENCIL_BACK_REF;
using gles::GL_STENCIL_BACK_VALUE_MASK;
using gles::GL_STENCIL_BACK_WRITEMASK;
using gles::GL_DRAW_FRAMEBUFFER_BINDING;
using gles::GL_FRAMEBUFFER_BINDING;
using gles::GL_RENDERBUFFER_BINDING;
using gles::GL_READ_FRAMEBUFFER_BINDING;
using gles::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
using gles::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
using gles::GL_STENCIL_ATTACHMENT;
using gles::GL_STENCIL_INDEX8;
using gles::GL_MAX_SAMPLES;
using gles::GL_RGB565;
using gles::GL_PRIMITIVE_RESTART_FIXED_INDEX;
using gles::GL_MAX_ELEMENT_INDEX;
using gles::GL_RED_INTEGER;
using gles::GL_RGB_INTEGER;
using gles::GL_RGBA_INTEGER;
using gles::GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
using gles::GL_SAMPLER_2D_ARRAY;
using gles::GL_SAMPLER_BUFFER;
using gles::GL_SAMPLER_2D_ARRAY_SHADOW;
using gles::GL_SAMPLER_CUBE_SHADOW;
using gles::GL_UNSIGNED_INT_VEC2;
using gles::GL_UNSIGNED_INT_VEC3;
using gles::GL_UNSIGNED_INT_VEC4;
using gles::GL_INT_SAMPLER_2D;
using gles::GL_INT_SAMPLER_3D;
using gles::GL_INT_SAMPLER_CUBE;
using gles::GL_INT_SAMPLER_2D_ARRAY;
using gles::GL_INT_SAMPLER_BUFFER;
using gles::GL_UNSIGNED_INT_SAMPLER_2D;
using gles::GL_UNSIGNED_INT_SAMPLER_3D;
using gles::GL_UNSIGNED_INT_SAMPLER_CUBE;
using gles::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
using gles::GL_UNSIGNED_INT_SAMPLER_BUFFER;
using gles::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
using gles::GL_MAX_GEOMETRY_OUTPUT_VERTICES;
using gles::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
using gles::GL_SHADER_BINARY_FORMATS;
using gles::GL_NUM_SHADER_BINARY_FORMATS;
using gles::GL_SHADER_COMPILER;
using gles::GL_MAX_VERTEX_UNIFORM_VECTORS;
using gles::GL_MAX_VARYING_VECTORS;
using gles::GL_MAX_FRAGMENT_UNIFORM_VECTORS;
using gles::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS;
using gles::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS;
using gles::GL_TRANSFORM_FEEDBACK_BINDING;
using gles::GL_SAMPLE_POSITION;
using gles::GL_SAMPLE_MASK;
using gles::GL_SAMPLE_MASK_VALUE;
using gles::GL_MAX_SAMPLE_MASK_WORDS;
using gles::GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
using gles::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET;
using gles::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET;
using gles::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS;
using gles::GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
using gles::GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
using gles::GL_TESS_CONTROL_OUTPUT_VERTICES;
using gles::GL_TESS_GEN_MODE;
using gles::GL_TESS_GEN_SPACING;
using gles::GL_TESS_GEN_VERTEX_ORDER;
using gles::GL_TESS_GEN_POINT_MODE;
using gles::GL_ISOLINES;
using gles::GL_FRACTIONAL_ODD;
using gles::GL_FRACTIONAL_EVEN;
using gles::GL_MAX_PATCH_VERTICES;
using gles::GL_MAX_TESS_GEN_LEVEL;
using gles::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS;
using gles::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS;
using gles::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS;
using gles::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS;
using gles::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
using gles::GL_MAX_TESS_PATCH_COMPONENTS;
using gles::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS;
using gles::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
using gles::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS;
using gles::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS;
using gles::GL_COPY_READ_BUFFER_BINDING;
using gles::GL_COPY_WRITE_BUFFER_BINDING;
using gles::GL_MAX_IMAGE_UNITS;
using gles::GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES;
using gles::GL_IMAGE_BINDING_NAME;
using gles::GL_IMAGE_BINDING_LEVEL;
using gles::GL_IMAGE_BINDING_LAYERED;
using gles::GL_IMAGE_BINDING_LAYER;
using gles::GL_IMAGE_BINDING_ACCESS;
using gles::GL_DRAW_INDIRECT_BUFFER_BINDING;
using gles::GL_VERTEX_BINDING_BUFFER;
using gles::GL_SIGNED_NORMALIZED;
using gles::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY;
using gles::GL_SAMPLER_CUBE_MAP_ARRAY;
using gles::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW;
using gles::GL_INT_SAMPLER_CUBE_MAP_ARRAY;
using gles::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY;
using gles::GL_IMAGE_2D;
using gles::GL_IMAGE_3D;
using gles::GL_IMAGE_CUBE;
using gles::GL_IMAGE_BUFFER;
using gles::GL_IMAGE_2D_ARRAY;
using gles::GL_IMAGE_CUBE_MAP_ARRAY;
using gles::GL_INT_IMAGE_2D;
using gles::GL_INT_IMAGE_3D;
using gles::GL_INT_IMAGE_CUBE;
using gles::GL_INT_IMAGE_BUFFER;
using gles::GL_INT_IMAGE_2D_ARRAY;
using gles::GL_INT_IMAGE_CUBE_MAP_ARRAY;
using gles::GL_UNSIGNED_INT_IMAGE_2D;
using gles::GL_UNSIGNED_INT_IMAGE_3D;
using gles::GL_UNSIGNED_INT_IMAGE_CUBE;
using gles::GL_UNSIGNED_INT_IMAGE_BUFFER;
using gles::GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
using gles::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY;
using gles::GL_IMAGE_BINDING_FORMAT;
using gles::GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
using gles::GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
using gles::GL_MAX_VERTEX_IMAGE_UNIFORMS;
using gles::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS;
using gles::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS;
using gles::GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
using gles::GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
using gles::GL_MAX_COMBINED_IMAGE_UNIFORMS;
using gles::GL_SHADER_STORAGE_BUFFER_BINDING;
using gles::GL_SHADER_STORAGE_BUFFER_START;
using gles::GL_SHADER_STORAGE_BUFFER_SIZE;
using gles::GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS;
using gles::GL_MAX_SHADER_STORAGE_BLOCK_SIZE;
using gles::GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT;
using gles::GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS;
using gles::GL_DISPATCH_INDIRECT_BUFFER_BINDING;
using gles::GL_TEXTURE_BINDING_2D_MULTISAMPLE;
using gles::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY;
using gles::GL_TEXTURE_SAMPLES;
using gles::GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
using gles::GL_SAMPLER_2D_MULTISAMPLE;
using gles::GL_INT_SAMPLER_2D_MULTISAMPLE;
using gles::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
using gles::GL_SAMPLER_2D_MULTISAMPLE_ARRAY;
using gles::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
using gles::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
using gles::GL_MAX_COLOR_TEXTURE_SAMPLES;
using gles::GL_MAX_DEPTH_TEXTURE_SAMPLES;
using gles::GL_MAX_INTEGER_SAMPLES;
using gles::GL_MAX_SERVER_WAIT_TIMEOUT;
using gles::GL_SYNC_FENCE;
using gles::GL_UNSIGNALED;
using gles::GL_SIGNALED;
using gles::GL_MAX_VERTEX_OUTPUT_COMPONENTS;
using gles::GL_MAX_GEOMETRY_INPUT_COMPONENTS;
using gles::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
using gles::GL_MAX_FRAGMENT_INPUT_COMPONENTS;
using gles::GL_TEXTURE_IMMUTABLE_FORMAT;
using gles::GL_MAX_DEBUG_MESSAGE_LENGTH;
using gles::GL_MAX_DEBUG_LOGGED_MESSAGES;
using gles::GL_DEBUG_LOGGED_MESSAGES;
using gles::GL_TEXTURE_BUFFER_OFFSET;
using gles::GL_TEXTURE_BUFFER_SIZE;
using gles::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT;
using gles::GL_MAX_COMPUTE_UNIFORM_BLOCKS;
using gles::GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS;
using gles::GL_MAX_COMPUTE_IMAGE_UNIFORMS;
using gles::GL_MAX_COMPUTE_WORK_GROUP_COUNT;
using gles::GL_MAX_COMPUTE_WORK_GROUP_SIZE;
using gles::GL_MULTIPLY;
using gles::GL_SCREEN;
using gles::GL_OVERLAY;
using gles::GL_DARKEN;
using gles::GL_LIGHTEN;
using gles::GL_COLORDODGE;
using gles::GL_COLORBURN;
using gles::GL_HARDLIGHT;
using gles::GL_SOFTLIGHT;
using gles::GL_DIFFERENCE;
using gles::GL_EXCLUSION;
using gles::GL_HSL_HUE;
using gles::GL_HSL_SATURATION;
using gles::GL_HSL_COLOR;
using gles::GL_HSL_LUMINOSITY;
using gles::GL_PRIMITIVE_BOUNDING_BOX;
using gles::GL_ATOMIC_COUNTER_BUFFER_START;
using gles::GL_ATOMIC_COUNTER_BUFFER_SIZE;
using gles::GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_VERTEX_ATOMIC_COUNTERS;
using gles::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
using gles::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
using gles::GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
using gles::GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
using gles::GL_MAX_COMBINED_ATOMIC_COUNTERS;
using gles::GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
using gles::GL_UNSIGNED_INT_ATOMIC_COUNTER;
using gles::GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;
using gles::GL_DEBUG_OUTPUT;
using gles::GL_IS_PER_PATCH;
using gles::GL_NAME_LENGTH;
using gles::GL_TYPE;
using gles::GL_ARRAY_SIZE;
using gles::GL_OFFSET;
using gles::GL_BLOCK_INDEX;
using gles::GL_ARRAY_STRIDE;
using gles::GL_MATRIX_STRIDE;
using gles::GL_IS_ROW_MAJOR;
using gles::GL_ATOMIC_COUNTER_BUFFER_INDEX;
using gles::GL_BUFFER_BINDING;
using gles::GL_BUFFER_DATA_SIZE;
using gles::GL_NUM_ACTIVE_VARIABLES;
using gles::GL_ACTIVE_VARIABLES;
using gles::GL_REFERENCED_BY_VERTEX_SHADER;
using gles::GL_REFERENCED_BY_TESS_CONTROL_SHADER;
using gles::GL_REFERENCED_BY_TESS_EVALUATION_SHADER;
using gles::GL_REFERENCED_BY_GEOMETRY_SHADER;
using gles::GL_REFERENCED_BY_FRAGMENT_SHADER;
using gles::GL_REFERENCED_BY_COMPUTE_SHADER;
using gles::GL_TOP_LEVEL_ARRAY_SIZE;
using gles::GL_TOP_LEVEL_ARRAY_STRIDE;
using gles::GL_LOCATION;
using gles::GL_MAX_FRAMEBUFFER_WIDTH;
using gles::GL_MAX_FRAMEBUFFER_HEIGHT;
using gles::GL_MAX_FRAMEBUFFER_LAYERS;
using gles::GL_MAX_FRAMEBUFFER_SAMPLES;
using gles::GL_MULTISAMPLE_LINE_WIDTH_RANGE;
using gles::GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY;
using gles::GL_COMPRESSED_RGBA_ASTC_4x4;
using gles::GL_COMPRESSED_RGBA_ASTC_5x4;
using gles::GL_COMPRESSED_RGBA_ASTC_5x5;
using gles::GL_COMPRESSED_RGBA_ASTC_6x5;
using gles::GL_COMPRESSED_RGBA_ASTC_6x6;
using gles::GL_COMPRESSED_RGBA_ASTC_8x5;
using gles::GL_COMPRESSED_RGBA_ASTC_8x6;
using gles::GL_COMPRESSED_RGBA_ASTC_8x8;
using gles::GL_COMPRESSED_RGBA_ASTC_10x5;
using gles::GL_COMPRESSED_RGBA_ASTC_10x6;
using gles::GL_COMPRESSED_RGBA_ASTC_10x8;
using gles::GL_COMPRESSED_RGBA_ASTC_10x10;
using gles::GL_COMPRESSED_RGBA_ASTC_12x10;
using gles::GL_COMPRESSED_RGBA_ASTC_12x12;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12;



} // namespace gles32
