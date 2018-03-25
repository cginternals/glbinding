
#pragma once


#include <glscbinding/noglsc.h>

#include <glscbinding/glscbinding_features.h>


namespace glsc
{


enum class GLenum : unsigned int
{
    // AlphaFunction

    GL_NEVER                                     = 0x0200, // decimal value: 512
    GL_LESS                                      = 0x0201, // decimal value: 513
    GL_EQUAL                                     = 0x0202, // decimal value: 514
    GL_LEQUAL                                    = 0x0203, // decimal value: 515
    GL_GREATER                                   = 0x0204, // decimal value: 516
    GL_NOTEQUAL                                  = 0x0205, // decimal value: 517
    GL_GEQUAL                                    = 0x0206, // decimal value: 518
    GL_ALWAYS                                    = 0x0207, // decimal value: 519

    // AttributeType

    GL_SAMPLER_2D                                = 0x8B5E, // decimal value: 35678

    // BlendEquationModeEXT

    GL_FUNC_ADD                                  = 0x8006, // decimal value: 32774
    GL_FUNC_SUBTRACT                             = 0x800A, // decimal value: 32778
    GL_FUNC_REVERSE_SUBTRACT                     = 0x800B, // decimal value: 32779

    // BlendingFactor

    GL_ZERO                                      = 0,
    GL_SRC_COLOR                                 = 0x0300, // decimal value: 768
    GL_ONE_MINUS_SRC_COLOR                       = 0x0301, // decimal value: 769
    GL_SRC_ALPHA                                 = 0x0302, // decimal value: 770
    GL_ONE_MINUS_SRC_ALPHA                       = 0x0303, // decimal value: 771
    GL_DST_ALPHA                                 = 0x0304, // decimal value: 772
    GL_ONE_MINUS_DST_ALPHA                       = 0x0305, // decimal value: 773
    GL_DST_COLOR                                 = 0x0306, // decimal value: 774
    GL_ONE_MINUS_DST_COLOR                       = 0x0307, // decimal value: 775
    GL_SRC_ALPHA_SATURATE                        = 0x0308, // decimal value: 776
    GL_CONSTANT_COLOR                            = 0x8001, // decimal value: 32769
    GL_ONE_MINUS_CONSTANT_COLOR                  = 0x8002, // decimal value: 32770
    GL_CONSTANT_ALPHA                            = 0x8003, // decimal value: 32771
    GL_ONE_MINUS_CONSTANT_ALPHA                  = 0x8004, // decimal value: 32772
    GL_ONE                                       = 1,

    // BlitFramebufferFilter

    GL_NEAREST                                   = 0x2600, // decimal value: 9728
    GL_LINEAR                                    = 0x2601, // decimal value: 9729

    // BufferStorageTarget

    GL_ARRAY_BUFFER                              = 0x8892, // decimal value: 34962
    GL_ELEMENT_ARRAY_BUFFER                      = 0x8893, // decimal value: 34963

    // BufferTargetARB

//  GL_ARRAY_BUFFER                              = 0x8892, // reuse BufferStorageTarget, decimal value: 34962
//  GL_ELEMENT_ARRAY_BUFFER                      = 0x8893, // reuse BufferStorageTarget, decimal value: 34963

    // BufferUsageARB

    GL_STREAM_DRAW                               = 0x88E0, // decimal value: 35040
    GL_STATIC_DRAW                               = 0x88E4, // decimal value: 35044
    GL_DYNAMIC_DRAW                              = 0x88E8, // decimal value: 35048

    // CheckFramebufferStatusTarget

    GL_FRAMEBUFFER                               = 0x8D40, // decimal value: 36160

    // ColorBuffer

    GL_NONE                                      = 0,
    GL_FRONT                                     = 0x0404, // decimal value: 1028
    GL_BACK                                      = 0x0405, // decimal value: 1029
    GL_FRONT_AND_BACK                            = 0x0408, // decimal value: 1032
    GL_COLOR_ATTACHMENT0                         = 0x8CE0, // decimal value: 36064

    // ColorMaterialFace

//  GL_FRONT                                     = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                      = 0x0405, // reuse ColorBuffer, decimal value: 1029
//  GL_FRONT_AND_BACK                            = 0x0408, // reuse ColorBuffer, decimal value: 1032

    // ColorPointerType

    GL_BYTE                                      = 0x1400, // decimal value: 5120
    GL_UNSIGNED_BYTE                             = 0x1401, // decimal value: 5121
    GL_SHORT                                     = 0x1402, // decimal value: 5122
    GL_UNSIGNED_SHORT                            = 0x1403, // decimal value: 5123
    GL_INT                                       = 0x1404, // decimal value: 5124
    GL_UNSIGNED_INT                              = 0x1405, // decimal value: 5125
    GL_FLOAT                                     = 0x1406, // decimal value: 5126

    // CopyBufferSubDataTarget

//  GL_ARRAY_BUFFER                              = 0x8892, // reuse BufferStorageTarget, decimal value: 34962
//  GL_ELEMENT_ARRAY_BUFFER                      = 0x8893, // reuse BufferStorageTarget, decimal value: 34963

    // CullFaceMode

//  GL_FRONT                                     = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                      = 0x0405, // reuse ColorBuffer, decimal value: 1029
//  GL_FRONT_AND_BACK                            = 0x0408, // reuse ColorBuffer, decimal value: 1032

    // DebugSeverity

    GL_DONT_CARE                                 = 0x1100, // decimal value: 4352

    // DebugSource

//  GL_DONT_CARE                                 = 0x1100, // reuse DebugSeverity, decimal value: 4352

    // DebugType

//  GL_DONT_CARE                                 = 0x1100, // reuse DebugSeverity, decimal value: 4352

    // DepthFunction

//  GL_NEVER                                     = 0x0200, // reuse AlphaFunction, decimal value: 512
//  GL_LESS                                      = 0x0201, // reuse AlphaFunction, decimal value: 513
//  GL_EQUAL                                     = 0x0202, // reuse AlphaFunction, decimal value: 514
//  GL_LEQUAL                                    = 0x0203, // reuse AlphaFunction, decimal value: 515
//  GL_GREATER                                   = 0x0204, // reuse AlphaFunction, decimal value: 516
//  GL_NOTEQUAL                                  = 0x0205, // reuse AlphaFunction, decimal value: 517
//  GL_GEQUAL                                    = 0x0206, // reuse AlphaFunction, decimal value: 518
//  GL_ALWAYS                                    = 0x0207, // reuse AlphaFunction, decimal value: 519

    // DrawBufferMode

//  GL_NONE                                      = 0, // reuse ColorBuffer
//  GL_FRONT                                     = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                      = 0x0405, // reuse ColorBuffer, decimal value: 1029
//  GL_FRONT_AND_BACK                            = 0x0408, // reuse ColorBuffer, decimal value: 1032

    // DrawElementsType

//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType, decimal value: 5121
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType, decimal value: 5125

    // EnableCap

    GL_CULL_FACE                                 = 0x0B44, // decimal value: 2884
    GL_DEPTH_TEST                                = 0x0B71, // decimal value: 2929
    GL_STENCIL_TEST                              = 0x0B90, // decimal value: 2960
    GL_DITHER                                    = 0x0BD0, // decimal value: 3024
    GL_BLEND                                     = 0x0BE2, // decimal value: 3042
    GL_SCISSOR_TEST                              = 0x0C11, // decimal value: 3089
    GL_TEXTURE_2D                                = 0x0DE1, // decimal value: 3553
    GL_POLYGON_OFFSET_FILL                       = 0x8037, // decimal value: 32823

    // ErrorCode

    GL_NO_ERROR                                  = 0,
    GL_INVALID_ENUM                              = 0x0500, // decimal value: 1280
    GL_INVALID_VALUE                             = 0x0501, // decimal value: 1281
    GL_INVALID_OPERATION                         = 0x0502, // decimal value: 1282
    GL_OUT_OF_MEMORY                             = 0x0505, // decimal value: 1285
    GL_INVALID_FRAMEBUFFER_OPERATION             = 0x0506, // decimal value: 1286

    // FogCoordinatePointerType

//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // FogMode

//  GL_LINEAR                                    = 0x2601, // reuse BlitFramebufferFilter, decimal value: 9729

    // FogPointerTypeEXT

//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // FogPointerTypeIBM

//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // FramebufferAttachment

//  GL_COLOR_ATTACHMENT0                         = 0x8CE0, // reuse ColorBuffer, decimal value: 36064
    GL_DEPTH_ATTACHMENT                          = 0x8D00, // decimal value: 36096

    // FramebufferAttachmentParameterName

    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME        = 0x8CD1, // decimal value: 36049
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL      = 0x8CD2, // decimal value: 36050

    // FramebufferStatus

    GL_FRAMEBUFFER_UNDEFINED                     = 0x8219, // decimal value: 33305
    GL_FRAMEBUFFER_COMPLETE                      = 0x8CD5, // decimal value: 36053
    GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT         = 0x8CD6, // decimal value: 36054
    GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7, // decimal value: 36055
    GL_FRAMEBUFFER_UNSUPPORTED                   = 0x8CDD, // decimal value: 36061

    // FramebufferTarget

//  GL_FRAMEBUFFER                               = 0x8D40, // reuse CheckFramebufferStatusTarget, decimal value: 36160

    // FrontFaceDirection

    GL_CW                                        = 0x0900, // decimal value: 2304
    GL_CCW                                       = 0x0901, // decimal value: 2305

    // GetFramebufferParameter

    GL_SAMPLE_BUFFERS                            = 0x80A8, // decimal value: 32936
    GL_SAMPLES                                   = 0x80A9, // decimal value: 32937
    GL_IMPLEMENTATION_COLOR_READ_TYPE            = 0x8B9A, // decimal value: 35738
    GL_IMPLEMENTATION_COLOR_READ_FORMAT          = 0x8B9B, // decimal value: 35739

    // GetPName

    GL_LINE_WIDTH                                = 0x0B21, // decimal value: 2849
//  GL_CULL_FACE                                 = 0x0B44, // reuse EnableCap, decimal value: 2884
    GL_CULL_FACE_MODE                            = 0x0B45, // decimal value: 2885
    GL_FRONT_FACE                                = 0x0B46, // decimal value: 2886
    GL_DEPTH_RANGE                               = 0x0B70, // decimal value: 2928
//  GL_DEPTH_TEST                                = 0x0B71, // reuse EnableCap, decimal value: 2929
    GL_DEPTH_WRITEMASK                           = 0x0B72, // decimal value: 2930
    GL_DEPTH_CLEAR_VALUE                         = 0x0B73, // decimal value: 2931
    GL_DEPTH_FUNC                                = 0x0B74, // decimal value: 2932
//  GL_STENCIL_TEST                              = 0x0B90, // reuse EnableCap, decimal value: 2960
    GL_STENCIL_CLEAR_VALUE                       = 0x0B91, // decimal value: 2961
    GL_STENCIL_FUNC                              = 0x0B92, // decimal value: 2962
    GL_STENCIL_VALUE_MASK                        = 0x0B93, // decimal value: 2963
    GL_STENCIL_FAIL                              = 0x0B94, // decimal value: 2964
    GL_STENCIL_PASS_DEPTH_FAIL                   = 0x0B95, // decimal value: 2965
    GL_STENCIL_PASS_DEPTH_PASS                   = 0x0B96, // decimal value: 2966
    GL_STENCIL_REF                               = 0x0B97, // decimal value: 2967
    GL_STENCIL_WRITEMASK                         = 0x0B98, // decimal value: 2968
    GL_VIEWPORT                                  = 0x0BA2, // decimal value: 2978
//  GL_DITHER                                    = 0x0BD0, // reuse EnableCap, decimal value: 3024
//  GL_BLEND                                     = 0x0BE2, // reuse EnableCap, decimal value: 3042
    GL_SCISSOR_BOX                               = 0x0C10, // decimal value: 3088
//  GL_SCISSOR_TEST                              = 0x0C11, // reuse EnableCap, decimal value: 3089
    GL_COLOR_CLEAR_VALUE                         = 0x0C22, // decimal value: 3106
    GL_COLOR_WRITEMASK                           = 0x0C23, // decimal value: 3107
    GL_UNPACK_ALIGNMENT                          = 0x0CF5, // decimal value: 3317
    GL_PACK_ALIGNMENT                            = 0x0D05, // decimal value: 3333
    GL_MAX_TEXTURE_SIZE                          = 0x0D33, // decimal value: 3379
    GL_MAX_VIEWPORT_DIMS                         = 0x0D3A, // decimal value: 3386
    GL_SUBPIXEL_BITS                             = 0x0D50, // decimal value: 3408
    GL_RED_BITS                                  = 0x0D52, // decimal value: 3410
    GL_GREEN_BITS                                = 0x0D53, // decimal value: 3411
    GL_BLUE_BITS                                 = 0x0D54, // decimal value: 3412
    GL_ALPHA_BITS                                = 0x0D55, // decimal value: 3413
    GL_DEPTH_BITS                                = 0x0D56, // decimal value: 3414
    GL_STENCIL_BITS                              = 0x0D57, // decimal value: 3415
//  GL_TEXTURE_2D                                = 0x0DE1, // reuse EnableCap, decimal value: 3553
    GL_POLYGON_OFFSET_UNITS                      = 0x2A00, // decimal value: 10752
//  GL_POLYGON_OFFSET_FILL                       = 0x8037, // reuse EnableCap, decimal value: 32823
    GL_POLYGON_OFFSET_FACTOR                     = 0x8038, // decimal value: 32824
    GL_TEXTURE_BINDING_2D                        = 0x8069, // decimal value: 32873
    GL_ALIASED_POINT_SIZE_RANGE                  = 0x846D, // decimal value: 33901
    GL_ALIASED_LINE_WIDTH_RANGE                  = 0x846E, // decimal value: 33902

    // GetTextureParameter

    GL_TEXTURE_MAG_FILTER                        = 0x2800, // decimal value: 10240
    GL_TEXTURE_MIN_FILTER                        = 0x2801, // decimal value: 10241
    GL_TEXTURE_WRAP_S                            = 0x2802, // decimal value: 10242
    GL_TEXTURE_WRAP_T                            = 0x2803, // decimal value: 10243

    // GraphicsResetStatus

//  GL_NO_ERROR                                  = 0, // reuse ErrorCode
    GL_GUILTY_CONTEXT_RESET                      = 0x8253, // decimal value: 33363
    GL_INNOCENT_CONTEXT_RESET                    = 0x8254, // decimal value: 33364
    GL_UNKNOWN_CONTEXT_RESET                     = 0x8255, // decimal value: 33365

    // HintMode

//  GL_DONT_CARE                                 = 0x1100, // reuse DebugSeverity, decimal value: 4352
    GL_FASTEST                                   = 0x1101, // decimal value: 4353
    GL_NICEST                                    = 0x1102, // decimal value: 4354

    // HintTarget

    GL_GENERATE_MIPMAP_HINT                      = 0x8192, // decimal value: 33170
    GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES       = 0x8B8B, // decimal value: 35723

    // IndexPointerType

//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_INT                                       = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // InternalFormat

    GL_RED                                       = 0x1903, // decimal value: 6403
    GL_RGB                                       = 0x1907, // decimal value: 6407
    GL_RGBA                                      = 0x1908, // decimal value: 6408
    GL_RGB8                                      = 0x8051, // decimal value: 32849
    GL_RGB8_OES                                  = 0x8051, // decimal value: 32849
    GL_RGBA4                                     = 0x8056, // decimal value: 32854
    GL_RGB5_A1                                   = 0x8057, // decimal value: 32855
    GL_RGBA8                                     = 0x8058, // decimal value: 32856
    GL_RGBA8_OES                                 = 0x8058, // decimal value: 32856
    GL_DEPTH_COMPONENT16                         = 0x81A5, // decimal value: 33189
    GL_DEPTH_COMPONENT24_OES                     = 0x81A6, // decimal value: 33190
    GL_DEPTH_COMPONENT32_OES                     = 0x81A7, // decimal value: 33191
    GL_RG                                        = 0x8227, // decimal value: 33319
    GL_R8                                        = 0x8229, // decimal value: 33321
    GL_RG8                                       = 0x822B, // decimal value: 33323
    GL_COMPRESSED_RGB_S3TC_DXT1_EXT              = 0x83F0, // decimal value: 33776
    GL_COMPRESSED_RGBA_S3TC_DXT1_EXT             = 0x83F1, // decimal value: 33777
    GL_COMPRESSED_RGBA_S3TC_DXT3_EXT             = 0x83F2, // decimal value: 33778
    GL_COMPRESSED_RGBA_S3TC_DXT5_EXT             = 0x83F3, // decimal value: 33779

    // InternalFormatPName

//  GL_SAMPLES                                   = 0x80A9, // reuse GetFramebufferParameter, decimal value: 32937

    // LightEnvModeSGIX

    GL_REPLACE                                   = 0x1E01, // decimal value: 7681

    // ListNameType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType, decimal value: 5120
//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType, decimal value: 5121
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_INT                                       = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType, decimal value: 5125
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // LogicOp

    GL_INVERT                                    = 0x150A, // decimal value: 5386

    // MaterialFace

//  GL_FRONT                                     = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                      = 0x0405, // reuse ColorBuffer, decimal value: 1029
//  GL_FRONT_AND_BACK                            = 0x0408, // reuse ColorBuffer, decimal value: 1032

    // MatrixMode

    GL_TEXTURE                                   = 0x1702, // decimal value: 5890

    // NormalPointerType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType, decimal value: 5120
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_INT                                       = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // ObjectIdentifier

//  GL_TEXTURE                                   = 0x1702, // reuse MatrixMode, decimal value: 5890
//  GL_FRAMEBUFFER                               = 0x8D40, // reuse CheckFramebufferStatusTarget, decimal value: 36160
    GL_RENDERBUFFER                              = 0x8D41, // decimal value: 36161

    // PathFillMode

//  GL_INVERT                                    = 0x150A, // reuse LogicOp, decimal value: 5386

    // PathFontStyle

//  GL_NONE                                      = 0, // reuse ColorBuffer

    // PathGenMode

//  GL_NONE                                      = 0, // reuse ColorBuffer

    // PathTransformType

//  GL_NONE                                      = 0, // reuse ColorBuffer

    // PixelFormat

//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType, decimal value: 5125
//  GL_RED                                       = 0x1903, // reuse InternalFormat, decimal value: 6403
//  GL_RGB                                       = 0x1907, // reuse InternalFormat, decimal value: 6407
//  GL_RGBA                                      = 0x1908, // reuse InternalFormat, decimal value: 6408

    // PixelStoreParameter

//  GL_UNPACK_ALIGNMENT                          = 0x0CF5, // reuse GetPName, decimal value: 3317
//  GL_PACK_ALIGNMENT                            = 0x0D05, // reuse GetPName, decimal value: 3333

    // PixelTexGenMode

//  GL_NONE                                      = 0, // reuse ColorBuffer
//  GL_RGB                                       = 0x1907, // reuse InternalFormat, decimal value: 6407
//  GL_RGBA                                      = 0x1908, // reuse InternalFormat, decimal value: 6408

    // PixelType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType, decimal value: 5120
//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType, decimal value: 5121
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_INT                                       = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType, decimal value: 5125
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126
    GL_UNSIGNED_SHORT_4_4_4_4                    = 0x8033, // decimal value: 32819
    GL_UNSIGNED_SHORT_5_5_5_1                    = 0x8034, // decimal value: 32820

    // PrecisionType

    GL_LOW_FLOAT                                 = 0x8DF0, // decimal value: 36336
    GL_MEDIUM_FLOAT                              = 0x8DF1, // decimal value: 36337
    GL_HIGH_FLOAT                                = 0x8DF2, // decimal value: 36338
    GL_LOW_INT                                   = 0x8DF3, // decimal value: 36339
    GL_MEDIUM_INT                                = 0x8DF4, // decimal value: 36340
    GL_HIGH_INT                                  = 0x8DF5, // decimal value: 36341

    // PrimitiveType

    GL_POINTS                                    = 0x0000,
    GL_LINES                                     = 0x0001, // decimal value: 1
    GL_LINE_LOOP                                 = 0x0002, // decimal value: 2
    GL_LINE_STRIP                                = 0x0003, // decimal value: 3
    GL_TRIANGLSC                                 = 0x0004, // decimal value: 4
    GL_TRIANGLE_STRIP                            = 0x0005, // decimal value: 5
    GL_TRIANGLE_FAN                              = 0x0006, // decimal value: 6

    // ProgramPropertyARB

    GL_LINK_STATUS                               = 0x8B82, // decimal value: 35714

    // ReadBufferMode

//  GL_FRONT                                     = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                      = 0x0405, // reuse ColorBuffer, decimal value: 1029

    // RenderbufferParameterName

    GL_RENDERBUFFER_WIDTH                        = 0x8D42, // decimal value: 36162
    GL_RENDERBUFFER_HEIGHT                       = 0x8D43, // decimal value: 36163
    GL_RENDERBUFFER_INTERNAL_FORMAT              = 0x8D44, // decimal value: 36164
    GL_RENDERBUFFER_RED_SIZE                     = 0x8D50, // decimal value: 36176
    GL_RENDERBUFFER_GREEN_SIZE                   = 0x8D51, // decimal value: 36177
    GL_RENDERBUFFER_BLUE_SIZE                    = 0x8D52, // decimal value: 36178
    GL_RENDERBUFFER_ALPHA_SIZE                   = 0x8D53, // decimal value: 36179
    GL_RENDERBUFFER_DEPTH_SIZE                   = 0x8D54, // decimal value: 36180
    GL_RENDERBUFFER_STENCIL_SIZE                 = 0x8D55, // decimal value: 36181

    // RenderbufferTarget

//  GL_RENDERBUFFER                              = 0x8D41, // reuse ObjectIdentifier, decimal value: 36161

    // SamplerParameterName

//  GL_TEXTURE_MAG_FILTER                        = 0x2800, // reuse GetTextureParameter, decimal value: 10240
//  GL_TEXTURE_MIN_FILTER                        = 0x2801, // reuse GetTextureParameter, decimal value: 10241
//  GL_TEXTURE_WRAP_S                            = 0x2802, // reuse GetTextureParameter, decimal value: 10242
//  GL_TEXTURE_WRAP_T                            = 0x2803, // reuse GetTextureParameter, decimal value: 10243

    // StencilFaceDirection

//  GL_FRONT                                     = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                      = 0x0405, // reuse ColorBuffer, decimal value: 1029
//  GL_FRONT_AND_BACK                            = 0x0408, // reuse ColorBuffer, decimal value: 1032

    // StencilFunction

//  GL_NEVER                                     = 0x0200, // reuse AlphaFunction, decimal value: 512
//  GL_LESS                                      = 0x0201, // reuse AlphaFunction, decimal value: 513
//  GL_EQUAL                                     = 0x0202, // reuse AlphaFunction, decimal value: 514
//  GL_LEQUAL                                    = 0x0203, // reuse AlphaFunction, decimal value: 515
//  GL_GREATER                                   = 0x0204, // reuse AlphaFunction, decimal value: 516
//  GL_NOTEQUAL                                  = 0x0205, // reuse AlphaFunction, decimal value: 517
//  GL_GEQUAL                                    = 0x0206, // reuse AlphaFunction, decimal value: 518
//  GL_ALWAYS                                    = 0x0207, // reuse AlphaFunction, decimal value: 519

    // StencilOp

//  GL_ZERO                                      = 0, // reuse BlendingFactor
//  GL_INVERT                                    = 0x150A, // reuse LogicOp, decimal value: 5386
    GL_KEEP                                      = 0x1E00, // decimal value: 7680
//  GL_REPLACE                                   = 0x1E01, // reuse LightEnvModeSGIX, decimal value: 7681
    GL_INCR                                      = 0x1E02, // decimal value: 7682
    GL_DECR                                      = 0x1E03, // decimal value: 7683

    // StringName

    GL_VENDOR                                    = 0x1F00, // decimal value: 7936
    GL_RENDERER                                  = 0x1F01, // decimal value: 7937
    GL_VERSION                                   = 0x1F02, // decimal value: 7938
    GL_EXTENSIONS                                = 0x1F03, // decimal value: 7939
    GL_SHADING_LANGUAGE_VERSION                  = 0x8B8C, // decimal value: 35724

    // TexCoordPointerType

//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_INT                                       = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // TextureEnvMode

//  GL_BLEND                                     = 0x0BE2, // reuse EnableCap, decimal value: 3042

    // TextureMagFilter

//  GL_NEAREST                                   = 0x2600, // reuse BlitFramebufferFilter, decimal value: 9728
//  GL_LINEAR                                    = 0x2601, // reuse BlitFramebufferFilter, decimal value: 9729

    // TextureMinFilter

//  GL_NEAREST                                   = 0x2600, // reuse BlitFramebufferFilter, decimal value: 9728
//  GL_LINEAR                                    = 0x2601, // reuse BlitFramebufferFilter, decimal value: 9729
    GL_NEAREST_MIPMAP_NEAREST                    = 0x2700, // decimal value: 9984
    GL_LINEAR_MIPMAP_NEAREST                     = 0x2701, // decimal value: 9985
    GL_NEAREST_MIPMAP_LINEAR                     = 0x2702, // decimal value: 9986
    GL_LINEAR_MIPMAP_LINEAR                      = 0x2703, // decimal value: 9987

    // TextureParameterName

//  GL_TEXTURE_MAG_FILTER                        = 0x2800, // reuse GetTextureParameter, decimal value: 10240
//  GL_TEXTURE_MIN_FILTER                        = 0x2801, // reuse GetTextureParameter, decimal value: 10241
//  GL_TEXTURE_WRAP_S                            = 0x2802, // reuse GetTextureParameter, decimal value: 10242
//  GL_TEXTURE_WRAP_T                            = 0x2803, // reuse GetTextureParameter, decimal value: 10243

    // TextureTarget

//  GL_TEXTURE_2D                                = 0x0DE1, // reuse EnableCap, decimal value: 3553

    // TextureUnit

    GL_TEXTURE0                                  = 0x84C0, // decimal value: 33984
    GL_TEXTURE1                                  = 0x84C1, // decimal value: 33985
    GL_TEXTURE2                                  = 0x84C2, // decimal value: 33986
    GL_TEXTURE3                                  = 0x84C3, // decimal value: 33987
    GL_TEXTURE4                                  = 0x84C4, // decimal value: 33988
    GL_TEXTURE5                                  = 0x84C5, // decimal value: 33989
    GL_TEXTURE6                                  = 0x84C6, // decimal value: 33990
    GL_TEXTURE7                                  = 0x84C7, // decimal value: 33991
    GL_TEXTURE8                                  = 0x84C8, // decimal value: 33992
    GL_TEXTURE9                                  = 0x84C9, // decimal value: 33993
    GL_TEXTURE10                                 = 0x84CA, // decimal value: 33994
    GL_TEXTURE11                                 = 0x84CB, // decimal value: 33995
    GL_TEXTURE12                                 = 0x84CC, // decimal value: 33996
    GL_TEXTURE13                                 = 0x84CD, // decimal value: 33997
    GL_TEXTURE14                                 = 0x84CE, // decimal value: 33998
    GL_TEXTURE15                                 = 0x84CF, // decimal value: 33999
    GL_TEXTURE16                                 = 0x84D0, // decimal value: 34000
    GL_TEXTURE17                                 = 0x84D1, // decimal value: 34001
    GL_TEXTURE18                                 = 0x84D2, // decimal value: 34002
    GL_TEXTURE19                                 = 0x84D3, // decimal value: 34003
    GL_TEXTURE20                                 = 0x84D4, // decimal value: 34004
    GL_TEXTURE21                                 = 0x84D5, // decimal value: 34005
    GL_TEXTURE22                                 = 0x84D6, // decimal value: 34006
    GL_TEXTURE23                                 = 0x84D7, // decimal value: 34007
    GL_TEXTURE24                                 = 0x84D8, // decimal value: 34008
    GL_TEXTURE25                                 = 0x84D9, // decimal value: 34009
    GL_TEXTURE26                                 = 0x84DA, // decimal value: 34010
    GL_TEXTURE27                                 = 0x84DB, // decimal value: 34011
    GL_TEXTURE28                                 = 0x84DC, // decimal value: 34012
    GL_TEXTURE29                                 = 0x84DD, // decimal value: 34013
    GL_TEXTURE30                                 = 0x84DE, // decimal value: 34014
    GL_TEXTURE31                                 = 0x84DF, // decimal value: 34015

    // TextureWrapMode

    GL_REPEAT                                    = 0x2901, // decimal value: 10497
    GL_CLAMP_TO_EDGE                             = 0x812F, // decimal value: 33071

    // VertexArrayPName

    GL_VERTEX_ATTRIB_ARRAY_ENABLED               = 0x8622, // decimal value: 34338
    GL_VERTEX_ATTRIB_ARRAY_SIZE                  = 0x8623, // decimal value: 34339
    GL_VERTEX_ATTRIB_ARRAY_STRIDE                = 0x8624, // decimal value: 34340
    GL_VERTEX_ATTRIB_ARRAY_TYPE                  = 0x8625, // decimal value: 34341
    GL_VERTEX_ATTRIB_ARRAY_NORMALIZED            = 0x886A, // decimal value: 34922

    // VertexAttribEnum

//  GL_VERTEX_ATTRIB_ARRAY_ENABLED               = 0x8622, // reuse VertexArrayPName, decimal value: 34338
//  GL_VERTEX_ATTRIB_ARRAY_SIZE                  = 0x8623, // reuse VertexArrayPName, decimal value: 34339
//  GL_VERTEX_ATTRIB_ARRAY_STRIDE                = 0x8624, // reuse VertexArrayPName, decimal value: 34340
//  GL_VERTEX_ATTRIB_ARRAY_TYPE                  = 0x8625, // reuse VertexArrayPName, decimal value: 34341
    GL_CURRENT_VERTEX_ATTRIB                     = 0x8626, // decimal value: 34342
//  GL_VERTEX_ATTRIB_ARRAY_NORMALIZED            = 0x886A, // reuse VertexArrayPName, decimal value: 34922
    GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING        = 0x889F, // decimal value: 34975

    // VertexAttribPointerType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType, decimal value: 5120
//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType, decimal value: 5121
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_INT                                       = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType, decimal value: 5125
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // VertexAttribType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType, decimal value: 5120
//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType, decimal value: 5121
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_INT                                       = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType, decimal value: 5125
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // VertexBufferObjectParameter

    GL_BUFFER_SIZE                               = 0x8764, // decimal value: 34660
    GL_BUFFER_USAGE                              = 0x8765, // decimal value: 34661

    // VertexBufferObjectUsage

//  GL_STREAM_DRAW                               = 0x88E0, // reuse BufferUsageARB, decimal value: 35040
//  GL_STATIC_DRAW                               = 0x88E4, // reuse BufferUsageARB, decimal value: 35044
//  GL_DYNAMIC_DRAW                              = 0x88E8, // reuse BufferUsageARB, decimal value: 35048

    // VertexPointerType

//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_INT                                       = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // __UNGROUPED__

    GL_CONTEXT_LOST                              = 0x0507, // decimal value: 1287
    GL_BLEND_COLOR                               = 0x8005, // decimal value: 32773
    GL_BLEND_EQUATION                            = 0x8009, // decimal value: 32777
    GL_BLEND_EQUATION_RGB                        = 0x8009, // decimal value: 32777
    GL_SAMPLE_ALPHA_TO_COVERAGE                  = 0x809E, // decimal value: 32926
    GL_SAMPLE_COVERAGE                           = 0x80A0, // decimal value: 32928
    GL_SAMPLE_COVERAGE_VALUE                     = 0x80AA, // decimal value: 32938
    GL_SAMPLE_COVERAGE_INVERT                    = 0x80AB, // decimal value: 32939
    GL_BLEND_DST_RGB                             = 0x80C8, // decimal value: 32968
    GL_BLEND_SRC_RGB                             = 0x80C9, // decimal value: 32969
    GL_BLEND_DST_ALPHA                           = 0x80CA, // decimal value: 32970
    GL_BLEND_SRC_ALPHA                           = 0x80CB, // decimal value: 32971
    GL_LOSE_CONTEXT_ON_RESET                     = 0x8252, // decimal value: 33362
    GL_RESET_NOTIFICATION_STRATEGY               = 0x8256, // decimal value: 33366
    GL_UNSIGNED_SHORT_5_6_5                      = 0x8363, // decimal value: 33635
    GL_MIRRORED_REPEAT                           = 0x8370, // decimal value: 33648
    GL_ACTIVE_TEXTURE                            = 0x84E0, // decimal value: 34016
    GL_MAX_RENDERBUFFER_SIZE                     = 0x84E8, // decimal value: 34024
    GL_INCR_WRAP                                 = 0x8507, // decimal value: 34055
    GL_DECR_WRAP                                 = 0x8508, // decimal value: 34056
    GL_VERTEX_ATTRIB_ARRAY_POINTER               = 0x8645, // decimal value: 34373
    GL_NUM_COMPRESSED_TEXTURE_FORMATS            = 0x86A2, // decimal value: 34466
    GL_COMPRESSED_TEXTURE_FORMATS                = 0x86A3, // decimal value: 34467
    GL_NUM_PROGRAM_BINARY_FORMATS                = 0x87FE, // decimal value: 34814
    GL_PROGRAM_BINARY_FORMATS                    = 0x87FF, // decimal value: 34815
    GL_STENCIL_BACK_FUNC                         = 0x8800, // decimal value: 34816
    GL_STENCIL_BACK_FAIL                         = 0x8801, // decimal value: 34817
    GL_STENCIL_BACK_PASS_DEPTH_FAIL              = 0x8802, // decimal value: 34818
    GL_STENCIL_BACK_PASS_DEPTH_PASS              = 0x8803, // decimal value: 34819
    GL_BLEND_EQUATION_ALPHA                      = 0x883D, // decimal value: 34877
    GL_MAX_VERTEX_ATTRIBS                        = 0x8869, // decimal value: 34921
    GL_MAX_TEXTURE_IMAGE_UNITS                   = 0x8872, // decimal value: 34930
    GL_ARRAY_BUFFER_BINDING                      = 0x8894, // decimal value: 34964
    GL_ELEMENT_ARRAY_BUFFER_BINDING              = 0x8895, // decimal value: 34965
    GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS            = 0x8B4C, // decimal value: 35660
    GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS          = 0x8B4D, // decimal value: 35661
    GL_CURRENT_PROGRAM                           = 0x8B8D, // decimal value: 35725
    GL_STENCIL_BACK_REF                          = 0x8CA3, // decimal value: 36003
    GL_STENCIL_BACK_VALUE_MASK                   = 0x8CA4, // decimal value: 36004
    GL_STENCIL_BACK_WRITEMASK                    = 0x8CA5, // decimal value: 36005
    GL_FRAMEBUFFER_BINDING                       = 0x8CA6, // decimal value: 36006
    GL_RENDERBUFFER_BINDING                      = 0x8CA7, // decimal value: 36007
    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE        = 0x8CD0, // decimal value: 36048
    GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS         = 0x8CD9, // decimal value: 36057
    GL_STENCIL_ATTACHMENT                        = 0x8D20, // decimal value: 36128
    GL_STENCIL_INDEX8                            = 0x8D48, // decimal value: 36168
    GL_RGB565                                    = 0x8D62, // decimal value: 36194
    GL_MAX_VERTEX_UNIFORM_VECTORS                = 0x8DFB, // decimal value: 36347
    GL_MAX_VARYING_VECTORS                       = 0x8DFC, // decimal value: 36348
    GL_MAX_FRAGMENT_UNIFORM_VECTORS              = 0x8DFD, // decimal value: 36349
    GL_CONTEXT_ROBUST_ACCESS                     = 0x90F3, // decimal value: 37107
    GL_TEXTURE_IMMUTABLE_FORMAT                  = 0x912F, // decimal value: 37167

};


// import enums to namespace

// AlphaFunction

GLSCBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER;
GLSCBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS;
GLSCBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL;
GLSCBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL;
GLSCBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER;
GLSCBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL;
GLSCBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL;
GLSCBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS;

// AttributeType

GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D = GLenum::GL_SAMPLER_2D;

// BlendEquationModeEXT

GLSCBINDING_CONSTEXPR static const GLenum GL_FUNC_ADD = GLenum::GL_FUNC_ADD;
GLSCBINDING_CONSTEXPR static const GLenum GL_FUNC_SUBTRACT = GLenum::GL_FUNC_SUBTRACT;
GLSCBINDING_CONSTEXPR static const GLenum GL_FUNC_REVERSE_SUBTRACT = GLenum::GL_FUNC_REVERSE_SUBTRACT;

// BlendingFactor

GLSCBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO;
GLSCBINDING_CONSTEXPR static const GLenum GL_SRC_COLOR = GLenum::GL_SRC_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC_COLOR = GLenum::GL_ONE_MINUS_SRC_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_SRC_ALPHA = GLenum::GL_SRC_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC_ALPHA = GLenum::GL_ONE_MINUS_SRC_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_DST_ALPHA = GLenum::GL_DST_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_DST_ALPHA = GLenum::GL_ONE_MINUS_DST_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_DST_COLOR = GLenum::GL_DST_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_DST_COLOR = GLenum::GL_ONE_MINUS_DST_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_SRC_ALPHA_SATURATE = GLenum::GL_SRC_ALPHA_SATURATE;
GLSCBINDING_CONSTEXPR static const GLenum GL_CONSTANT_COLOR = GLenum::GL_CONSTANT_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_CONSTANT_COLOR = GLenum::GL_ONE_MINUS_CONSTANT_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_CONSTANT_ALPHA = GLenum::GL_CONSTANT_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_CONSTANT_ALPHA = GLenum::GL_ONE_MINUS_CONSTANT_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE = GLenum::GL_ONE;

// BlitFramebufferFilter

GLSCBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR;

// BufferStorageTarget

GLSCBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER;
GLSCBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER;

// BufferTargetARB

// GLSCBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// GLSCBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget

// BufferUsageARB

GLSCBINDING_CONSTEXPR static const GLenum GL_STREAM_DRAW = GLenum::GL_STREAM_DRAW;
GLSCBINDING_CONSTEXPR static const GLenum GL_STATIC_DRAW = GLenum::GL_STATIC_DRAW;
GLSCBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_DRAW = GLenum::GL_DYNAMIC_DRAW;

// CheckFramebufferStatusTarget

GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER;

// ColorBuffer

GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT;
GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK;
GLSCBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0;

// ColorMaterialFace

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// ColorPointerType

GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE;
GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT;
GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT;
GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT;

// CopyBufferSubDataTarget

// GLSCBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// GLSCBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget

// CullFaceMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// DebugSeverity

GLSCBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE;

// DebugSource

// GLSCBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse DebugSeverity

// DebugType

// GLSCBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse DebugSeverity

// DepthFunction

// GLSCBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// DrawElementsType

// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType

// EnableCap

GLSCBINDING_CONSTEXPR static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST;
GLSCBINDING_CONSTEXPR static const GLenum GL_DITHER = GLenum::GL_DITHER;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND;
GLSCBINDING_CONSTEXPR static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D;
GLSCBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL;

// ErrorCode

GLSCBINDING_CONSTEXPR static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR;
GLSCBINDING_CONSTEXPR static const GLenum GL_INVALID_ENUM = GLenum::GL_INVALID_ENUM;
GLSCBINDING_CONSTEXPR static const GLenum GL_INVALID_VALUE = GLenum::GL_INVALID_VALUE;
GLSCBINDING_CONSTEXPR static const GLenum GL_INVALID_OPERATION = GLenum::GL_INVALID_OPERATION;
GLSCBINDING_CONSTEXPR static const GLenum GL_OUT_OF_MEMORY = GLenum::GL_OUT_OF_MEMORY;
GLSCBINDING_CONSTEXPR static const GLenum GL_INVALID_FRAMEBUFFER_OPERATION = GLenum::GL_INVALID_FRAMEBUFFER_OPERATION;

// FogCoordinatePointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// FogMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse BlitFramebufferFilter

// FogPointerTypeEXT

// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// FogPointerTypeIBM

// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// FramebufferAttachment

// GLSCBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_ATTACHMENT = GLenum::GL_DEPTH_ATTACHMENT;

// FramebufferAttachmentParameterName

GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;

// FramebufferStatus

GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_UNDEFINED = GLenum::GL_FRAMEBUFFER_UNDEFINED;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_COMPLETE = GLenum::GL_FRAMEBUFFER_COMPLETE;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_UNSUPPORTED = GLenum::GL_FRAMEBUFFER_UNSUPPORTED;

// FramebufferTarget

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget

// FrontFaceDirection

GLSCBINDING_CONSTEXPR static const GLenum GL_CW = GLenum::GL_CW;
GLSCBINDING_CONSTEXPR static const GLenum GL_CCW = GLenum::GL_CCW;

// GetFramebufferParameter

GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_BUFFERS = GLenum::GL_SAMPLE_BUFFERS;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES;
GLSCBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE = GLenum::GL_IMPLEMENTATION_COLOR_READ_TYPE;
GLSCBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT = GLenum::GL_IMPLEMENTATION_COLOR_READ_FORMAT;

// GetPName

GLSCBINDING_CONSTEXPR static const GLenum GL_LINE_WIDTH = GLenum::GL_LINE_WIDTH;
// GLSCBINDING_CONSTEXPR static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_CULL_FACE_MODE = GLenum::GL_CULL_FACE_MODE;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_FACE = GLenum::GL_FRONT_FACE;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_RANGE = GLenum::GL_DEPTH_RANGE;
// GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_WRITEMASK = GLenum::GL_DEPTH_WRITEMASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_CLEAR_VALUE = GLenum::GL_DEPTH_CLEAR_VALUE;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_FUNC = GLenum::GL_DEPTH_FUNC;
// GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_CLEAR_VALUE = GLenum::GL_STENCIL_CLEAR_VALUE;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_FUNC = GLenum::GL_STENCIL_FUNC;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_VALUE_MASK = GLenum::GL_STENCIL_VALUE_MASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_FAIL = GLenum::GL_STENCIL_FAIL;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_PASS_DEPTH_FAIL;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_PASS_DEPTH_PASS = GLenum::GL_STENCIL_PASS_DEPTH_PASS;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_REF = GLenum::GL_STENCIL_REF;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_WRITEMASK = GLenum::GL_STENCIL_WRITEMASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_VIEWPORT = GLenum::GL_VIEWPORT;
// GLSCBINDING_CONSTEXPR static const GLenum GL_DITHER = GLenum::GL_DITHER; // reuse EnableCap
// GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_SCISSOR_BOX = GLenum::GL_SCISSOR_BOX;
// GLSCBINDING_CONSTEXPR static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_COLOR_CLEAR_VALUE = GLenum::GL_COLOR_CLEAR_VALUE;
GLSCBINDING_CONSTEXPR static const GLenum GL_COLOR_WRITEMASK = GLenum::GL_COLOR_WRITEMASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT;
GLSCBINDING_CONSTEXPR static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_SIZE = GLenum::GL_MAX_TEXTURE_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_VIEWPORT_DIMS = GLenum::GL_MAX_VIEWPORT_DIMS;
GLSCBINDING_CONSTEXPR static const GLenum GL_SUBPIXEL_BITS = GLenum::GL_SUBPIXEL_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_RED_BITS = GLenum::GL_RED_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_GREEN_BITS = GLenum::GL_GREEN_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLUE_BITS = GLenum::GL_BLUE_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_ALPHA_BITS = GLenum::GL_ALPHA_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_BITS = GLenum::GL_DEPTH_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BITS = GLenum::GL_STENCIL_BITS;
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_UNITS = GLenum::GL_POLYGON_OFFSET_UNITS;
// GLSCBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FACTOR = GLenum::GL_POLYGON_OFFSET_FACTOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D = GLenum::GL_TEXTURE_BINDING_2D;
GLSCBINDING_CONSTEXPR static const GLenum GL_ALIASED_POINT_SIZE_RANGE = GLenum::GL_ALIASED_POINT_SIZE_RANGE;
GLSCBINDING_CONSTEXPR static const GLenum GL_ALIASED_LINE_WIDTH_RANGE = GLenum::GL_ALIASED_LINE_WIDTH_RANGE;

// GetTextureParameter

GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T;

// GraphicsResetStatus

// GLSCBINDING_CONSTEXPR static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR; // reuse ErrorCode
GLSCBINDING_CONSTEXPR static const GLenum GL_GUILTY_CONTEXT_RESET = GLenum::GL_GUILTY_CONTEXT_RESET;
GLSCBINDING_CONSTEXPR static const GLenum GL_INNOCENT_CONTEXT_RESET = GLenum::GL_INNOCENT_CONTEXT_RESET;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNKNOWN_CONTEXT_RESET = GLenum::GL_UNKNOWN_CONTEXT_RESET;

// HintMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse DebugSeverity
GLSCBINDING_CONSTEXPR static const GLenum GL_FASTEST = GLenum::GL_FASTEST;
GLSCBINDING_CONSTEXPR static const GLenum GL_NICEST = GLenum::GL_NICEST;

// HintTarget

GLSCBINDING_CONSTEXPR static const GLenum GL_GENERATE_MIPMAP_HINT = GLenum::GL_GENERATE_MIPMAP_HINT;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES = GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES;

// IndexPointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// InternalFormat

GLSCBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGB8 = GLenum::GL_RGB8;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGB8_OES = GLenum::GL_RGB8_OES;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA4 = GLenum::GL_RGBA4;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGB5_A1 = GLenum::GL_RGB5_A1;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA8 = GLenum::GL_RGBA8;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA8_OES = GLenum::GL_RGBA8_OES;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT16 = GLenum::GL_DEPTH_COMPONENT16;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT24_OES = GLenum::GL_DEPTH_COMPONENT24_OES;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT32_OES = GLenum::GL_DEPTH_COMPONENT32_OES;
GLSCBINDING_CONSTEXPR static const GLenum GL_RG = GLenum::GL_RG;
GLSCBINDING_CONSTEXPR static const GLenum GL_R8 = GLenum::GL_R8;
GLSCBINDING_CONSTEXPR static const GLenum GL_RG8 = GLenum::GL_RG8;
GLSCBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_RGB_S3TC_DXT1_EXT;
GLSCBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT1_EXT;
GLSCBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT3_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT3_EXT;
GLSCBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT5_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT5_EXT;

// InternalFormatPName

// GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES; // reuse GetFramebufferParameter

// LightEnvModeSGIX

GLSCBINDING_CONSTEXPR static const GLenum GL_REPLACE = GLenum::GL_REPLACE;

// ListNameType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// LogicOp

GLSCBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT;

// MaterialFace

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// MatrixMode

GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE = GLenum::GL_TEXTURE;

// NormalPointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// ObjectIdentifier

// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE = GLenum::GL_TEXTURE; // reuse MatrixMode
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER;

// PathFillMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT; // reuse LogicOp

// PathFontStyle

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer

// PathGenMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer

// PathTransformType

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer

// PixelFormat

// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED; // reuse InternalFormat
// GLSCBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse InternalFormat
// GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse InternalFormat

// PixelStoreParameter

// GLSCBINDING_CONSTEXPR static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT; // reuse GetPName
// GLSCBINDING_CONSTEXPR static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT; // reuse GetPName

// PixelTexGenMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse InternalFormat
// GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse InternalFormat

// PixelType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_4_4_4_4 = GLenum::GL_UNSIGNED_SHORT_4_4_4_4;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_5_5_5_1 = GLenum::GL_UNSIGNED_SHORT_5_5_5_1;

// PrecisionType

GLSCBINDING_CONSTEXPR static const GLenum GL_LOW_FLOAT = GLenum::GL_LOW_FLOAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_MEDIUM_FLOAT = GLenum::GL_MEDIUM_FLOAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_HIGH_FLOAT = GLenum::GL_HIGH_FLOAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_LOW_INT = GLenum::GL_LOW_INT;
GLSCBINDING_CONSTEXPR static const GLenum GL_MEDIUM_INT = GLenum::GL_MEDIUM_INT;
GLSCBINDING_CONSTEXPR static const GLenum GL_HIGH_INT = GLenum::GL_HIGH_INT;

// PrimitiveType

GLSCBINDING_CONSTEXPR static const GLenum GL_POINTS = GLenum::GL_POINTS;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINES = GLenum::GL_LINES;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINE_LOOP = GLenum::GL_LINE_LOOP;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINE_STRIP = GLenum::GL_LINE_STRIP;
GLSCBINDING_CONSTEXPR static const GLenum GL_TRIANGLSC = GLenum::GL_TRIANGLSC;
GLSCBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_STRIP = GLenum::GL_TRIANGLE_STRIP;
GLSCBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_FAN = GLenum::GL_TRIANGLE_FAN;

// ProgramPropertyARB

GLSCBINDING_CONSTEXPR static const GLenum GL_LINK_STATUS = GLenum::GL_LINK_STATUS;

// ReadBufferMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer

// RenderbufferParameterName

GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_WIDTH = GLenum::GL_RENDERBUFFER_WIDTH;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_HEIGHT = GLenum::GL_RENDERBUFFER_HEIGHT;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_INTERNAL_FORMAT = GLenum::GL_RENDERBUFFER_INTERNAL_FORMAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_RED_SIZE = GLenum::GL_RENDERBUFFER_RED_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_GREEN_SIZE = GLenum::GL_RENDERBUFFER_GREEN_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_BLUE_SIZE = GLenum::GL_RENDERBUFFER_BLUE_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_ALPHA_SIZE = GLenum::GL_RENDERBUFFER_ALPHA_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_DEPTH_SIZE = GLenum::GL_RENDERBUFFER_DEPTH_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_STENCIL_SIZE = GLenum::GL_RENDERBUFFER_STENCIL_SIZE;

// RenderbufferTarget

// GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER; // reuse ObjectIdentifier

// SamplerParameterName

// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter

// StencilFaceDirection

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// StencilFunction

// GLSCBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// GLSCBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse BlendingFactor
// GLSCBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT; // reuse LogicOp
GLSCBINDING_CONSTEXPR static const GLenum GL_KEEP = GLenum::GL_KEEP;
// GLSCBINDING_CONSTEXPR static const GLenum GL_REPLACE = GLenum::GL_REPLACE; // reuse LightEnvModeSGIX
GLSCBINDING_CONSTEXPR static const GLenum GL_INCR = GLenum::GL_INCR;
GLSCBINDING_CONSTEXPR static const GLenum GL_DECR = GLenum::GL_DECR;

// StringName

GLSCBINDING_CONSTEXPR static const GLenum GL_VENDOR = GLenum::GL_VENDOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERER = GLenum::GL_RENDERER;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERSION = GLenum::GL_VERSION;
GLSCBINDING_CONSTEXPR static const GLenum GL_EXTENSIONS = GLenum::GL_EXTENSIONS;
GLSCBINDING_CONSTEXPR static const GLenum GL_SHADING_LANGUAGE_VERSION = GLenum::GL_SHADING_LANGUAGE_VERSION;

// TexCoordPointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// TextureEnvMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap

// TextureMagFilter

// GLSCBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST; // reuse BlitFramebufferFilter
// GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse BlitFramebufferFilter

// TextureMinFilter

// GLSCBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST; // reuse BlitFramebufferFilter
// GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse BlitFramebufferFilter
GLSCBINDING_CONSTEXPR static const GLenum GL_NEAREST_MIPMAP_NEAREST = GLenum::GL_NEAREST_MIPMAP_NEAREST;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR_MIPMAP_NEAREST = GLenum::GL_LINEAR_MIPMAP_NEAREST;
GLSCBINDING_CONSTEXPR static const GLenum GL_NEAREST_MIPMAP_LINEAR = GLenum::GL_NEAREST_MIPMAP_LINEAR;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR_MIPMAP_LINEAR = GLenum::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter

// TextureTarget

// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap

// TextureUnit

GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE0 = GLenum::GL_TEXTURE0;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE1 = GLenum::GL_TEXTURE1;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE2 = GLenum::GL_TEXTURE2;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE3 = GLenum::GL_TEXTURE3;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE4 = GLenum::GL_TEXTURE4;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE5 = GLenum::GL_TEXTURE5;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE6 = GLenum::GL_TEXTURE6;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE7 = GLenum::GL_TEXTURE7;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE8 = GLenum::GL_TEXTURE8;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE9 = GLenum::GL_TEXTURE9;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE10 = GLenum::GL_TEXTURE10;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE11 = GLenum::GL_TEXTURE11;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE12 = GLenum::GL_TEXTURE12;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE13 = GLenum::GL_TEXTURE13;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE14 = GLenum::GL_TEXTURE14;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE15 = GLenum::GL_TEXTURE15;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE16 = GLenum::GL_TEXTURE16;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE17 = GLenum::GL_TEXTURE17;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE18 = GLenum::GL_TEXTURE18;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE19 = GLenum::GL_TEXTURE19;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE20 = GLenum::GL_TEXTURE20;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE21 = GLenum::GL_TEXTURE21;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE22 = GLenum::GL_TEXTURE22;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE23 = GLenum::GL_TEXTURE23;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE24 = GLenum::GL_TEXTURE24;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE25 = GLenum::GL_TEXTURE25;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE26 = GLenum::GL_TEXTURE26;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE27 = GLenum::GL_TEXTURE27;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE28 = GLenum::GL_TEXTURE28;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE29 = GLenum::GL_TEXTURE29;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE30 = GLenum::GL_TEXTURE30;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE31 = GLenum::GL_TEXTURE31;

// TextureWrapMode

GLSCBINDING_CONSTEXPR static const GLenum GL_REPEAT = GLenum::GL_REPEAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_EDGE = GLenum::GL_CLAMP_TO_EDGE;

// VertexArrayPName

GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;

// VertexAttribEnum

// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED; // reuse VertexArrayPName
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE; // reuse VertexArrayPName
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE; // reuse VertexArrayPName
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE; // reuse VertexArrayPName
GLSCBINDING_CONSTEXPR static const GLenum GL_CURRENT_VERTEX_ATTRIB = GLenum::GL_CURRENT_VERTEX_ATTRIB;
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED; // reuse VertexArrayPName
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = GLenum::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;

// VertexAttribPointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// VertexAttribType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// VertexBufferObjectParameter

GLSCBINDING_CONSTEXPR static const GLenum GL_BUFFER_SIZE = GLenum::GL_BUFFER_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_BUFFER_USAGE = GLenum::GL_BUFFER_USAGE;

// VertexBufferObjectUsage

// GLSCBINDING_CONSTEXPR static const GLenum GL_STREAM_DRAW = GLenum::GL_STREAM_DRAW; // reuse BufferUsageARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_STATIC_DRAW = GLenum::GL_STATIC_DRAW; // reuse BufferUsageARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_DRAW = GLenum::GL_DYNAMIC_DRAW; // reuse BufferUsageARB

// VertexPointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// __UNGROUPED__

GLSCBINDING_CONSTEXPR static const GLenum GL_CONTEXT_LOST = GLenum::GL_CONTEXT_LOST;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_COLOR = GLenum::GL_BLEND_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION = GLenum::GL_BLEND_EQUATION;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION_RGB = GLenum::GL_BLEND_EQUATION_RGB;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_ALPHA_TO_COVERAGE = GLenum::GL_SAMPLE_ALPHA_TO_COVERAGE;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE = GLenum::GL_SAMPLE_COVERAGE;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE_VALUE = GLenum::GL_SAMPLE_COVERAGE_VALUE;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE_INVERT = GLenum::GL_SAMPLE_COVERAGE_INVERT;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_DST_RGB = GLenum::GL_BLEND_DST_RGB;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_SRC_RGB = GLenum::GL_BLEND_SRC_RGB;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_DST_ALPHA = GLenum::GL_BLEND_DST_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_SRC_ALPHA = GLenum::GL_BLEND_SRC_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_LOSE_CONTEXT_ON_RESET = GLenum::GL_LOSE_CONTEXT_ON_RESET;
GLSCBINDING_CONSTEXPR static const GLenum GL_RESET_NOTIFICATION_STRATEGY = GLenum::GL_RESET_NOTIFICATION_STRATEGY;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_5_6_5 = GLenum::GL_UNSIGNED_SHORT_5_6_5;
GLSCBINDING_CONSTEXPR static const GLenum GL_MIRRORED_REPEAT = GLenum::GL_MIRRORED_REPEAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_ACTIVE_TEXTURE = GLenum::GL_ACTIVE_TEXTURE;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_RENDERBUFFER_SIZE = GLenum::GL_MAX_RENDERBUFFER_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_INCR_WRAP = GLenum::GL_INCR_WRAP;
GLSCBINDING_CONSTEXPR static const GLenum GL_DECR_WRAP = GLenum::GL_DECR_WRAP;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER = GLenum::GL_VERTEX_ATTRIB_ARRAY_POINTER;
GLSCBINDING_CONSTEXPR static const GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
GLSCBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_COMPRESSED_TEXTURE_FORMATS;
GLSCBINDING_CONSTEXPR static const GLenum GL_NUM_PROGRAM_BINARY_FORMATS = GLenum::GL_NUM_PROGRAM_BINARY_FORMATS;
GLSCBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_FORMATS = GLenum::GL_PROGRAM_BINARY_FORMATS;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_FUNC = GLenum::GL_STENCIL_BACK_FUNC;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_FAIL = GLenum::GL_STENCIL_BACK_FAIL;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_PASS_DEPTH_PASS = GLenum::GL_STENCIL_BACK_PASS_DEPTH_PASS;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION_ALPHA = GLenum::GL_BLEND_EQUATION_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATTRIBS = GLenum::GL_MAX_VERTEX_ATTRIBS;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TEXTURE_IMAGE_UNITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER_BINDING = GLenum::GL_ARRAY_BUFFER_BINDING;
GLSCBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING = GLenum::GL_ELEMENT_ARRAY_BUFFER_BINDING;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_CURRENT_PROGRAM = GLenum::GL_CURRENT_PROGRAM;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_REF = GLenum::GL_STENCIL_BACK_REF;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_VALUE_MASK = GLenum::GL_STENCIL_BACK_VALUE_MASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_WRITEMASK = GLenum::GL_STENCIL_BACK_WRITEMASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_BINDING = GLenum::GL_FRAMEBUFFER_BINDING;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_BINDING = GLenum::GL_RENDERBUFFER_BINDING;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS = GLenum::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_ATTACHMENT = GLenum::GL_STENCIL_ATTACHMENT;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX8 = GLenum::GL_STENCIL_INDEX8;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGB565 = GLenum::GL_RGB565;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_UNIFORM_VECTORS = GLenum::GL_MAX_VERTEX_UNIFORM_VECTORS;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_VARYING_VECTORS = GLenum::GL_MAX_VARYING_VECTORS;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_UNIFORM_VECTORS = GLenum::GL_MAX_FRAGMENT_UNIFORM_VECTORS;
GLSCBINDING_CONSTEXPR static const GLenum GL_CONTEXT_ROBUST_ACCESS = GLenum::GL_CONTEXT_ROBUST_ACCESS;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_IMMUTABLE_FORMAT = GLenum::GL_TEXTURE_IMMUTABLE_FORMAT;



} // namespace glsc
