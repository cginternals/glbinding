
#pragma once


#include <glesbinding/nogles.h>

#include <glesbinding/glesbinding_features.h>


namespace gles
{


enum class GLenum : unsigned int
{
    // AlphaFunction

    GL_NEVER                                                                 = 0x0200, // decimal value: 512
    GL_LESS                                                                  = 0x0201, // decimal value: 513
    GL_EQUAL                                                                 = 0x0202, // decimal value: 514
    GL_LEQUAL                                                                = 0x0203, // decimal value: 515
    GL_GREATER                                                               = 0x0204, // decimal value: 516
    GL_NOTEQUAL                                                              = 0x0205, // decimal value: 517
    GL_GEQUAL                                                                = 0x0206, // decimal value: 518
    GL_ALWAYS                                                                = 0x0207, // decimal value: 519

    // AtomicCounterBufferPName

    GL_ATOMIC_COUNTER_BUFFER_BINDING                                         = 0x92C1, // decimal value: 37569

    // AttributeType

    GL_FLOAT_VEC2                                                            = 0x8B50, // decimal value: 35664
    GL_FLOAT_VEC2_ARB                                                        = 0x8B50, // decimal value: 35664
    GL_FLOAT_VEC3                                                            = 0x8B51, // decimal value: 35665
    GL_FLOAT_VEC3_ARB                                                        = 0x8B51, // decimal value: 35665
    GL_FLOAT_VEC4                                                            = 0x8B52, // decimal value: 35666
    GL_FLOAT_VEC4_ARB                                                        = 0x8B52, // decimal value: 35666
    GL_INT_VEC2                                                              = 0x8B53, // decimal value: 35667
    GL_INT_VEC2_ARB                                                          = 0x8B53, // decimal value: 35667
    GL_INT_VEC3                                                              = 0x8B54, // decimal value: 35668
    GL_INT_VEC3_ARB                                                          = 0x8B54, // decimal value: 35668
    GL_INT_VEC4                                                              = 0x8B55, // decimal value: 35669
    GL_INT_VEC4_ARB                                                          = 0x8B55, // decimal value: 35669
    GL_BOOL                                                                  = 0x8B56, // decimal value: 35670
    GL_BOOL_ARB                                                              = 0x8B56, // decimal value: 35670
    GL_BOOL_VEC2                                                             = 0x8B57, // decimal value: 35671
    GL_BOOL_VEC2_ARB                                                         = 0x8B57, // decimal value: 35671
    GL_BOOL_VEC3                                                             = 0x8B58, // decimal value: 35672
    GL_BOOL_VEC3_ARB                                                         = 0x8B58, // decimal value: 35672
    GL_BOOL_VEC4                                                             = 0x8B59, // decimal value: 35673
    GL_BOOL_VEC4_ARB                                                         = 0x8B59, // decimal value: 35673
    GL_FLOAT_MAT2                                                            = 0x8B5A, // decimal value: 35674
    GL_FLOAT_MAT2_ARB                                                        = 0x8B5A, // decimal value: 35674
    GL_FLOAT_MAT3                                                            = 0x8B5B, // decimal value: 35675
    GL_FLOAT_MAT3_ARB                                                        = 0x8B5B, // decimal value: 35675
    GL_FLOAT_MAT4                                                            = 0x8B5C, // decimal value: 35676
    GL_FLOAT_MAT4_ARB                                                        = 0x8B5C, // decimal value: 35676
    GL_SAMPLER_1D                                                            = 0x8B5D, // decimal value: 35677
    GL_SAMPLER_1D_ARB                                                        = 0x8B5D, // decimal value: 35677
    GL_SAMPLER_2D                                                            = 0x8B5E, // decimal value: 35678
    GL_SAMPLER_2D_ARB                                                        = 0x8B5E, // decimal value: 35678
    GL_SAMPLER_3D                                                            = 0x8B5F, // decimal value: 35679
    GL_SAMPLER_3D_ARB                                                        = 0x8B5F, // decimal value: 35679
    GL_SAMPLER_3D_OES                                                        = 0x8B5F, // decimal value: 35679
    GL_SAMPLER_CUBE                                                          = 0x8B60, // decimal value: 35680
    GL_SAMPLER_CUBE_ARB                                                      = 0x8B60, // decimal value: 35680
    GL_SAMPLER_1D_SHADOW                                                     = 0x8B61, // decimal value: 35681
    GL_SAMPLER_1D_SHADOW_ARB                                                 = 0x8B61, // decimal value: 35681
    GL_SAMPLER_2D_SHADOW                                                     = 0x8B62, // decimal value: 35682
    GL_SAMPLER_2D_SHADOW_ARB                                                 = 0x8B62, // decimal value: 35682
    GL_SAMPLER_2D_SHADOW_EXT                                                 = 0x8B62, // decimal value: 35682
    GL_SAMPLER_2D_RECT                                                       = 0x8B63, // decimal value: 35683
    GL_SAMPLER_2D_RECT_ARB                                                   = 0x8B63, // decimal value: 35683
    GL_SAMPLER_2D_RECT_SHADOW                                                = 0x8B64, // decimal value: 35684
    GL_SAMPLER_2D_RECT_SHADOW_ARB                                            = 0x8B64, // decimal value: 35684
    GL_FLOAT_MAT2x3                                                          = 0x8B65, // decimal value: 35685
    GL_FLOAT_MAT2x3_NV                                                       = 0x8B65, // decimal value: 35685
    GL_FLOAT_MAT2x4                                                          = 0x8B66, // decimal value: 35686
    GL_FLOAT_MAT2x4_NV                                                       = 0x8B66, // decimal value: 35686
    GL_FLOAT_MAT3x2                                                          = 0x8B67, // decimal value: 35687
    GL_FLOAT_MAT3x2_NV                                                       = 0x8B67, // decimal value: 35687
    GL_FLOAT_MAT3x4                                                          = 0x8B68, // decimal value: 35688
    GL_FLOAT_MAT3x4_NV                                                       = 0x8B68, // decimal value: 35688
    GL_FLOAT_MAT4x2                                                          = 0x8B69, // decimal value: 35689
    GL_FLOAT_MAT4x2_NV                                                       = 0x8B69, // decimal value: 35689
    GL_FLOAT_MAT4x3                                                          = 0x8B6A, // decimal value: 35690
    GL_FLOAT_MAT4x3_NV                                                       = 0x8B6A, // decimal value: 35690

    // BindTransformFeedbackTarget

    GL_TRANSFORM_FEEDBACK                                                    = 0x8E22, // decimal value: 36386

    // BlendEquationModeEXT

    GL_FUNC_ADD                                                              = 0x8006, // decimal value: 32774
    GL_MIN_EXT                                                               = 0x8007, // decimal value: 32775
    GL_MAX_EXT                                                               = 0x8008, // decimal value: 32776
    GL_FUNC_SUBTRACT                                                         = 0x800A, // decimal value: 32778
    GL_FUNC_REVERSE_SUBTRACT                                                 = 0x800B, // decimal value: 32779

    // BlendingFactor

    GL_ZERO                                                                  = 0,
    GL_SRC_COLOR                                                             = 0x0300, // decimal value: 768
    GL_ONE_MINUS_SRC_COLOR                                                   = 0x0301, // decimal value: 769
    GL_SRC_ALPHA                                                             = 0x0302, // decimal value: 770
    GL_ONE_MINUS_SRC_ALPHA                                                   = 0x0303, // decimal value: 771
    GL_DST_ALPHA                                                             = 0x0304, // decimal value: 772
    GL_ONE_MINUS_DST_ALPHA                                                   = 0x0305, // decimal value: 773
    GL_DST_COLOR                                                             = 0x0306, // decimal value: 774
    GL_ONE_MINUS_DST_COLOR                                                   = 0x0307, // decimal value: 775
    GL_SRC_ALPHA_SATURATE                                                    = 0x0308, // decimal value: 776
    GL_CONSTANT_COLOR                                                        = 0x8001, // decimal value: 32769
    GL_ONE_MINUS_CONSTANT_COLOR                                              = 0x8002, // decimal value: 32770
    GL_CONSTANT_ALPHA                                                        = 0x8003, // decimal value: 32771
    GL_ONE_MINUS_CONSTANT_ALPHA                                              = 0x8004, // decimal value: 32772
    GL_ONE                                                                   = 1,

    // BlitFramebufferFilter

    GL_NEAREST                                                               = 0x2600, // decimal value: 9728
    GL_LINEAR                                                                = 0x2601, // decimal value: 9729

    // Buffer

    GL_COLOR                                                                 = 0x1800, // decimal value: 6144
    GL_DEPTH                                                                 = 0x1801, // decimal value: 6145
    GL_STENCIL                                                               = 0x1802, // decimal value: 6146

    // BufferAccessARB

    GL_READ_ONLY                                                             = 0x88B8, // decimal value: 35000
    GL_WRITE_ONLY                                                            = 0x88B9, // decimal value: 35001
    GL_READ_WRITE                                                            = 0x88BA, // decimal value: 35002

    // BufferStorageTarget

    GL_ARRAY_BUFFER                                                          = 0x8892, // decimal value: 34962
    GL_ELEMENT_ARRAY_BUFFER                                                  = 0x8893, // decimal value: 34963
    GL_PIXEL_PACK_BUFFER                                                     = 0x88EB, // decimal value: 35051
    GL_PIXEL_UNPACK_BUFFER                                                   = 0x88EC, // decimal value: 35052
    GL_UNIFORM_BUFFER                                                        = 0x8A11, // decimal value: 35345
    GL_TEXTURE_BUFFER                                                        = 0x8C2A, // decimal value: 35882
    GL_TRANSFORM_FEEDBACK_BUFFER                                             = 0x8C8E, // decimal value: 35982
    GL_COPY_READ_BUFFER                                                      = 0x8F36, // decimal value: 36662
    GL_COPY_WRITE_BUFFER                                                     = 0x8F37, // decimal value: 36663
    GL_DRAW_INDIRECT_BUFFER                                                  = 0x8F3F, // decimal value: 36671
    GL_SHADER_STORAGE_BUFFER                                                 = 0x90D2, // decimal value: 37074
    GL_DISPATCH_INDIRECT_BUFFER                                              = 0x90EE, // decimal value: 37102
    GL_ATOMIC_COUNTER_BUFFER                                                 = 0x92C0, // decimal value: 37568

    // BufferTargetARB

//  GL_ARRAY_BUFFER                                                          = 0x8892, // reuse BufferStorageTarget, decimal value: 34962
//  GL_ELEMENT_ARRAY_BUFFER                                                  = 0x8893, // reuse BufferStorageTarget, decimal value: 34963
//  GL_PIXEL_PACK_BUFFER                                                     = 0x88EB, // reuse BufferStorageTarget, decimal value: 35051
//  GL_PIXEL_UNPACK_BUFFER                                                   = 0x88EC, // reuse BufferStorageTarget, decimal value: 35052
//  GL_UNIFORM_BUFFER                                                        = 0x8A11, // reuse BufferStorageTarget, decimal value: 35345
//  GL_TEXTURE_BUFFER                                                        = 0x8C2A, // reuse BufferStorageTarget, decimal value: 35882
//  GL_TRANSFORM_FEEDBACK_BUFFER                                             = 0x8C8E, // reuse BufferStorageTarget, decimal value: 35982
//  GL_COPY_READ_BUFFER                                                      = 0x8F36, // reuse BufferStorageTarget, decimal value: 36662
//  GL_COPY_WRITE_BUFFER                                                     = 0x8F37, // reuse BufferStorageTarget, decimal value: 36663
//  GL_DRAW_INDIRECT_BUFFER                                                  = 0x8F3F, // reuse BufferStorageTarget, decimal value: 36671
//  GL_SHADER_STORAGE_BUFFER                                                 = 0x90D2, // reuse BufferStorageTarget, decimal value: 37074
//  GL_DISPATCH_INDIRECT_BUFFER                                              = 0x90EE, // reuse BufferStorageTarget, decimal value: 37102
//  GL_ATOMIC_COUNTER_BUFFER                                                 = 0x92C0, // reuse BufferStorageTarget, decimal value: 37568

    // BufferUsageARB

    GL_STREAM_DRAW                                                           = 0x88E0, // decimal value: 35040
    GL_STREAM_READ                                                           = 0x88E1, // decimal value: 35041
    GL_STREAM_COPY                                                           = 0x88E2, // decimal value: 35042
    GL_STATIC_DRAW                                                           = 0x88E4, // decimal value: 35044
    GL_STATIC_READ                                                           = 0x88E5, // decimal value: 35045
    GL_STATIC_COPY                                                           = 0x88E6, // decimal value: 35046
    GL_DYNAMIC_DRAW                                                          = 0x88E8, // decimal value: 35048
    GL_DYNAMIC_READ                                                          = 0x88E9, // decimal value: 35049
    GL_DYNAMIC_COPY                                                          = 0x88EA, // decimal value: 35050

    // CheckFramebufferStatusTarget

    GL_READ_FRAMEBUFFER                                                      = 0x8CA8, // decimal value: 36008
    GL_DRAW_FRAMEBUFFER                                                      = 0x8CA9, // decimal value: 36009
    GL_FRAMEBUFFER                                                           = 0x8D40, // decimal value: 36160

    // ColorBuffer

    GL_NONE                                                                  = 0,
    GL_FRONT                                                                 = 0x0404, // decimal value: 1028
    GL_BACK                                                                  = 0x0405, // decimal value: 1029
    GL_FRONT_AND_BACK                                                        = 0x0408, // decimal value: 1032
    GL_COLOR_ATTACHMENT0                                                     = 0x8CE0, // decimal value: 36064
    GL_COLOR_ATTACHMENT1                                                     = 0x8CE1, // decimal value: 36065
    GL_COLOR_ATTACHMENT2                                                     = 0x8CE2, // decimal value: 36066
    GL_COLOR_ATTACHMENT3                                                     = 0x8CE3, // decimal value: 36067
    GL_COLOR_ATTACHMENT4                                                     = 0x8CE4, // decimal value: 36068
    GL_COLOR_ATTACHMENT5                                                     = 0x8CE5, // decimal value: 36069
    GL_COLOR_ATTACHMENT6                                                     = 0x8CE6, // decimal value: 36070
    GL_COLOR_ATTACHMENT7                                                     = 0x8CE7, // decimal value: 36071
    GL_COLOR_ATTACHMENT8                                                     = 0x8CE8, // decimal value: 36072
    GL_COLOR_ATTACHMENT9                                                     = 0x8CE9, // decimal value: 36073
    GL_COLOR_ATTACHMENT10                                                    = 0x8CEA, // decimal value: 36074
    GL_COLOR_ATTACHMENT11                                                    = 0x8CEB, // decimal value: 36075
    GL_COLOR_ATTACHMENT12                                                    = 0x8CEC, // decimal value: 36076
    GL_COLOR_ATTACHMENT13                                                    = 0x8CED, // decimal value: 36077
    GL_COLOR_ATTACHMENT14                                                    = 0x8CEE, // decimal value: 36078
    GL_COLOR_ATTACHMENT15                                                    = 0x8CEF, // decimal value: 36079
    GL_COLOR_ATTACHMENT16                                                    = 0x8CF0, // decimal value: 36080
    GL_COLOR_ATTACHMENT17                                                    = 0x8CF1, // decimal value: 36081
    GL_COLOR_ATTACHMENT18                                                    = 0x8CF2, // decimal value: 36082
    GL_COLOR_ATTACHMENT19                                                    = 0x8CF3, // decimal value: 36083
    GL_COLOR_ATTACHMENT20                                                    = 0x8CF4, // decimal value: 36084
    GL_COLOR_ATTACHMENT21                                                    = 0x8CF5, // decimal value: 36085
    GL_COLOR_ATTACHMENT22                                                    = 0x8CF6, // decimal value: 36086
    GL_COLOR_ATTACHMENT23                                                    = 0x8CF7, // decimal value: 36087
    GL_COLOR_ATTACHMENT24                                                    = 0x8CF8, // decimal value: 36088
    GL_COLOR_ATTACHMENT25                                                    = 0x8CF9, // decimal value: 36089
    GL_COLOR_ATTACHMENT26                                                    = 0x8CFA, // decimal value: 36090
    GL_COLOR_ATTACHMENT27                                                    = 0x8CFB, // decimal value: 36091
    GL_COLOR_ATTACHMENT28                                                    = 0x8CFC, // decimal value: 36092
    GL_COLOR_ATTACHMENT29                                                    = 0x8CFD, // decimal value: 36093
    GL_COLOR_ATTACHMENT30                                                    = 0x8CFE, // decimal value: 36094
    GL_COLOR_ATTACHMENT31                                                    = 0x8CFF, // decimal value: 36095

    // ColorMaterialFace

//  GL_FRONT                                                                 = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                                                  = 0x0405, // reuse ColorBuffer, decimal value: 1029
//  GL_FRONT_AND_BACK                                                        = 0x0408, // reuse ColorBuffer, decimal value: 1032

    // ColorPointerType

    GL_BYTE                                                                  = 0x1400, // decimal value: 5120
    GL_UNSIGNED_BYTE                                                         = 0x1401, // decimal value: 5121
    GL_SHORT                                                                 = 0x1402, // decimal value: 5122
    GL_UNSIGNED_SHORT                                                        = 0x1403, // decimal value: 5123
    GL_INT                                                                   = 0x1404, // decimal value: 5124
    GL_UNSIGNED_INT                                                          = 0x1405, // decimal value: 5125
    GL_FLOAT                                                                 = 0x1406, // decimal value: 5126

    // CopyBufferSubDataTarget

//  GL_ARRAY_BUFFER                                                          = 0x8892, // reuse BufferStorageTarget, decimal value: 34962
//  GL_ELEMENT_ARRAY_BUFFER                                                  = 0x8893, // reuse BufferStorageTarget, decimal value: 34963
//  GL_PIXEL_PACK_BUFFER                                                     = 0x88EB, // reuse BufferStorageTarget, decimal value: 35051
//  GL_PIXEL_UNPACK_BUFFER                                                   = 0x88EC, // reuse BufferStorageTarget, decimal value: 35052
//  GL_UNIFORM_BUFFER                                                        = 0x8A11, // reuse BufferStorageTarget, decimal value: 35345
//  GL_TEXTURE_BUFFER                                                        = 0x8C2A, // reuse BufferStorageTarget, decimal value: 35882
//  GL_TRANSFORM_FEEDBACK_BUFFER                                             = 0x8C8E, // reuse BufferStorageTarget, decimal value: 35982
//  GL_COPY_READ_BUFFER                                                      = 0x8F36, // reuse BufferStorageTarget, decimal value: 36662
//  GL_COPY_WRITE_BUFFER                                                     = 0x8F37, // reuse BufferStorageTarget, decimal value: 36663
//  GL_DRAW_INDIRECT_BUFFER                                                  = 0x8F3F, // reuse BufferStorageTarget, decimal value: 36671
//  GL_SHADER_STORAGE_BUFFER                                                 = 0x90D2, // reuse BufferStorageTarget, decimal value: 37074
//  GL_DISPATCH_INDIRECT_BUFFER                                              = 0x90EE, // reuse BufferStorageTarget, decimal value: 37102
//  GL_ATOMIC_COUNTER_BUFFER                                                 = 0x92C0, // reuse BufferStorageTarget, decimal value: 37568

    // CullFaceMode

//  GL_FRONT                                                                 = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                                                  = 0x0405, // reuse ColorBuffer, decimal value: 1029
//  GL_FRONT_AND_BACK                                                        = 0x0408, // reuse ColorBuffer, decimal value: 1032

    // DebugSeverity

    GL_DONT_CARE                                                             = 0x1100, // decimal value: 4352
    GL_DEBUG_SEVERITY_HIGH                                                   = 0x9146, // decimal value: 37190
    GL_DEBUG_SEVERITY_MEDIUM                                                 = 0x9147, // decimal value: 37191
    GL_DEBUG_SEVERITY_LOW                                                    = 0x9148, // decimal value: 37192

    // DebugSource

//  GL_DONT_CARE                                                             = 0x1100, // reuse DebugSeverity, decimal value: 4352
    GL_DEBUG_SOURCE_API                                                      = 0x8246, // decimal value: 33350
    GL_DEBUG_SOURCE_WINDOW_SYSTEM                                            = 0x8247, // decimal value: 33351
    GL_DEBUG_SOURCE_SHADER_COMPILER                                          = 0x8248, // decimal value: 33352
    GL_DEBUG_SOURCE_THIRD_PARTY                                              = 0x8249, // decimal value: 33353
    GL_DEBUG_SOURCE_APPLICATION                                              = 0x824A, // decimal value: 33354
    GL_DEBUG_SOURCE_OTHER                                                    = 0x824B, // decimal value: 33355

    // DebugType

//  GL_DONT_CARE                                                             = 0x1100, // reuse DebugSeverity, decimal value: 4352
    GL_DEBUG_TYPE_ERROR                                                      = 0x824C, // decimal value: 33356
    GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR                                        = 0x824D, // decimal value: 33357
    GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR                                         = 0x824E, // decimal value: 33358
    GL_DEBUG_TYPE_PORTABILITY                                                = 0x824F, // decimal value: 33359
    GL_DEBUG_TYPE_PERFORMANCE                                                = 0x8250, // decimal value: 33360
    GL_DEBUG_TYPE_OTHER                                                      = 0x8251, // decimal value: 33361
    GL_DEBUG_TYPE_MARKER                                                     = 0x8268, // decimal value: 33384
    GL_DEBUG_TYPE_PUSH_GROUP                                                 = 0x8269, // decimal value: 33385
    GL_DEBUG_TYPE_POP_GROUP                                                  = 0x826A, // decimal value: 33386

    // DepthFunction

//  GL_NEVER                                                                 = 0x0200, // reuse AlphaFunction, decimal value: 512
//  GL_LESS                                                                  = 0x0201, // reuse AlphaFunction, decimal value: 513
//  GL_EQUAL                                                                 = 0x0202, // reuse AlphaFunction, decimal value: 514
//  GL_LEQUAL                                                                = 0x0203, // reuse AlphaFunction, decimal value: 515
//  GL_GREATER                                                               = 0x0204, // reuse AlphaFunction, decimal value: 516
//  GL_NOTEQUAL                                                              = 0x0205, // reuse AlphaFunction, decimal value: 517
//  GL_GEQUAL                                                                = 0x0206, // reuse AlphaFunction, decimal value: 518
//  GL_ALWAYS                                                                = 0x0207, // reuse AlphaFunction, decimal value: 519

    // DrawBufferMode

//  GL_NONE                                                                  = 0, // reuse ColorBuffer
//  GL_FRONT                                                                 = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                                                  = 0x0405, // reuse ColorBuffer, decimal value: 1029
//  GL_FRONT_AND_BACK                                                        = 0x0408, // reuse ColorBuffer, decimal value: 1032

    // DrawElementsType

//  GL_UNSIGNED_BYTE                                                         = 0x1401, // reuse ColorPointerType, decimal value: 5121
//  GL_UNSIGNED_SHORT                                                        = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_UNSIGNED_INT                                                          = 0x1405, // reuse ColorPointerType, decimal value: 5125

    // EnableCap

    GL_CULL_FACE                                                             = 0x0B44, // decimal value: 2884
    GL_DEPTH_TEST                                                            = 0x0B71, // decimal value: 2929
    GL_STENCIL_TEST                                                          = 0x0B90, // decimal value: 2960
    GL_DITHER                                                                = 0x0BD0, // decimal value: 3024
    GL_BLEND                                                                 = 0x0BE2, // decimal value: 3042
    GL_SCISSOR_TEST                                                          = 0x0C11, // decimal value: 3089
    GL_TEXTURE_2D                                                            = 0x0DE1, // decimal value: 3553
    GL_POLYGON_OFFSET_FILL                                                   = 0x8037, // decimal value: 32823
    GL_VERTEX_ARRAY                                                          = 0x8074, // decimal value: 32884

    // ErrorCode

    GL_NO_ERROR                                                              = 0,
    GL_INVALID_ENUM                                                          = 0x0500, // decimal value: 1280
    GL_INVALID_VALUE                                                         = 0x0501, // decimal value: 1281
    GL_INVALID_OPERATION                                                     = 0x0502, // decimal value: 1282
    GL_STACK_OVERFLOW                                                        = 0x0503, // decimal value: 1283
    GL_STACK_UNDERFLOW                                                       = 0x0504, // decimal value: 1284
    GL_OUT_OF_MEMORY                                                         = 0x0505, // decimal value: 1285
    GL_INVALID_FRAMEBUFFER_OPERATION                                         = 0x0506, // decimal value: 1286

    // ExternalHandleType

    GL_HANDLE_TYPE_OPAQUE_FD_EXT                                             = 0x9586, // decimal value: 38278
    GL_HANDLE_TYPE_OPAQUE_WIN32_EXT                                          = 0x9587, // decimal value: 38279
    GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT                                      = 0x9588, // decimal value: 38280
    GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT                                        = 0x9589, // decimal value: 38281
    GL_HANDLE_TYPE_D3D12_RESOURCE_EXT                                        = 0x958A, // decimal value: 38282
    GL_HANDLE_TYPE_D3D11_IMAGE_EXT                                           = 0x958B, // decimal value: 38283
    GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT                                       = 0x958C, // decimal value: 38284
    GL_HANDLE_TYPE_D3D12_FENCE_EXT                                           = 0x9594, // decimal value: 38292

    // FogCoordinatePointerType

//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // FogMode

//  GL_LINEAR                                                                = 0x2601, // reuse BlitFramebufferFilter, decimal value: 9729

    // FogPointerTypeEXT

//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // FogPointerTypeIBM

//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // FramebufferAttachment

    GL_MAX_COLOR_ATTACHMENTS                                                 = 0x8CDF, // decimal value: 36063
    GL_MAX_COLOR_ATTACHMENTS_EXT                                             = 0x8CDF, // decimal value: 36063
    GL_MAX_COLOR_ATTACHMENTS_NV                                              = 0x8CDF, // decimal value: 36063
//  GL_COLOR_ATTACHMENT0                                                     = 0x8CE0, // reuse ColorBuffer, decimal value: 36064
    GL_COLOR_ATTACHMENT0_EXT                                                 = 0x8CE0, // decimal value: 36064
    GL_COLOR_ATTACHMENT0_NV                                                  = 0x8CE0, // decimal value: 36064
//  GL_COLOR_ATTACHMENT1                                                     = 0x8CE1, // reuse ColorBuffer, decimal value: 36065
    GL_COLOR_ATTACHMENT1_EXT                                                 = 0x8CE1, // decimal value: 36065
    GL_COLOR_ATTACHMENT1_NV                                                  = 0x8CE1, // decimal value: 36065
//  GL_COLOR_ATTACHMENT2                                                     = 0x8CE2, // reuse ColorBuffer, decimal value: 36066
    GL_COLOR_ATTACHMENT2_EXT                                                 = 0x8CE2, // decimal value: 36066
    GL_COLOR_ATTACHMENT2_NV                                                  = 0x8CE2, // decimal value: 36066
//  GL_COLOR_ATTACHMENT3                                                     = 0x8CE3, // reuse ColorBuffer, decimal value: 36067
    GL_COLOR_ATTACHMENT3_EXT                                                 = 0x8CE3, // decimal value: 36067
    GL_COLOR_ATTACHMENT3_NV                                                  = 0x8CE3, // decimal value: 36067
//  GL_COLOR_ATTACHMENT4                                                     = 0x8CE4, // reuse ColorBuffer, decimal value: 36068
    GL_COLOR_ATTACHMENT4_EXT                                                 = 0x8CE4, // decimal value: 36068
    GL_COLOR_ATTACHMENT4_NV                                                  = 0x8CE4, // decimal value: 36068
//  GL_COLOR_ATTACHMENT5                                                     = 0x8CE5, // reuse ColorBuffer, decimal value: 36069
    GL_COLOR_ATTACHMENT5_EXT                                                 = 0x8CE5, // decimal value: 36069
    GL_COLOR_ATTACHMENT5_NV                                                  = 0x8CE5, // decimal value: 36069
//  GL_COLOR_ATTACHMENT6                                                     = 0x8CE6, // reuse ColorBuffer, decimal value: 36070
    GL_COLOR_ATTACHMENT6_EXT                                                 = 0x8CE6, // decimal value: 36070
    GL_COLOR_ATTACHMENT6_NV                                                  = 0x8CE6, // decimal value: 36070
//  GL_COLOR_ATTACHMENT7                                                     = 0x8CE7, // reuse ColorBuffer, decimal value: 36071
    GL_COLOR_ATTACHMENT7_EXT                                                 = 0x8CE7, // decimal value: 36071
    GL_COLOR_ATTACHMENT7_NV                                                  = 0x8CE7, // decimal value: 36071
//  GL_COLOR_ATTACHMENT8                                                     = 0x8CE8, // reuse ColorBuffer, decimal value: 36072
    GL_COLOR_ATTACHMENT8_EXT                                                 = 0x8CE8, // decimal value: 36072
    GL_COLOR_ATTACHMENT8_NV                                                  = 0x8CE8, // decimal value: 36072
//  GL_COLOR_ATTACHMENT9                                                     = 0x8CE9, // reuse ColorBuffer, decimal value: 36073
    GL_COLOR_ATTACHMENT9_EXT                                                 = 0x8CE9, // decimal value: 36073
    GL_COLOR_ATTACHMENT9_NV                                                  = 0x8CE9, // decimal value: 36073
//  GL_COLOR_ATTACHMENT10                                                    = 0x8CEA, // reuse ColorBuffer, decimal value: 36074
    GL_COLOR_ATTACHMENT10_EXT                                                = 0x8CEA, // decimal value: 36074
    GL_COLOR_ATTACHMENT10_NV                                                 = 0x8CEA, // decimal value: 36074
//  GL_COLOR_ATTACHMENT11                                                    = 0x8CEB, // reuse ColorBuffer, decimal value: 36075
    GL_COLOR_ATTACHMENT11_EXT                                                = 0x8CEB, // decimal value: 36075
    GL_COLOR_ATTACHMENT11_NV                                                 = 0x8CEB, // decimal value: 36075
//  GL_COLOR_ATTACHMENT12                                                    = 0x8CEC, // reuse ColorBuffer, decimal value: 36076
    GL_COLOR_ATTACHMENT12_EXT                                                = 0x8CEC, // decimal value: 36076
    GL_COLOR_ATTACHMENT12_NV                                                 = 0x8CEC, // decimal value: 36076
//  GL_COLOR_ATTACHMENT13                                                    = 0x8CED, // reuse ColorBuffer, decimal value: 36077
    GL_COLOR_ATTACHMENT13_EXT                                                = 0x8CED, // decimal value: 36077
    GL_COLOR_ATTACHMENT13_NV                                                 = 0x8CED, // decimal value: 36077
//  GL_COLOR_ATTACHMENT14                                                    = 0x8CEE, // reuse ColorBuffer, decimal value: 36078
    GL_COLOR_ATTACHMENT14_EXT                                                = 0x8CEE, // decimal value: 36078
    GL_COLOR_ATTACHMENT14_NV                                                 = 0x8CEE, // decimal value: 36078
//  GL_COLOR_ATTACHMENT15                                                    = 0x8CEF, // reuse ColorBuffer, decimal value: 36079
    GL_COLOR_ATTACHMENT15_EXT                                                = 0x8CEF, // decimal value: 36079
    GL_COLOR_ATTACHMENT15_NV                                                 = 0x8CEF, // decimal value: 36079
//  GL_COLOR_ATTACHMENT16                                                    = 0x8CF0, // reuse ColorBuffer, decimal value: 36080
//  GL_COLOR_ATTACHMENT17                                                    = 0x8CF1, // reuse ColorBuffer, decimal value: 36081
//  GL_COLOR_ATTACHMENT18                                                    = 0x8CF2, // reuse ColorBuffer, decimal value: 36082
//  GL_COLOR_ATTACHMENT19                                                    = 0x8CF3, // reuse ColorBuffer, decimal value: 36083
//  GL_COLOR_ATTACHMENT20                                                    = 0x8CF4, // reuse ColorBuffer, decimal value: 36084
//  GL_COLOR_ATTACHMENT21                                                    = 0x8CF5, // reuse ColorBuffer, decimal value: 36085
//  GL_COLOR_ATTACHMENT22                                                    = 0x8CF6, // reuse ColorBuffer, decimal value: 36086
//  GL_COLOR_ATTACHMENT23                                                    = 0x8CF7, // reuse ColorBuffer, decimal value: 36087
//  GL_COLOR_ATTACHMENT24                                                    = 0x8CF8, // reuse ColorBuffer, decimal value: 36088
//  GL_COLOR_ATTACHMENT25                                                    = 0x8CF9, // reuse ColorBuffer, decimal value: 36089
//  GL_COLOR_ATTACHMENT26                                                    = 0x8CFA, // reuse ColorBuffer, decimal value: 36090
//  GL_COLOR_ATTACHMENT27                                                    = 0x8CFB, // reuse ColorBuffer, decimal value: 36091
//  GL_COLOR_ATTACHMENT28                                                    = 0x8CFC, // reuse ColorBuffer, decimal value: 36092
//  GL_COLOR_ATTACHMENT29                                                    = 0x8CFD, // reuse ColorBuffer, decimal value: 36093
//  GL_COLOR_ATTACHMENT30                                                    = 0x8CFE, // reuse ColorBuffer, decimal value: 36094
//  GL_COLOR_ATTACHMENT31                                                    = 0x8CFF, // reuse ColorBuffer, decimal value: 36095
    GL_DEPTH_ATTACHMENT                                                      = 0x8D00, // decimal value: 36096

    // FramebufferAttachmentParameterName

    GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING                                 = 0x8210, // decimal value: 33296
    GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE                                 = 0x8211, // decimal value: 33297
    GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE                                       = 0x8212, // decimal value: 33298
    GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE                                     = 0x8213, // decimal value: 33299
    GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE                                      = 0x8214, // decimal value: 33300
    GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE                                     = 0x8215, // decimal value: 33301
    GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE                                     = 0x8216, // decimal value: 33302
    GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE                                   = 0x8217, // decimal value: 33303
    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME                                    = 0x8CD1, // decimal value: 36049
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL                                  = 0x8CD2, // decimal value: 36050
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE                          = 0x8CD3, // decimal value: 36051
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER                                  = 0x8CD4, // decimal value: 36052
    GL_FRAMEBUFFER_ATTACHMENT_LAYERED                                        = 0x8DA7, // decimal value: 36263

    // FramebufferFetchNoncoherent

    GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM                                    = 0x96A2, // decimal value: 38562

    // FramebufferParameterName

    GL_FRAMEBUFFER_DEFAULT_WIDTH                                             = 0x9310, // decimal value: 37648
    GL_FRAMEBUFFER_DEFAULT_HEIGHT                                            = 0x9311, // decimal value: 37649
    GL_FRAMEBUFFER_DEFAULT_LAYERS                                            = 0x9312, // decimal value: 37650
    GL_FRAMEBUFFER_DEFAULT_SAMPLES                                           = 0x9313, // decimal value: 37651
    GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS                            = 0x9314, // decimal value: 37652

    // FramebufferStatus

    GL_FRAMEBUFFER_UNDEFINED                                                 = 0x8219, // decimal value: 33305
    GL_FRAMEBUFFER_COMPLETE                                                  = 0x8CD5, // decimal value: 36053
    GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT                                     = 0x8CD6, // decimal value: 36054
    GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT                             = 0x8CD7, // decimal value: 36055
    GL_FRAMEBUFFER_UNSUPPORTED                                               = 0x8CDD, // decimal value: 36061
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE                                    = 0x8D56, // decimal value: 36182
    GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS                                  = 0x8DA8, // decimal value: 36264

    // FramebufferTarget

//  GL_READ_FRAMEBUFFER                                                      = 0x8CA8, // reuse CheckFramebufferStatusTarget, decimal value: 36008
//  GL_DRAW_FRAMEBUFFER                                                      = 0x8CA9, // reuse CheckFramebufferStatusTarget, decimal value: 36009
//  GL_FRAMEBUFFER                                                           = 0x8D40, // reuse CheckFramebufferStatusTarget, decimal value: 36160

    // FrontFaceDirection

    GL_CW                                                                    = 0x0900, // decimal value: 2304
    GL_CCW                                                                   = 0x0901, // decimal value: 2305

    // GetFramebufferParameter

    GL_SAMPLE_BUFFERS                                                        = 0x80A8, // decimal value: 32936
    GL_SAMPLES                                                               = 0x80A9, // decimal value: 32937
    GL_IMPLEMENTATION_COLOR_READ_TYPE                                        = 0x8B9A, // decimal value: 35738
    GL_IMPLEMENTATION_COLOR_READ_FORMAT                                      = 0x8B9B, // decimal value: 35739
//  GL_FRAMEBUFFER_DEFAULT_WIDTH                                             = 0x9310, // reuse FramebufferParameterName, decimal value: 37648
//  GL_FRAMEBUFFER_DEFAULT_HEIGHT                                            = 0x9311, // reuse FramebufferParameterName, decimal value: 37649
//  GL_FRAMEBUFFER_DEFAULT_LAYERS                                            = 0x9312, // reuse FramebufferParameterName, decimal value: 37650
//  GL_FRAMEBUFFER_DEFAULT_SAMPLES                                           = 0x9313, // reuse FramebufferParameterName, decimal value: 37651
//  GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS                            = 0x9314, // reuse FramebufferParameterName, decimal value: 37652

    // GetPName

    GL_LINE_WIDTH                                                            = 0x0B21, // decimal value: 2849
//  GL_CULL_FACE                                                             = 0x0B44, // reuse EnableCap, decimal value: 2884
    GL_CULL_FACE_MODE                                                        = 0x0B45, // decimal value: 2885
    GL_FRONT_FACE                                                            = 0x0B46, // decimal value: 2886
    GL_DEPTH_RANGE                                                           = 0x0B70, // decimal value: 2928
//  GL_DEPTH_TEST                                                            = 0x0B71, // reuse EnableCap, decimal value: 2929
    GL_DEPTH_WRITEMASK                                                       = 0x0B72, // decimal value: 2930
    GL_DEPTH_CLEAR_VALUE                                                     = 0x0B73, // decimal value: 2931
    GL_DEPTH_FUNC                                                            = 0x0B74, // decimal value: 2932
//  GL_STENCIL_TEST                                                          = 0x0B90, // reuse EnableCap, decimal value: 2960
    GL_STENCIL_CLEAR_VALUE                                                   = 0x0B91, // decimal value: 2961
    GL_STENCIL_FUNC                                                          = 0x0B92, // decimal value: 2962
    GL_STENCIL_VALUE_MASK                                                    = 0x0B93, // decimal value: 2963
    GL_STENCIL_FAIL                                                          = 0x0B94, // decimal value: 2964
    GL_STENCIL_PASS_DEPTH_FAIL                                               = 0x0B95, // decimal value: 2965
    GL_STENCIL_PASS_DEPTH_PASS                                               = 0x0B96, // decimal value: 2966
    GL_STENCIL_REF                                                           = 0x0B97, // decimal value: 2967
    GL_STENCIL_WRITEMASK                                                     = 0x0B98, // decimal value: 2968
    GL_VIEWPORT                                                              = 0x0BA2, // decimal value: 2978
    GL_ALPHA_TEST_QCOM                                                       = 0x0BC0, // decimal value: 3008
    GL_ALPHA_TEST_FUNC_QCOM                                                  = 0x0BC1, // decimal value: 3009
    GL_ALPHA_TEST_REF_QCOM                                                   = 0x0BC2, // decimal value: 3010
//  GL_DITHER                                                                = 0x0BD0, // reuse EnableCap, decimal value: 3024
//  GL_BLEND                                                                 = 0x0BE2, // reuse EnableCap, decimal value: 3042
    GL_DRAW_BUFFER_EXT                                                       = 0x0C01, // decimal value: 3073
    GL_READ_BUFFER                                                           = 0x0C02, // decimal value: 3074
    GL_READ_BUFFER_EXT                                                       = 0x0C02, // decimal value: 3074
    GL_READ_BUFFER_NV                                                        = 0x0C02, // decimal value: 3074
    GL_SCISSOR_BOX                                                           = 0x0C10, // decimal value: 3088
//  GL_SCISSOR_TEST                                                          = 0x0C11, // reuse EnableCap, decimal value: 3089
    GL_COLOR_CLEAR_VALUE                                                     = 0x0C22, // decimal value: 3106
    GL_COLOR_WRITEMASK                                                       = 0x0C23, // decimal value: 3107
    GL_UNPACK_ROW_LENGTH                                                     = 0x0CF2, // decimal value: 3314
    GL_UNPACK_SKIP_ROWS                                                      = 0x0CF3, // decimal value: 3315
    GL_UNPACK_SKIP_PIXELS                                                    = 0x0CF4, // decimal value: 3316
    GL_UNPACK_ALIGNMENT                                                      = 0x0CF5, // decimal value: 3317
    GL_PACK_ROW_LENGTH                                                       = 0x0D02, // decimal value: 3330
    GL_PACK_SKIP_ROWS                                                        = 0x0D03, // decimal value: 3331
    GL_PACK_SKIP_PIXELS                                                      = 0x0D04, // decimal value: 3332
    GL_PACK_ALIGNMENT                                                        = 0x0D05, // decimal value: 3333
    GL_MAX_TEXTURE_SIZE                                                      = 0x0D33, // decimal value: 3379
    GL_MAX_VIEWPORT_DIMS                                                     = 0x0D3A, // decimal value: 3386
    GL_SUBPIXEL_BITS                                                         = 0x0D50, // decimal value: 3408
    GL_RED_BITS                                                              = 0x0D52, // decimal value: 3410
    GL_GREEN_BITS                                                            = 0x0D53, // decimal value: 3411
    GL_BLUE_BITS                                                             = 0x0D54, // decimal value: 3412
    GL_ALPHA_BITS                                                            = 0x0D55, // decimal value: 3413
    GL_DEPTH_BITS                                                            = 0x0D56, // decimal value: 3414
    GL_STENCIL_BITS                                                          = 0x0D57, // decimal value: 3415
//  GL_TEXTURE_2D                                                            = 0x0DE1, // reuse EnableCap, decimal value: 3553
    GL_POLYGON_OFFSET_UNITS                                                  = 0x2A00, // decimal value: 10752
//  GL_POLYGON_OFFSET_FILL                                                   = 0x8037, // reuse EnableCap, decimal value: 32823
    GL_POLYGON_OFFSET_FACTOR                                                 = 0x8038, // decimal value: 32824
    GL_TEXTURE_BINDING_2D                                                    = 0x8069, // decimal value: 32873
    GL_TEXTURE_BINDING_3D                                                    = 0x806A, // decimal value: 32874
//  GL_VERTEX_ARRAY                                                          = 0x8074, // reuse EnableCap, decimal value: 32884
    GL_ALIASED_POINT_SIZE_RANGE                                              = 0x846D, // decimal value: 33901
    GL_ALIASED_LINE_WIDTH_RANGE                                              = 0x846E, // decimal value: 33902
    GL_NUM_DEVICE_UUIDS_EXT                                                  = 0x9596, // decimal value: 38294
    GL_DEVICE_UUID_EXT                                                       = 0x9597, // decimal value: 38295
    GL_DRIVER_UUID_EXT                                                       = 0x9598, // decimal value: 38296
    GL_DEVICE_LUID_EXT                                                       = 0x9599, // decimal value: 38297
    GL_DEVICE_NODE_MASK_EXT                                                  = 0x959A, // decimal value: 38298

    // GetPointervPName

    GL_DEBUG_CALLBACK_FUNCTION                                               = 0x8244, // decimal value: 33348
    GL_DEBUG_CALLBACK_USER_PARAM                                             = 0x8245, // decimal value: 33349

    // GetTextureParameter

    GL_TEXTURE_WIDTH                                                         = 0x1000, // decimal value: 4096
    GL_TEXTURE_HEIGHT                                                        = 0x1001, // decimal value: 4097
    GL_TEXTURE_INTERNAL_FORMAT                                               = 0x1003, // decimal value: 4099
    GL_TEXTURE_BORDER_COLOR                                                  = 0x1004, // decimal value: 4100
    GL_TEXTURE_BORDER_COLOR_NV                                               = 0x1004, // decimal value: 4100
    GL_TEXTURE_MAG_FILTER                                                    = 0x2800, // decimal value: 10240
    GL_TEXTURE_MIN_FILTER                                                    = 0x2801, // decimal value: 10241
    GL_TEXTURE_WRAP_S                                                        = 0x2802, // decimal value: 10242
    GL_TEXTURE_WRAP_T                                                        = 0x2803, // decimal value: 10243
    GL_TEXTURE_RED_SIZE                                                      = 0x805C, // decimal value: 32860
    GL_TEXTURE_GREEN_SIZE                                                    = 0x805D, // decimal value: 32861
    GL_TEXTURE_BLUE_SIZE                                                     = 0x805E, // decimal value: 32862
    GL_TEXTURE_ALPHA_SIZE                                                    = 0x805F, // decimal value: 32863

    // GraphicsResetStatus

//  GL_NO_ERROR                                                              = 0, // reuse ErrorCode
    GL_GUILTY_CONTEXT_RESET                                                  = 0x8253, // decimal value: 33363
    GL_INNOCENT_CONTEXT_RESET                                                = 0x8254, // decimal value: 33364
    GL_UNKNOWN_CONTEXT_RESET                                                 = 0x8255, // decimal value: 33365

    // HintMode

//  GL_DONT_CARE                                                             = 0x1100, // reuse DebugSeverity, decimal value: 4352
    GL_FASTEST                                                               = 0x1101, // decimal value: 4353
    GL_NICEST                                                                = 0x1102, // decimal value: 4354

    // HintTarget

    GL_GENERATE_MIPMAP_HINT                                                  = 0x8192, // decimal value: 33170
    GL_PROGRAM_BINARY_RETRIEVABLE_HINT                                       = 0x8257, // decimal value: 33367
    GL_FRAGMENT_SHADER_DERIVATIVE_HINT                                       = 0x8B8B, // decimal value: 35723
    GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES                                   = 0x8B8B, // decimal value: 35723
    GL_BINNING_CONTROL_HINT_QCOM                                             = 0x8FB0, // decimal value: 36784

    // IndexPointerType

//  GL_SHORT                                                                 = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_INT                                                                   = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // InternalFormat

    GL_DEPTH_COMPONENT                                                       = 0x1902, // decimal value: 6402
    GL_RED                                                                   = 0x1903, // decimal value: 6403
    GL_RED_EXT                                                               = 0x1903, // decimal value: 6403
    GL_RGB                                                                   = 0x1907, // decimal value: 6407
    GL_RGBA                                                                  = 0x1908, // decimal value: 6408
    GL_RGB8                                                                  = 0x8051, // decimal value: 32849
    GL_RGB8_OES                                                              = 0x8051, // decimal value: 32849
    GL_RGB10_EXT                                                             = 0x8052, // decimal value: 32850
    GL_RGB16_EXT                                                             = 0x8054, // decimal value: 32852
    GL_RGBA4                                                                 = 0x8056, // decimal value: 32854
    GL_RGBA4_OES                                                             = 0x8056, // decimal value: 32854
    GL_RGB5_A1                                                               = 0x8057, // decimal value: 32855
    GL_RGB5_A1_OES                                                           = 0x8057, // decimal value: 32855
    GL_RGBA8                                                                 = 0x8058, // decimal value: 32856
    GL_RGBA8_OES                                                             = 0x8058, // decimal value: 32856
    GL_RGB10_A2                                                              = 0x8059, // decimal value: 32857
    GL_RGB10_A2_EXT                                                          = 0x8059, // decimal value: 32857
    GL_RGBA16_EXT                                                            = 0x805B, // decimal value: 32859
    GL_DEPTH_COMPONENT16                                                     = 0x81A5, // decimal value: 33189
    GL_DEPTH_COMPONENT16_OES                                                 = 0x81A5, // decimal value: 33189
    GL_DEPTH_COMPONENT24_OES                                                 = 0x81A6, // decimal value: 33190
    GL_DEPTH_COMPONENT32_OES                                                 = 0x81A7, // decimal value: 33191
    GL_RG                                                                    = 0x8227, // decimal value: 33319
    GL_R8                                                                    = 0x8229, // decimal value: 33321
    GL_R8_EXT                                                                = 0x8229, // decimal value: 33321
    GL_R16_EXT                                                               = 0x822A, // decimal value: 33322
    GL_RG8                                                                   = 0x822B, // decimal value: 33323
    GL_RG8_EXT                                                               = 0x822B, // decimal value: 33323
    GL_RG16_EXT                                                              = 0x822C, // decimal value: 33324
    GL_R16F                                                                  = 0x822D, // decimal value: 33325
    GL_R16F_EXT                                                              = 0x822D, // decimal value: 33325
    GL_R32F                                                                  = 0x822E, // decimal value: 33326
    GL_R32F_EXT                                                              = 0x822E, // decimal value: 33326
    GL_RG16F                                                                 = 0x822F, // decimal value: 33327
    GL_RG16F_EXT                                                             = 0x822F, // decimal value: 33327
    GL_RG32F                                                                 = 0x8230, // decimal value: 33328
    GL_RG32F_EXT                                                             = 0x8230, // decimal value: 33328
    GL_R8I                                                                   = 0x8231, // decimal value: 33329
    GL_R8UI                                                                  = 0x8232, // decimal value: 33330
    GL_R16I                                                                  = 0x8233, // decimal value: 33331
    GL_R16UI                                                                 = 0x8234, // decimal value: 33332
    GL_R32I                                                                  = 0x8235, // decimal value: 33333
    GL_R32UI                                                                 = 0x8236, // decimal value: 33334
    GL_RG8I                                                                  = 0x8237, // decimal value: 33335
    GL_RG8UI                                                                 = 0x8238, // decimal value: 33336
    GL_RG16I                                                                 = 0x8239, // decimal value: 33337
    GL_RG16UI                                                                = 0x823A, // decimal value: 33338
    GL_RG32I                                                                 = 0x823B, // decimal value: 33339
    GL_RG32UI                                                                = 0x823C, // decimal value: 33340
    GL_COMPRESSED_RGB_S3TC_DXT1_EXT                                          = 0x83F0, // decimal value: 33776
    GL_COMPRESSED_RGBA_S3TC_DXT1_EXT                                         = 0x83F1, // decimal value: 33777
    GL_COMPRESSED_RGBA_S3TC_DXT3_EXT                                         = 0x83F2, // decimal value: 33778
    GL_COMPRESSED_RGBA_S3TC_DXT5_EXT                                         = 0x83F3, // decimal value: 33779
    GL_DEPTH_STENCIL                                                         = 0x84F9, // decimal value: 34041
    GL_DEPTH_STENCIL_OES                                                     = 0x84F9, // decimal value: 34041
    GL_RGBA32F                                                               = 0x8814, // decimal value: 34836
    GL_RGBA32F_EXT                                                           = 0x8814, // decimal value: 34836
    GL_RGBA16F                                                               = 0x881A, // decimal value: 34842
    GL_RGBA16F_EXT                                                           = 0x881A, // decimal value: 34842
    GL_RGB16F                                                                = 0x881B, // decimal value: 34843
    GL_RGB16F_EXT                                                            = 0x881B, // decimal value: 34843
    GL_DEPTH24_STENCIL8                                                      = 0x88F0, // decimal value: 35056
    GL_DEPTH24_STENCIL8_OES                                                  = 0x88F0, // decimal value: 35056
    GL_R11F_G11F_B10F                                                        = 0x8C3A, // decimal value: 35898
    GL_R11F_G11F_B10F_APPLE                                                  = 0x8C3A, // decimal value: 35898
    GL_RGB9_E5                                                               = 0x8C3D, // decimal value: 35901
    GL_RGB9_E5_APPLE                                                         = 0x8C3D, // decimal value: 35901
    GL_SRGB                                                                  = 0x8C40, // decimal value: 35904
    GL_SRGB_EXT                                                              = 0x8C40, // decimal value: 35904
    GL_SRGB8                                                                 = 0x8C41, // decimal value: 35905
    GL_SRGB8_NV                                                              = 0x8C41, // decimal value: 35905
    GL_SRGB_ALPHA_EXT                                                        = 0x8C42, // decimal value: 35906
    GL_SRGB8_ALPHA8                                                          = 0x8C43, // decimal value: 35907
    GL_SRGB8_ALPHA8_EXT                                                      = 0x8C43, // decimal value: 35907
    GL_COMPRESSED_SRGB_S3TC_DXT1_EXT                                         = 0x8C4C, // decimal value: 35916
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT                                   = 0x8C4D, // decimal value: 35917
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT                                   = 0x8C4E, // decimal value: 35918
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT                                   = 0x8C4F, // decimal value: 35919
    GL_DEPTH_COMPONENT32F                                                    = 0x8CAC, // decimal value: 36012
    GL_DEPTH32F_STENCIL8                                                     = 0x8CAD, // decimal value: 36013
    GL_RGBA32UI                                                              = 0x8D70, // decimal value: 36208
    GL_RGB32UI                                                               = 0x8D71, // decimal value: 36209
    GL_RGBA16UI                                                              = 0x8D76, // decimal value: 36214
    GL_RGB16UI                                                               = 0x8D77, // decimal value: 36215
    GL_RGBA8UI                                                               = 0x8D7C, // decimal value: 36220
    GL_RGB8UI                                                                = 0x8D7D, // decimal value: 36221
    GL_RGBA32I                                                               = 0x8D82, // decimal value: 36226
    GL_RGB32I                                                                = 0x8D83, // decimal value: 36227
    GL_RGBA16I                                                               = 0x8D88, // decimal value: 36232
    GL_RGB16I                                                                = 0x8D89, // decimal value: 36233
    GL_RGBA8I                                                                = 0x8D8E, // decimal value: 36238
    GL_RGB8I                                                                 = 0x8D8F, // decimal value: 36239
    GL_COMPRESSED_RED_RGTC1_EXT                                              = 0x8DBB, // decimal value: 36283
    GL_COMPRESSED_SIGNED_RED_RGTC1_EXT                                       = 0x8DBC, // decimal value: 36284
    GL_R8_SNORM                                                              = 0x8F94, // decimal value: 36756
    GL_RG8_SNORM                                                             = 0x8F95, // decimal value: 36757
    GL_RGB8_SNORM                                                            = 0x8F96, // decimal value: 36758
    GL_RGBA8_SNORM                                                           = 0x8F97, // decimal value: 36759
    GL_R16_SNORM_EXT                                                         = 0x8F98, // decimal value: 36760
    GL_RG16_SNORM_EXT                                                        = 0x8F99, // decimal value: 36761
    GL_RGB16_SNORM_EXT                                                       = 0x8F9A, // decimal value: 36762
    GL_RGB10_A2UI                                                            = 0x906F, // decimal value: 36975
    GL_COMPRESSED_R11_EAC                                                    = 0x9270, // decimal value: 37488
    GL_COMPRESSED_SIGNED_R11_EAC                                             = 0x9271, // decimal value: 37489
    GL_COMPRESSED_RG11_EAC                                                   = 0x9272, // decimal value: 37490
    GL_COMPRESSED_SIGNED_RG11_EAC                                            = 0x9273, // decimal value: 37491
    GL_COMPRESSED_RGB8_ETC2                                                  = 0x9274, // decimal value: 37492
    GL_COMPRESSED_SRGB8_ETC2                                                 = 0x9275, // decimal value: 37493
    GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2                              = 0x9276, // decimal value: 37494
    GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2                             = 0x9277, // decimal value: 37495
    GL_COMPRESSED_RGBA8_ETC2_EAC                                             = 0x9278, // decimal value: 37496
    GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC                                      = 0x9279, // decimal value: 37497

    // InternalFormatPName

//  GL_SAMPLES                                                               = 0x80A9, // reuse GetFramebufferParameter, decimal value: 32937
    GL_TEXTURE_COMPRESSED                                                    = 0x86A1, // decimal value: 34465
    GL_IMAGE_FORMAT_COMPATIBILITY_TYPE                                       = 0x90C7, // decimal value: 37063
    GL_NUM_SAMPLE_COUNTS                                                     = 0x9380, // decimal value: 37760

    // LightEnvModeSGIX

    GL_REPLACE                                                               = 0x1E01, // decimal value: 7681

    // ListNameType

//  GL_BYTE                                                                  = 0x1400, // reuse ColorPointerType, decimal value: 5120
//  GL_UNSIGNED_BYTE                                                         = 0x1401, // reuse ColorPointerType, decimal value: 5121
//  GL_SHORT                                                                 = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_UNSIGNED_SHORT                                                        = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_INT                                                                   = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_UNSIGNED_INT                                                          = 0x1405, // reuse ColorPointerType, decimal value: 5125
//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // LogicOp

    GL_INVERT                                                                = 0x150A, // decimal value: 5386

    // MaterialFace

//  GL_FRONT                                                                 = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                                                  = 0x0405, // reuse ColorBuffer, decimal value: 1029
//  GL_FRONT_AND_BACK                                                        = 0x0408, // reuse ColorBuffer, decimal value: 1032

    // MatrixMode

    GL_TEXTURE                                                               = 0x1702, // decimal value: 5890

    // MemoryObjectParameterName

    GL_DEDICATED_MEMORY_OBJECT_EXT                                           = 0x9581, // decimal value: 38273
    GL_PROTECTED_MEMORY_OBJECT_EXT                                           = 0x959B, // decimal value: 38299

    // NormalPointerType

//  GL_BYTE                                                                  = 0x1400, // reuse ColorPointerType, decimal value: 5120
//  GL_SHORT                                                                 = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_INT                                                                   = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // ObjectIdentifier

//  GL_TEXTURE                                                               = 0x1702, // reuse MatrixMode, decimal value: 5890
//  GL_VERTEX_ARRAY                                                          = 0x8074, // reuse EnableCap, decimal value: 32884
    GL_BUFFER                                                                = 0x82E0, // decimal value: 33504
    GL_SHADER                                                                = 0x82E1, // decimal value: 33505
    GL_PROGRAM                                                               = 0x82E2, // decimal value: 33506
    GL_QUERY                                                                 = 0x82E3, // decimal value: 33507
    GL_PROGRAM_PIPELINE                                                      = 0x82E4, // decimal value: 33508
    GL_SAMPLER                                                               = 0x82E6, // decimal value: 33510
//  GL_FRAMEBUFFER                                                           = 0x8D40, // reuse CheckFramebufferStatusTarget, decimal value: 36160
    GL_RENDERBUFFER                                                          = 0x8D41, // decimal value: 36161
//  GL_TRANSFORM_FEEDBACK                                                    = 0x8E22, // reuse BindTransformFeedbackTarget, decimal value: 36386

    // PatchParameterName

    GL_PATCH_VERTICES                                                        = 0x8E72, // decimal value: 36466

    // PathCoverMode

    GL_PATH_FILL_COVER_MODE_NV                                               = 0x9082, // decimal value: 36994
    GL_CONVEX_HULL_NV                                                        = 0x908B, // decimal value: 37003
    GL_BOUNDING_BOX_NV                                                       = 0x908D, // decimal value: 37005
    GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV                                     = 0x909C, // decimal value: 37020

    // PathElementType

    GL_UTF8_NV                                                               = 0x909A, // decimal value: 37018
    GL_UTF16_NV                                                              = 0x909B, // decimal value: 37019

    // PathFillMode

//  GL_INVERT                                                                = 0x150A, // reuse LogicOp, decimal value: 5386
    GL_PATH_FILL_MODE_NV                                                     = 0x9080, // decimal value: 36992
    GL_COUNT_UP_NV                                                           = 0x9088, // decimal value: 37000
    GL_COUNT_DOWN_NV                                                         = 0x9089, // decimal value: 37001

    // PathFontStyle

//  GL_NONE                                                                  = 0, // reuse ColorBuffer

    // PathFontTarget

    GL_STANDARD_FONT_NAME_NV                                                 = 0x9072, // decimal value: 36978
    GL_SYSTEM_FONT_NAME_NV                                                   = 0x9073, // decimal value: 36979
    GL_FILE_NAME_NV                                                          = 0x9074, // decimal value: 36980

    // PathGenMode

//  GL_NONE                                                                  = 0, // reuse ColorBuffer
    GL_PATH_OBJECT_BOUNDING_BOX_NV                                           = 0x908A, // decimal value: 37002

    // PathHandleMissingGlyphs

    GL_SKIP_MISSING_GLYPH_NV                                                 = 0x90A9, // decimal value: 37033
    GL_USE_MISSING_GLYPH_NV                                                  = 0x90AA, // decimal value: 37034

    // PathListMode

    GL_ACCUM_ADJACENT_PAIRS_NV                                               = 0x90AD, // decimal value: 37037
    GL_ADJACENT_PAIRS_NV                                                     = 0x90AE, // decimal value: 37038
    GL_FIRST_TO_REST_NV                                                      = 0x90AF, // decimal value: 37039

    // PathParameter

    GL_PATH_STROKE_WIDTH_NV                                                  = 0x9075, // decimal value: 36981
    GL_PATH_END_CAPS_NV                                                      = 0x9076, // decimal value: 36982
    GL_PATH_INITIAL_END_CAP_NV                                               = 0x9077, // decimal value: 36983
    GL_PATH_TERMINAL_END_CAP_NV                                              = 0x9078, // decimal value: 36984
    GL_PATH_JOIN_STYLE_NV                                                    = 0x9079, // decimal value: 36985
    GL_PATH_MITER_LIMIT_NV                                                   = 0x907A, // decimal value: 36986
    GL_PATH_DASH_CAPS_NV                                                     = 0x907B, // decimal value: 36987
    GL_PATH_INITIAL_DASH_CAP_NV                                              = 0x907C, // decimal value: 36988
    GL_PATH_TERMINAL_DASH_CAP_NV                                             = 0x907D, // decimal value: 36989
    GL_PATH_DASH_OFFSET_NV                                                   = 0x907E, // decimal value: 36990
    GL_PATH_CLIENT_LENGTH_NV                                                 = 0x907F, // decimal value: 36991
//  GL_PATH_FILL_MODE_NV                                                     = 0x9080, // reuse PathFillMode, decimal value: 36992
    GL_PATH_FILL_MASK_NV                                                     = 0x9081, // decimal value: 36993
//  GL_PATH_FILL_COVER_MODE_NV                                               = 0x9082, // reuse PathCoverMode, decimal value: 36994
    GL_PATH_STROKE_COVER_MODE_NV                                             = 0x9083, // decimal value: 36995
    GL_PATH_STROKE_MASK_NV                                                   = 0x9084, // decimal value: 36996
//  GL_PATH_OBJECT_BOUNDING_BOX_NV                                           = 0x908A, // reuse PathGenMode, decimal value: 37002
    GL_PATH_COMMAND_COUNT_NV                                                 = 0x909D, // decimal value: 37021
    GL_PATH_COORD_COUNT_NV                                                   = 0x909E, // decimal value: 37022
    GL_PATH_DASH_ARRAY_COUNT_NV                                              = 0x909F, // decimal value: 37023
    GL_PATH_COMPUTED_LENGTH_NV                                               = 0x90A0, // decimal value: 37024
    GL_PATH_FILL_BOUNDING_BOX_NV                                             = 0x90A1, // decimal value: 37025
    GL_PATH_STROKE_BOUNDING_BOX_NV                                           = 0x90A2, // decimal value: 37026
    GL_PATH_DASH_OFFSET_RESET_NV                                             = 0x90B4, // decimal value: 37044

    // PathStringFormat

    GL_PATH_FORMAT_SVG_NV                                                    = 0x9070, // decimal value: 36976
    GL_PATH_FORMAT_PS_NV                                                     = 0x9071, // decimal value: 36977

    // PathTransformType

//  GL_NONE                                                                  = 0, // reuse ColorBuffer
    GL_TRANSLATE_X_NV                                                        = 0x908E, // decimal value: 37006
    GL_TRANSLATE_Y_NV                                                        = 0x908F, // decimal value: 37007
    GL_TRANSLATE_2D_NV                                                       = 0x9090, // decimal value: 37008
    GL_TRANSLATE_3D_NV                                                       = 0x9091, // decimal value: 37009
    GL_AFFINE_2D_NV                                                          = 0x9092, // decimal value: 37010
    GL_AFFINE_3D_NV                                                          = 0x9094, // decimal value: 37012
    GL_TRANSPOSE_AFFINE_2D_NV                                                = 0x9096, // decimal value: 37014
    GL_TRANSPOSE_AFFINE_3D_NV                                                = 0x9098, // decimal value: 37016

    // PipelineParameterName

    GL_ACTIVE_PROGRAM                                                        = 0x8259, // decimal value: 33369
    GL_FRAGMENT_SHADER                                                       = 0x8B30, // decimal value: 35632
    GL_VERTEX_SHADER                                                         = 0x8B31, // decimal value: 35633
    GL_INFO_LOG_LENGTH                                                       = 0x8B84, // decimal value: 35716
    GL_GEOMETRY_SHADER                                                       = 0x8DD9, // decimal value: 36313
    GL_TESS_EVALUATION_SHADER                                                = 0x8E87, // decimal value: 36487
    GL_TESS_CONTROL_SHADER                                                   = 0x8E88, // decimal value: 36488

    // PixelCopyType

//  GL_COLOR                                                                 = 0x1800, // reuse Buffer, decimal value: 6144
    GL_COLOR_EXT                                                             = 0x1800, // decimal value: 6144
//  GL_DEPTH                                                                 = 0x1801, // reuse Buffer, decimal value: 6145
    GL_DEPTH_EXT                                                             = 0x1801, // decimal value: 6145
//  GL_STENCIL                                                               = 0x1802, // reuse Buffer, decimal value: 6146
    GL_STENCIL_EXT                                                           = 0x1802, // decimal value: 6146

    // PixelFormat

//  GL_UNSIGNED_SHORT                                                        = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_UNSIGNED_INT                                                          = 0x1405, // reuse ColorPointerType, decimal value: 5125
    GL_STENCIL_INDEX                                                         = 0x1901, // decimal value: 6401
//  GL_DEPTH_COMPONENT                                                       = 0x1902, // reuse InternalFormat, decimal value: 6402
//  GL_RED                                                                   = 0x1903, // reuse InternalFormat, decimal value: 6403
//  GL_RED_EXT                                                               = 0x1903, // reuse InternalFormat, decimal value: 6403
    GL_GREEN                                                                 = 0x1904, // decimal value: 6404
    GL_BLUE                                                                  = 0x1905, // decimal value: 6405
    GL_ALPHA                                                                 = 0x1906, // decimal value: 6406
//  GL_RGB                                                                   = 0x1907, // reuse InternalFormat, decimal value: 6407
//  GL_RGBA                                                                  = 0x1908, // reuse InternalFormat, decimal value: 6408
    GL_LUMINANCE                                                             = 0x1909, // decimal value: 6409
    GL_LUMINANCE_ALPHA                                                       = 0x190A, // decimal value: 6410

    // PixelStoreParameter

//  GL_UNPACK_ROW_LENGTH                                                     = 0x0CF2, // reuse GetPName, decimal value: 3314
    GL_UNPACK_ROW_LENGTH_EXT                                                 = 0x0CF2, // decimal value: 3314
//  GL_UNPACK_SKIP_ROWS                                                      = 0x0CF3, // reuse GetPName, decimal value: 3315
    GL_UNPACK_SKIP_ROWS_EXT                                                  = 0x0CF3, // decimal value: 3315
//  GL_UNPACK_SKIP_PIXELS                                                    = 0x0CF4, // reuse GetPName, decimal value: 3316
    GL_UNPACK_SKIP_PIXELS_EXT                                                = 0x0CF4, // decimal value: 3316
//  GL_UNPACK_ALIGNMENT                                                      = 0x0CF5, // reuse GetPName, decimal value: 3317
//  GL_PACK_ROW_LENGTH                                                       = 0x0D02, // reuse GetPName, decimal value: 3330
//  GL_PACK_SKIP_ROWS                                                        = 0x0D03, // reuse GetPName, decimal value: 3331
//  GL_PACK_SKIP_PIXELS                                                      = 0x0D04, // reuse GetPName, decimal value: 3332
//  GL_PACK_ALIGNMENT                                                        = 0x0D05, // reuse GetPName, decimal value: 3333
    GL_UNPACK_SKIP_IMAGES                                                    = 0x806D, // decimal value: 32877
    GL_UNPACK_IMAGE_HEIGHT                                                   = 0x806E, // decimal value: 32878

    // PixelTexGenMode

//  GL_NONE                                                                  = 0, // reuse ColorBuffer
//  GL_RGB                                                                   = 0x1907, // reuse InternalFormat, decimal value: 6407
//  GL_RGBA                                                                  = 0x1908, // reuse InternalFormat, decimal value: 6408
//  GL_LUMINANCE                                                             = 0x1909, // reuse PixelFormat, decimal value: 6409
//  GL_LUMINANCE_ALPHA                                                       = 0x190A, // reuse PixelFormat, decimal value: 6410

    // PixelType

//  GL_BYTE                                                                  = 0x1400, // reuse ColorPointerType, decimal value: 5120
//  GL_UNSIGNED_BYTE                                                         = 0x1401, // reuse ColorPointerType, decimal value: 5121
//  GL_SHORT                                                                 = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_UNSIGNED_SHORT                                                        = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_INT                                                                   = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_UNSIGNED_INT                                                          = 0x1405, // reuse ColorPointerType, decimal value: 5125
//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126
    GL_UNSIGNED_SHORT_4_4_4_4                                                = 0x8033, // decimal value: 32819
    GL_UNSIGNED_SHORT_5_5_5_1                                                = 0x8034, // decimal value: 32820

    // PrecisionType

    GL_LOW_FLOAT                                                             = 0x8DF0, // decimal value: 36336
    GL_MEDIUM_FLOAT                                                          = 0x8DF1, // decimal value: 36337
    GL_HIGH_FLOAT                                                            = 0x8DF2, // decimal value: 36338
    GL_LOW_INT                                                               = 0x8DF3, // decimal value: 36339
    GL_MEDIUM_INT                                                            = 0x8DF4, // decimal value: 36340
    GL_HIGH_INT                                                              = 0x8DF5, // decimal value: 36341

    // PrimitiveType

    GL_POINTS                                                                = 0x0000,
    GL_LINES                                                                 = 0x0001, // decimal value: 1
    GL_LINE_LOOP                                                             = 0x0002, // decimal value: 2
    GL_LINE_STRIP                                                            = 0x0003, // decimal value: 3
    GL_TRIANGLES                                                             = 0x0004, // decimal value: 4
    GL_TRIANGLE_STRIP                                                        = 0x0005, // decimal value: 5
    GL_TRIANGLE_FAN                                                          = 0x0006, // decimal value: 6
    GL_QUADS                                                                 = 0x0007, // decimal value: 7
    GL_QUADS_EXT                                                             = 0x0007, // decimal value: 7
    GL_LINES_ADJACENCY                                                       = 0x000A, // decimal value: 10
    GL_LINES_ADJACENCY_EXT                                                   = 0x000A, // decimal value: 10
    GL_LINE_STRIP_ADJACENCY                                                  = 0x000B, // decimal value: 11
    GL_LINE_STRIP_ADJACENCY_EXT                                              = 0x000B, // decimal value: 11
    GL_TRIANGLES_ADJACENCY                                                   = 0x000C, // decimal value: 12
    GL_TRIANGLES_ADJACENCY_EXT                                               = 0x000C, // decimal value: 12
    GL_TRIANGLE_STRIP_ADJACENCY                                              = 0x000D, // decimal value: 13
    GL_TRIANGLE_STRIP_ADJACENCY_EXT                                          = 0x000D, // decimal value: 13
    GL_PATCHES                                                               = 0x000E, // decimal value: 14
    GL_PATCHES_EXT                                                           = 0x000E, // decimal value: 14

    // ProgramInterface

//  GL_TRANSFORM_FEEDBACK_BUFFER                                             = 0x8C8E, // reuse BufferStorageTarget, decimal value: 35982
    GL_UNIFORM                                                               = 0x92E1, // decimal value: 37601
    GL_UNIFORM_BLOCK                                                         = 0x92E2, // decimal value: 37602
    GL_PROGRAM_INPUT                                                         = 0x92E3, // decimal value: 37603
    GL_PROGRAM_OUTPUT                                                        = 0x92E4, // decimal value: 37604
    GL_BUFFER_VARIABLE                                                       = 0x92E5, // decimal value: 37605
    GL_SHADER_STORAGE_BLOCK                                                  = 0x92E6, // decimal value: 37606
    GL_TRANSFORM_FEEDBACK_VARYING                                            = 0x92F4, // decimal value: 37620

    // ProgramInterfacePName

    GL_ACTIVE_RESOURCES                                                      = 0x92F5, // decimal value: 37621
    GL_MAX_NAME_LENGTH                                                       = 0x92F6, // decimal value: 37622
    GL_MAX_NUM_ACTIVE_VARIABLES                                              = 0x92F7, // decimal value: 37623

    // ProgramParameterPName

//  GL_PROGRAM_BINARY_RETRIEVABLE_HINT                                       = 0x8257, // reuse HintTarget, decimal value: 33367
    GL_PROGRAM_SEPARABLE                                                     = 0x8258, // decimal value: 33368

    // ProgramPropertyARB

    GL_COMPUTE_WORK_GROUP_SIZE                                               = 0x8267, // decimal value: 33383
    GL_PROGRAM_BINARY_LENGTH                                                 = 0x8741, // decimal value: 34625
    GL_GEOMETRY_VERTICES_OUT                                                 = 0x8916, // decimal value: 35094
    GL_GEOMETRY_INPUT_TYPE                                                   = 0x8917, // decimal value: 35095
    GL_GEOMETRY_OUTPUT_TYPE                                                  = 0x8918, // decimal value: 35096
    GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH                                  = 0x8A35, // decimal value: 35381
    GL_ACTIVE_UNIFORM_BLOCKS                                                 = 0x8A36, // decimal value: 35382
    GL_DELETE_STATUS                                                         = 0x8B80, // decimal value: 35712
    GL_LINK_STATUS                                                           = 0x8B82, // decimal value: 35714
    GL_VALIDATE_STATUS                                                       = 0x8B83, // decimal value: 35715
//  GL_INFO_LOG_LENGTH                                                       = 0x8B84, // reuse PipelineParameterName, decimal value: 35716
    GL_ATTACHED_SHADERS                                                      = 0x8B85, // decimal value: 35717
    GL_ACTIVE_UNIFORMS                                                       = 0x8B86, // decimal value: 35718
    GL_ACTIVE_UNIFORM_MAX_LENGTH                                             = 0x8B87, // decimal value: 35719
    GL_ACTIVE_ATTRIBUTES                                                     = 0x8B89, // decimal value: 35721
    GL_ACTIVE_ATTRIBUTE_MAX_LENGTH                                           = 0x8B8A, // decimal value: 35722
    GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH                                 = 0x8C76, // decimal value: 35958
    GL_TRANSFORM_FEEDBACK_BUFFER_MODE                                        = 0x8C7F, // decimal value: 35967
    GL_TRANSFORM_FEEDBACK_VARYINGS                                           = 0x8C83, // decimal value: 35971
    GL_ACTIVE_ATOMIC_COUNTER_BUFFERS                                         = 0x92D9, // decimal value: 37593

    // QueryObjectParameterName

    GL_QUERY_RESULT                                                          = 0x8866, // decimal value: 34918
    GL_QUERY_RESULT_AVAILABLE                                                = 0x8867, // decimal value: 34919

    // QueryParameterName

    GL_CURRENT_QUERY                                                         = 0x8865, // decimal value: 34917

    // QueryTarget

    GL_ANY_SAMPLES_PASSED                                                    = 0x8C2F, // decimal value: 35887
    GL_PRIMITIVES_GENERATED                                                  = 0x8C87, // decimal value: 35975
    GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN                                 = 0x8C88, // decimal value: 35976
    GL_ANY_SAMPLES_PASSED_CONSERVATIVE                                       = 0x8D6A, // decimal value: 36202

    // ReadBufferMode

//  GL_FRONT                                                                 = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                                                  = 0x0405, // reuse ColorBuffer, decimal value: 1029

    // RenderbufferParameterName

    GL_RENDERBUFFER_SAMPLES                                                  = 0x8CAB, // decimal value: 36011
    GL_RENDERBUFFER_WIDTH                                                    = 0x8D42, // decimal value: 36162
    GL_RENDERBUFFER_HEIGHT                                                   = 0x8D43, // decimal value: 36163
    GL_RENDERBUFFER_INTERNAL_FORMAT                                          = 0x8D44, // decimal value: 36164
    GL_RENDERBUFFER_RED_SIZE                                                 = 0x8D50, // decimal value: 36176
    GL_RENDERBUFFER_GREEN_SIZE                                               = 0x8D51, // decimal value: 36177
    GL_RENDERBUFFER_BLUE_SIZE                                                = 0x8D52, // decimal value: 36178
    GL_RENDERBUFFER_ALPHA_SIZE                                               = 0x8D53, // decimal value: 36179
    GL_RENDERBUFFER_DEPTH_SIZE                                               = 0x8D54, // decimal value: 36180
    GL_RENDERBUFFER_STENCIL_SIZE                                             = 0x8D55, // decimal value: 36181

    // RenderbufferTarget

//  GL_RENDERBUFFER                                                          = 0x8D41, // reuse ObjectIdentifier, decimal value: 36161

    // SamplerParameterName

//  GL_TEXTURE_BORDER_COLOR                                                  = 0x1004, // reuse GetTextureParameter, decimal value: 4100
//  GL_TEXTURE_MAG_FILTER                                                    = 0x2800, // reuse GetTextureParameter, decimal value: 10240
//  GL_TEXTURE_MIN_FILTER                                                    = 0x2801, // reuse GetTextureParameter, decimal value: 10241
//  GL_TEXTURE_WRAP_S                                                        = 0x2802, // reuse GetTextureParameter, decimal value: 10242
//  GL_TEXTURE_WRAP_T                                                        = 0x2803, // reuse GetTextureParameter, decimal value: 10243
    GL_TEXTURE_WRAP_R                                                        = 0x8072, // decimal value: 32882
    GL_TEXTURE_MIN_LOD                                                       = 0x813A, // decimal value: 33082
    GL_TEXTURE_MAX_LOD                                                       = 0x813B, // decimal value: 33083
    GL_TEXTURE_COMPARE_MODE                                                  = 0x884C, // decimal value: 34892
    GL_TEXTURE_COMPARE_FUNC                                                  = 0x884D, // decimal value: 34893

    // SemaphoreParameterName

    GL_D3D12_FENCE_VALUE_EXT                                                 = 0x9595, // decimal value: 38293

    // ShaderParameterName

    GL_SHADER_TYPE                                                           = 0x8B4F, // decimal value: 35663
//  GL_DELETE_STATUS                                                         = 0x8B80, // reuse ProgramPropertyARB, decimal value: 35712
    GL_COMPILE_STATUS                                                        = 0x8B81, // decimal value: 35713
//  GL_INFO_LOG_LENGTH                                                       = 0x8B84, // reuse PipelineParameterName, decimal value: 35716
    GL_SHADER_SOURCE_LENGTH                                                  = 0x8B88, // decimal value: 35720

    // ShaderType

//  GL_FRAGMENT_SHADER                                                       = 0x8B30, // reuse PipelineParameterName, decimal value: 35632
    GL_FRAGMENT_SHADER_ARB                                                   = 0x8B30, // decimal value: 35632
//  GL_VERTEX_SHADER                                                         = 0x8B31, // reuse PipelineParameterName, decimal value: 35633
    GL_VERTEX_SHADER_ARB                                                     = 0x8B31, // decimal value: 35633
//  GL_GEOMETRY_SHADER                                                       = 0x8DD9, // reuse PipelineParameterName, decimal value: 36313
//  GL_TESS_EVALUATION_SHADER                                                = 0x8E87, // reuse PipelineParameterName, decimal value: 36487
//  GL_TESS_CONTROL_SHADER                                                   = 0x8E88, // reuse PipelineParameterName, decimal value: 36488
    GL_COMPUTE_SHADER                                                        = 0x91B9, // decimal value: 37305

    // StencilFaceDirection

//  GL_FRONT                                                                 = 0x0404, // reuse ColorBuffer, decimal value: 1028
//  GL_BACK                                                                  = 0x0405, // reuse ColorBuffer, decimal value: 1029
//  GL_FRONT_AND_BACK                                                        = 0x0408, // reuse ColorBuffer, decimal value: 1032

    // StencilFunction

//  GL_NEVER                                                                 = 0x0200, // reuse AlphaFunction, decimal value: 512
//  GL_LESS                                                                  = 0x0201, // reuse AlphaFunction, decimal value: 513
//  GL_EQUAL                                                                 = 0x0202, // reuse AlphaFunction, decimal value: 514
//  GL_LEQUAL                                                                = 0x0203, // reuse AlphaFunction, decimal value: 515
//  GL_GREATER                                                               = 0x0204, // reuse AlphaFunction, decimal value: 516
//  GL_NOTEQUAL                                                              = 0x0205, // reuse AlphaFunction, decimal value: 517
//  GL_GEQUAL                                                                = 0x0206, // reuse AlphaFunction, decimal value: 518
//  GL_ALWAYS                                                                = 0x0207, // reuse AlphaFunction, decimal value: 519

    // StencilOp

//  GL_ZERO                                                                  = 0, // reuse BlendingFactor
//  GL_INVERT                                                                = 0x150A, // reuse LogicOp, decimal value: 5386
    GL_KEEP                                                                  = 0x1E00, // decimal value: 7680
//  GL_REPLACE                                                               = 0x1E01, // reuse LightEnvModeSGIX, decimal value: 7681
    GL_INCR                                                                  = 0x1E02, // decimal value: 7682
    GL_DECR                                                                  = 0x1E03, // decimal value: 7683

    // StringName

    GL_VENDOR                                                                = 0x1F00, // decimal value: 7936
    GL_RENDERER                                                              = 0x1F01, // decimal value: 7937
    GL_VERSION                                                               = 0x1F02, // decimal value: 7938
    GL_EXTENSIONS                                                            = 0x1F03, // decimal value: 7939
    GL_SHADING_LANGUAGE_VERSION                                              = 0x8B8C, // decimal value: 35724

    // SubroutineParameterName

    GL_UNIFORM_SIZE                                                          = 0x8A38, // decimal value: 35384
    GL_UNIFORM_NAME_LENGTH                                                   = 0x8A39, // decimal value: 35385

    // SyncCondition

    GL_SYNC_GPU_COMMANDS_COMPLETE                                            = 0x9117, // decimal value: 37143

    // SyncParameterName

    GL_OBJECT_TYPE                                                           = 0x9112, // decimal value: 37138
    GL_SYNC_CONDITION                                                        = 0x9113, // decimal value: 37139
    GL_SYNC_STATUS                                                           = 0x9114, // decimal value: 37140
    GL_SYNC_FLAGS                                                            = 0x9115, // decimal value: 37141

    // SyncStatus

    GL_ALREADY_SIGNALED                                                      = 0x911A, // decimal value: 37146
    GL_TIMEOUT_EXPIRED                                                       = 0x911B, // decimal value: 37147
    GL_CONDITION_SATISFIED                                                   = 0x911C, // decimal value: 37148
    GL_WAIT_FAILED                                                           = 0x911D, // decimal value: 37149

    // TexCoordPointerType

//  GL_SHORT                                                                 = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_INT                                                                   = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // TextureEnvMode

//  GL_BLEND                                                                 = 0x0BE2, // reuse EnableCap, decimal value: 3042

    // TextureLayout

    GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT                         = 0x9530, // decimal value: 38192
    GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT                         = 0x9531, // decimal value: 38193
    GL_LAYOUT_GENERAL_EXT                                                    = 0x958D, // decimal value: 38285
    GL_LAYOUT_COLOR_ATTACHMENT_EXT                                           = 0x958E, // decimal value: 38286
    GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT                                   = 0x958F, // decimal value: 38287
    GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT                                    = 0x9590, // decimal value: 38288
    GL_LAYOUT_SHADER_READ_ONLY_EXT                                           = 0x9591, // decimal value: 38289
    GL_LAYOUT_TRANSFER_SRC_EXT                                               = 0x9592, // decimal value: 38290
    GL_LAYOUT_TRANSFER_DST_EXT                                               = 0x9593, // decimal value: 38291

    // TextureMagFilter

//  GL_NEAREST                                                               = 0x2600, // reuse BlitFramebufferFilter, decimal value: 9728
//  GL_LINEAR                                                                = 0x2601, // reuse BlitFramebufferFilter, decimal value: 9729

    // TextureMinFilter

//  GL_NEAREST                                                               = 0x2600, // reuse BlitFramebufferFilter, decimal value: 9728
//  GL_LINEAR                                                                = 0x2601, // reuse BlitFramebufferFilter, decimal value: 9729
    GL_NEAREST_MIPMAP_NEAREST                                                = 0x2700, // decimal value: 9984
    GL_LINEAR_MIPMAP_NEAREST                                                 = 0x2701, // decimal value: 9985
    GL_NEAREST_MIPMAP_LINEAR                                                 = 0x2702, // decimal value: 9986
    GL_LINEAR_MIPMAP_LINEAR                                                  = 0x2703, // decimal value: 9987

    // TextureParameterName

//  GL_TEXTURE_WIDTH                                                         = 0x1000, // reuse GetTextureParameter, decimal value: 4096
//  GL_TEXTURE_HEIGHT                                                        = 0x1001, // reuse GetTextureParameter, decimal value: 4097
//  GL_TEXTURE_INTERNAL_FORMAT                                               = 0x1003, // reuse GetTextureParameter, decimal value: 4099
//  GL_TEXTURE_BORDER_COLOR                                                  = 0x1004, // reuse GetTextureParameter, decimal value: 4100
//  GL_TEXTURE_BORDER_COLOR_NV                                               = 0x1004, // reuse GetTextureParameter, decimal value: 4100
//  GL_TEXTURE_MAG_FILTER                                                    = 0x2800, // reuse GetTextureParameter, decimal value: 10240
//  GL_TEXTURE_MIN_FILTER                                                    = 0x2801, // reuse GetTextureParameter, decimal value: 10241
//  GL_TEXTURE_WRAP_S                                                        = 0x2802, // reuse GetTextureParameter, decimal value: 10242
//  GL_TEXTURE_WRAP_T                                                        = 0x2803, // reuse GetTextureParameter, decimal value: 10243
//  GL_TEXTURE_RED_SIZE                                                      = 0x805C, // reuse GetTextureParameter, decimal value: 32860
//  GL_TEXTURE_GREEN_SIZE                                                    = 0x805D, // reuse GetTextureParameter, decimal value: 32861
//  GL_TEXTURE_BLUE_SIZE                                                     = 0x805E, // reuse GetTextureParameter, decimal value: 32862
//  GL_TEXTURE_ALPHA_SIZE                                                    = 0x805F, // reuse GetTextureParameter, decimal value: 32863
//  GL_TEXTURE_WRAP_R                                                        = 0x8072, // reuse SamplerParameterName, decimal value: 32882
    GL_TEXTURE_WRAP_R_OES                                                    = 0x8072, // decimal value: 32882
//  GL_TEXTURE_MIN_LOD                                                       = 0x813A, // reuse SamplerParameterName, decimal value: 33082
//  GL_TEXTURE_MAX_LOD                                                       = 0x813B, // reuse SamplerParameterName, decimal value: 33083
    GL_TEXTURE_BASE_LEVEL                                                    = 0x813C, // decimal value: 33084
    GL_TEXTURE_MAX_LEVEL                                                     = 0x813D, // decimal value: 33085
//  GL_TEXTURE_COMPARE_MODE                                                  = 0x884C, // reuse SamplerParameterName, decimal value: 34892
//  GL_TEXTURE_COMPARE_FUNC                                                  = 0x884D, // reuse SamplerParameterName, decimal value: 34893
    GL_TEXTURE_SWIZZLE_R                                                     = 0x8E42, // decimal value: 36418
    GL_TEXTURE_SWIZZLE_G                                                     = 0x8E43, // decimal value: 36419
    GL_TEXTURE_SWIZZLE_B                                                     = 0x8E44, // decimal value: 36420
    GL_TEXTURE_SWIZZLE_A                                                     = 0x8E45, // decimal value: 36421
    GL_DEPTH_STENCIL_TEXTURE_MODE                                            = 0x90EA, // decimal value: 37098
    GL_TEXTURE_TILING_EXT                                                    = 0x9580, // decimal value: 38272

    // TextureTarget

//  GL_TEXTURE_2D                                                            = 0x0DE1, // reuse EnableCap, decimal value: 3553
    GL_TEXTURE_3D                                                            = 0x806F, // decimal value: 32879
    GL_TEXTURE_3D_OES                                                        = 0x806F, // decimal value: 32879
    GL_TEXTURE_CUBE_MAP                                                      = 0x8513, // decimal value: 34067
    GL_TEXTURE_CUBE_MAP_POSITIVE_X                                           = 0x8515, // decimal value: 34069
    GL_TEXTURE_CUBE_MAP_NEGATIVE_X                                           = 0x8516, // decimal value: 34070
    GL_TEXTURE_CUBE_MAP_POSITIVE_Y                                           = 0x8517, // decimal value: 34071
    GL_TEXTURE_CUBE_MAP_NEGATIVE_Y                                           = 0x8518, // decimal value: 34072
    GL_TEXTURE_CUBE_MAP_POSITIVE_Z                                           = 0x8519, // decimal value: 34073
    GL_TEXTURE_CUBE_MAP_NEGATIVE_Z                                           = 0x851A, // decimal value: 34074
    GL_TEXTURE_2D_ARRAY                                                      = 0x8C1A, // decimal value: 35866
    GL_TEXTURE_CUBE_MAP_ARRAY                                                = 0x9009, // decimal value: 36873
    GL_TEXTURE_CUBE_MAP_ARRAY_EXT                                            = 0x9009, // decimal value: 36873
    GL_TEXTURE_CUBE_MAP_ARRAY_OES                                            = 0x9009, // decimal value: 36873
    GL_TEXTURE_2D_MULTISAMPLE                                                = 0x9100, // decimal value: 37120
    GL_TEXTURE_2D_MULTISAMPLE_ARRAY                                          = 0x9102, // decimal value: 37122

    // TextureUnit

    GL_TEXTURE0                                                              = 0x84C0, // decimal value: 33984
    GL_TEXTURE1                                                              = 0x84C1, // decimal value: 33985
    GL_TEXTURE2                                                              = 0x84C2, // decimal value: 33986
    GL_TEXTURE3                                                              = 0x84C3, // decimal value: 33987
    GL_TEXTURE4                                                              = 0x84C4, // decimal value: 33988
    GL_TEXTURE5                                                              = 0x84C5, // decimal value: 33989
    GL_TEXTURE6                                                              = 0x84C6, // decimal value: 33990
    GL_TEXTURE7                                                              = 0x84C7, // decimal value: 33991
    GL_TEXTURE8                                                              = 0x84C8, // decimal value: 33992
    GL_TEXTURE9                                                              = 0x84C9, // decimal value: 33993
    GL_TEXTURE10                                                             = 0x84CA, // decimal value: 33994
    GL_TEXTURE11                                                             = 0x84CB, // decimal value: 33995
    GL_TEXTURE12                                                             = 0x84CC, // decimal value: 33996
    GL_TEXTURE13                                                             = 0x84CD, // decimal value: 33997
    GL_TEXTURE14                                                             = 0x84CE, // decimal value: 33998
    GL_TEXTURE15                                                             = 0x84CF, // decimal value: 33999
    GL_TEXTURE16                                                             = 0x84D0, // decimal value: 34000
    GL_TEXTURE17                                                             = 0x84D1, // decimal value: 34001
    GL_TEXTURE18                                                             = 0x84D2, // decimal value: 34002
    GL_TEXTURE19                                                             = 0x84D3, // decimal value: 34003
    GL_TEXTURE20                                                             = 0x84D4, // decimal value: 34004
    GL_TEXTURE21                                                             = 0x84D5, // decimal value: 34005
    GL_TEXTURE22                                                             = 0x84D6, // decimal value: 34006
    GL_TEXTURE23                                                             = 0x84D7, // decimal value: 34007
    GL_TEXTURE24                                                             = 0x84D8, // decimal value: 34008
    GL_TEXTURE25                                                             = 0x84D9, // decimal value: 34009
    GL_TEXTURE26                                                             = 0x84DA, // decimal value: 34010
    GL_TEXTURE27                                                             = 0x84DB, // decimal value: 34011
    GL_TEXTURE28                                                             = 0x84DC, // decimal value: 34012
    GL_TEXTURE29                                                             = 0x84DD, // decimal value: 34013
    GL_TEXTURE30                                                             = 0x84DE, // decimal value: 34014
    GL_TEXTURE31                                                             = 0x84DF, // decimal value: 34015

    // TextureWrapMode

    GL_REPEAT                                                                = 0x2901, // decimal value: 10497
    GL_CLAMP_TO_BORDER                                                       = 0x812D, // decimal value: 33069
    GL_CLAMP_TO_BORDER_NV                                                    = 0x812D, // decimal value: 33069
    GL_CLAMP_TO_EDGE                                                         = 0x812F, // decimal value: 33071

    // TransformFeedbackPName

    GL_TRANSFORM_FEEDBACK_BUFFER_START                                       = 0x8C84, // decimal value: 35972
    GL_TRANSFORM_FEEDBACK_BUFFER_SIZE                                        = 0x8C85, // decimal value: 35973
    GL_TRANSFORM_FEEDBACK_BUFFER_BINDING                                     = 0x8C8F, // decimal value: 35983
    GL_TRANSFORM_FEEDBACK_PAUSED                                             = 0x8E23, // decimal value: 36387
    GL_TRANSFORM_FEEDBACK_ACTIVE                                             = 0x8E24, // decimal value: 36388

    // UniformBlockPName

    GL_UNIFORM_BLOCK_BINDING                                                 = 0x8A3F, // decimal value: 35391
    GL_UNIFORM_BLOCK_DATA_SIZE                                               = 0x8A40, // decimal value: 35392
    GL_UNIFORM_BLOCK_NAME_LENGTH                                             = 0x8A41, // decimal value: 35393
    GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS                                         = 0x8A42, // decimal value: 35394
    GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES                                  = 0x8A43, // decimal value: 35395
    GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER                             = 0x8A44, // decimal value: 35396
    GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER                           = 0x8A46, // decimal value: 35398

    // UniformPName

    GL_UNIFORM_TYPE                                                          = 0x8A37, // decimal value: 35383
//  GL_UNIFORM_SIZE                                                          = 0x8A38, // reuse SubroutineParameterName, decimal value: 35384
//  GL_UNIFORM_NAME_LENGTH                                                   = 0x8A39, // reuse SubroutineParameterName, decimal value: 35385
    GL_UNIFORM_BLOCK_INDEX                                                   = 0x8A3A, // decimal value: 35386
    GL_UNIFORM_OFFSET                                                        = 0x8A3B, // decimal value: 35387
    GL_UNIFORM_ARRAY_STRIDE                                                  = 0x8A3C, // decimal value: 35388
    GL_UNIFORM_MATRIX_STRIDE                                                 = 0x8A3D, // decimal value: 35389
    GL_UNIFORM_IS_ROW_MAJOR                                                  = 0x8A3E, // decimal value: 35390

    // VertexArrayPName

    GL_VERTEX_ATTRIB_RELATIVE_OFFSET                                         = 0x82D5, // decimal value: 33493
    GL_VERTEX_ATTRIB_ARRAY_ENABLED                                           = 0x8622, // decimal value: 34338
    GL_VERTEX_ATTRIB_ARRAY_SIZE                                              = 0x8623, // decimal value: 34339
    GL_VERTEX_ATTRIB_ARRAY_STRIDE                                            = 0x8624, // decimal value: 34340
    GL_VERTEX_ATTRIB_ARRAY_TYPE                                              = 0x8625, // decimal value: 34341
    GL_VERTEX_ATTRIB_ARRAY_NORMALIZED                                        = 0x886A, // decimal value: 34922
    GL_VERTEX_ATTRIB_ARRAY_INTEGER                                           = 0x88FD, // decimal value: 35069
    GL_VERTEX_ATTRIB_ARRAY_DIVISOR                                           = 0x88FE, // decimal value: 35070

    // VertexAttribEnum

//  GL_VERTEX_ATTRIB_ARRAY_ENABLED                                           = 0x8622, // reuse VertexArrayPName, decimal value: 34338
//  GL_VERTEX_ATTRIB_ARRAY_SIZE                                              = 0x8623, // reuse VertexArrayPName, decimal value: 34339
//  GL_VERTEX_ATTRIB_ARRAY_STRIDE                                            = 0x8624, // reuse VertexArrayPName, decimal value: 34340
//  GL_VERTEX_ATTRIB_ARRAY_TYPE                                              = 0x8625, // reuse VertexArrayPName, decimal value: 34341
    GL_CURRENT_VERTEX_ATTRIB                                                 = 0x8626, // decimal value: 34342
//  GL_VERTEX_ATTRIB_ARRAY_NORMALIZED                                        = 0x886A, // reuse VertexArrayPName, decimal value: 34922
    GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING                                    = 0x889F, // decimal value: 34975
//  GL_VERTEX_ATTRIB_ARRAY_INTEGER                                           = 0x88FD, // reuse VertexArrayPName, decimal value: 35069
//  GL_VERTEX_ATTRIB_ARRAY_DIVISOR                                           = 0x88FE, // reuse VertexArrayPName, decimal value: 35070

    // VertexAttribPointerType

//  GL_BYTE                                                                  = 0x1400, // reuse ColorPointerType, decimal value: 5120
//  GL_UNSIGNED_BYTE                                                         = 0x1401, // reuse ColorPointerType, decimal value: 5121
//  GL_SHORT                                                                 = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_UNSIGNED_SHORT                                                        = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_INT                                                                   = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_UNSIGNED_INT                                                          = 0x1405, // reuse ColorPointerType, decimal value: 5125
//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126
    GL_HALF_FLOAT                                                            = 0x140B, // decimal value: 5131
    GL_FIXED                                                                 = 0x140C, // decimal value: 5132
    GL_UNSIGNED_INT_2_10_10_10_REV                                           = 0x8368, // decimal value: 33640
    GL_UNSIGNED_INT_10F_11F_11F_REV                                          = 0x8C3B, // decimal value: 35899
    GL_INT_2_10_10_10_REV                                                    = 0x8D9F, // decimal value: 36255

    // VertexAttribType

//  GL_BYTE                                                                  = 0x1400, // reuse ColorPointerType, decimal value: 5120
//  GL_UNSIGNED_BYTE                                                         = 0x1401, // reuse ColorPointerType, decimal value: 5121
//  GL_SHORT                                                                 = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_UNSIGNED_SHORT                                                        = 0x1403, // reuse ColorPointerType, decimal value: 5123
//  GL_INT                                                                   = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_UNSIGNED_INT                                                          = 0x1405, // reuse ColorPointerType, decimal value: 5125
//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126
//  GL_HALF_FLOAT                                                            = 0x140B, // reuse VertexAttribPointerType, decimal value: 5131
//  GL_FIXED                                                                 = 0x140C, // reuse VertexAttribPointerType, decimal value: 5132
//  GL_UNSIGNED_INT_2_10_10_10_REV                                           = 0x8368, // reuse VertexAttribPointerType, decimal value: 33640
//  GL_UNSIGNED_INT_10F_11F_11F_REV                                          = 0x8C3B, // reuse VertexAttribPointerType, decimal value: 35899
//  GL_INT_2_10_10_10_REV                                                    = 0x8D9F, // reuse VertexAttribPointerType, decimal value: 36255

    // VertexBufferObjectParameter

    GL_BUFFER_SIZE                                                           = 0x8764, // decimal value: 34660
    GL_BUFFER_USAGE                                                          = 0x8765, // decimal value: 34661
    GL_BUFFER_MAPPED                                                         = 0x88BC, // decimal value: 35004
    GL_BUFFER_ACCESS_FLAGS                                                   = 0x911F, // decimal value: 37151
    GL_BUFFER_MAP_LENGTH                                                     = 0x9120, // decimal value: 37152
    GL_BUFFER_MAP_OFFSET                                                     = 0x9121, // decimal value: 37153

    // VertexBufferObjectUsage

//  GL_STREAM_DRAW                                                           = 0x88E0, // reuse BufferUsageARB, decimal value: 35040
//  GL_STREAM_READ                                                           = 0x88E1, // reuse BufferUsageARB, decimal value: 35041
//  GL_STREAM_COPY                                                           = 0x88E2, // reuse BufferUsageARB, decimal value: 35042
//  GL_STATIC_DRAW                                                           = 0x88E4, // reuse BufferUsageARB, decimal value: 35044
//  GL_STATIC_READ                                                           = 0x88E5, // reuse BufferUsageARB, decimal value: 35045
//  GL_STATIC_COPY                                                           = 0x88E6, // reuse BufferUsageARB, decimal value: 35046
//  GL_DYNAMIC_DRAW                                                          = 0x88E8, // reuse BufferUsageARB, decimal value: 35048
//  GL_DYNAMIC_READ                                                          = 0x88E9, // reuse BufferUsageARB, decimal value: 35049
//  GL_DYNAMIC_COPY                                                          = 0x88EA, // reuse BufferUsageARB, decimal value: 35050

    // VertexPointerType

//  GL_SHORT                                                                 = 0x1402, // reuse ColorPointerType, decimal value: 5122
//  GL_INT                                                                   = 0x1404, // reuse ColorPointerType, decimal value: 5124
//  GL_FLOAT                                                                 = 0x1406, // reuse ColorPointerType, decimal value: 5126

    // VertexProvokingMode

    GL_FIRST_VERTEX_CONVENTION                                               = 0x8E4D, // decimal value: 36429
    GL_LAST_VERTEX_CONVENTION                                                = 0x8E4E, // decimal value: 36430

    // __UNGROUPED__

    GL_CLOSE_PATH_NV                                                         = 0x00,
    GL_QUADS_OES                                                             = 0x0007, // decimal value: 7
    GL_LINES_ADJACENCY_OES                                                   = 0x000A, // decimal value: 10
    GL_LINE_STRIP_ADJACENCY_OES                                              = 0x000B, // decimal value: 11
    GL_TRIANGLES_ADJACENCY_OES                                               = 0x000C, // decimal value: 12
    GL_TRIANGLE_STRIP_ADJACENCY_OES                                          = 0x000D, // decimal value: 13
    GL_PATCHES_OES                                                           = 0x000E, // decimal value: 14
    GL_MOVE_TO_NV                                                            = 0x02, // decimal value: 2
    GL_RELATIVE_MOVE_TO_NV                                                   = 0x03, // decimal value: 3
    GL_SRC_ALPHA_SATURATE_EXT                                                = 0x0308, // decimal value: 776
    GL_LINE_TO_NV                                                            = 0x04, // decimal value: 4
    GL_RELATIVE_LINE_TO_NV                                                   = 0x05, // decimal value: 5
    GL_CONTEXT_LOST                                                          = 0x0507, // decimal value: 1287
    GL_HORIZONTAL_LINE_TO_NV                                                 = 0x06, // decimal value: 6
    GL_RELATIVE_HORIZONTAL_LINE_TO_NV                                        = 0x07, // decimal value: 7
    GL_VERTICAL_LINE_TO_NV                                                   = 0x08, // decimal value: 8
    GL_RELATIVE_VERTICAL_LINE_TO_NV                                          = 0x09, // decimal value: 9
    GL_QUADRATIC_CURVE_TO_NV                                                 = 0x0A, // decimal value: 10
    GL_RELATIVE_QUADRATIC_CURVE_TO_NV                                        = 0x0B, // decimal value: 11
    GL_POLYGON_MODE_NV                                                       = 0x0B40, // decimal value: 2880
    GL_PATH_MODELVIEW_STACK_DEPTH_NV                                         = 0x0BA3, // decimal value: 2979
    GL_PATH_PROJECTION_STACK_DEPTH_NV                                        = 0x0BA4, // decimal value: 2980
    GL_PATH_MODELVIEW_MATRIX_NV                                              = 0x0BA6, // decimal value: 2982
    GL_PATH_PROJECTION_MATRIX_NV                                             = 0x0BA7, // decimal value: 2983
    GL_CUBIC_CURVE_TO_NV                                                     = 0x0C, // decimal value: 12
    GL_RELATIVE_CUBIC_CURVE_TO_NV                                            = 0x0D, // decimal value: 13
    GL_MAX_CLIP_DISTANCES_APPLE                                              = 0x0D32, // decimal value: 3378
    GL_MAX_CLIP_DISTANCES_EXT                                                = 0x0D32, // decimal value: 3378
    GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV                                     = 0x0D36, // decimal value: 3382
    GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV                                    = 0x0D38, // decimal value: 3384
    GL_SMOOTH_QUADRATIC_CURVE_TO_NV                                          = 0x0E, // decimal value: 14
    GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV                                 = 0x0F, // decimal value: 15
    GL_SMOOTH_CUBIC_CURVE_TO_NV                                              = 0x10, // decimal value: 16
    GL_TEXTURE_BORDER_COLOR_EXT                                              = 0x1004, // decimal value: 4100
    GL_TEXTURE_BORDER_COLOR_OES                                              = 0x1004, // decimal value: 4100
    GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV                                     = 0x11, // decimal value: 17
    GL_SMALL_CCW_ARC_TO_NV                                                   = 0x12, // decimal value: 18
    GL_RELATIVE_SMALL_CCW_ARC_TO_NV                                          = 0x13, // decimal value: 19
    GL_SMALL_CW_ARC_TO_NV                                                    = 0x14, // decimal value: 20
    GL_INT64_NV                                                              = 0x140E, // decimal value: 5134
    GL_UNSIGNED_INT64_NV                                                     = 0x140F, // decimal value: 5135
    GL_RELATIVE_SMALL_CW_ARC_TO_NV                                           = 0x15, // decimal value: 21
    GL_XOR_NV                                                                = 0x1506, // decimal value: 5382
    GL_LARGE_CCW_ARC_TO_NV                                                   = 0x16, // decimal value: 22
    GL_RELATIVE_LARGE_CCW_ARC_TO_NV                                          = 0x17, // decimal value: 23
    GL_PATH_MODELVIEW_NV                                                     = 0x1700, // decimal value: 5888
    GL_PATH_PROJECTION_NV                                                    = 0x1701, // decimal value: 5889
    GL_LARGE_CW_ARC_TO_NV                                                    = 0x18, // decimal value: 24
    GL_RELATIVE_LARGE_CW_ARC_TO_NV                                           = 0x19, // decimal value: 25
    GL_STENCIL_INDEX_OES                                                     = 0x1901, // decimal value: 6401
    GL_RED_NV                                                                = 0x1903, // decimal value: 6403
    GL_GREEN_NV                                                              = 0x1904, // decimal value: 6404
    GL_BLUE_NV                                                               = 0x1905, // decimal value: 6405
    GL_CONIC_CURVE_TO_NV                                                     = 0x1A, // decimal value: 26
    GL_RELATIVE_CONIC_CURVE_TO_NV                                            = 0x1B, // decimal value: 27
    GL_POINT_NV                                                              = 0x1B00, // decimal value: 6912
    GL_LINE_NV                                                               = 0x1B01, // decimal value: 6913
    GL_FILL_NV                                                               = 0x1B02, // decimal value: 6914
    GL_POLYGON_OFFSET_POINT_NV                                               = 0x2A01, // decimal value: 10753
    GL_POLYGON_OFFSET_LINE_NV                                                = 0x2A02, // decimal value: 10754
    GL_CLIP_DISTANCE0_APPLE                                                  = 0x3000, // decimal value: 12288
    GL_CLIP_DISTANCE0_EXT                                                    = 0x3000, // decimal value: 12288
    GL_CLIP_DISTANCE1_APPLE                                                  = 0x3001, // decimal value: 12289
    GL_CLIP_DISTANCE1_EXT                                                    = 0x3001, // decimal value: 12289
    GL_CLIP_DISTANCE2_APPLE                                                  = 0x3002, // decimal value: 12290
    GL_CLIP_DISTANCE2_EXT                                                    = 0x3002, // decimal value: 12290
    GL_CLIP_DISTANCE3_APPLE                                                  = 0x3003, // decimal value: 12291
    GL_CLIP_DISTANCE3_EXT                                                    = 0x3003, // decimal value: 12291
    GL_CLIP_DISTANCE4_APPLE                                                  = 0x3004, // decimal value: 12292
    GL_CLIP_DISTANCE4_EXT                                                    = 0x3004, // decimal value: 12292
    GL_CLIP_DISTANCE5_APPLE                                                  = 0x3005, // decimal value: 12293
    GL_CLIP_DISTANCE5_EXT                                                    = 0x3005, // decimal value: 12293
    GL_CLIP_DISTANCE6_APPLE                                                  = 0x3006, // decimal value: 12294
    GL_CLIP_DISTANCE6_EXT                                                    = 0x3006, // decimal value: 12294
    GL_CLIP_DISTANCE7_APPLE                                                  = 0x3007, // decimal value: 12295
    GL_CLIP_DISTANCE7_EXT                                                    = 0x3007, // decimal value: 12295
    GL_BLEND_COLOR                                                           = 0x8005, // decimal value: 32773
    GL_MIN                                                                   = 0x8007, // decimal value: 32775
    GL_MAX                                                                   = 0x8008, // decimal value: 32776
    GL_BLEND_EQUATION                                                        = 0x8009, // decimal value: 32777
    GL_BLEND_EQUATION_RGB                                                    = 0x8009, // decimal value: 32777
    GL_ALPHA8_EXT                                                            = 0x803C, // decimal value: 32828
    GL_ALPHA8_OES                                                            = 0x803C, // decimal value: 32828
    GL_LUMINANCE8_EXT                                                        = 0x8040, // decimal value: 32832
    GL_LUMINANCE8_OES                                                        = 0x8040, // decimal value: 32832
    GL_LUMINANCE4_ALPHA4_OES                                                 = 0x8043, // decimal value: 32835
    GL_LUMINANCE8_ALPHA8_EXT                                                 = 0x8045, // decimal value: 32837
    GL_LUMINANCE8_ALPHA8_OES                                                 = 0x8045, // decimal value: 32837
    GL_TEXTURE_BINDING_3D_OES                                                = 0x806A, // decimal value: 32874
    GL_TEXTURE_DEPTH                                                         = 0x8071, // decimal value: 32881
    GL_MAX_3D_TEXTURE_SIZE                                                   = 0x8073, // decimal value: 32883
    GL_MAX_3D_TEXTURE_SIZE_OES                                               = 0x8073, // decimal value: 32883
    GL_MULTISAMPLE_EXT                                                       = 0x809D, // decimal value: 32925
    GL_SAMPLE_ALPHA_TO_COVERAGE                                              = 0x809E, // decimal value: 32926
    GL_SAMPLE_ALPHA_TO_ONE_EXT                                               = 0x809F, // decimal value: 32927
    GL_SAMPLE_COVERAGE                                                       = 0x80A0, // decimal value: 32928
    GL_SAMPLE_COVERAGE_VALUE                                                 = 0x80AA, // decimal value: 32938
    GL_SAMPLE_COVERAGE_INVERT                                                = 0x80AB, // decimal value: 32939
    GL_BLEND_DST_RGB                                                         = 0x80C8, // decimal value: 32968
    GL_BLEND_SRC_RGB                                                         = 0x80C9, // decimal value: 32969
    GL_BLEND_DST_ALPHA                                                       = 0x80CA, // decimal value: 32970
    GL_BLEND_SRC_ALPHA                                                       = 0x80CB, // decimal value: 32971
    GL_BGRA_EXT                                                              = 0x80E1, // decimal value: 32993
    GL_BGRA_IMG                                                              = 0x80E1, // decimal value: 32993
    GL_MAX_ELEMENTS_VERTICES                                                 = 0x80E8, // decimal value: 33000
    GL_MAX_ELEMENTS_INDICES                                                  = 0x80E9, // decimal value: 33001
    GL_CLAMP_TO_BORDER_EXT                                                   = 0x812D, // decimal value: 33069
    GL_CLAMP_TO_BORDER_OES                                                   = 0x812D, // decimal value: 33069
    GL_TEXTURE_MAX_LEVEL_APPLE                                               = 0x813D, // decimal value: 33085
    GL_DEPTH_COMPONENT24                                                     = 0x81A6, // decimal value: 33190
    GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT                             = 0x8210, // decimal value: 33296
    GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT                             = 0x8211, // decimal value: 33297
    GL_FRAMEBUFFER_DEFAULT                                                   = 0x8218, // decimal value: 33304
    GL_FRAMEBUFFER_UNDEFINED_OES                                             = 0x8219, // decimal value: 33305
    GL_DEPTH_STENCIL_ATTACHMENT                                              = 0x821A, // decimal value: 33306
    GL_MAJOR_VERSION                                                         = 0x821B, // decimal value: 33307
    GL_MINOR_VERSION                                                         = 0x821C, // decimal value: 33308
    GL_NUM_EXTENSIONS                                                        = 0x821D, // decimal value: 33309
    GL_CONTEXT_FLAGS                                                         = 0x821E, // decimal value: 33310
    GL_BUFFER_IMMUTABLE_STORAGE_EXT                                          = 0x821F, // decimal value: 33311
    GL_BUFFER_STORAGE_FLAGS_EXT                                              = 0x8220, // decimal value: 33312
    GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED                               = 0x8221, // decimal value: 33313
    GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES                           = 0x8221, // decimal value: 33313
    GL_RG_EXT                                                                = 0x8227, // decimal value: 33319
    GL_RG_INTEGER                                                            = 0x8228, // decimal value: 33320
    GL_DEBUG_OUTPUT_SYNCHRONOUS                                              = 0x8242, // decimal value: 33346
    GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH                                      = 0x8243, // decimal value: 33347
    GL_LOSE_CONTEXT_ON_RESET                                                 = 0x8252, // decimal value: 33362
    GL_LOSE_CONTEXT_ON_RESET_EXT                                             = 0x8252, // decimal value: 33362
    GL_GUILTY_CONTEXT_RESET_EXT                                              = 0x8253, // decimal value: 33363
    GL_INNOCENT_CONTEXT_RESET_EXT                                            = 0x8254, // decimal value: 33364
    GL_UNKNOWN_CONTEXT_RESET_EXT                                             = 0x8255, // decimal value: 33365
    GL_RESET_NOTIFICATION_STRATEGY                                           = 0x8256, // decimal value: 33366
    GL_RESET_NOTIFICATION_STRATEGY_EXT                                       = 0x8256, // decimal value: 33366
    GL_PROGRAM_PIPELINE_BINDING                                              = 0x825A, // decimal value: 33370
    GL_MAX_VIEWPORTS_NV                                                      = 0x825B, // decimal value: 33371
    GL_MAX_VIEWPORTS_OES                                                     = 0x825B, // decimal value: 33371
    GL_VIEWPORT_SUBPIXEL_BITS_NV                                             = 0x825C, // decimal value: 33372
    GL_VIEWPORT_SUBPIXEL_BITS_OES                                            = 0x825C, // decimal value: 33372
    GL_VIEWPORT_BOUNDS_RANGE_NV                                              = 0x825D, // decimal value: 33373
    GL_VIEWPORT_BOUNDS_RANGE_OES                                             = 0x825D, // decimal value: 33373
    GL_LAYER_PROVOKING_VERTEX                                                = 0x825E, // decimal value: 33374
    GL_LAYER_PROVOKING_VERTEX_EXT                                            = 0x825E, // decimal value: 33374
    GL_LAYER_PROVOKING_VERTEX_OES                                            = 0x825E, // decimal value: 33374
    GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV                                    = 0x825F, // decimal value: 33375
    GL_VIEWPORT_INDEX_PROVOKING_VERTEX_OES                                   = 0x825F, // decimal value: 33375
    GL_UNDEFINED_VERTEX                                                      = 0x8260, // decimal value: 33376
    GL_UNDEFINED_VERTEX_EXT                                                  = 0x8260, // decimal value: 33376
    GL_UNDEFINED_VERTEX_OES                                                  = 0x8260, // decimal value: 33376
    GL_NO_RESET_NOTIFICATION                                                 = 0x8261, // decimal value: 33377
    GL_NO_RESET_NOTIFICATION_EXT                                             = 0x8261, // decimal value: 33377
    GL_MAX_COMPUTE_SHARED_MEMORY_SIZE                                        = 0x8262, // decimal value: 33378
    GL_MAX_COMPUTE_UNIFORM_COMPONENTS                                        = 0x8263, // decimal value: 33379
    GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS                                    = 0x8264, // decimal value: 33380
    GL_MAX_COMPUTE_ATOMIC_COUNTERS                                           = 0x8265, // decimal value: 33381
    GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS                               = 0x8266, // decimal value: 33382
    GL_DEBUG_SEVERITY_NOTIFICATION                                           = 0x826B, // decimal value: 33387
    GL_MAX_DEBUG_GROUP_STACK_DEPTH                                           = 0x826C, // decimal value: 33388
    GL_DEBUG_GROUP_STACK_DEPTH                                               = 0x826D, // decimal value: 33389
    GL_MAX_UNIFORM_LOCATIONS                                                 = 0x826E, // decimal value: 33390
    GL_VERTEX_ATTRIB_BINDING                                                 = 0x82D4, // decimal value: 33492
    GL_VERTEX_BINDING_DIVISOR                                                = 0x82D6, // decimal value: 33494
    GL_VERTEX_BINDING_OFFSET                                                 = 0x82D7, // decimal value: 33495
    GL_VERTEX_BINDING_STRIDE                                                 = 0x82D8, // decimal value: 33496
    GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET                                     = 0x82D9, // decimal value: 33497
    GL_MAX_VERTEX_ATTRIB_BINDINGS                                            = 0x82DA, // decimal value: 33498
    GL_TEXTURE_VIEW_MIN_LEVEL_EXT                                            = 0x82DB, // decimal value: 33499
    GL_TEXTURE_VIEW_MIN_LEVEL_OES                                            = 0x82DB, // decimal value: 33499
    GL_TEXTURE_VIEW_NUM_LEVELS_EXT                                           = 0x82DC, // decimal value: 33500
    GL_TEXTURE_VIEW_NUM_LEVELS_OES                                           = 0x82DC, // decimal value: 33500
    GL_TEXTURE_VIEW_MIN_LAYER_EXT                                            = 0x82DD, // decimal value: 33501
    GL_TEXTURE_VIEW_MIN_LAYER_OES                                            = 0x82DD, // decimal value: 33501
    GL_TEXTURE_VIEW_NUM_LAYERS_EXT                                           = 0x82DE, // decimal value: 33502
    GL_TEXTURE_VIEW_NUM_LAYERS_OES                                           = 0x82DE, // decimal value: 33502
    GL_TEXTURE_IMMUTABLE_LEVELS                                              = 0x82DF, // decimal value: 33503
    GL_MAX_VERTEX_ATTRIB_STRIDE                                              = 0x82E5, // decimal value: 33509
    GL_MAX_LABEL_LENGTH                                                      = 0x82E8, // decimal value: 33512
    GL_MAX_CULL_DISTANCES_EXT                                                = 0x82F9, // decimal value: 33529
    GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT                              = 0x82FA, // decimal value: 33530
    GL_UNSIGNED_SHORT_5_6_5                                                  = 0x8363, // decimal value: 33635
    GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT                                        = 0x8365, // decimal value: 33637
    GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG                                        = 0x8365, // decimal value: 33637
    GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT                                        = 0x8366, // decimal value: 33638
    GL_UNSIGNED_INT_2_10_10_10_REV_EXT                                       = 0x8368, // decimal value: 33640
    GL_MIRRORED_REPEAT                                                       = 0x8370, // decimal value: 33648
    GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE                                       = 0x83F2, // decimal value: 33778
    GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE                                       = 0x83F3, // decimal value: 33779
    GL_PERFQUERY_DONOT_FLUSH_INTEL                                           = 0x83F9, // decimal value: 33785
    GL_PERFQUERY_FLUSH_INTEL                                                 = 0x83FA, // decimal value: 33786
    GL_PERFQUERY_WAIT_INTEL                                                  = 0x83FB, // decimal value: 33787
    GL_BLACKHOLE_RENDER_INTEL                                                = 0x83FC, // decimal value: 33788
    GL_CONSERVATIVE_RASTERIZATION_INTEL                                      = 0x83FE, // decimal value: 33790
    GL_ACTIVE_TEXTURE                                                        = 0x84E0, // decimal value: 34016
    GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV                                    = 0x84E3, // decimal value: 34019
    GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV                                   = 0x84E4, // decimal value: 34020
    GL_MAX_RENDERBUFFER_SIZE                                                 = 0x84E8, // decimal value: 34024
    GL_ALL_COMPLETED_NV                                                      = 0x84F2, // decimal value: 34034
    GL_FENCE_STATUS_NV                                                       = 0x84F3, // decimal value: 34035
    GL_FENCE_CONDITION_NV                                                    = 0x84F4, // decimal value: 34036
    GL_UNSIGNED_INT_24_8                                                     = 0x84FA, // decimal value: 34042
    GL_UNSIGNED_INT_24_8_OES                                                 = 0x84FA, // decimal value: 34042
    GL_MAX_TEXTURE_LOD_BIAS                                                  = 0x84FD, // decimal value: 34045
    GL_TEXTURE_MAX_ANISOTROPY_EXT                                            = 0x84FE, // decimal value: 34046
    GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT                                        = 0x84FF, // decimal value: 34047
    GL_INCR_WRAP                                                             = 0x8507, // decimal value: 34055
    GL_DECR_WRAP                                                             = 0x8508, // decimal value: 34056
    GL_TEXTURE_BINDING_CUBE_MAP                                              = 0x8514, // decimal value: 34068
    GL_MAX_CUBE_MAP_TEXTURE_SIZE                                             = 0x851C, // decimal value: 34076
    GL_SRC1_ALPHA_EXT                                                        = 0x8589, // decimal value: 34185
    GL_VERTEX_ARRAY_BINDING                                                  = 0x85B5, // decimal value: 34229
    GL_VERTEX_ARRAY_BINDING_OES                                              = 0x85B5, // decimal value: 34229
    GL_UNSIGNED_SHORT_8_8_APPLE                                              = 0x85BA, // decimal value: 34234
    GL_UNSIGNED_SHORT_8_8_REV_APPLE                                          = 0x85BB, // decimal value: 34235
    GL_VERTEX_ATTRIB_ARRAY_POINTER                                           = 0x8645, // decimal value: 34373
    GL_NUM_COMPRESSED_TEXTURE_FORMATS                                        = 0x86A2, // decimal value: 34466
    GL_COMPRESSED_TEXTURE_FORMATS                                            = 0x86A3, // decimal value: 34467
    GL_Z400_BINARY_AMD                                                       = 0x8740, // decimal value: 34624
    GL_PROGRAM_BINARY_LENGTH_OES                                             = 0x8741, // decimal value: 34625
    GL_MIRROR_CLAMP_TO_EDGE_EXT                                              = 0x8743, // decimal value: 34627
    GL_PROGRAM_BINARY_FORMAT_MESA                                            = 0x875F, // decimal value: 34655
    GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD                                       = 0x87EE, // decimal value: 34798
    GL_3DC_X_AMD                                                             = 0x87F9, // decimal value: 34809
    GL_3DC_XY_AMD                                                            = 0x87FA, // decimal value: 34810
    GL_NUM_PROGRAM_BINARY_FORMATS                                            = 0x87FE, // decimal value: 34814
    GL_NUM_PROGRAM_BINARY_FORMATS_OES                                        = 0x87FE, // decimal value: 34814
    GL_PROGRAM_BINARY_FORMATS                                                = 0x87FF, // decimal value: 34815
    GL_PROGRAM_BINARY_FORMATS_OES                                            = 0x87FF, // decimal value: 34815
    GL_STENCIL_BACK_FUNC                                                     = 0x8800, // decimal value: 34816
    GL_STENCIL_BACK_FAIL                                                     = 0x8801, // decimal value: 34817
    GL_STENCIL_BACK_PASS_DEPTH_FAIL                                          = 0x8802, // decimal value: 34818
    GL_STENCIL_BACK_PASS_DEPTH_PASS                                          = 0x8803, // decimal value: 34819
    GL_RGB32F                                                                = 0x8815, // decimal value: 34837
    GL_RGB32F_EXT                                                            = 0x8815, // decimal value: 34837
    GL_ALPHA32F_EXT                                                          = 0x8816, // decimal value: 34838
    GL_LUMINANCE32F_EXT                                                      = 0x8818, // decimal value: 34840
    GL_LUMINANCE_ALPHA32F_EXT                                                = 0x8819, // decimal value: 34841
    GL_ALPHA16F_EXT                                                          = 0x881C, // decimal value: 34844
    GL_LUMINANCE16F_EXT                                                      = 0x881E, // decimal value: 34846
    GL_LUMINANCE_ALPHA16F_EXT                                                = 0x881F, // decimal value: 34847
    GL_WRITEONLY_RENDERING_QCOM                                              = 0x8823, // decimal value: 34851
    GL_MAX_DRAW_BUFFERS                                                      = 0x8824, // decimal value: 34852
    GL_MAX_DRAW_BUFFERS_EXT                                                  = 0x8824, // decimal value: 34852
    GL_MAX_DRAW_BUFFERS_NV                                                   = 0x8824, // decimal value: 34852
    GL_DRAW_BUFFER0                                                          = 0x8825, // decimal value: 34853
    GL_DRAW_BUFFER0_EXT                                                      = 0x8825, // decimal value: 34853
    GL_DRAW_BUFFER0_NV                                                       = 0x8825, // decimal value: 34853
    GL_DRAW_BUFFER1                                                          = 0x8826, // decimal value: 34854
    GL_DRAW_BUFFER1_EXT                                                      = 0x8826, // decimal value: 34854
    GL_DRAW_BUFFER1_NV                                                       = 0x8826, // decimal value: 34854
    GL_DRAW_BUFFER2                                                          = 0x8827, // decimal value: 34855
    GL_DRAW_BUFFER2_EXT                                                      = 0x8827, // decimal value: 34855
    GL_DRAW_BUFFER2_NV                                                       = 0x8827, // decimal value: 34855
    GL_DRAW_BUFFER3                                                          = 0x8828, // decimal value: 34856
    GL_DRAW_BUFFER3_EXT                                                      = 0x8828, // decimal value: 34856
    GL_DRAW_BUFFER3_NV                                                       = 0x8828, // decimal value: 34856
    GL_DRAW_BUFFER4                                                          = 0x8829, // decimal value: 34857
    GL_DRAW_BUFFER4_EXT                                                      = 0x8829, // decimal value: 34857
    GL_DRAW_BUFFER4_NV                                                       = 0x8829, // decimal value: 34857
    GL_DRAW_BUFFER5                                                          = 0x882A, // decimal value: 34858
    GL_DRAW_BUFFER5_EXT                                                      = 0x882A, // decimal value: 34858
    GL_DRAW_BUFFER5_NV                                                       = 0x882A, // decimal value: 34858
    GL_DRAW_BUFFER6                                                          = 0x882B, // decimal value: 34859
    GL_DRAW_BUFFER6_EXT                                                      = 0x882B, // decimal value: 34859
    GL_DRAW_BUFFER6_NV                                                       = 0x882B, // decimal value: 34859
    GL_DRAW_BUFFER7                                                          = 0x882C, // decimal value: 34860
    GL_DRAW_BUFFER7_EXT                                                      = 0x882C, // decimal value: 34860
    GL_DRAW_BUFFER7_NV                                                       = 0x882C, // decimal value: 34860
    GL_DRAW_BUFFER8                                                          = 0x882D, // decimal value: 34861
    GL_DRAW_BUFFER8_EXT                                                      = 0x882D, // decimal value: 34861
    GL_DRAW_BUFFER8_NV                                                       = 0x882D, // decimal value: 34861
    GL_DRAW_BUFFER9                                                          = 0x882E, // decimal value: 34862
    GL_DRAW_BUFFER9_EXT                                                      = 0x882E, // decimal value: 34862
    GL_DRAW_BUFFER9_NV                                                       = 0x882E, // decimal value: 34862
    GL_DRAW_BUFFER10                                                         = 0x882F, // decimal value: 34863
    GL_DRAW_BUFFER10_EXT                                                     = 0x882F, // decimal value: 34863
    GL_DRAW_BUFFER10_NV                                                      = 0x882F, // decimal value: 34863
    GL_DRAW_BUFFER11                                                         = 0x8830, // decimal value: 34864
    GL_DRAW_BUFFER11_EXT                                                     = 0x8830, // decimal value: 34864
    GL_DRAW_BUFFER11_NV                                                      = 0x8830, // decimal value: 34864
    GL_DRAW_BUFFER12                                                         = 0x8831, // decimal value: 34865
    GL_DRAW_BUFFER12_EXT                                                     = 0x8831, // decimal value: 34865
    GL_DRAW_BUFFER12_NV                                                      = 0x8831, // decimal value: 34865
    GL_DRAW_BUFFER13                                                         = 0x8832, // decimal value: 34866
    GL_DRAW_BUFFER13_EXT                                                     = 0x8832, // decimal value: 34866
    GL_DRAW_BUFFER13_NV                                                      = 0x8832, // decimal value: 34866
    GL_DRAW_BUFFER14                                                         = 0x8833, // decimal value: 34867
    GL_DRAW_BUFFER14_EXT                                                     = 0x8833, // decimal value: 34867
    GL_DRAW_BUFFER14_NV                                                      = 0x8833, // decimal value: 34867
    GL_DRAW_BUFFER15                                                         = 0x8834, // decimal value: 34868
    GL_DRAW_BUFFER15_EXT                                                     = 0x8834, // decimal value: 34868
    GL_DRAW_BUFFER15_NV                                                      = 0x8834, // decimal value: 34868
    GL_BLEND_EQUATION_ALPHA                                                  = 0x883D, // decimal value: 34877
    GL_TEXTURE_DEPTH_SIZE                                                    = 0x884A, // decimal value: 34890
    GL_TEXTURE_COMPARE_MODE_EXT                                              = 0x884C, // decimal value: 34892
    GL_TEXTURE_COMPARE_FUNC_EXT                                              = 0x884D, // decimal value: 34893
    GL_COMPARE_REF_TO_TEXTURE                                                = 0x884E, // decimal value: 34894
    GL_COMPARE_REF_TO_TEXTURE_EXT                                            = 0x884E, // decimal value: 34894
    GL_QUERY_COUNTER_BITS_EXT                                                = 0x8864, // decimal value: 34916
    GL_CURRENT_QUERY_EXT                                                     = 0x8865, // decimal value: 34917
    GL_QUERY_RESULT_EXT                                                      = 0x8866, // decimal value: 34918
    GL_QUERY_RESULT_AVAILABLE_EXT                                            = 0x8867, // decimal value: 34919
    GL_MAX_VERTEX_ATTRIBS                                                    = 0x8869, // decimal value: 34921
    GL_MAX_TESS_CONTROL_INPUT_COMPONENTS                                     = 0x886C, // decimal value: 34924
    GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT                                 = 0x886C, // decimal value: 34924
    GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES                                 = 0x886C, // decimal value: 34924
    GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS                                  = 0x886D, // decimal value: 34925
    GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT                              = 0x886D, // decimal value: 34925
    GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES                              = 0x886D, // decimal value: 34925
    GL_MAX_TEXTURE_IMAGE_UNITS                                               = 0x8872, // decimal value: 34930
    GL_GEOMETRY_SHADER_INVOCATIONS                                           = 0x887F, // decimal value: 34943
    GL_GEOMETRY_SHADER_INVOCATIONS_EXT                                       = 0x887F, // decimal value: 34943
    GL_GEOMETRY_SHADER_INVOCATIONS_OES                                       = 0x887F, // decimal value: 34943
    GL_ARRAY_BUFFER_BINDING                                                  = 0x8894, // decimal value: 34964
    GL_ELEMENT_ARRAY_BUFFER_BINDING                                          = 0x8895, // decimal value: 34965
    GL_WRITE_ONLY_OES                                                        = 0x88B9, // decimal value: 35001
    GL_BUFFER_ACCESS_OES                                                     = 0x88BB, // decimal value: 35003
    GL_BUFFER_MAPPED_OES                                                     = 0x88BC, // decimal value: 35004
    GL_BUFFER_MAP_POINTER                                                    = 0x88BD, // decimal value: 35005
    GL_BUFFER_MAP_POINTER_OES                                                = 0x88BD, // decimal value: 35005
    GL_TIME_ELAPSED_EXT                                                      = 0x88BF, // decimal value: 35007
    GL_PIXEL_PACK_BUFFER_NV                                                  = 0x88EB, // decimal value: 35051
    GL_PIXEL_UNPACK_BUFFER_NV                                                = 0x88EC, // decimal value: 35052
    GL_PIXEL_PACK_BUFFER_BINDING                                             = 0x88ED, // decimal value: 35053
    GL_PIXEL_PACK_BUFFER_BINDING_NV                                          = 0x88ED, // decimal value: 35053
    GL_ETC1_SRGB8_NV                                                         = 0x88EE, // decimal value: 35054
    GL_PIXEL_UNPACK_BUFFER_BINDING                                           = 0x88EF, // decimal value: 35055
    GL_PIXEL_UNPACK_BUFFER_BINDING_NV                                        = 0x88EF, // decimal value: 35055
    GL_TEXTURE_STENCIL_SIZE                                                  = 0x88F1, // decimal value: 35057
    GL_SRC1_COLOR_EXT                                                        = 0x88F9, // decimal value: 35065
    GL_ONE_MINUS_SRC1_COLOR_EXT                                              = 0x88FA, // decimal value: 35066
    GL_ONE_MINUS_SRC1_ALPHA_EXT                                              = 0x88FB, // decimal value: 35067
    GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT                                      = 0x88FC, // decimal value: 35068
    GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE                                     = 0x88FE, // decimal value: 35070
    GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT                                       = 0x88FE, // decimal value: 35070
    GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV                                        = 0x88FE, // decimal value: 35070
    GL_MAX_ARRAY_TEXTURE_LAYERS                                              = 0x88FF, // decimal value: 35071
    GL_MIN_PROGRAM_TEXEL_OFFSET                                              = 0x8904, // decimal value: 35076
    GL_MAX_PROGRAM_TEXEL_OFFSET                                              = 0x8905, // decimal value: 35077
    GL_GEOMETRY_LINKED_VERTICES_OUT_EXT                                      = 0x8916, // decimal value: 35094
    GL_GEOMETRY_LINKED_VERTICES_OUT_OES                                      = 0x8916, // decimal value: 35094
    GL_GEOMETRY_LINKED_INPUT_TYPE_EXT                                        = 0x8917, // decimal value: 35095
    GL_GEOMETRY_LINKED_INPUT_TYPE_OES                                        = 0x8917, // decimal value: 35095
    GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT                                       = 0x8918, // decimal value: 35096
    GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES                                       = 0x8918, // decimal value: 35096
    GL_SAMPLER_BINDING                                                       = 0x8919, // decimal value: 35097
    GL_RGB_422_APPLE                                                         = 0x8A1F, // decimal value: 35359
    GL_UNIFORM_BUFFER_BINDING                                                = 0x8A28, // decimal value: 35368
    GL_UNIFORM_BUFFER_START                                                  = 0x8A29, // decimal value: 35369
    GL_UNIFORM_BUFFER_SIZE                                                   = 0x8A2A, // decimal value: 35370
    GL_MAX_VERTEX_UNIFORM_BLOCKS                                             = 0x8A2B, // decimal value: 35371
    GL_MAX_GEOMETRY_UNIFORM_BLOCKS                                           = 0x8A2C, // decimal value: 35372
    GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT                                       = 0x8A2C, // decimal value: 35372
    GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES                                       = 0x8A2C, // decimal value: 35372
    GL_MAX_FRAGMENT_UNIFORM_BLOCKS                                           = 0x8A2D, // decimal value: 35373
    GL_MAX_COMBINED_UNIFORM_BLOCKS                                           = 0x8A2E, // decimal value: 35374
    GL_MAX_UNIFORM_BUFFER_BINDINGS                                           = 0x8A2F, // decimal value: 35375
    GL_MAX_UNIFORM_BLOCK_SIZE                                                = 0x8A30, // decimal value: 35376
    GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS                                = 0x8A31, // decimal value: 35377
    GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS                              = 0x8A32, // decimal value: 35378
    GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT                          = 0x8A32, // decimal value: 35378
    GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES                          = 0x8A32, // decimal value: 35378
    GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS                              = 0x8A33, // decimal value: 35379
    GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT                                       = 0x8A34, // decimal value: 35380
    GL_TEXTURE_SRGB_DECODE_EXT                                               = 0x8A48, // decimal value: 35400
    GL_DECODE_EXT                                                            = 0x8A49, // decimal value: 35401
    GL_SKIP_DECODE_EXT                                                       = 0x8A4A, // decimal value: 35402
    GL_PROGRAM_PIPELINE_OBJECT_EXT                                           = 0x8A4F, // decimal value: 35407
    GL_RGB_RAW_422_APPLE                                                     = 0x8A51, // decimal value: 35409
    GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT                                  = 0x8A52, // decimal value: 35410
    GL_SYNC_OBJECT_APPLE                                                     = 0x8A53, // decimal value: 35411
    GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT                                      = 0x8A54, // decimal value: 35412
    GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT                                      = 0x8A55, // decimal value: 35413
    GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT                                = 0x8A56, // decimal value: 35414
    GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT                                = 0x8A57, // decimal value: 35415
    GL_PROGRAM_OBJECT_EXT                                                    = 0x8B40, // decimal value: 35648
    GL_SHADER_OBJECT_EXT                                                     = 0x8B48, // decimal value: 35656
    GL_MAX_FRAGMENT_UNIFORM_COMPONENTS                                       = 0x8B49, // decimal value: 35657
    GL_MAX_VERTEX_UNIFORM_COMPONENTS                                         = 0x8B4A, // decimal value: 35658
    GL_MAX_VARYING_COMPONENTS                                                = 0x8B4B, // decimal value: 35659
    GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS                                        = 0x8B4C, // decimal value: 35660
    GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS                                      = 0x8B4D, // decimal value: 35661
    GL_CURRENT_PROGRAM                                                       = 0x8B8D, // decimal value: 35725
    GL_PALETTE4_RGB8_OES                                                     = 0x8B90, // decimal value: 35728
    GL_PALETTE4_RGBA8_OES                                                    = 0x8B91, // decimal value: 35729
    GL_PALETTE4_R5_G6_B5_OES                                                 = 0x8B92, // decimal value: 35730
    GL_PALETTE4_RGBA4_OES                                                    = 0x8B93, // decimal value: 35731
    GL_PALETTE4_RGB5_A1_OES                                                  = 0x8B94, // decimal value: 35732
    GL_PALETTE8_RGB8_OES                                                     = 0x8B95, // decimal value: 35733
    GL_PALETTE8_RGBA8_OES                                                    = 0x8B96, // decimal value: 35734
    GL_PALETTE8_R5_G6_B5_OES                                                 = 0x8B97, // decimal value: 35735
    GL_PALETTE8_RGBA4_OES                                                    = 0x8B98, // decimal value: 35736
    GL_PALETTE8_RGB5_A1_OES                                                  = 0x8B99, // decimal value: 35737
    GL_COUNTER_TYPE_AMD                                                      = 0x8BC0, // decimal value: 35776
    GL_COUNTER_RANGE_AMD                                                     = 0x8BC1, // decimal value: 35777
    GL_UNSIGNED_INT64_AMD                                                    = 0x8BC2, // decimal value: 35778
    GL_PERCENTAGE_AMD                                                        = 0x8BC3, // decimal value: 35779
    GL_PERFMON_RESULT_AVAILABLE_AMD                                          = 0x8BC4, // decimal value: 35780
    GL_PERFMON_RESULT_SIZE_AMD                                               = 0x8BC5, // decimal value: 35781
    GL_PERFMON_RESULT_AMD                                                    = 0x8BC6, // decimal value: 35782
    GL_TEXTURE_WIDTH_QCOM                                                    = 0x8BD2, // decimal value: 35794
    GL_TEXTURE_HEIGHT_QCOM                                                   = 0x8BD3, // decimal value: 35795
    GL_TEXTURE_DEPTH_QCOM                                                    = 0x8BD4, // decimal value: 35796
    GL_TEXTURE_INTERNAL_FORMAT_QCOM                                          = 0x8BD5, // decimal value: 35797
    GL_TEXTURE_FORMAT_QCOM                                                   = 0x8BD6, // decimal value: 35798
    GL_TEXTURE_TYPE_QCOM                                                     = 0x8BD7, // decimal value: 35799
    GL_TEXTURE_IMAGE_VALID_QCOM                                              = 0x8BD8, // decimal value: 35800
    GL_TEXTURE_NUM_LEVELS_QCOM                                               = 0x8BD9, // decimal value: 35801
    GL_TEXTURE_TARGET_QCOM                                                   = 0x8BDA, // decimal value: 35802
    GL_TEXTURE_OBJECT_VALID_QCOM                                             = 0x8BDB, // decimal value: 35803
    GL_STATE_RESTORE                                                         = 0x8BDC, // decimal value: 35804
    GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT                                           = 0x8BE7, // decimal value: 35815
    GL_TEXTURE_PROTECTED_EXT                                                 = 0x8BFA, // decimal value: 35834
    GL_TEXTURE_FOVEATED_FEATURE_BITS_QCOM                                    = 0x8BFB, // decimal value: 35835
    GL_TEXTURE_FOVEATED_MIN_PIXEL_DENSITY_QCOM                               = 0x8BFC, // decimal value: 35836
    GL_TEXTURE_FOVEATED_FEATURE_QUERY_QCOM                                   = 0x8BFD, // decimal value: 35837
    GL_TEXTURE_FOVEATED_NUM_FOCAL_POINTS_QUERY_QCOM                          = 0x8BFE, // decimal value: 35838
    GL_FRAMEBUFFER_INCOMPLETE_FOVEATION_QCOM                                 = 0x8BFF, // decimal value: 35839
    GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG                                       = 0x8C00, // decimal value: 35840
    GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG                                       = 0x8C01, // decimal value: 35841
    GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG                                      = 0x8C02, // decimal value: 35842
    GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG                                      = 0x8C03, // decimal value: 35843
    GL_SGX_BINARY_IMG                                                        = 0x8C0A, // decimal value: 35850
    GL_TEXTURE_RED_TYPE                                                      = 0x8C10, // decimal value: 35856
    GL_TEXTURE_GREEN_TYPE                                                    = 0x8C11, // decimal value: 35857
    GL_TEXTURE_BLUE_TYPE                                                     = 0x8C12, // decimal value: 35858
    GL_TEXTURE_ALPHA_TYPE                                                    = 0x8C13, // decimal value: 35859
    GL_TEXTURE_DEPTH_TYPE                                                    = 0x8C16, // decimal value: 35862
    GL_UNSIGNED_NORMALIZED                                                   = 0x8C17, // decimal value: 35863
    GL_UNSIGNED_NORMALIZED_EXT                                               = 0x8C17, // decimal value: 35863
    GL_TEXTURE_BINDING_2D_ARRAY                                              = 0x8C1D, // decimal value: 35869
    GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS                                      = 0x8C29, // decimal value: 35881
    GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT                                  = 0x8C29, // decimal value: 35881
    GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES                                  = 0x8C29, // decimal value: 35881
    GL_TEXTURE_BUFFER_BINDING                                                = 0x8C2A, // decimal value: 35882
    GL_TEXTURE_BUFFER_BINDING_EXT                                            = 0x8C2A, // decimal value: 35882
    GL_TEXTURE_BUFFER_BINDING_OES                                            = 0x8C2A, // decimal value: 35882
    GL_TEXTURE_BUFFER_EXT                                                    = 0x8C2A, // decimal value: 35882
    GL_TEXTURE_BUFFER_OES                                                    = 0x8C2A, // decimal value: 35882
    GL_MAX_TEXTURE_BUFFER_SIZE                                               = 0x8C2B, // decimal value: 35883
    GL_MAX_TEXTURE_BUFFER_SIZE_EXT                                           = 0x8C2B, // decimal value: 35883
    GL_MAX_TEXTURE_BUFFER_SIZE_OES                                           = 0x8C2B, // decimal value: 35883
    GL_TEXTURE_BINDING_BUFFER                                                = 0x8C2C, // decimal value: 35884
    GL_TEXTURE_BINDING_BUFFER_EXT                                            = 0x8C2C, // decimal value: 35884
    GL_TEXTURE_BINDING_BUFFER_OES                                            = 0x8C2C, // decimal value: 35884
    GL_TEXTURE_BUFFER_DATA_STORE_BINDING                                     = 0x8C2D, // decimal value: 35885
    GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT                                 = 0x8C2D, // decimal value: 35885
    GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES                                 = 0x8C2D, // decimal value: 35885
    GL_ANY_SAMPLES_PASSED_EXT                                                = 0x8C2F, // decimal value: 35887
    GL_SAMPLE_SHADING                                                        = 0x8C36, // decimal value: 35894
    GL_SAMPLE_SHADING_OES                                                    = 0x8C36, // decimal value: 35894
    GL_MIN_SAMPLE_SHADING_VALUE                                              = 0x8C37, // decimal value: 35895
    GL_MIN_SAMPLE_SHADING_VALUE_OES                                          = 0x8C37, // decimal value: 35895
    GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE                                    = 0x8C3B, // decimal value: 35899
    GL_UNSIGNED_INT_5_9_9_9_REV                                              = 0x8C3E, // decimal value: 35902
    GL_UNSIGNED_INT_5_9_9_9_REV_APPLE                                        = 0x8C3E, // decimal value: 35902
    GL_TEXTURE_SHARED_SIZE                                                   = 0x8C3F, // decimal value: 35903
    GL_SLUMINANCE_ALPHA_NV                                                   = 0x8C44, // decimal value: 35908
    GL_SLUMINANCE8_ALPHA8_NV                                                 = 0x8C45, // decimal value: 35909
    GL_SLUMINANCE_NV                                                         = 0x8C46, // decimal value: 35910
    GL_SLUMINANCE8_NV                                                        = 0x8C47, // decimal value: 35911
    GL_COMPRESSED_SRGB_S3TC_DXT1_NV                                          = 0x8C4C, // decimal value: 35916
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV                                    = 0x8C4D, // decimal value: 35917
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV                                    = 0x8C4E, // decimal value: 35918
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV                                    = 0x8C4F, // decimal value: 35919
    GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS                            = 0x8C80, // decimal value: 35968
    GL_PRIMITIVES_GENERATED_EXT                                              = 0x8C87, // decimal value: 35975
    GL_PRIMITIVES_GENERATED_OES                                              = 0x8C87, // decimal value: 35975
    GL_RASTERIZER_DISCARD                                                    = 0x8C89, // decimal value: 35977
    GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS                         = 0x8C8A, // decimal value: 35978
    GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS                               = 0x8C8B, // decimal value: 35979
    GL_INTERLEAVED_ATTRIBS                                                   = 0x8C8C, // decimal value: 35980
    GL_SEPARATE_ATTRIBS                                                      = 0x8C8D, // decimal value: 35981
    GL_ATC_RGB_AMD                                                           = 0x8C92, // decimal value: 35986
    GL_ATC_RGBA_EXPLICIT_ALPHA_AMD                                           = 0x8C93, // decimal value: 35987
    GL_LOWER_LEFT_EXT                                                        = 0x8CA1, // decimal value: 36001
    GL_UPPER_LEFT_EXT                                                        = 0x8CA2, // decimal value: 36002
    GL_STENCIL_BACK_REF                                                      = 0x8CA3, // decimal value: 36003
    GL_STENCIL_BACK_VALUE_MASK                                               = 0x8CA4, // decimal value: 36004
    GL_STENCIL_BACK_WRITEMASK                                                = 0x8CA5, // decimal value: 36005
    GL_DRAW_FRAMEBUFFER_BINDING                                              = 0x8CA6, // decimal value: 36006
    GL_DRAW_FRAMEBUFFER_BINDING_ANGLE                                        = 0x8CA6, // decimal value: 36006
    GL_DRAW_FRAMEBUFFER_BINDING_APPLE                                        = 0x8CA6, // decimal value: 36006
    GL_DRAW_FRAMEBUFFER_BINDING_NV                                           = 0x8CA6, // decimal value: 36006
    GL_FRAMEBUFFER_BINDING                                                   = 0x8CA6, // decimal value: 36006
    GL_RENDERBUFFER_BINDING                                                  = 0x8CA7, // decimal value: 36007
    GL_READ_FRAMEBUFFER_ANGLE                                                = 0x8CA8, // decimal value: 36008
    GL_READ_FRAMEBUFFER_APPLE                                                = 0x8CA8, // decimal value: 36008
    GL_READ_FRAMEBUFFER_NV                                                   = 0x8CA8, // decimal value: 36008
    GL_DRAW_FRAMEBUFFER_ANGLE                                                = 0x8CA9, // decimal value: 36009
    GL_DRAW_FRAMEBUFFER_APPLE                                                = 0x8CA9, // decimal value: 36009
    GL_DRAW_FRAMEBUFFER_NV                                                   = 0x8CA9, // decimal value: 36009
    GL_READ_FRAMEBUFFER_BINDING                                              = 0x8CAA, // decimal value: 36010
    GL_READ_FRAMEBUFFER_BINDING_ANGLE                                        = 0x8CAA, // decimal value: 36010
    GL_READ_FRAMEBUFFER_BINDING_APPLE                                        = 0x8CAA, // decimal value: 36010
    GL_READ_FRAMEBUFFER_BINDING_NV                                           = 0x8CAA, // decimal value: 36010
    GL_RENDERBUFFER_SAMPLES_ANGLE                                            = 0x8CAB, // decimal value: 36011
    GL_RENDERBUFFER_SAMPLES_APPLE                                            = 0x8CAB, // decimal value: 36011
    GL_RENDERBUFFER_SAMPLES_EXT                                              = 0x8CAB, // decimal value: 36011
    GL_RENDERBUFFER_SAMPLES_NV                                               = 0x8CAB, // decimal value: 36011
    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE                                    = 0x8CD0, // decimal value: 36048
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES                         = 0x8CD4, // decimal value: 36052
    GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS                                     = 0x8CD9, // decimal value: 36057
    GL_STENCIL_ATTACHMENT                                                    = 0x8D20, // decimal value: 36128
    GL_STENCIL_INDEX1_OES                                                    = 0x8D46, // decimal value: 36166
    GL_STENCIL_INDEX4_OES                                                    = 0x8D47, // decimal value: 36167
    GL_STENCIL_INDEX8                                                        = 0x8D48, // decimal value: 36168
    GL_STENCIL_INDEX8_OES                                                    = 0x8D48, // decimal value: 36168
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE                              = 0x8D56, // decimal value: 36182
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE                              = 0x8D56, // decimal value: 36182
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT                                = 0x8D56, // decimal value: 36182
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV                                 = 0x8D56, // decimal value: 36182
    GL_MAX_SAMPLES                                                           = 0x8D57, // decimal value: 36183
    GL_MAX_SAMPLES_ANGLE                                                     = 0x8D57, // decimal value: 36183
    GL_MAX_SAMPLES_APPLE                                                     = 0x8D57, // decimal value: 36183
    GL_MAX_SAMPLES_EXT                                                       = 0x8D57, // decimal value: 36183
    GL_MAX_SAMPLES_NV                                                        = 0x8D57, // decimal value: 36183
    GL_HALF_FLOAT_OES                                                        = 0x8D61, // decimal value: 36193
    GL_RGB565                                                                = 0x8D62, // decimal value: 36194
    GL_RGB565_OES                                                            = 0x8D62, // decimal value: 36194
    GL_ETC1_RGB8_OES                                                         = 0x8D64, // decimal value: 36196
    GL_TEXTURE_EXTERNAL_OES                                                  = 0x8D65, // decimal value: 36197
    GL_TEXTURE_BINDING_EXTERNAL_OES                                          = 0x8D67, // decimal value: 36199
    GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES                                      = 0x8D68, // decimal value: 36200
    GL_PRIMITIVE_RESTART_FIXED_INDEX                                         = 0x8D69, // decimal value: 36201
    GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT                                   = 0x8D6A, // decimal value: 36202
    GL_MAX_ELEMENT_INDEX                                                     = 0x8D6B, // decimal value: 36203
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT                            = 0x8D6C, // decimal value: 36204
    GL_RED_INTEGER                                                           = 0x8D94, // decimal value: 36244
    GL_RGB_INTEGER                                                           = 0x8D98, // decimal value: 36248
    GL_RGBA_INTEGER                                                          = 0x8D99, // decimal value: 36249
    GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT                                    = 0x8DA7, // decimal value: 36263
    GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES                                    = 0x8DA7, // decimal value: 36263
    GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT                              = 0x8DA8, // decimal value: 36264
    GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES                              = 0x8DA8, // decimal value: 36264
    GL_FLOAT_32_UNSIGNED_INT_24_8_REV                                        = 0x8DAD, // decimal value: 36269
    GL_FRAMEBUFFER_SRGB_EXT                                                  = 0x8DB9, // decimal value: 36281
    GL_COMPRESSED_RED_GREEN_RGTC2_EXT                                        = 0x8DBD, // decimal value: 36285
    GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT                                 = 0x8DBE, // decimal value: 36286
    GL_SAMPLER_2D_ARRAY                                                      = 0x8DC1, // decimal value: 36289
    GL_SAMPLER_BUFFER                                                        = 0x8DC2, // decimal value: 36290
    GL_SAMPLER_BUFFER_EXT                                                    = 0x8DC2, // decimal value: 36290
    GL_SAMPLER_BUFFER_OES                                                    = 0x8DC2, // decimal value: 36290
    GL_SAMPLER_2D_ARRAY_SHADOW                                               = 0x8DC4, // decimal value: 36292
    GL_SAMPLER_2D_ARRAY_SHADOW_NV                                            = 0x8DC4, // decimal value: 36292
    GL_SAMPLER_CUBE_SHADOW                                                   = 0x8DC5, // decimal value: 36293
    GL_SAMPLER_CUBE_SHADOW_NV                                                = 0x8DC5, // decimal value: 36293
    GL_UNSIGNED_INT_VEC2                                                     = 0x8DC6, // decimal value: 36294
    GL_UNSIGNED_INT_VEC3                                                     = 0x8DC7, // decimal value: 36295
    GL_UNSIGNED_INT_VEC4                                                     = 0x8DC8, // decimal value: 36296
    GL_INT_SAMPLER_2D                                                        = 0x8DCA, // decimal value: 36298
    GL_INT_SAMPLER_3D                                                        = 0x8DCB, // decimal value: 36299
    GL_INT_SAMPLER_CUBE                                                      = 0x8DCC, // decimal value: 36300
    GL_INT_SAMPLER_2D_ARRAY                                                  = 0x8DCF, // decimal value: 36303
    GL_INT_SAMPLER_BUFFER                                                    = 0x8DD0, // decimal value: 36304
    GL_INT_SAMPLER_BUFFER_EXT                                                = 0x8DD0, // decimal value: 36304
    GL_INT_SAMPLER_BUFFER_OES                                                = 0x8DD0, // decimal value: 36304
    GL_UNSIGNED_INT_SAMPLER_2D                                               = 0x8DD2, // decimal value: 36306
    GL_UNSIGNED_INT_SAMPLER_3D                                               = 0x8DD3, // decimal value: 36307
    GL_UNSIGNED_INT_SAMPLER_CUBE                                             = 0x8DD4, // decimal value: 36308
    GL_UNSIGNED_INT_SAMPLER_2D_ARRAY                                         = 0x8DD7, // decimal value: 36311
    GL_UNSIGNED_INT_SAMPLER_BUFFER                                           = 0x8DD8, // decimal value: 36312
    GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT                                       = 0x8DD8, // decimal value: 36312
    GL_UNSIGNED_INT_SAMPLER_BUFFER_OES                                       = 0x8DD8, // decimal value: 36312
    GL_GEOMETRY_SHADER_EXT                                                   = 0x8DD9, // decimal value: 36313
    GL_GEOMETRY_SHADER_OES                                                   = 0x8DD9, // decimal value: 36313
    GL_MAX_GEOMETRY_UNIFORM_COMPONENTS                                       = 0x8DDF, // decimal value: 36319
    GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT                                   = 0x8DDF, // decimal value: 36319
    GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES                                   = 0x8DDF, // decimal value: 36319
    GL_MAX_GEOMETRY_OUTPUT_VERTICES                                          = 0x8DE0, // decimal value: 36320
    GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT                                      = 0x8DE0, // decimal value: 36320
    GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES                                      = 0x8DE0, // decimal value: 36320
    GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS                                  = 0x8DE1, // decimal value: 36321
    GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT                              = 0x8DE1, // decimal value: 36321
    GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES                              = 0x8DE1, // decimal value: 36321
    GL_UNSIGNED_INT_10_10_10_2_OES                                           = 0x8DF6, // decimal value: 36342
    GL_INT_10_10_10_2_OES                                                    = 0x8DF7, // decimal value: 36343
    GL_SHADER_BINARY_FORMATS                                                 = 0x8DF8, // decimal value: 36344
    GL_NUM_SHADER_BINARY_FORMATS                                             = 0x8DF9, // decimal value: 36345
    GL_SHADER_COMPILER                                                       = 0x8DFA, // decimal value: 36346
    GL_MAX_VERTEX_UNIFORM_VECTORS                                            = 0x8DFB, // decimal value: 36347
    GL_MAX_VARYING_VECTORS                                                   = 0x8DFC, // decimal value: 36348
    GL_MAX_FRAGMENT_UNIFORM_VECTORS                                          = 0x8DFD, // decimal value: 36349
    GL_QUERY_WAIT_NV                                                         = 0x8E13, // decimal value: 36371
    GL_QUERY_NO_WAIT_NV                                                      = 0x8E14, // decimal value: 36372
    GL_QUERY_BY_REGION_WAIT_NV                                               = 0x8E15, // decimal value: 36373
    GL_QUERY_BY_REGION_NO_WAIT_NV                                            = 0x8E16, // decimal value: 36374
    GL_POLYGON_OFFSET_CLAMP_EXT                                              = 0x8E1B, // decimal value: 36379
    GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS                          = 0x8E1E, // decimal value: 36382
    GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT                      = 0x8E1E, // decimal value: 36382
    GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES                      = 0x8E1E, // decimal value: 36382
    GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS                       = 0x8E1F, // decimal value: 36383
    GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT                   = 0x8E1F, // decimal value: 36383
    GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES                   = 0x8E1F, // decimal value: 36383
    GL_COLOR_SAMPLES_NV                                                      = 0x8E20, // decimal value: 36384
    GL_TRANSFORM_FEEDBACK_BINDING                                            = 0x8E25, // decimal value: 36389
    GL_TIMESTAMP_EXT                                                         = 0x8E28, // decimal value: 36392
    GL_DEPTH_COMPONENT16_NONLINEAR_NV                                        = 0x8E2C, // decimal value: 36396
    GL_FIRST_VERTEX_CONVENTION_EXT                                           = 0x8E4D, // decimal value: 36429
    GL_FIRST_VERTEX_CONVENTION_OES                                           = 0x8E4D, // decimal value: 36429
    GL_LAST_VERTEX_CONVENTION_EXT                                            = 0x8E4E, // decimal value: 36430
    GL_LAST_VERTEX_CONVENTION_OES                                            = 0x8E4E, // decimal value: 36430
    GL_SAMPLE_LOCATION_NV                                                    = 0x8E50, // decimal value: 36432
    GL_SAMPLE_POSITION                                                       = 0x8E50, // decimal value: 36432
    GL_SAMPLE_MASK                                                           = 0x8E51, // decimal value: 36433
    GL_SAMPLE_MASK_VALUE                                                     = 0x8E52, // decimal value: 36434
    GL_MAX_SAMPLE_MASK_WORDS                                                 = 0x8E59, // decimal value: 36441
    GL_MAX_GEOMETRY_SHADER_INVOCATIONS                                       = 0x8E5A, // decimal value: 36442
    GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT                                   = 0x8E5A, // decimal value: 36442
    GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES                                   = 0x8E5A, // decimal value: 36442
    GL_MIN_FRAGMENT_INTERPOLATION_OFFSET                                     = 0x8E5B, // decimal value: 36443
    GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES                                 = 0x8E5B, // decimal value: 36443
    GL_MAX_FRAGMENT_INTERPOLATION_OFFSET                                     = 0x8E5C, // decimal value: 36444
    GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES                                 = 0x8E5C, // decimal value: 36444
    GL_FRAGMENT_INTERPOLATION_OFFSET_BITS                                    = 0x8E5D, // decimal value: 36445
    GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES                                = 0x8E5D, // decimal value: 36445
    GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET                                     = 0x8E5E, // decimal value: 36446
    GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET                                     = 0x8E5F, // decimal value: 36447
    GL_PATCH_VERTICES_EXT                                                    = 0x8E72, // decimal value: 36466
    GL_PATCH_VERTICES_OES                                                    = 0x8E72, // decimal value: 36466
    GL_TESS_CONTROL_OUTPUT_VERTICES                                          = 0x8E75, // decimal value: 36469
    GL_TESS_CONTROL_OUTPUT_VERTICES_EXT                                      = 0x8E75, // decimal value: 36469
    GL_TESS_CONTROL_OUTPUT_VERTICES_OES                                      = 0x8E75, // decimal value: 36469
    GL_TESS_GEN_MODE                                                         = 0x8E76, // decimal value: 36470
    GL_TESS_GEN_MODE_EXT                                                     = 0x8E76, // decimal value: 36470
    GL_TESS_GEN_MODE_OES                                                     = 0x8E76, // decimal value: 36470
    GL_TESS_GEN_SPACING                                                      = 0x8E77, // decimal value: 36471
    GL_TESS_GEN_SPACING_EXT                                                  = 0x8E77, // decimal value: 36471
    GL_TESS_GEN_SPACING_OES                                                  = 0x8E77, // decimal value: 36471
    GL_TESS_GEN_VERTEX_ORDER                                                 = 0x8E78, // decimal value: 36472
    GL_TESS_GEN_VERTEX_ORDER_EXT                                             = 0x8E78, // decimal value: 36472
    GL_TESS_GEN_VERTEX_ORDER_OES                                             = 0x8E78, // decimal value: 36472
    GL_TESS_GEN_POINT_MODE                                                   = 0x8E79, // decimal value: 36473
    GL_TESS_GEN_POINT_MODE_EXT                                               = 0x8E79, // decimal value: 36473
    GL_TESS_GEN_POINT_MODE_OES                                               = 0x8E79, // decimal value: 36473
    GL_ISOLINES                                                              = 0x8E7A, // decimal value: 36474
    GL_ISOLINES_EXT                                                          = 0x8E7A, // decimal value: 36474
    GL_ISOLINES_OES                                                          = 0x8E7A, // decimal value: 36474
    GL_FRACTIONAL_ODD                                                        = 0x8E7B, // decimal value: 36475
    GL_FRACTIONAL_ODD_EXT                                                    = 0x8E7B, // decimal value: 36475
    GL_FRACTIONAL_ODD_OES                                                    = 0x8E7B, // decimal value: 36475
    GL_FRACTIONAL_EVEN                                                       = 0x8E7C, // decimal value: 36476
    GL_FRACTIONAL_EVEN_EXT                                                   = 0x8E7C, // decimal value: 36476
    GL_FRACTIONAL_EVEN_OES                                                   = 0x8E7C, // decimal value: 36476
    GL_MAX_PATCH_VERTICES                                                    = 0x8E7D, // decimal value: 36477
    GL_MAX_PATCH_VERTICES_EXT                                                = 0x8E7D, // decimal value: 36477
    GL_MAX_PATCH_VERTICES_OES                                                = 0x8E7D, // decimal value: 36477
    GL_MAX_TESS_GEN_LEVEL                                                    = 0x8E7E, // decimal value: 36478
    GL_MAX_TESS_GEN_LEVEL_EXT                                                = 0x8E7E, // decimal value: 36478
    GL_MAX_TESS_GEN_LEVEL_OES                                                = 0x8E7E, // decimal value: 36478
    GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS                                   = 0x8E7F, // decimal value: 36479
    GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT                               = 0x8E7F, // decimal value: 36479
    GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES                               = 0x8E7F, // decimal value: 36479
    GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS                                = 0x8E80, // decimal value: 36480
    GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT                            = 0x8E80, // decimal value: 36480
    GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES                            = 0x8E80, // decimal value: 36480
    GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS                                  = 0x8E81, // decimal value: 36481
    GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT                              = 0x8E81, // decimal value: 36481
    GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES                              = 0x8E81, // decimal value: 36481
    GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS                               = 0x8E82, // decimal value: 36482
    GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT                           = 0x8E82, // decimal value: 36482
    GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES                           = 0x8E82, // decimal value: 36482
    GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS                                    = 0x8E83, // decimal value: 36483
    GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT                                = 0x8E83, // decimal value: 36483
    GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES                                = 0x8E83, // decimal value: 36483
    GL_MAX_TESS_PATCH_COMPONENTS                                             = 0x8E84, // decimal value: 36484
    GL_MAX_TESS_PATCH_COMPONENTS_EXT                                         = 0x8E84, // decimal value: 36484
    GL_MAX_TESS_PATCH_COMPONENTS_OES                                         = 0x8E84, // decimal value: 36484
    GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS                              = 0x8E85, // decimal value: 36485
    GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT                          = 0x8E85, // decimal value: 36485
    GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES                          = 0x8E85, // decimal value: 36485
    GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS                                 = 0x8E86, // decimal value: 36486
    GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT                             = 0x8E86, // decimal value: 36486
    GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES                             = 0x8E86, // decimal value: 36486
    GL_TESS_EVALUATION_SHADER_EXT                                            = 0x8E87, // decimal value: 36487
    GL_TESS_EVALUATION_SHADER_OES                                            = 0x8E87, // decimal value: 36487
    GL_TESS_CONTROL_SHADER_EXT                                               = 0x8E88, // decimal value: 36488
    GL_TESS_CONTROL_SHADER_OES                                               = 0x8E88, // decimal value: 36488
    GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS                                       = 0x8E89, // decimal value: 36489
    GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT                                   = 0x8E89, // decimal value: 36489
    GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES                                   = 0x8E89, // decimal value: 36489
    GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS                                    = 0x8E8A, // decimal value: 36490
    GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT                                = 0x8E8A, // decimal value: 36490
    GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES                                = 0x8E8A, // decimal value: 36490
    GL_COMPRESSED_RGBA_BPTC_UNORM_EXT                                        = 0x8E8C, // decimal value: 36492
    GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT                                  = 0x8E8D, // decimal value: 36493
    GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT                                  = 0x8E8E, // decimal value: 36494
    GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT                                = 0x8E8F, // decimal value: 36495
    GL_COVERAGE_COMPONENT_NV                                                 = 0x8ED0, // decimal value: 36560
    GL_COVERAGE_COMPONENT4_NV                                                = 0x8ED1, // decimal value: 36561
    GL_COVERAGE_ATTACHMENT_NV                                                = 0x8ED2, // decimal value: 36562
    GL_COVERAGE_BUFFERS_NV                                                   = 0x8ED3, // decimal value: 36563
    GL_COVERAGE_SAMPLES_NV                                                   = 0x8ED4, // decimal value: 36564
    GL_COVERAGE_ALL_FRAGMENTS_NV                                             = 0x8ED5, // decimal value: 36565
    GL_COVERAGE_EDGE_FRAGMENTS_NV                                            = 0x8ED6, // decimal value: 36566
    GL_COVERAGE_AUTOMATIC_NV                                                 = 0x8ED7, // decimal value: 36567
    GL_INCLUSIVE_EXT                                                         = 0x8F10, // decimal value: 36624
    GL_EXCLUSIVE_EXT                                                         = 0x8F11, // decimal value: 36625
    GL_WINDOW_RECTANGLE_EXT                                                  = 0x8F12, // decimal value: 36626
    GL_WINDOW_RECTANGLE_MODE_EXT                                             = 0x8F13, // decimal value: 36627
    GL_MAX_WINDOW_RECTANGLES_EXT                                             = 0x8F14, // decimal value: 36628
    GL_NUM_WINDOW_RECTANGLES_EXT                                             = 0x8F15, // decimal value: 36629
    GL_COPY_READ_BUFFER_BINDING                                              = 0x8F36, // decimal value: 36662
    GL_COPY_READ_BUFFER_NV                                                   = 0x8F36, // decimal value: 36662
    GL_COPY_WRITE_BUFFER_BINDING                                             = 0x8F37, // decimal value: 36663
    GL_COPY_WRITE_BUFFER_NV                                                  = 0x8F37, // decimal value: 36663
    GL_MAX_IMAGE_UNITS                                                       = 0x8F38, // decimal value: 36664
    GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES                                  = 0x8F39, // decimal value: 36665
    GL_IMAGE_BINDING_NAME                                                    = 0x8F3A, // decimal value: 36666
    GL_IMAGE_BINDING_LEVEL                                                   = 0x8F3B, // decimal value: 36667
    GL_IMAGE_BINDING_LAYERED                                                 = 0x8F3C, // decimal value: 36668
    GL_IMAGE_BINDING_LAYER                                                   = 0x8F3D, // decimal value: 36669
    GL_IMAGE_BINDING_ACCESS                                                  = 0x8F3E, // decimal value: 36670
    GL_DRAW_INDIRECT_BUFFER_BINDING                                          = 0x8F43, // decimal value: 36675
    GL_VERTEX_BINDING_BUFFER                                                 = 0x8F4F, // decimal value: 36687
    GL_MALI_SHADER_BINARY_ARM                                                = 0x8F60, // decimal value: 36704
    GL_MALI_PROGRAM_BINARY_ARM                                               = 0x8F61, // decimal value: 36705
    GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT                          = 0x8F63, // decimal value: 36707
    GL_SHADER_PIXEL_LOCAL_STORAGE_EXT                                        = 0x8F64, // decimal value: 36708
    GL_FETCH_PER_SAMPLE_ARM                                                  = 0x8F65, // decimal value: 36709
    GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM                             = 0x8F66, // decimal value: 36710
    GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT                               = 0x8F67, // decimal value: 36711
    GL_TEXTURE_ASTC_DECODE_PRECISION_EXT                                     = 0x8F69, // decimal value: 36713
    GL_RGBA16_SNORM_EXT                                                      = 0x8F9B, // decimal value: 36763
    GL_SIGNED_NORMALIZED                                                     = 0x8F9C, // decimal value: 36764
    GL_PERFMON_GLOBAL_MODE_QCOM                                              = 0x8FA0, // decimal value: 36768
    GL_CPU_OPTIMIZED_QCOM                                                    = 0x8FB1, // decimal value: 36785
    GL_GPU_OPTIMIZED_QCOM                                                    = 0x8FB2, // decimal value: 36786
    GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM                                     = 0x8FB3, // decimal value: 36787
    GL_GPU_DISJOINT_EXT                                                      = 0x8FBB, // decimal value: 36795
    GL_SR8_EXT                                                               = 0x8FBD, // decimal value: 36797
    GL_SRG8_EXT                                                              = 0x8FBE, // decimal value: 36798
    GL_TEXTURE_FORMAT_SRGB_OVERRIDE_EXT                                      = 0x8FBF, // decimal value: 36799
    GL_SHADER_BINARY_VIV                                                     = 0x8FC4, // decimal value: 36804
    GL_INT8_NV                                                               = 0x8FE0, // decimal value: 36832
    GL_INT8_VEC2_NV                                                          = 0x8FE1, // decimal value: 36833
    GL_INT8_VEC3_NV                                                          = 0x8FE2, // decimal value: 36834
    GL_INT8_VEC4_NV                                                          = 0x8FE3, // decimal value: 36835
    GL_INT16_NV                                                              = 0x8FE4, // decimal value: 36836
    GL_INT16_VEC2_NV                                                         = 0x8FE5, // decimal value: 36837
    GL_INT16_VEC3_NV                                                         = 0x8FE6, // decimal value: 36838
    GL_INT16_VEC4_NV                                                         = 0x8FE7, // decimal value: 36839
    GL_INT64_VEC2_NV                                                         = 0x8FE9, // decimal value: 36841
    GL_INT64_VEC3_NV                                                         = 0x8FEA, // decimal value: 36842
    GL_INT64_VEC4_NV                                                         = 0x8FEB, // decimal value: 36843
    GL_UNSIGNED_INT8_NV                                                      = 0x8FEC, // decimal value: 36844
    GL_UNSIGNED_INT8_VEC2_NV                                                 = 0x8FED, // decimal value: 36845
    GL_UNSIGNED_INT8_VEC3_NV                                                 = 0x8FEE, // decimal value: 36846
    GL_UNSIGNED_INT8_VEC4_NV                                                 = 0x8FEF, // decimal value: 36847
    GL_UNSIGNED_INT16_NV                                                     = 0x8FF0, // decimal value: 36848
    GL_UNSIGNED_INT16_VEC2_NV                                                = 0x8FF1, // decimal value: 36849
    GL_UNSIGNED_INT16_VEC3_NV                                                = 0x8FF2, // decimal value: 36850
    GL_UNSIGNED_INT16_VEC4_NV                                                = 0x8FF3, // decimal value: 36851
    GL_UNSIGNED_INT64_VEC2_NV                                                = 0x8FF5, // decimal value: 36853
    GL_UNSIGNED_INT64_VEC3_NV                                                = 0x8FF6, // decimal value: 36854
    GL_UNSIGNED_INT64_VEC4_NV                                                = 0x8FF7, // decimal value: 36855
    GL_FLOAT16_NV                                                            = 0x8FF8, // decimal value: 36856
    GL_FLOAT16_VEC2_NV                                                       = 0x8FF9, // decimal value: 36857
    GL_FLOAT16_VEC3_NV                                                       = 0x8FFA, // decimal value: 36858
    GL_FLOAT16_VEC4_NV                                                       = 0x8FFB, // decimal value: 36859
    GL_TEXTURE_BINDING_CUBE_MAP_ARRAY                                        = 0x900A, // decimal value: 36874
    GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT                                    = 0x900A, // decimal value: 36874
    GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES                                    = 0x900A, // decimal value: 36874
    GL_SAMPLER_CUBE_MAP_ARRAY                                                = 0x900C, // decimal value: 36876
    GL_SAMPLER_CUBE_MAP_ARRAY_EXT                                            = 0x900C, // decimal value: 36876
    GL_SAMPLER_CUBE_MAP_ARRAY_OES                                            = 0x900C, // decimal value: 36876
    GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW                                         = 0x900D, // decimal value: 36877
    GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT                                     = 0x900D, // decimal value: 36877
    GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES                                     = 0x900D, // decimal value: 36877
    GL_INT_SAMPLER_CUBE_MAP_ARRAY                                            = 0x900E, // decimal value: 36878
    GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT                                        = 0x900E, // decimal value: 36878
    GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES                                        = 0x900E, // decimal value: 36878
    GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY                                   = 0x900F, // decimal value: 36879
    GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT                               = 0x900F, // decimal value: 36879
    GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES                               = 0x900F, // decimal value: 36879
    GL_FACTOR_MIN_AMD                                                        = 0x901C, // decimal value: 36892
    GL_FACTOR_MAX_AMD                                                        = 0x901D, // decimal value: 36893
    GL_IMAGE_2D                                                              = 0x904D, // decimal value: 36941
    GL_IMAGE_3D                                                              = 0x904E, // decimal value: 36942
    GL_IMAGE_CUBE                                                            = 0x9050, // decimal value: 36944
    GL_IMAGE_BUFFER                                                          = 0x9051, // decimal value: 36945
    GL_IMAGE_BUFFER_EXT                                                      = 0x9051, // decimal value: 36945
    GL_IMAGE_BUFFER_OES                                                      = 0x9051, // decimal value: 36945
    GL_IMAGE_2D_ARRAY                                                        = 0x9053, // decimal value: 36947
    GL_IMAGE_CUBE_MAP_ARRAY                                                  = 0x9054, // decimal value: 36948
    GL_IMAGE_CUBE_MAP_ARRAY_EXT                                              = 0x9054, // decimal value: 36948
    GL_IMAGE_CUBE_MAP_ARRAY_OES                                              = 0x9054, // decimal value: 36948
    GL_INT_IMAGE_2D                                                          = 0x9058, // decimal value: 36952
    GL_INT_IMAGE_3D                                                          = 0x9059, // decimal value: 36953
    GL_INT_IMAGE_CUBE                                                        = 0x905B, // decimal value: 36955
    GL_INT_IMAGE_BUFFER                                                      = 0x905C, // decimal value: 36956
    GL_INT_IMAGE_BUFFER_EXT                                                  = 0x905C, // decimal value: 36956
    GL_INT_IMAGE_BUFFER_OES                                                  = 0x905C, // decimal value: 36956
    GL_INT_IMAGE_2D_ARRAY                                                    = 0x905E, // decimal value: 36958
    GL_INT_IMAGE_CUBE_MAP_ARRAY                                              = 0x905F, // decimal value: 36959
    GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT                                          = 0x905F, // decimal value: 36959
    GL_INT_IMAGE_CUBE_MAP_ARRAY_OES                                          = 0x905F, // decimal value: 36959
    GL_UNSIGNED_INT_IMAGE_2D                                                 = 0x9063, // decimal value: 36963
    GL_UNSIGNED_INT_IMAGE_3D                                                 = 0x9064, // decimal value: 36964
    GL_UNSIGNED_INT_IMAGE_CUBE                                               = 0x9066, // decimal value: 36966
    GL_UNSIGNED_INT_IMAGE_BUFFER                                             = 0x9067, // decimal value: 36967
    GL_UNSIGNED_INT_IMAGE_BUFFER_EXT                                         = 0x9067, // decimal value: 36967
    GL_UNSIGNED_INT_IMAGE_BUFFER_OES                                         = 0x9067, // decimal value: 36967
    GL_UNSIGNED_INT_IMAGE_2D_ARRAY                                           = 0x9069, // decimal value: 36969
    GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY                                     = 0x906A, // decimal value: 36970
    GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT                                 = 0x906A, // decimal value: 36970
    GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES                                 = 0x906A, // decimal value: 36970
    GL_IMAGE_BINDING_FORMAT                                                  = 0x906E, // decimal value: 36974
    GL_SQUARE_NV                                                             = 0x90A3, // decimal value: 37027
    GL_ROUND_NV                                                              = 0x90A4, // decimal value: 37028
    GL_TRIANGULAR_NV                                                         = 0x90A5, // decimal value: 37029
    GL_BEVEL_NV                                                              = 0x90A6, // decimal value: 37030
    GL_MITER_REVERT_NV                                                       = 0x90A7, // decimal value: 37031
    GL_MITER_TRUNCATE_NV                                                     = 0x90A8, // decimal value: 37032
    GL_PATH_ERROR_POSITION_NV                                                = 0x90AB, // decimal value: 37035
    GL_PATH_GEN_MODE_NV                                                      = 0x90B0, // decimal value: 37040
    GL_PATH_GEN_COEFF_NV                                                     = 0x90B1, // decimal value: 37041
    GL_PATH_GEN_COMPONENTS_NV                                                = 0x90B3, // decimal value: 37043
    GL_MOVE_TO_RESETS_NV                                                     = 0x90B5, // decimal value: 37045
    GL_MOVE_TO_CONTINUES_NV                                                  = 0x90B6, // decimal value: 37046
    GL_PATH_STENCIL_FUNC_NV                                                  = 0x90B7, // decimal value: 37047
    GL_PATH_STENCIL_REF_NV                                                   = 0x90B8, // decimal value: 37048
    GL_PATH_STENCIL_VALUE_MASK_NV                                            = 0x90B9, // decimal value: 37049
    GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV                                   = 0x90BD, // decimal value: 37053
    GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV                                    = 0x90BE, // decimal value: 37054
    GL_PATH_COVER_DEPTH_FUNC_NV                                              = 0x90BF, // decimal value: 37055
    GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE                                    = 0x90C8, // decimal value: 37064
    GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS                                   = 0x90C9, // decimal value: 37065
    GL_MAX_VERTEX_IMAGE_UNIFORMS                                             = 0x90CA, // decimal value: 37066
    GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS                                       = 0x90CB, // decimal value: 37067
    GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT                                   = 0x90CB, // decimal value: 37067
    GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES                                   = 0x90CB, // decimal value: 37067
    GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS                                    = 0x90CC, // decimal value: 37068
    GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT                                = 0x90CC, // decimal value: 37068
    GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES                                = 0x90CC, // decimal value: 37068
    GL_MAX_GEOMETRY_IMAGE_UNIFORMS                                           = 0x90CD, // decimal value: 37069
    GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT                                       = 0x90CD, // decimal value: 37069
    GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES                                       = 0x90CD, // decimal value: 37069
    GL_MAX_FRAGMENT_IMAGE_UNIFORMS                                           = 0x90CE, // decimal value: 37070
    GL_MAX_COMBINED_IMAGE_UNIFORMS                                           = 0x90CF, // decimal value: 37071
    GL_SHADER_STORAGE_BUFFER_BINDING                                         = 0x90D3, // decimal value: 37075
    GL_SHADER_STORAGE_BUFFER_START                                           = 0x90D4, // decimal value: 37076
    GL_SHADER_STORAGE_BUFFER_SIZE                                            = 0x90D5, // decimal value: 37077
    GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS                                      = 0x90D6, // decimal value: 37078
    GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS                                    = 0x90D7, // decimal value: 37079
    GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT                                = 0x90D7, // decimal value: 37079
    GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES                                = 0x90D7, // decimal value: 37079
    GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS                                = 0x90D8, // decimal value: 37080
    GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT                            = 0x90D8, // decimal value: 37080
    GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES                            = 0x90D8, // decimal value: 37080
    GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS                             = 0x90D9, // decimal value: 37081
    GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT                         = 0x90D9, // decimal value: 37081
    GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES                         = 0x90D9, // decimal value: 37081
    GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS                                    = 0x90DA, // decimal value: 37082
    GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS                                     = 0x90DB, // decimal value: 37083
    GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS                                    = 0x90DC, // decimal value: 37084
    GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS                                    = 0x90DD, // decimal value: 37085
    GL_MAX_SHADER_STORAGE_BLOCK_SIZE                                         = 0x90DE, // decimal value: 37086
    GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT                                = 0x90DF, // decimal value: 37087
    GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS                                    = 0x90EB, // decimal value: 37099
    GL_DISPATCH_INDIRECT_BUFFER_BINDING                                      = 0x90EF, // decimal value: 37103
    GL_COLOR_ATTACHMENT_EXT                                                  = 0x90F0, // decimal value: 37104
    GL_MULTIVIEW_EXT                                                         = 0x90F1, // decimal value: 37105
    GL_MAX_MULTIVIEW_BUFFERS_EXT                                             = 0x90F2, // decimal value: 37106
    GL_CONTEXT_ROBUST_ACCESS_EXT                                             = 0x90F3, // decimal value: 37107
    GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES                                      = 0x9102, // decimal value: 37122
    GL_TEXTURE_BINDING_2D_MULTISAMPLE                                        = 0x9104, // decimal value: 37124
    GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY                                  = 0x9105, // decimal value: 37125
    GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES                              = 0x9105, // decimal value: 37125
    GL_TEXTURE_SAMPLES                                                       = 0x9106, // decimal value: 37126
    GL_TEXTURE_FIXED_SAMPLE_LOCATIONS                                        = 0x9107, // decimal value: 37127
    GL_SAMPLER_2D_MULTISAMPLE                                                = 0x9108, // decimal value: 37128
    GL_INT_SAMPLER_2D_MULTISAMPLE                                            = 0x9109, // decimal value: 37129
    GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE                                   = 0x910A, // decimal value: 37130
    GL_SAMPLER_2D_MULTISAMPLE_ARRAY                                          = 0x910B, // decimal value: 37131
    GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES                                      = 0x910B, // decimal value: 37131
    GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY                                      = 0x910C, // decimal value: 37132
    GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES                                  = 0x910C, // decimal value: 37132
    GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY                             = 0x910D, // decimal value: 37133
    GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES                         = 0x910D, // decimal value: 37133
    GL_MAX_COLOR_TEXTURE_SAMPLES                                             = 0x910E, // decimal value: 37134
    GL_MAX_DEPTH_TEXTURE_SAMPLES                                             = 0x910F, // decimal value: 37135
    GL_MAX_INTEGER_SAMPLES                                                   = 0x9110, // decimal value: 37136
    GL_MAX_SERVER_WAIT_TIMEOUT                                               = 0x9111, // decimal value: 37137
    GL_MAX_SERVER_WAIT_TIMEOUT_APPLE                                         = 0x9111, // decimal value: 37137
    GL_OBJECT_TYPE_APPLE                                                     = 0x9112, // decimal value: 37138
    GL_SYNC_CONDITION_APPLE                                                  = 0x9113, // decimal value: 37139
    GL_SYNC_STATUS_APPLE                                                     = 0x9114, // decimal value: 37140
    GL_SYNC_FLAGS_APPLE                                                      = 0x9115, // decimal value: 37141
    GL_SYNC_FENCE                                                            = 0x9116, // decimal value: 37142
    GL_SYNC_FENCE_APPLE                                                      = 0x9116, // decimal value: 37142
    GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE                                      = 0x9117, // decimal value: 37143
    GL_UNSIGNALED                                                            = 0x9118, // decimal value: 37144
    GL_UNSIGNALED_APPLE                                                      = 0x9118, // decimal value: 37144
    GL_SIGNALED                                                              = 0x9119, // decimal value: 37145
    GL_SIGNALED_APPLE                                                        = 0x9119, // decimal value: 37145
    GL_ALREADY_SIGNALED_APPLE                                                = 0x911A, // decimal value: 37146
    GL_TIMEOUT_EXPIRED_APPLE                                                 = 0x911B, // decimal value: 37147
    GL_CONDITION_SATISFIED_APPLE                                             = 0x911C, // decimal value: 37148
    GL_WAIT_FAILED_APPLE                                                     = 0x911D, // decimal value: 37149
    GL_MAX_VERTEX_OUTPUT_COMPONENTS                                          = 0x9122, // decimal value: 37154
    GL_MAX_GEOMETRY_INPUT_COMPONENTS                                         = 0x9123, // decimal value: 37155
    GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT                                     = 0x9123, // decimal value: 37155
    GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES                                     = 0x9123, // decimal value: 37155
    GL_MAX_GEOMETRY_OUTPUT_COMPONENTS                                        = 0x9124, // decimal value: 37156
    GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT                                    = 0x9124, // decimal value: 37156
    GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES                                    = 0x9124, // decimal value: 37156
    GL_MAX_FRAGMENT_INPUT_COMPONENTS                                         = 0x9125, // decimal value: 37157
    GL_TEXTURE_IMMUTABLE_FORMAT                                              = 0x912F, // decimal value: 37167
    GL_TEXTURE_IMMUTABLE_FORMAT_EXT                                          = 0x912F, // decimal value: 37167
    GL_SGX_PROGRAM_BINARY_IMG                                                = 0x9130, // decimal value: 37168
    GL_RENDERBUFFER_SAMPLES_IMG                                              = 0x9133, // decimal value: 37171
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG                                = 0x9134, // decimal value: 37172
    GL_MAX_SAMPLES_IMG                                                       = 0x9135, // decimal value: 37173
    GL_TEXTURE_SAMPLES_IMG                                                   = 0x9136, // decimal value: 37174
    GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG                                      = 0x9137, // decimal value: 37175
    GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG                                      = 0x9138, // decimal value: 37176
    GL_CUBIC_IMG                                                             = 0x9139, // decimal value: 37177
    GL_CUBIC_MIPMAP_NEAREST_IMG                                              = 0x913A, // decimal value: 37178
    GL_CUBIC_MIPMAP_LINEAR_IMG                                               = 0x913B, // decimal value: 37179
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_AND_DOWNSAMPLE_IMG                 = 0x913C, // decimal value: 37180
    GL_NUM_DOWNSAMPLE_SCALES_IMG                                             = 0x913D, // decimal value: 37181
    GL_DOWNSAMPLE_SCALES_IMG                                                 = 0x913E, // decimal value: 37182
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG                              = 0x913F, // decimal value: 37183
    GL_MAX_DEBUG_MESSAGE_LENGTH                                              = 0x9143, // decimal value: 37187
    GL_MAX_DEBUG_LOGGED_MESSAGES                                             = 0x9144, // decimal value: 37188
    GL_DEBUG_LOGGED_MESSAGES                                                 = 0x9145, // decimal value: 37189
    GL_BUFFER_OBJECT_EXT                                                     = 0x9151, // decimal value: 37201
    GL_QUERY_OBJECT_EXT                                                      = 0x9153, // decimal value: 37203
    GL_VERTEX_ARRAY_OBJECT_EXT                                               = 0x9154, // decimal value: 37204
    GL_VIRTUAL_PAGE_SIZE_X_EXT                                               = 0x9195, // decimal value: 37269
    GL_VIRTUAL_PAGE_SIZE_Y_EXT                                               = 0x9196, // decimal value: 37270
    GL_VIRTUAL_PAGE_SIZE_Z_EXT                                               = 0x9197, // decimal value: 37271
    GL_MAX_SPARSE_TEXTURE_SIZE_EXT                                           = 0x9198, // decimal value: 37272
    GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT                                        = 0x9199, // decimal value: 37273
    GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT                                   = 0x919A, // decimal value: 37274
    GL_TEXTURE_BUFFER_OFFSET                                                 = 0x919D, // decimal value: 37277
    GL_TEXTURE_BUFFER_OFFSET_EXT                                             = 0x919D, // decimal value: 37277
    GL_TEXTURE_BUFFER_OFFSET_OES                                             = 0x919D, // decimal value: 37277
    GL_TEXTURE_BUFFER_SIZE                                                   = 0x919E, // decimal value: 37278
    GL_TEXTURE_BUFFER_SIZE_EXT                                               = 0x919E, // decimal value: 37278
    GL_TEXTURE_BUFFER_SIZE_OES                                               = 0x919E, // decimal value: 37278
    GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT                                       = 0x919F, // decimal value: 37279
    GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT                                   = 0x919F, // decimal value: 37279
    GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES                                   = 0x919F, // decimal value: 37279
    GL_TEXTURE_SPARSE_EXT                                                    = 0x91A6, // decimal value: 37286
    GL_VIRTUAL_PAGE_SIZE_INDEX_EXT                                           = 0x91A7, // decimal value: 37287
    GL_NUM_VIRTUAL_PAGE_SIZES_EXT                                            = 0x91A8, // decimal value: 37288
    GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT                            = 0x91A9, // decimal value: 37289
    GL_NUM_SPARSE_LEVELS_EXT                                                 = 0x91AA, // decimal value: 37290
    GL_MAX_SHADER_COMPILER_THREADS_KHR                                       = 0x91B0, // decimal value: 37296
    GL_COMPLETION_STATUS_KHR                                                 = 0x91B1, // decimal value: 37297
    GL_MAX_COMPUTE_UNIFORM_BLOCKS                                            = 0x91BB, // decimal value: 37307
    GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS                                       = 0x91BC, // decimal value: 37308
    GL_MAX_COMPUTE_IMAGE_UNIFORMS                                            = 0x91BD, // decimal value: 37309
    GL_MAX_COMPUTE_WORK_GROUP_COUNT                                          = 0x91BE, // decimal value: 37310
    GL_MAX_COMPUTE_WORK_GROUP_SIZE                                           = 0x91BF, // decimal value: 37311
    GL_SHADER_BINARY_DMP                                                     = 0x9250, // decimal value: 37456
    GL_SMAPHS30_PROGRAM_BINARY_DMP                                           = 0x9251, // decimal value: 37457
    GL_SMAPHS_PROGRAM_BINARY_DMP                                             = 0x9252, // decimal value: 37458
    GL_DMP_PROGRAM_BINARY_DMP                                                = 0x9253, // decimal value: 37459
    GL_GCCSO_SHADER_BINARY_FJ                                                = 0x9260, // decimal value: 37472
    GL_BLEND_PREMULTIPLIED_SRC_NV                                            = 0x9280, // decimal value: 37504
    GL_BLEND_OVERLAP_NV                                                      = 0x9281, // decimal value: 37505
    GL_UNCORRELATED_NV                                                       = 0x9282, // decimal value: 37506
    GL_DISJOINT_NV                                                           = 0x9283, // decimal value: 37507
    GL_CONJOINT_NV                                                           = 0x9284, // decimal value: 37508
    GL_BLEND_ADVANCED_COHERENT_KHR                                           = 0x9285, // decimal value: 37509
    GL_BLEND_ADVANCED_COHERENT_NV                                            = 0x9285, // decimal value: 37509
    GL_SRC_NV                                                                = 0x9286, // decimal value: 37510
    GL_DST_NV                                                                = 0x9287, // decimal value: 37511
    GL_SRC_OVER_NV                                                           = 0x9288, // decimal value: 37512
    GL_DST_OVER_NV                                                           = 0x9289, // decimal value: 37513
    GL_SRC_IN_NV                                                             = 0x928A, // decimal value: 37514
    GL_DST_IN_NV                                                             = 0x928B, // decimal value: 37515
    GL_SRC_OUT_NV                                                            = 0x928C, // decimal value: 37516
    GL_DST_OUT_NV                                                            = 0x928D, // decimal value: 37517
    GL_SRC_ATOP_NV                                                           = 0x928E, // decimal value: 37518
    GL_DST_ATOP_NV                                                           = 0x928F, // decimal value: 37519
    GL_PLUS_NV                                                               = 0x9291, // decimal value: 37521
    GL_PLUS_DARKER_NV                                                        = 0x9292, // decimal value: 37522
    GL_MULTIPLY                                                              = 0x9294, // decimal value: 37524
    GL_MULTIPLY_KHR                                                          = 0x9294, // decimal value: 37524
    GL_MULTIPLY_NV                                                           = 0x9294, // decimal value: 37524
    GL_SCREEN                                                                = 0x9295, // decimal value: 37525
    GL_SCREEN_KHR                                                            = 0x9295, // decimal value: 37525
    GL_SCREEN_NV                                                             = 0x9295, // decimal value: 37525
    GL_OVERLAY                                                               = 0x9296, // decimal value: 37526
    GL_OVERLAY_KHR                                                           = 0x9296, // decimal value: 37526
    GL_OVERLAY_NV                                                            = 0x9296, // decimal value: 37526
    GL_DARKEN                                                                = 0x9297, // decimal value: 37527
    GL_DARKEN_KHR                                                            = 0x9297, // decimal value: 37527
    GL_DARKEN_NV                                                             = 0x9297, // decimal value: 37527
    GL_LIGHTEN                                                               = 0x9298, // decimal value: 37528
    GL_LIGHTEN_KHR                                                           = 0x9298, // decimal value: 37528
    GL_LIGHTEN_NV                                                            = 0x9298, // decimal value: 37528
    GL_COLORDODGE                                                            = 0x9299, // decimal value: 37529
    GL_COLORDODGE_KHR                                                        = 0x9299, // decimal value: 37529
    GL_COLORDODGE_NV                                                         = 0x9299, // decimal value: 37529
    GL_COLORBURN                                                             = 0x929A, // decimal value: 37530
    GL_COLORBURN_KHR                                                         = 0x929A, // decimal value: 37530
    GL_COLORBURN_NV                                                          = 0x929A, // decimal value: 37530
    GL_HARDLIGHT                                                             = 0x929B, // decimal value: 37531
    GL_HARDLIGHT_KHR                                                         = 0x929B, // decimal value: 37531
    GL_HARDLIGHT_NV                                                          = 0x929B, // decimal value: 37531
    GL_SOFTLIGHT                                                             = 0x929C, // decimal value: 37532
    GL_SOFTLIGHT_KHR                                                         = 0x929C, // decimal value: 37532
    GL_SOFTLIGHT_NV                                                          = 0x929C, // decimal value: 37532
    GL_DIFFERENCE                                                            = 0x929E, // decimal value: 37534
    GL_DIFFERENCE_KHR                                                        = 0x929E, // decimal value: 37534
    GL_DIFFERENCE_NV                                                         = 0x929E, // decimal value: 37534
    GL_MINUS_NV                                                              = 0x929F, // decimal value: 37535
    GL_EXCLUSION                                                             = 0x92A0, // decimal value: 37536
    GL_EXCLUSION_KHR                                                         = 0x92A0, // decimal value: 37536
    GL_EXCLUSION_NV                                                          = 0x92A0, // decimal value: 37536
    GL_CONTRAST_NV                                                           = 0x92A1, // decimal value: 37537
    GL_INVERT_RGB_NV                                                         = 0x92A3, // decimal value: 37539
    GL_LINEARDODGE_NV                                                        = 0x92A4, // decimal value: 37540
    GL_LINEARBURN_NV                                                         = 0x92A5, // decimal value: 37541
    GL_VIVIDLIGHT_NV                                                         = 0x92A6, // decimal value: 37542
    GL_LINEARLIGHT_NV                                                        = 0x92A7, // decimal value: 37543
    GL_PINLIGHT_NV                                                           = 0x92A8, // decimal value: 37544
    GL_HARDMIX_NV                                                            = 0x92A9, // decimal value: 37545
    GL_HSL_HUE                                                               = 0x92AD, // decimal value: 37549
    GL_HSL_HUE_KHR                                                           = 0x92AD, // decimal value: 37549
    GL_HSL_HUE_NV                                                            = 0x92AD, // decimal value: 37549
    GL_HSL_SATURATION                                                        = 0x92AE, // decimal value: 37550
    GL_HSL_SATURATION_KHR                                                    = 0x92AE, // decimal value: 37550
    GL_HSL_SATURATION_NV                                                     = 0x92AE, // decimal value: 37550
    GL_HSL_COLOR                                                             = 0x92AF, // decimal value: 37551
    GL_HSL_COLOR_KHR                                                         = 0x92AF, // decimal value: 37551
    GL_HSL_COLOR_NV                                                          = 0x92AF, // decimal value: 37551
    GL_HSL_LUMINOSITY                                                        = 0x92B0, // decimal value: 37552
    GL_HSL_LUMINOSITY_KHR                                                    = 0x92B0, // decimal value: 37552
    GL_HSL_LUMINOSITY_NV                                                     = 0x92B0, // decimal value: 37552
    GL_PLUS_CLAMPED_NV                                                       = 0x92B1, // decimal value: 37553
    GL_PLUS_CLAMPED_ALPHA_NV                                                 = 0x92B2, // decimal value: 37554
    GL_MINUS_CLAMPED_NV                                                      = 0x92B3, // decimal value: 37555
    GL_INVERT_OVG_NV                                                         = 0x92B4, // decimal value: 37556
    GL_PRIMITIVE_BOUNDING_BOX                                                = 0x92BE, // decimal value: 37566
    GL_PRIMITIVE_BOUNDING_BOX_EXT                                            = 0x92BE, // decimal value: 37566
    GL_PRIMITIVE_BOUNDING_BOX_OES                                            = 0x92BE, // decimal value: 37566
    GL_ATOMIC_COUNTER_BUFFER_START                                           = 0x92C2, // decimal value: 37570
    GL_ATOMIC_COUNTER_BUFFER_SIZE                                            = 0x92C3, // decimal value: 37571
    GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS                                     = 0x92CC, // decimal value: 37580
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS                               = 0x92CD, // decimal value: 37581
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT                           = 0x92CD, // decimal value: 37581
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES                           = 0x92CD, // decimal value: 37581
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS                            = 0x92CE, // decimal value: 37582
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT                        = 0x92CE, // decimal value: 37582
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES                        = 0x92CE, // decimal value: 37582
    GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS                                   = 0x92CF, // decimal value: 37583
    GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT                               = 0x92CF, // decimal value: 37583
    GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES                               = 0x92CF, // decimal value: 37583
    GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS                                   = 0x92D0, // decimal value: 37584
    GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS                                   = 0x92D1, // decimal value: 37585
    GL_MAX_VERTEX_ATOMIC_COUNTERS                                            = 0x92D2, // decimal value: 37586
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS                                      = 0x92D3, // decimal value: 37587
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT                                  = 0x92D3, // decimal value: 37587
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES                                  = 0x92D3, // decimal value: 37587
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS                                   = 0x92D4, // decimal value: 37588
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT                               = 0x92D4, // decimal value: 37588
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES                               = 0x92D4, // decimal value: 37588
    GL_MAX_GEOMETRY_ATOMIC_COUNTERS                                          = 0x92D5, // decimal value: 37589
    GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT                                      = 0x92D5, // decimal value: 37589
    GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES                                      = 0x92D5, // decimal value: 37589
    GL_MAX_FRAGMENT_ATOMIC_COUNTERS                                          = 0x92D6, // decimal value: 37590
    GL_MAX_COMBINED_ATOMIC_COUNTERS                                          = 0x92D7, // decimal value: 37591
    GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE                                        = 0x92D8, // decimal value: 37592
    GL_UNSIGNED_INT_ATOMIC_COUNTER                                           = 0x92DB, // decimal value: 37595
    GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS                                    = 0x92DC, // decimal value: 37596
    GL_FRAGMENT_COVERAGE_TO_COLOR_NV                                         = 0x92DD, // decimal value: 37597
    GL_FRAGMENT_COVERAGE_COLOR_NV                                            = 0x92DE, // decimal value: 37598
    GL_DEBUG_OUTPUT                                                          = 0x92E0, // decimal value: 37600
    GL_IS_PER_PATCH                                                          = 0x92E7, // decimal value: 37607
    GL_IS_PER_PATCH_EXT                                                      = 0x92E7, // decimal value: 37607
    GL_IS_PER_PATCH_OES                                                      = 0x92E7, // decimal value: 37607
    GL_NAME_LENGTH                                                           = 0x92F9, // decimal value: 37625
    GL_TYPE                                                                  = 0x92FA, // decimal value: 37626
    GL_ARRAY_SIZE                                                            = 0x92FB, // decimal value: 37627
    GL_OFFSET                                                                = 0x92FC, // decimal value: 37628
    GL_BLOCK_INDEX                                                           = 0x92FD, // decimal value: 37629
    GL_ARRAY_STRIDE                                                          = 0x92FE, // decimal value: 37630
    GL_MATRIX_STRIDE                                                         = 0x92FF, // decimal value: 37631
    GL_IS_ROW_MAJOR                                                          = 0x9300, // decimal value: 37632
    GL_ATOMIC_COUNTER_BUFFER_INDEX                                           = 0x9301, // decimal value: 37633
    GL_BUFFER_BINDING                                                        = 0x9302, // decimal value: 37634
    GL_BUFFER_DATA_SIZE                                                      = 0x9303, // decimal value: 37635
    GL_NUM_ACTIVE_VARIABLES                                                  = 0x9304, // decimal value: 37636
    GL_ACTIVE_VARIABLES                                                      = 0x9305, // decimal value: 37637
    GL_REFERENCED_BY_VERTEX_SHADER                                           = 0x9306, // decimal value: 37638
    GL_REFERENCED_BY_TESS_CONTROL_SHADER                                     = 0x9307, // decimal value: 37639
    GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT                                 = 0x9307, // decimal value: 37639
    GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES                                 = 0x9307, // decimal value: 37639
    GL_REFERENCED_BY_TESS_EVALUATION_SHADER                                  = 0x9308, // decimal value: 37640
    GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT                              = 0x9308, // decimal value: 37640
    GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES                              = 0x9308, // decimal value: 37640
    GL_REFERENCED_BY_GEOMETRY_SHADER                                         = 0x9309, // decimal value: 37641
    GL_REFERENCED_BY_GEOMETRY_SHADER_EXT                                     = 0x9309, // decimal value: 37641
    GL_REFERENCED_BY_GEOMETRY_SHADER_OES                                     = 0x9309, // decimal value: 37641
    GL_REFERENCED_BY_FRAGMENT_SHADER                                         = 0x930A, // decimal value: 37642
    GL_REFERENCED_BY_COMPUTE_SHADER                                          = 0x930B, // decimal value: 37643
    GL_TOP_LEVEL_ARRAY_SIZE                                                  = 0x930C, // decimal value: 37644
    GL_TOP_LEVEL_ARRAY_STRIDE                                                = 0x930D, // decimal value: 37645
    GL_LOCATION                                                              = 0x930E, // decimal value: 37646
    GL_LOCATION_INDEX_EXT                                                    = 0x930F, // decimal value: 37647
    GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT                                        = 0x9312, // decimal value: 37650
    GL_FRAMEBUFFER_DEFAULT_LAYERS_OES                                        = 0x9312, // decimal value: 37650
    GL_MAX_FRAMEBUFFER_WIDTH                                                 = 0x9315, // decimal value: 37653
    GL_MAX_FRAMEBUFFER_HEIGHT                                                = 0x9316, // decimal value: 37654
    GL_MAX_FRAMEBUFFER_LAYERS                                                = 0x9317, // decimal value: 37655
    GL_MAX_FRAMEBUFFER_LAYERS_EXT                                            = 0x9317, // decimal value: 37655
    GL_MAX_FRAMEBUFFER_LAYERS_OES                                            = 0x9317, // decimal value: 37655
    GL_MAX_FRAMEBUFFER_SAMPLES                                               = 0x9318, // decimal value: 37656
    GL_RASTER_MULTISAMPLE_EXT                                                = 0x9327, // decimal value: 37671
    GL_RASTER_SAMPLES_EXT                                                    = 0x9328, // decimal value: 37672
    GL_MAX_RASTER_SAMPLES_EXT                                                = 0x9329, // decimal value: 37673
    GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT                                     = 0x932A, // decimal value: 37674
    GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT                                 = 0x932B, // decimal value: 37675
    GL_EFFECTIVE_RASTER_SAMPLES_EXT                                          = 0x932C, // decimal value: 37676
    GL_DEPTH_SAMPLES_NV                                                      = 0x932D, // decimal value: 37677
    GL_STENCIL_SAMPLES_NV                                                    = 0x932E, // decimal value: 37678
    GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV                                      = 0x932F, // decimal value: 37679
    GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV                                    = 0x9330, // decimal value: 37680
    GL_COVERAGE_MODULATION_TABLE_NV                                          = 0x9331, // decimal value: 37681
    GL_COVERAGE_MODULATION_NV                                                = 0x9332, // decimal value: 37682
    GL_COVERAGE_MODULATION_TABLE_SIZE_NV                                     = 0x9333, // decimal value: 37683
    GL_FILL_RECTANGLE_NV                                                     = 0x933C, // decimal value: 37692
    GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV                                      = 0x933D, // decimal value: 37693
    GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV                                   = 0x933E, // decimal value: 37694
    GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV                                  = 0x933F, // decimal value: 37695
    GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV                            = 0x9340, // decimal value: 37696
    GL_PROGRAMMABLE_SAMPLE_LOCATION_NV                                       = 0x9341, // decimal value: 37697
    GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV                          = 0x9342, // decimal value: 37698
    GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV                             = 0x9343, // decimal value: 37699
    GL_CONSERVATIVE_RASTERIZATION_NV                                         = 0x9346, // decimal value: 37702
    GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV                                     = 0x9347, // decimal value: 37703
    GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV                                     = 0x9348, // decimal value: 37704
    GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV                                   = 0x9349, // decimal value: 37705
    GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV                                        = 0x9350, // decimal value: 37712
    GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV                                        = 0x9351, // decimal value: 37713
    GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV                                        = 0x9352, // decimal value: 37714
    GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV                                        = 0x9353, // decimal value: 37715
    GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV                                        = 0x9354, // decimal value: 37716
    GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV                                        = 0x9355, // decimal value: 37717
    GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV                                        = 0x9356, // decimal value: 37718
    GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV                                        = 0x9357, // decimal value: 37719
    GL_VIEWPORT_SWIZZLE_X_NV                                                 = 0x9358, // decimal value: 37720
    GL_VIEWPORT_SWIZZLE_Y_NV                                                 = 0x9359, // decimal value: 37721
    GL_VIEWPORT_SWIZZLE_Z_NV                                                 = 0x935A, // decimal value: 37722
    GL_VIEWPORT_SWIZZLE_W_NV                                                 = 0x935B, // decimal value: 37723
    GL_CLIP_ORIGIN_EXT                                                       = 0x935C, // decimal value: 37724
    GL_CLIP_DEPTH_MODE_EXT                                                   = 0x935D, // decimal value: 37725
    GL_NEGATIVE_ONE_TO_ONE_EXT                                               = 0x935E, // decimal value: 37726
    GL_ZERO_TO_ONE_EXT                                                       = 0x935F, // decimal value: 37727
    GL_TEXTURE_REDUCTION_MODE_EXT                                            = 0x9366, // decimal value: 37734
    GL_WEIGHTED_AVERAGE_EXT                                                  = 0x9367, // decimal value: 37735
    GL_FONT_GLYPHS_AVAILABLE_NV                                              = 0x9368, // decimal value: 37736
    GL_FONT_TARGET_UNAVAILABLE_NV                                            = 0x9369, // decimal value: 37737
    GL_FONT_UNAVAILABLE_NV                                                   = 0x936A, // decimal value: 37738
    GL_FONT_UNINTELLIGIBLE_NV                                                = 0x936B, // decimal value: 37739
    GL_STANDARD_FONT_FORMAT_NV                                               = 0x936C, // decimal value: 37740
    GL_FRAGMENT_INPUT_NV                                                     = 0x936D, // decimal value: 37741
    GL_MULTISAMPLES_NV                                                       = 0x9371, // decimal value: 37745
    GL_SUPERSAMPLE_SCALE_X_NV                                                = 0x9372, // decimal value: 37746
    GL_SUPERSAMPLE_SCALE_Y_NV                                                = 0x9373, // decimal value: 37747
    GL_CONFORMANT_NV                                                         = 0x9374, // decimal value: 37748
    GL_VIEWPORT_POSITION_W_SCALE_NV                                          = 0x937C, // decimal value: 37756
    GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV                                  = 0x937D, // decimal value: 37757
    GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV                                  = 0x937E, // decimal value: 37758
    GL_MULTISAMPLE_LINE_WIDTH_RANGE                                          = 0x9381, // decimal value: 37761
    GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY                                    = 0x9382, // decimal value: 37762
    GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE                                 = 0x93A0, // decimal value: 37792
    GL_BGRA8_EXT                                                             = 0x93A1, // decimal value: 37793
    GL_TEXTURE_USAGE_ANGLE                                                   = 0x93A2, // decimal value: 37794
    GL_FRAMEBUFFER_ATTACHMENT_ANGLE                                          = 0x93A3, // decimal value: 37795
    GL_PACK_REVERSE_ROW_ORDER_ANGLE                                          = 0x93A4, // decimal value: 37796
    GL_PROGRAM_BINARY_ANGLE                                                  = 0x93A6, // decimal value: 37798
    GL_COMPRESSED_RGBA_ASTC_4x4                                              = 0x93B0, // decimal value: 37808
    GL_COMPRESSED_RGBA_ASTC_4x4_KHR                                          = 0x93B0, // decimal value: 37808
    GL_COMPRESSED_RGBA_ASTC_5x4                                              = 0x93B1, // decimal value: 37809
    GL_COMPRESSED_RGBA_ASTC_5x4_KHR                                          = 0x93B1, // decimal value: 37809
    GL_COMPRESSED_RGBA_ASTC_5x5                                              = 0x93B2, // decimal value: 37810
    GL_COMPRESSED_RGBA_ASTC_5x5_KHR                                          = 0x93B2, // decimal value: 37810
    GL_COMPRESSED_RGBA_ASTC_6x5                                              = 0x93B3, // decimal value: 37811
    GL_COMPRESSED_RGBA_ASTC_6x5_KHR                                          = 0x93B3, // decimal value: 37811
    GL_COMPRESSED_RGBA_ASTC_6x6                                              = 0x93B4, // decimal value: 37812
    GL_COMPRESSED_RGBA_ASTC_6x6_KHR                                          = 0x93B4, // decimal value: 37812
    GL_COMPRESSED_RGBA_ASTC_8x5                                              = 0x93B5, // decimal value: 37813
    GL_COMPRESSED_RGBA_ASTC_8x5_KHR                                          = 0x93B5, // decimal value: 37813
    GL_COMPRESSED_RGBA_ASTC_8x6                                              = 0x93B6, // decimal value: 37814
    GL_COMPRESSED_RGBA_ASTC_8x6_KHR                                          = 0x93B6, // decimal value: 37814
    GL_COMPRESSED_RGBA_ASTC_8x8                                              = 0x93B7, // decimal value: 37815
    GL_COMPRESSED_RGBA_ASTC_8x8_KHR                                          = 0x93B7, // decimal value: 37815
    GL_COMPRESSED_RGBA_ASTC_10x5                                             = 0x93B8, // decimal value: 37816
    GL_COMPRESSED_RGBA_ASTC_10x5_KHR                                         = 0x93B8, // decimal value: 37816
    GL_COMPRESSED_RGBA_ASTC_10x6                                             = 0x93B9, // decimal value: 37817
    GL_COMPRESSED_RGBA_ASTC_10x6_KHR                                         = 0x93B9, // decimal value: 37817
    GL_COMPRESSED_RGBA_ASTC_10x8                                             = 0x93BA, // decimal value: 37818
    GL_COMPRESSED_RGBA_ASTC_10x8_KHR                                         = 0x93BA, // decimal value: 37818
    GL_COMPRESSED_RGBA_ASTC_10x10                                            = 0x93BB, // decimal value: 37819
    GL_COMPRESSED_RGBA_ASTC_10x10_KHR                                        = 0x93BB, // decimal value: 37819
    GL_COMPRESSED_RGBA_ASTC_12x10                                            = 0x93BC, // decimal value: 37820
    GL_COMPRESSED_RGBA_ASTC_12x10_KHR                                        = 0x93BC, // decimal value: 37820
    GL_COMPRESSED_RGBA_ASTC_12x12                                            = 0x93BD, // decimal value: 37821
    GL_COMPRESSED_RGBA_ASTC_12x12_KHR                                        = 0x93BD, // decimal value: 37821
    GL_COMPRESSED_RGBA_ASTC_3x3x3_OES                                        = 0x93C0, // decimal value: 37824
    GL_COMPRESSED_RGBA_ASTC_4x3x3_OES                                        = 0x93C1, // decimal value: 37825
    GL_COMPRESSED_RGBA_ASTC_4x4x3_OES                                        = 0x93C2, // decimal value: 37826
    GL_COMPRESSED_RGBA_ASTC_4x4x4_OES                                        = 0x93C3, // decimal value: 37827
    GL_COMPRESSED_RGBA_ASTC_5x4x4_OES                                        = 0x93C4, // decimal value: 37828
    GL_COMPRESSED_RGBA_ASTC_5x5x4_OES                                        = 0x93C5, // decimal value: 37829
    GL_COMPRESSED_RGBA_ASTC_5x5x5_OES                                        = 0x93C6, // decimal value: 37830
    GL_COMPRESSED_RGBA_ASTC_6x5x5_OES                                        = 0x93C7, // decimal value: 37831
    GL_COMPRESSED_RGBA_ASTC_6x6x5_OES                                        = 0x93C8, // decimal value: 37832
    GL_COMPRESSED_RGBA_ASTC_6x6x6_OES                                        = 0x93C9, // decimal value: 37833
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4                                      = 0x93D0, // decimal value: 37840
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR                                  = 0x93D0, // decimal value: 37840
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4                                      = 0x93D1, // decimal value: 37841
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR                                  = 0x93D1, // decimal value: 37841
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5                                      = 0x93D2, // decimal value: 37842
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR                                  = 0x93D2, // decimal value: 37842
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5                                      = 0x93D3, // decimal value: 37843
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR                                  = 0x93D3, // decimal value: 37843
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6                                      = 0x93D4, // decimal value: 37844
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR                                  = 0x93D4, // decimal value: 37844
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5                                      = 0x93D5, // decimal value: 37845
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR                                  = 0x93D5, // decimal value: 37845
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6                                      = 0x93D6, // decimal value: 37846
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR                                  = 0x93D6, // decimal value: 37846
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8                                      = 0x93D7, // decimal value: 37847
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR                                  = 0x93D7, // decimal value: 37847
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5                                     = 0x93D8, // decimal value: 37848
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR                                 = 0x93D8, // decimal value: 37848
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6                                     = 0x93D9, // decimal value: 37849
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR                                 = 0x93D9, // decimal value: 37849
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8                                     = 0x93DA, // decimal value: 37850
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR                                 = 0x93DA, // decimal value: 37850
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10                                    = 0x93DB, // decimal value: 37851
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR                                = 0x93DB, // decimal value: 37851
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10                                    = 0x93DC, // decimal value: 37852
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR                                = 0x93DC, // decimal value: 37852
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12                                    = 0x93DD, // decimal value: 37853
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR                                = 0x93DD, // decimal value: 37853
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES                                = 0x93E0, // decimal value: 37856
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES                                = 0x93E1, // decimal value: 37857
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES                                = 0x93E2, // decimal value: 37858
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES                                = 0x93E3, // decimal value: 37859
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES                                = 0x93E4, // decimal value: 37860
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES                                = 0x93E5, // decimal value: 37861
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES                                = 0x93E6, // decimal value: 37862
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES                                = 0x93E7, // decimal value: 37863
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES                                = 0x93E8, // decimal value: 37864
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES                                = 0x93E9, // decimal value: 37865
    GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG                                = 0x93F0, // decimal value: 37872
    GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG                                = 0x93F1, // decimal value: 37873
    GL_PERFQUERY_COUNTER_EVENT_INTEL                                         = 0x94F0, // decimal value: 38128
    GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL                                 = 0x94F1, // decimal value: 38129
    GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL                                  = 0x94F2, // decimal value: 38130
    GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL                                    = 0x94F3, // decimal value: 38131
    GL_PERFQUERY_COUNTER_RAW_INTEL                                           = 0x94F4, // decimal value: 38132
    GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL                                     = 0x94F5, // decimal value: 38133
    GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL                                   = 0x94F8, // decimal value: 38136
    GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL                                   = 0x94F9, // decimal value: 38137
    GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL                                    = 0x94FA, // decimal value: 38138
    GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL                                   = 0x94FB, // decimal value: 38139
    GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL                                   = 0x94FC, // decimal value: 38140
    GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL                                 = 0x94FD, // decimal value: 38141
    GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL                               = 0x94FE, // decimal value: 38142
    GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL                               = 0x94FF, // decimal value: 38143
    GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL                                 = 0x9500, // decimal value: 38144
    GL_CONSERVATIVE_RASTER_MODE_NV                                           = 0x954D, // decimal value: 38221
    GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV                                 = 0x954E, // decimal value: 38222
    GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV                        = 0x954F, // decimal value: 38223
    GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV                                  = 0x9550, // decimal value: 38224
    GL_NUM_TILING_TYPES_EXT                                                  = 0x9582, // decimal value: 38274
    GL_TILING_TYPES_EXT                                                      = 0x9583, // decimal value: 38275
    GL_OPTIMAL_TILING_EXT                                                    = 0x9584, // decimal value: 38276
    GL_LINEAR_TILING_EXT                                                     = 0x9585, // decimal value: 38277
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR                          = 0x9630, // decimal value: 38448
    GL_MAX_VIEWS_OVR                                                         = 0x9631, // decimal value: 38449
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR                    = 0x9632, // decimal value: 38450
    GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR                               = 0x9633, // decimal value: 38451
    GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT                       = 0x9650, // decimal value: 38480
    GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT                            = 0x9651, // decimal value: 38481
    GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT = 0x9652, // decimal value: 38482
    GL_SHARED_EDGE_NV                                                        = 0xC0, // decimal value: 192
    GL_ROUNDED_RECT_NV                                                       = 0xE8, // decimal value: 232
    GL_RELATIVE_ROUNDED_RECT_NV                                              = 0xE9, // decimal value: 233
    GL_ROUNDED_RECT2_NV                                                      = 0xEA, // decimal value: 234
    GL_RELATIVE_ROUNDED_RECT2_NV                                             = 0xEB, // decimal value: 235
    GL_ROUNDED_RECT4_NV                                                      = 0xEC, // decimal value: 236
    GL_RELATIVE_ROUNDED_RECT4_NV                                             = 0xED, // decimal value: 237
    GL_ROUNDED_RECT8_NV                                                      = 0xEE, // decimal value: 238
    GL_RELATIVE_ROUNDED_RECT8_NV                                             = 0xEF, // decimal value: 239
    GL_RESTART_PATH_NV                                                       = 0xF0, // decimal value: 240
    GL_DUP_FIRST_CUBIC_CURVE_TO_NV                                           = 0xF2, // decimal value: 242
    GL_DUP_LAST_CUBIC_CURVE_TO_NV                                            = 0xF4, // decimal value: 244
    GL_RECT_NV                                                               = 0xF6, // decimal value: 246
    GL_RELATIVE_RECT_NV                                                      = 0xF7, // decimal value: 247
    GL_CIRCULAR_CCW_ARC_TO_NV                                                = 0xF8, // decimal value: 248
    GL_CIRCULAR_CW_ARC_TO_NV                                                 = 0xFA, // decimal value: 250
    GL_CIRCULAR_TANGENT_ARC_TO_NV                                            = 0xFC, // decimal value: 252
    GL_ARC_TO_NV                                                             = 0xFE, // decimal value: 254
    GL_RELATIVE_ARC_TO_NV                                                    = 0xFF, // decimal value: 255
    GL_UUID_SIZE_EXT                                                         = 16,
    GL_LUID_SIZE_EXT                                                         = 8,

};


// import enums to namespace

// AlphaFunction

GLESBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER;
GLESBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS;
GLESBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL;
GLESBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL;
GLESBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER;
GLESBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL;
GLESBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL;
GLESBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS;

// AtomicCounterBufferPName

GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER_BINDING = GLenum::GL_ATOMIC_COUNTER_BUFFER_BINDING;

// AttributeType

GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC2 = GLenum::GL_FLOAT_VEC2;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC2_ARB = GLenum::GL_FLOAT_VEC2_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC3 = GLenum::GL_FLOAT_VEC3;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC3_ARB = GLenum::GL_FLOAT_VEC3_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC4 = GLenum::GL_FLOAT_VEC4;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC4_ARB = GLenum::GL_FLOAT_VEC4_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC2 = GLenum::GL_INT_VEC2;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC2_ARB = GLenum::GL_INT_VEC2_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC3 = GLenum::GL_INT_VEC3;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC3_ARB = GLenum::GL_INT_VEC3_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC4 = GLenum::GL_INT_VEC4;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC4_ARB = GLenum::GL_INT_VEC4_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL = GLenum::GL_BOOL;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_ARB = GLenum::GL_BOOL_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC2 = GLenum::GL_BOOL_VEC2;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC2_ARB = GLenum::GL_BOOL_VEC2_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC3 = GLenum::GL_BOOL_VEC3;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC3_ARB = GLenum::GL_BOOL_VEC3_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC4 = GLenum::GL_BOOL_VEC4;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC4_ARB = GLenum::GL_BOOL_VEC4_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2 = GLenum::GL_FLOAT_MAT2;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2_ARB = GLenum::GL_FLOAT_MAT2_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3 = GLenum::GL_FLOAT_MAT3;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3_ARB = GLenum::GL_FLOAT_MAT3_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4 = GLenum::GL_FLOAT_MAT4;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4_ARB = GLenum::GL_FLOAT_MAT4_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_1D = GLenum::GL_SAMPLER_1D;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_1D_ARB = GLenum::GL_SAMPLER_1D_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D = GLenum::GL_SAMPLER_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_ARB = GLenum::GL_SAMPLER_2D_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_3D = GLenum::GL_SAMPLER_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_3D_ARB = GLenum::GL_SAMPLER_3D_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_3D_OES = GLenum::GL_SAMPLER_3D_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE = GLenum::GL_SAMPLER_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_ARB = GLenum::GL_SAMPLER_CUBE_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_1D_SHADOW = GLenum::GL_SAMPLER_1D_SHADOW;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_1D_SHADOW_ARB = GLenum::GL_SAMPLER_1D_SHADOW_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_SHADOW = GLenum::GL_SAMPLER_2D_SHADOW;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_SHADOW_ARB = GLenum::GL_SAMPLER_2D_SHADOW_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_SHADOW_EXT = GLenum::GL_SAMPLER_2D_SHADOW_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_RECT = GLenum::GL_SAMPLER_2D_RECT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_RECT_ARB = GLenum::GL_SAMPLER_2D_RECT_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_RECT_SHADOW = GLenum::GL_SAMPLER_2D_RECT_SHADOW;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_RECT_SHADOW_ARB = GLenum::GL_SAMPLER_2D_RECT_SHADOW_ARB;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2x3 = GLenum::GL_FLOAT_MAT2x3;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2x3_NV = GLenum::GL_FLOAT_MAT2x3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2x4 = GLenum::GL_FLOAT_MAT2x4;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2x4_NV = GLenum::GL_FLOAT_MAT2x4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3x2 = GLenum::GL_FLOAT_MAT3x2;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3x2_NV = GLenum::GL_FLOAT_MAT3x2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3x4 = GLenum::GL_FLOAT_MAT3x4;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3x4_NV = GLenum::GL_FLOAT_MAT3x4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4x2 = GLenum::GL_FLOAT_MAT4x2;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4x2_NV = GLenum::GL_FLOAT_MAT4x2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4x3 = GLenum::GL_FLOAT_MAT4x3;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4x3_NV = GLenum::GL_FLOAT_MAT4x3_NV;

// BindTransformFeedbackTarget

GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK = GLenum::GL_TRANSFORM_FEEDBACK;

// BlendEquationModeEXT

GLESBINDING_CONSTEXPR static const GLenum GL_FUNC_ADD = GLenum::GL_FUNC_ADD;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_EXT = GLenum::GL_MIN_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_EXT = GLenum::GL_MAX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FUNC_SUBTRACT = GLenum::GL_FUNC_SUBTRACT;
GLESBINDING_CONSTEXPR static const GLenum GL_FUNC_REVERSE_SUBTRACT = GLenum::GL_FUNC_REVERSE_SUBTRACT;

// BlendingFactor

GLESBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_COLOR = GLenum::GL_SRC_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC_COLOR = GLenum::GL_ONE_MINUS_SRC_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_ALPHA = GLenum::GL_SRC_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC_ALPHA = GLenum::GL_ONE_MINUS_SRC_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_ALPHA = GLenum::GL_DST_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_DST_ALPHA = GLenum::GL_ONE_MINUS_DST_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_COLOR = GLenum::GL_DST_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_DST_COLOR = GLenum::GL_ONE_MINUS_DST_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_ALPHA_SATURATE = GLenum::GL_SRC_ALPHA_SATURATE;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSTANT_COLOR = GLenum::GL_CONSTANT_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_CONSTANT_COLOR = GLenum::GL_ONE_MINUS_CONSTANT_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSTANT_ALPHA = GLenum::GL_CONSTANT_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_CONSTANT_ALPHA = GLenum::GL_ONE_MINUS_CONSTANT_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE = GLenum::GL_ONE;

// BlitFramebufferFilter

GLESBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR;

// Buffer

GLESBINDING_CONSTEXPR static const GLenum GL_COLOR = GLenum::GL_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH = GLenum::GL_DEPTH;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL = GLenum::GL_STENCIL;

// BufferAccessARB

GLESBINDING_CONSTEXPR static const GLenum GL_READ_ONLY = GLenum::GL_READ_ONLY;
GLESBINDING_CONSTEXPR static const GLenum GL_WRITE_ONLY = GLenum::GL_WRITE_ONLY;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_WRITE = GLenum::GL_READ_WRITE;

// BufferStorageTarget

GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER = GLenum::GL_PIXEL_PACK_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER = GLenum::GL_PIXEL_UNPACK_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER = GLenum::GL_UNIFORM_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER = GLenum::GL_TEXTURE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_READ_BUFFER = GLenum::GL_COPY_READ_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_WRITE_BUFFER = GLenum::GL_COPY_WRITE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_INDIRECT_BUFFER = GLenum::GL_DRAW_INDIRECT_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER = GLenum::GL_SHADER_STORAGE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_DISPATCH_INDIRECT_BUFFER = GLenum::GL_DISPATCH_INDIRECT_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER = GLenum::GL_ATOMIC_COUNTER_BUFFER;

// BufferTargetARB

// GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER = GLenum::GL_PIXEL_PACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER = GLenum::GL_PIXEL_UNPACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER = GLenum::GL_UNIFORM_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER = GLenum::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_COPY_READ_BUFFER = GLenum::GL_COPY_READ_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_COPY_WRITE_BUFFER = GLenum::GL_COPY_WRITE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_INDIRECT_BUFFER = GLenum::GL_DRAW_INDIRECT_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER = GLenum::GL_SHADER_STORAGE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_DISPATCH_INDIRECT_BUFFER = GLenum::GL_DISPATCH_INDIRECT_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER = GLenum::GL_ATOMIC_COUNTER_BUFFER; // reuse BufferStorageTarget

// BufferUsageARB

GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_DRAW = GLenum::GL_STREAM_DRAW;
GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_READ = GLenum::GL_STREAM_READ;
GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_COPY = GLenum::GL_STREAM_COPY;
GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_DRAW = GLenum::GL_STATIC_DRAW;
GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_READ = GLenum::GL_STATIC_READ;
GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_COPY = GLenum::GL_STATIC_COPY;
GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_DRAW = GLenum::GL_DYNAMIC_DRAW;
GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_READ = GLenum::GL_DYNAMIC_READ;
GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_COPY = GLenum::GL_DYNAMIC_COPY;

// CheckFramebufferStatusTarget

GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER = GLenum::GL_READ_FRAMEBUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER = GLenum::GL_DRAW_FRAMEBUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER;

// ColorBuffer

GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT;
GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK;
GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1 = GLenum::GL_COLOR_ATTACHMENT1;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2 = GLenum::GL_COLOR_ATTACHMENT2;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3 = GLenum::GL_COLOR_ATTACHMENT3;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4 = GLenum::GL_COLOR_ATTACHMENT4;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5 = GLenum::GL_COLOR_ATTACHMENT5;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6 = GLenum::GL_COLOR_ATTACHMENT6;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7 = GLenum::GL_COLOR_ATTACHMENT7;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8 = GLenum::GL_COLOR_ATTACHMENT8;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9 = GLenum::GL_COLOR_ATTACHMENT9;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10 = GLenum::GL_COLOR_ATTACHMENT10;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11 = GLenum::GL_COLOR_ATTACHMENT11;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12 = GLenum::GL_COLOR_ATTACHMENT12;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13 = GLenum::GL_COLOR_ATTACHMENT13;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14 = GLenum::GL_COLOR_ATTACHMENT14;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15 = GLenum::GL_COLOR_ATTACHMENT15;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT16 = GLenum::GL_COLOR_ATTACHMENT16;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT17 = GLenum::GL_COLOR_ATTACHMENT17;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT18 = GLenum::GL_COLOR_ATTACHMENT18;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT19 = GLenum::GL_COLOR_ATTACHMENT19;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT20 = GLenum::GL_COLOR_ATTACHMENT20;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT21 = GLenum::GL_COLOR_ATTACHMENT21;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT22 = GLenum::GL_COLOR_ATTACHMENT22;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT23 = GLenum::GL_COLOR_ATTACHMENT23;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT24 = GLenum::GL_COLOR_ATTACHMENT24;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT25 = GLenum::GL_COLOR_ATTACHMENT25;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT26 = GLenum::GL_COLOR_ATTACHMENT26;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT27 = GLenum::GL_COLOR_ATTACHMENT27;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT28 = GLenum::GL_COLOR_ATTACHMENT28;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT29 = GLenum::GL_COLOR_ATTACHMENT29;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT30 = GLenum::GL_COLOR_ATTACHMENT30;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT31 = GLenum::GL_COLOR_ATTACHMENT31;

// ColorMaterialFace

// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// ColorPointerType

GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE;
GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT;

// CopyBufferSubDataTarget

// GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER = GLenum::GL_PIXEL_PACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER = GLenum::GL_PIXEL_UNPACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER = GLenum::GL_UNIFORM_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER = GLenum::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_COPY_READ_BUFFER = GLenum::GL_COPY_READ_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_COPY_WRITE_BUFFER = GLenum::GL_COPY_WRITE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_INDIRECT_BUFFER = GLenum::GL_DRAW_INDIRECT_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER = GLenum::GL_SHADER_STORAGE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_DISPATCH_INDIRECT_BUFFER = GLenum::GL_DISPATCH_INDIRECT_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER = GLenum::GL_ATOMIC_COUNTER_BUFFER; // reuse BufferStorageTarget

// CullFaceMode

// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// DebugSeverity

GLESBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_HIGH = GLenum::GL_DEBUG_SEVERITY_HIGH;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_MEDIUM = GLenum::GL_DEBUG_SEVERITY_MEDIUM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_LOW = GLenum::GL_DEBUG_SEVERITY_LOW;

// DebugSource

// GLESBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse DebugSeverity
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_API = GLenum::GL_DEBUG_SOURCE_API;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_WINDOW_SYSTEM = GLenum::GL_DEBUG_SOURCE_WINDOW_SYSTEM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_SHADER_COMPILER = GLenum::GL_DEBUG_SOURCE_SHADER_COMPILER;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_THIRD_PARTY = GLenum::GL_DEBUG_SOURCE_THIRD_PARTY;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_APPLICATION = GLenum::GL_DEBUG_SOURCE_APPLICATION;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_OTHER = GLenum::GL_DEBUG_SOURCE_OTHER;

// DebugType

// GLESBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse DebugSeverity
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_ERROR = GLenum::GL_DEBUG_TYPE_ERROR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = GLenum::GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = GLenum::GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_PORTABILITY = GLenum::GL_DEBUG_TYPE_PORTABILITY;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_PERFORMANCE = GLenum::GL_DEBUG_TYPE_PERFORMANCE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_OTHER = GLenum::GL_DEBUG_TYPE_OTHER;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_MARKER = GLenum::GL_DEBUG_TYPE_MARKER;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_PUSH_GROUP = GLenum::GL_DEBUG_TYPE_PUSH_GROUP;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_POP_GROUP = GLenum::GL_DEBUG_TYPE_POP_GROUP;

// DepthFunction

// GLESBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// DrawElementsType

// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType

// EnableCap

GLESBINDING_CONSTEXPR static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST;
GLESBINDING_CONSTEXPR static const GLenum GL_DITHER = GLenum::GL_DITHER;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND;
GLESBINDING_CONSTEXPR static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY = GLenum::GL_VERTEX_ARRAY;

// ErrorCode

GLESBINDING_CONSTEXPR static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR;
GLESBINDING_CONSTEXPR static const GLenum GL_INVALID_ENUM = GLenum::GL_INVALID_ENUM;
GLESBINDING_CONSTEXPR static const GLenum GL_INVALID_VALUE = GLenum::GL_INVALID_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_INVALID_OPERATION = GLenum::GL_INVALID_OPERATION;
GLESBINDING_CONSTEXPR static const GLenum GL_STACK_OVERFLOW = GLenum::GL_STACK_OVERFLOW;
GLESBINDING_CONSTEXPR static const GLenum GL_STACK_UNDERFLOW = GLenum::GL_STACK_UNDERFLOW;
GLESBINDING_CONSTEXPR static const GLenum GL_OUT_OF_MEMORY = GLenum::GL_OUT_OF_MEMORY;
GLESBINDING_CONSTEXPR static const GLenum GL_INVALID_FRAMEBUFFER_OPERATION = GLenum::GL_INVALID_FRAMEBUFFER_OPERATION;

// ExternalHandleType

GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_OPAQUE_FD_EXT = GLenum::GL_HANDLE_TYPE_OPAQUE_FD_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_OPAQUE_WIN32_EXT = GLenum::GL_HANDLE_TYPE_OPAQUE_WIN32_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT = GLenum::GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT = GLenum::GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_D3D12_RESOURCE_EXT = GLenum::GL_HANDLE_TYPE_D3D12_RESOURCE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_D3D11_IMAGE_EXT = GLenum::GL_HANDLE_TYPE_D3D11_IMAGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT = GLenum::GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_D3D12_FENCE_EXT = GLenum::GL_HANDLE_TYPE_D3D12_FENCE_EXT;

// FogCoordinatePointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// FogMode

// GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse BlitFramebufferFilter

// FogPointerTypeEXT

// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// FogPointerTypeIBM

// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// FramebufferAttachment

GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COLOR_ATTACHMENTS = GLenum::GL_MAX_COLOR_ATTACHMENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COLOR_ATTACHMENTS_EXT = GLenum::GL_MAX_COLOR_ATTACHMENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COLOR_ATTACHMENTS_NV = GLenum::GL_MAX_COLOR_ATTACHMENTS_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0_EXT = GLenum::GL_COLOR_ATTACHMENT0_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0_NV = GLenum::GL_COLOR_ATTACHMENT0_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1 = GLenum::GL_COLOR_ATTACHMENT1; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1_EXT = GLenum::GL_COLOR_ATTACHMENT1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1_NV = GLenum::GL_COLOR_ATTACHMENT1_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2 = GLenum::GL_COLOR_ATTACHMENT2; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2_EXT = GLenum::GL_COLOR_ATTACHMENT2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2_NV = GLenum::GL_COLOR_ATTACHMENT2_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3 = GLenum::GL_COLOR_ATTACHMENT3; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3_EXT = GLenum::GL_COLOR_ATTACHMENT3_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3_NV = GLenum::GL_COLOR_ATTACHMENT3_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4 = GLenum::GL_COLOR_ATTACHMENT4; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4_EXT = GLenum::GL_COLOR_ATTACHMENT4_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4_NV = GLenum::GL_COLOR_ATTACHMENT4_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5 = GLenum::GL_COLOR_ATTACHMENT5; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5_EXT = GLenum::GL_COLOR_ATTACHMENT5_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5_NV = GLenum::GL_COLOR_ATTACHMENT5_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6 = GLenum::GL_COLOR_ATTACHMENT6; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6_EXT = GLenum::GL_COLOR_ATTACHMENT6_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6_NV = GLenum::GL_COLOR_ATTACHMENT6_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7 = GLenum::GL_COLOR_ATTACHMENT7; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7_EXT = GLenum::GL_COLOR_ATTACHMENT7_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7_NV = GLenum::GL_COLOR_ATTACHMENT7_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8 = GLenum::GL_COLOR_ATTACHMENT8; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8_EXT = GLenum::GL_COLOR_ATTACHMENT8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8_NV = GLenum::GL_COLOR_ATTACHMENT8_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9 = GLenum::GL_COLOR_ATTACHMENT9; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9_EXT = GLenum::GL_COLOR_ATTACHMENT9_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9_NV = GLenum::GL_COLOR_ATTACHMENT9_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10 = GLenum::GL_COLOR_ATTACHMENT10; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10_EXT = GLenum::GL_COLOR_ATTACHMENT10_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10_NV = GLenum::GL_COLOR_ATTACHMENT10_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11 = GLenum::GL_COLOR_ATTACHMENT11; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11_EXT = GLenum::GL_COLOR_ATTACHMENT11_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11_NV = GLenum::GL_COLOR_ATTACHMENT11_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12 = GLenum::GL_COLOR_ATTACHMENT12; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12_EXT = GLenum::GL_COLOR_ATTACHMENT12_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12_NV = GLenum::GL_COLOR_ATTACHMENT12_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13 = GLenum::GL_COLOR_ATTACHMENT13; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13_EXT = GLenum::GL_COLOR_ATTACHMENT13_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13_NV = GLenum::GL_COLOR_ATTACHMENT13_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14 = GLenum::GL_COLOR_ATTACHMENT14; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14_EXT = GLenum::GL_COLOR_ATTACHMENT14_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14_NV = GLenum::GL_COLOR_ATTACHMENT14_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15 = GLenum::GL_COLOR_ATTACHMENT15; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15_EXT = GLenum::GL_COLOR_ATTACHMENT15_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15_NV = GLenum::GL_COLOR_ATTACHMENT15_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT16 = GLenum::GL_COLOR_ATTACHMENT16; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT17 = GLenum::GL_COLOR_ATTACHMENT17; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT18 = GLenum::GL_COLOR_ATTACHMENT18; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT19 = GLenum::GL_COLOR_ATTACHMENT19; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT20 = GLenum::GL_COLOR_ATTACHMENT20; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT21 = GLenum::GL_COLOR_ATTACHMENT21; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT22 = GLenum::GL_COLOR_ATTACHMENT22; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT23 = GLenum::GL_COLOR_ATTACHMENT23; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT24 = GLenum::GL_COLOR_ATTACHMENT24; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT25 = GLenum::GL_COLOR_ATTACHMENT25; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT26 = GLenum::GL_COLOR_ATTACHMENT26; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT27 = GLenum::GL_COLOR_ATTACHMENT27; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT28 = GLenum::GL_COLOR_ATTACHMENT28; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT29 = GLenum::GL_COLOR_ATTACHMENT29; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT30 = GLenum::GL_COLOR_ATTACHMENT30; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT31 = GLenum::GL_COLOR_ATTACHMENT31; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_ATTACHMENT = GLenum::GL_DEPTH_ATTACHMENT;

// FramebufferAttachmentParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = GLenum::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_LAYERED = GLenum::GL_FRAMEBUFFER_ATTACHMENT_LAYERED;

// FramebufferFetchNoncoherent

GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM = GLenum::GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM;

// FramebufferParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_WIDTH = GLenum::GL_FRAMEBUFFER_DEFAULT_WIDTH;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_HEIGHT = GLenum::GL_FRAMEBUFFER_DEFAULT_HEIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_LAYERS = GLenum::GL_FRAMEBUFFER_DEFAULT_LAYERS;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_SAMPLES = GLenum::GL_FRAMEBUFFER_DEFAULT_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = GLenum::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS;

// FramebufferStatus

GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_UNDEFINED = GLenum::GL_FRAMEBUFFER_UNDEFINED;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_COMPLETE = GLenum::GL_FRAMEBUFFER_COMPLETE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_UNSUPPORTED = GLenum::GL_FRAMEBUFFER_UNSUPPORTED;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = GLenum::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;

// FramebufferTarget

// GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER = GLenum::GL_READ_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER = GLenum::GL_DRAW_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget

// FrontFaceDirection

GLESBINDING_CONSTEXPR static const GLenum GL_CW = GLenum::GL_CW;
GLESBINDING_CONSTEXPR static const GLenum GL_CCW = GLenum::GL_CCW;

// GetFramebufferParameter

GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_BUFFERS = GLenum::GL_SAMPLE_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE = GLenum::GL_IMPLEMENTATION_COLOR_READ_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT = GLenum::GL_IMPLEMENTATION_COLOR_READ_FORMAT;
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_WIDTH = GLenum::GL_FRAMEBUFFER_DEFAULT_WIDTH; // reuse FramebufferParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_HEIGHT = GLenum::GL_FRAMEBUFFER_DEFAULT_HEIGHT; // reuse FramebufferParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_LAYERS = GLenum::GL_FRAMEBUFFER_DEFAULT_LAYERS; // reuse FramebufferParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_SAMPLES = GLenum::GL_FRAMEBUFFER_DEFAULT_SAMPLES; // reuse FramebufferParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = GLenum::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS; // reuse FramebufferParameterName

// GetPName

GLESBINDING_CONSTEXPR static const GLenum GL_LINE_WIDTH = GLenum::GL_LINE_WIDTH;
// GLESBINDING_CONSTEXPR static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_CULL_FACE_MODE = GLenum::GL_CULL_FACE_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_FACE = GLenum::GL_FRONT_FACE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_RANGE = GLenum::GL_DEPTH_RANGE;
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_WRITEMASK = GLenum::GL_DEPTH_WRITEMASK;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_CLEAR_VALUE = GLenum::GL_DEPTH_CLEAR_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_FUNC = GLenum::GL_DEPTH_FUNC;
// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_CLEAR_VALUE = GLenum::GL_STENCIL_CLEAR_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_FUNC = GLenum::GL_STENCIL_FUNC;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_VALUE_MASK = GLenum::GL_STENCIL_VALUE_MASK;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_FAIL = GLenum::GL_STENCIL_FAIL;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_PASS_DEPTH_FAIL;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_PASS_DEPTH_PASS = GLenum::GL_STENCIL_PASS_DEPTH_PASS;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_REF = GLenum::GL_STENCIL_REF;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_WRITEMASK = GLenum::GL_STENCIL_WRITEMASK;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT = GLenum::GL_VIEWPORT;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA_TEST_QCOM = GLenum::GL_ALPHA_TEST_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA_TEST_FUNC_QCOM = GLenum::GL_ALPHA_TEST_FUNC_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA_TEST_REF_QCOM = GLenum::GL_ALPHA_TEST_REF_QCOM;
// GLESBINDING_CONSTEXPR static const GLenum GL_DITHER = GLenum::GL_DITHER; // reuse EnableCap
// GLESBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER_EXT = GLenum::GL_DRAW_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_BUFFER = GLenum::GL_READ_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_BUFFER_EXT = GLenum::GL_READ_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_BUFFER_NV = GLenum::GL_READ_BUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SCISSOR_BOX = GLenum::GL_SCISSOR_BOX;
// GLESBINDING_CONSTEXPR static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_CLEAR_VALUE = GLenum::GL_COLOR_CLEAR_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_WRITEMASK = GLenum::GL_COLOR_WRITEMASK;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_ROW_LENGTH = GLenum::GL_UNPACK_ROW_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_ROWS = GLenum::GL_UNPACK_SKIP_ROWS;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_PIXELS = GLenum::GL_UNPACK_SKIP_PIXELS;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_ROW_LENGTH = GLenum::GL_PACK_ROW_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_ROWS = GLenum::GL_PACK_SKIP_ROWS;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_PIXELS = GLenum::GL_PACK_SKIP_PIXELS;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_SIZE = GLenum::GL_MAX_TEXTURE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VIEWPORT_DIMS = GLenum::GL_MAX_VIEWPORT_DIMS;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBPIXEL_BITS = GLenum::GL_SUBPIXEL_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_RED_BITS = GLenum::GL_RED_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_GREEN_BITS = GLenum::GL_GREEN_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_BLUE_BITS = GLenum::GL_BLUE_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA_BITS = GLenum::GL_ALPHA_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_BITS = GLenum::GL_DEPTH_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BITS = GLenum::GL_STENCIL_BITS;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_UNITS = GLenum::GL_POLYGON_OFFSET_UNITS;
// GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FACTOR = GLenum::GL_POLYGON_OFFSET_FACTOR;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D = GLenum::GL_TEXTURE_BINDING_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_3D = GLenum::GL_TEXTURE_BINDING_3D;
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY = GLenum::GL_VERTEX_ARRAY; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_ALIASED_POINT_SIZE_RANGE = GLenum::GL_ALIASED_POINT_SIZE_RANGE;
GLESBINDING_CONSTEXPR static const GLenum GL_ALIASED_LINE_WIDTH_RANGE = GLenum::GL_ALIASED_LINE_WIDTH_RANGE;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_DEVICE_UUIDS_EXT = GLenum::GL_NUM_DEVICE_UUIDS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEVICE_UUID_EXT = GLenum::GL_DEVICE_UUID_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRIVER_UUID_EXT = GLenum::GL_DRIVER_UUID_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEVICE_LUID_EXT = GLenum::GL_DEVICE_LUID_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEVICE_NODE_MASK_EXT = GLenum::GL_DEVICE_NODE_MASK_EXT;

// GetPointervPName

GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_CALLBACK_FUNCTION = GLenum::GL_DEBUG_CALLBACK_FUNCTION;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_CALLBACK_USER_PARAM = GLenum::GL_DEBUG_CALLBACK_USER_PARAM;

// GetTextureParameter

GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WIDTH = GLenum::GL_TEXTURE_WIDTH;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_HEIGHT = GLenum::GL_TEXTURE_HEIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_INTERNAL_FORMAT = GLenum::GL_TEXTURE_INTERNAL_FORMAT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR_NV = GLenum::GL_TEXTURE_BORDER_COLOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_RED_SIZE = GLenum::GL_TEXTURE_RED_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_GREEN_SIZE = GLenum::GL_TEXTURE_GREEN_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BLUE_SIZE = GLenum::GL_TEXTURE_BLUE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_ALPHA_SIZE = GLenum::GL_TEXTURE_ALPHA_SIZE;

// GraphicsResetStatus

// GLESBINDING_CONSTEXPR static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR; // reuse ErrorCode
GLESBINDING_CONSTEXPR static const GLenum GL_GUILTY_CONTEXT_RESET = GLenum::GL_GUILTY_CONTEXT_RESET;
GLESBINDING_CONSTEXPR static const GLenum GL_INNOCENT_CONTEXT_RESET = GLenum::GL_INNOCENT_CONTEXT_RESET;
GLESBINDING_CONSTEXPR static const GLenum GL_UNKNOWN_CONTEXT_RESET = GLenum::GL_UNKNOWN_CONTEXT_RESET;

// HintMode

// GLESBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse DebugSeverity
GLESBINDING_CONSTEXPR static const GLenum GL_FASTEST = GLenum::GL_FASTEST;
GLESBINDING_CONSTEXPR static const GLenum GL_NICEST = GLenum::GL_NICEST;

// HintTarget

GLESBINDING_CONSTEXPR static const GLenum GL_GENERATE_MIPMAP_HINT = GLenum::GL_GENERATE_MIPMAP_HINT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_RETRIEVABLE_HINT = GLenum::GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT = GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES = GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_BINNING_CONTROL_HINT_QCOM = GLenum::GL_BINNING_CONTROL_HINT_QCOM;

// IndexPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// InternalFormat

GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT = GLenum::GL_DEPTH_COMPONENT;
GLESBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED;
GLESBINDING_CONSTEXPR static const GLenum GL_RED_EXT = GLenum::GL_RED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB8 = GLenum::GL_RGB8;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB8_OES = GLenum::GL_RGB8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_EXT = GLenum::GL_RGB10_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16_EXT = GLenum::GL_RGB16_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA4 = GLenum::GL_RGBA4;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA4_OES = GLenum::GL_RGBA4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB5_A1 = GLenum::GL_RGB5_A1;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB5_A1_OES = GLenum::GL_RGB5_A1_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8 = GLenum::GL_RGBA8;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8_OES = GLenum::GL_RGBA8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_A2 = GLenum::GL_RGB10_A2;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_A2_EXT = GLenum::GL_RGB10_A2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16_EXT = GLenum::GL_RGBA16_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT16 = GLenum::GL_DEPTH_COMPONENT16;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT16_OES = GLenum::GL_DEPTH_COMPONENT16_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT24_OES = GLenum::GL_DEPTH_COMPONENT24_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT32_OES = GLenum::GL_DEPTH_COMPONENT32_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RG = GLenum::GL_RG;
GLESBINDING_CONSTEXPR static const GLenum GL_R8 = GLenum::GL_R8;
GLESBINDING_CONSTEXPR static const GLenum GL_R8_EXT = GLenum::GL_R8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_R16_EXT = GLenum::GL_R16_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG8 = GLenum::GL_RG8;
GLESBINDING_CONSTEXPR static const GLenum GL_RG8_EXT = GLenum::GL_RG8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16_EXT = GLenum::GL_RG16_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_R16F = GLenum::GL_R16F;
GLESBINDING_CONSTEXPR static const GLenum GL_R16F_EXT = GLenum::GL_R16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_R32F = GLenum::GL_R32F;
GLESBINDING_CONSTEXPR static const GLenum GL_R32F_EXT = GLenum::GL_R32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16F = GLenum::GL_RG16F;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16F_EXT = GLenum::GL_RG16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG32F = GLenum::GL_RG32F;
GLESBINDING_CONSTEXPR static const GLenum GL_RG32F_EXT = GLenum::GL_RG32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_R8I = GLenum::GL_R8I;
GLESBINDING_CONSTEXPR static const GLenum GL_R8UI = GLenum::GL_R8UI;
GLESBINDING_CONSTEXPR static const GLenum GL_R16I = GLenum::GL_R16I;
GLESBINDING_CONSTEXPR static const GLenum GL_R16UI = GLenum::GL_R16UI;
GLESBINDING_CONSTEXPR static const GLenum GL_R32I = GLenum::GL_R32I;
GLESBINDING_CONSTEXPR static const GLenum GL_R32UI = GLenum::GL_R32UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RG8I = GLenum::GL_RG8I;
GLESBINDING_CONSTEXPR static const GLenum GL_RG8UI = GLenum::GL_RG8UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16I = GLenum::GL_RG16I;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16UI = GLenum::GL_RG16UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RG32I = GLenum::GL_RG32I;
GLESBINDING_CONSTEXPR static const GLenum GL_RG32UI = GLenum::GL_RG32UI;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_RGB_S3TC_DXT1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT3_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT3_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT5_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT5_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_STENCIL = GLenum::GL_DEPTH_STENCIL;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_STENCIL_OES = GLenum::GL_DEPTH_STENCIL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32F = GLenum::GL_RGBA32F;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32F_EXT = GLenum::GL_RGBA32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16F = GLenum::GL_RGBA16F;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16F_EXT = GLenum::GL_RGBA16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16F = GLenum::GL_RGB16F;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16F_EXT = GLenum::GL_RGB16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH24_STENCIL8 = GLenum::GL_DEPTH24_STENCIL8;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH24_STENCIL8_OES = GLenum::GL_DEPTH24_STENCIL8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_R11F_G11F_B10F = GLenum::GL_R11F_G11F_B10F;
GLESBINDING_CONSTEXPR static const GLenum GL_R11F_G11F_B10F_APPLE = GLenum::GL_R11F_G11F_B10F_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB9_E5 = GLenum::GL_RGB9_E5;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB9_E5_APPLE = GLenum::GL_RGB9_E5_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB = GLenum::GL_SRGB;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB_EXT = GLenum::GL_SRGB_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8 = GLenum::GL_SRGB8;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8_NV = GLenum::GL_SRGB8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB_ALPHA_EXT = GLenum::GL_SRGB_ALPHA_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8_ALPHA8 = GLenum::GL_SRGB8_ALPHA8;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8_ALPHA8_EXT = GLenum::GL_SRGB8_ALPHA8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_SRGB_S3TC_DXT1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT32F = GLenum::GL_DEPTH_COMPONENT32F;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH32F_STENCIL8 = GLenum::GL_DEPTH32F_STENCIL8;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32UI = GLenum::GL_RGBA32UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB32UI = GLenum::GL_RGB32UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16UI = GLenum::GL_RGBA16UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16UI = GLenum::GL_RGB16UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8UI = GLenum::GL_RGBA8UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB8UI = GLenum::GL_RGB8UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32I = GLenum::GL_RGBA32I;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB32I = GLenum::GL_RGB32I;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16I = GLenum::GL_RGBA16I;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16I = GLenum::GL_RGB16I;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8I = GLenum::GL_RGBA8I;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB8I = GLenum::GL_RGB8I;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RED_RGTC1_EXT = GLenum::GL_COMPRESSED_RED_RGTC1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_RED_RGTC1_EXT = GLenum::GL_COMPRESSED_SIGNED_RED_RGTC1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_R8_SNORM = GLenum::GL_R8_SNORM;
GLESBINDING_CONSTEXPR static const GLenum GL_RG8_SNORM = GLenum::GL_RG8_SNORM;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB8_SNORM = GLenum::GL_RGB8_SNORM;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8_SNORM = GLenum::GL_RGBA8_SNORM;
GLESBINDING_CONSTEXPR static const GLenum GL_R16_SNORM_EXT = GLenum::GL_R16_SNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16_SNORM_EXT = GLenum::GL_RG16_SNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16_SNORM_EXT = GLenum::GL_RGB16_SNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_A2UI = GLenum::GL_RGB10_A2UI;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_R11_EAC = GLenum::GL_COMPRESSED_R11_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_R11_EAC = GLenum::GL_COMPRESSED_SIGNED_R11_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RG11_EAC = GLenum::GL_COMPRESSED_RG11_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_RG11_EAC = GLenum::GL_COMPRESSED_SIGNED_RG11_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB8_ETC2 = GLenum::GL_COMPRESSED_RGB8_ETC2;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ETC2 = GLenum::GL_COMPRESSED_SRGB8_ETC2;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = GLenum::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = GLenum::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA8_ETC2_EAC = GLenum::GL_COMPRESSED_RGBA8_ETC2_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC;

// InternalFormatPName

// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES; // reuse GetFramebufferParameter
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPRESSED = GLenum::GL_TEXTURE_COMPRESSED;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_SAMPLE_COUNTS = GLenum::GL_NUM_SAMPLE_COUNTS;

// LightEnvModeSGIX

GLESBINDING_CONSTEXPR static const GLenum GL_REPLACE = GLenum::GL_REPLACE;

// ListNameType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// LogicOp

GLESBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT;

// MaterialFace

// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// MatrixMode

GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE = GLenum::GL_TEXTURE;

// MemoryObjectParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_DEDICATED_MEMORY_OBJECT_EXT = GLenum::GL_DEDICATED_MEMORY_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROTECTED_MEMORY_OBJECT_EXT = GLenum::GL_PROTECTED_MEMORY_OBJECT_EXT;

// NormalPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// ObjectIdentifier

// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE = GLenum::GL_TEXTURE; // reuse MatrixMode
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY = GLenum::GL_VERTEX_ARRAY; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER = GLenum::GL_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER = GLenum::GL_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM = GLenum::GL_PROGRAM;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY = GLenum::GL_QUERY;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_PIPELINE = GLenum::GL_PROGRAM_PIPELINE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER = GLenum::GL_SAMPLER;
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER;
// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK = GLenum::GL_TRANSFORM_FEEDBACK; // reuse BindTransformFeedbackTarget

// PatchParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_PATCH_VERTICES = GLenum::GL_PATCH_VERTICES;

// PathCoverMode

GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_COVER_MODE_NV = GLenum::GL_PATH_FILL_COVER_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONVEX_HULL_NV = GLenum::GL_CONVEX_HULL_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BOUNDING_BOX_NV = GLenum::GL_BOUNDING_BOX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV = GLenum::GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV;

// PathElementType

GLESBINDING_CONSTEXPR static const GLenum GL_UTF8_NV = GLenum::GL_UTF8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UTF16_NV = GLenum::GL_UTF16_NV;

// PathFillMode

// GLESBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT; // reuse LogicOp
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_MODE_NV = GLenum::GL_PATH_FILL_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COUNT_UP_NV = GLenum::GL_COUNT_UP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COUNT_DOWN_NV = GLenum::GL_COUNT_DOWN_NV;

// PathFontStyle

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer

// PathFontTarget

GLESBINDING_CONSTEXPR static const GLenum GL_STANDARD_FONT_NAME_NV = GLenum::GL_STANDARD_FONT_NAME_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SYSTEM_FONT_NAME_NV = GLenum::GL_SYSTEM_FONT_NAME_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FILE_NAME_NV = GLenum::GL_FILE_NAME_NV;

// PathGenMode

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_OBJECT_BOUNDING_BOX_NV = GLenum::GL_PATH_OBJECT_BOUNDING_BOX_NV;

// PathHandleMissingGlyphs

GLESBINDING_CONSTEXPR static const GLenum GL_SKIP_MISSING_GLYPH_NV = GLenum::GL_SKIP_MISSING_GLYPH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_USE_MISSING_GLYPH_NV = GLenum::GL_USE_MISSING_GLYPH_NV;

// PathListMode

GLESBINDING_CONSTEXPR static const GLenum GL_ACCUM_ADJACENT_PAIRS_NV = GLenum::GL_ACCUM_ADJACENT_PAIRS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ADJACENT_PAIRS_NV = GLenum::GL_ADJACENT_PAIRS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FIRST_TO_REST_NV = GLenum::GL_FIRST_TO_REST_NV;

// PathParameter

GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STROKE_WIDTH_NV = GLenum::GL_PATH_STROKE_WIDTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_END_CAPS_NV = GLenum::GL_PATH_END_CAPS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_INITIAL_END_CAP_NV = GLenum::GL_PATH_INITIAL_END_CAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_TERMINAL_END_CAP_NV = GLenum::GL_PATH_TERMINAL_END_CAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_JOIN_STYLE_NV = GLenum::GL_PATH_JOIN_STYLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MITER_LIMIT_NV = GLenum::GL_PATH_MITER_LIMIT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_DASH_CAPS_NV = GLenum::GL_PATH_DASH_CAPS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_INITIAL_DASH_CAP_NV = GLenum::GL_PATH_INITIAL_DASH_CAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_TERMINAL_DASH_CAP_NV = GLenum::GL_PATH_TERMINAL_DASH_CAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_DASH_OFFSET_NV = GLenum::GL_PATH_DASH_OFFSET_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_CLIENT_LENGTH_NV = GLenum::GL_PATH_CLIENT_LENGTH_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_MODE_NV = GLenum::GL_PATH_FILL_MODE_NV; // reuse PathFillMode
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_MASK_NV = GLenum::GL_PATH_FILL_MASK_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_COVER_MODE_NV = GLenum::GL_PATH_FILL_COVER_MODE_NV; // reuse PathCoverMode
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STROKE_COVER_MODE_NV = GLenum::GL_PATH_STROKE_COVER_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STROKE_MASK_NV = GLenum::GL_PATH_STROKE_MASK_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_PATH_OBJECT_BOUNDING_BOX_NV = GLenum::GL_PATH_OBJECT_BOUNDING_BOX_NV; // reuse PathGenMode
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_COMMAND_COUNT_NV = GLenum::GL_PATH_COMMAND_COUNT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_COORD_COUNT_NV = GLenum::GL_PATH_COORD_COUNT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_DASH_ARRAY_COUNT_NV = GLenum::GL_PATH_DASH_ARRAY_COUNT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_COMPUTED_LENGTH_NV = GLenum::GL_PATH_COMPUTED_LENGTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_BOUNDING_BOX_NV = GLenum::GL_PATH_FILL_BOUNDING_BOX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STROKE_BOUNDING_BOX_NV = GLenum::GL_PATH_STROKE_BOUNDING_BOX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_DASH_OFFSET_RESET_NV = GLenum::GL_PATH_DASH_OFFSET_RESET_NV;

// PathStringFormat

GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FORMAT_SVG_NV = GLenum::GL_PATH_FORMAT_SVG_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FORMAT_PS_NV = GLenum::GL_PATH_FORMAT_PS_NV;

// PathTransformType

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSLATE_X_NV = GLenum::GL_TRANSLATE_X_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSLATE_Y_NV = GLenum::GL_TRANSLATE_Y_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSLATE_2D_NV = GLenum::GL_TRANSLATE_2D_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSLATE_3D_NV = GLenum::GL_TRANSLATE_3D_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_AFFINE_2D_NV = GLenum::GL_AFFINE_2D_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_AFFINE_3D_NV = GLenum::GL_AFFINE_3D_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSPOSE_AFFINE_2D_NV = GLenum::GL_TRANSPOSE_AFFINE_2D_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSPOSE_AFFINE_3D_NV = GLenum::GL_TRANSPOSE_AFFINE_3D_NV;

// PipelineParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_PROGRAM = GLenum::GL_ACTIVE_PROGRAM;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER = GLenum::GL_FRAGMENT_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_SHADER = GLenum::GL_VERTEX_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_INFO_LOG_LENGTH = GLenum::GL_INFO_LOG_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER = GLenum::GL_GEOMETRY_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_EVALUATION_SHADER = GLenum::GL_TESS_EVALUATION_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_SHADER = GLenum::GL_TESS_CONTROL_SHADER;

// PixelCopyType

// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR = GLenum::GL_COLOR; // reuse Buffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_EXT = GLenum::GL_COLOR_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH = GLenum::GL_DEPTH; // reuse Buffer
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_EXT = GLenum::GL_DEPTH_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL = GLenum::GL_STENCIL; // reuse Buffer
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_EXT = GLenum::GL_STENCIL_EXT;

// PixelFormat

// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX = GLenum::GL_STENCIL_INDEX;
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT = GLenum::GL_DEPTH_COMPONENT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RED_EXT = GLenum::GL_RED_EXT; // reuse InternalFormat
GLESBINDING_CONSTEXPR static const GLenum GL_GREEN = GLenum::GL_GREEN;
GLESBINDING_CONSTEXPR static const GLenum GL_BLUE = GLenum::GL_BLUE;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA = GLenum::GL_ALPHA;
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse InternalFormat
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE = GLenum::GL_LUMINANCE;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE_ALPHA = GLenum::GL_LUMINANCE_ALPHA;

// PixelStoreParameter

// GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_ROW_LENGTH = GLenum::GL_UNPACK_ROW_LENGTH; // reuse GetPName
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_ROW_LENGTH_EXT = GLenum::GL_UNPACK_ROW_LENGTH_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_ROWS = GLenum::GL_UNPACK_SKIP_ROWS; // reuse GetPName
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_ROWS_EXT = GLenum::GL_UNPACK_SKIP_ROWS_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_PIXELS = GLenum::GL_UNPACK_SKIP_PIXELS; // reuse GetPName
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_PIXELS_EXT = GLenum::GL_UNPACK_SKIP_PIXELS_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_ROW_LENGTH = GLenum::GL_PACK_ROW_LENGTH; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_ROWS = GLenum::GL_PACK_SKIP_ROWS; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_PIXELS = GLenum::GL_PACK_SKIP_PIXELS; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT; // reuse GetPName
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_IMAGES = GLenum::GL_UNPACK_SKIP_IMAGES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_IMAGE_HEIGHT = GLenum::GL_UNPACK_IMAGE_HEIGHT;

// PixelTexGenMode

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE = GLenum::GL_LUMINANCE; // reuse PixelFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE_ALPHA = GLenum::GL_LUMINANCE_ALPHA; // reuse PixelFormat

// PixelType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_4_4_4_4 = GLenum::GL_UNSIGNED_SHORT_4_4_4_4;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_5_5_5_1 = GLenum::GL_UNSIGNED_SHORT_5_5_5_1;

// PrecisionType

GLESBINDING_CONSTEXPR static const GLenum GL_LOW_FLOAT = GLenum::GL_LOW_FLOAT;
GLESBINDING_CONSTEXPR static const GLenum GL_MEDIUM_FLOAT = GLenum::GL_MEDIUM_FLOAT;
GLESBINDING_CONSTEXPR static const GLenum GL_HIGH_FLOAT = GLenum::GL_HIGH_FLOAT;
GLESBINDING_CONSTEXPR static const GLenum GL_LOW_INT = GLenum::GL_LOW_INT;
GLESBINDING_CONSTEXPR static const GLenum GL_MEDIUM_INT = GLenum::GL_MEDIUM_INT;
GLESBINDING_CONSTEXPR static const GLenum GL_HIGH_INT = GLenum::GL_HIGH_INT;

// PrimitiveType

GLESBINDING_CONSTEXPR static const GLenum GL_POINTS = GLenum::GL_POINTS;
GLESBINDING_CONSTEXPR static const GLenum GL_LINES = GLenum::GL_LINES;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_LOOP = GLenum::GL_LINE_LOOP;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_STRIP = GLenum::GL_LINE_STRIP;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLES = GLenum::GL_TRIANGLES;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_STRIP = GLenum::GL_TRIANGLE_STRIP;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_FAN = GLenum::GL_TRIANGLE_FAN;
GLESBINDING_CONSTEXPR static const GLenum GL_QUADS = GLenum::GL_QUADS;
GLESBINDING_CONSTEXPR static const GLenum GL_QUADS_EXT = GLenum::GL_QUADS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LINES_ADJACENCY = GLenum::GL_LINES_ADJACENCY;
GLESBINDING_CONSTEXPR static const GLenum GL_LINES_ADJACENCY_EXT = GLenum::GL_LINES_ADJACENCY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_STRIP_ADJACENCY = GLenum::GL_LINE_STRIP_ADJACENCY;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_STRIP_ADJACENCY_EXT = GLenum::GL_LINE_STRIP_ADJACENCY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLES_ADJACENCY = GLenum::GL_TRIANGLES_ADJACENCY;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLES_ADJACENCY_EXT = GLenum::GL_TRIANGLES_ADJACENCY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_STRIP_ADJACENCY = GLenum::GL_TRIANGLE_STRIP_ADJACENCY;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_STRIP_ADJACENCY_EXT = GLenum::GL_TRIANGLE_STRIP_ADJACENCY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PATCHES = GLenum::GL_PATCHES;
GLESBINDING_CONSTEXPR static const GLenum GL_PATCHES_EXT = GLenum::GL_PATCHES_EXT;

// ProgramInterface

// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM = GLenum::GL_UNIFORM;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK = GLenum::GL_UNIFORM_BLOCK;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_INPUT = GLenum::GL_PROGRAM_INPUT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_OUTPUT = GLenum::GL_PROGRAM_OUTPUT;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_VARIABLE = GLenum::GL_BUFFER_VARIABLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BLOCK = GLenum::GL_SHADER_STORAGE_BLOCK;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_VARYING = GLenum::GL_TRANSFORM_FEEDBACK_VARYING;

// ProgramInterfacePName

GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_RESOURCES = GLenum::GL_ACTIVE_RESOURCES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_NAME_LENGTH = GLenum::GL_MAX_NAME_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_NUM_ACTIVE_VARIABLES = GLenum::GL_MAX_NUM_ACTIVE_VARIABLES;

// ProgramParameterPName

// GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_RETRIEVABLE_HINT = GLenum::GL_PROGRAM_BINARY_RETRIEVABLE_HINT; // reuse HintTarget
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_SEPARABLE = GLenum::GL_PROGRAM_SEPARABLE;

// ProgramPropertyARB

GLESBINDING_CONSTEXPR static const GLenum GL_COMPUTE_WORK_GROUP_SIZE = GLenum::GL_COMPUTE_WORK_GROUP_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_LENGTH = GLenum::GL_PROGRAM_BINARY_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_VERTICES_OUT = GLenum::GL_GEOMETRY_VERTICES_OUT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_INPUT_TYPE = GLenum::GL_GEOMETRY_INPUT_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_OUTPUT_TYPE = GLenum::GL_GEOMETRY_OUTPUT_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = GLenum::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_UNIFORM_BLOCKS = GLenum::GL_ACTIVE_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_DELETE_STATUS = GLenum::GL_DELETE_STATUS;
GLESBINDING_CONSTEXPR static const GLenum GL_LINK_STATUS = GLenum::GL_LINK_STATUS;
GLESBINDING_CONSTEXPR static const GLenum GL_VALIDATE_STATUS = GLenum::GL_VALIDATE_STATUS;
// GLESBINDING_CONSTEXPR static const GLenum GL_INFO_LOG_LENGTH = GLenum::GL_INFO_LOG_LENGTH; // reuse PipelineParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_ATTACHED_SHADERS = GLenum::GL_ATTACHED_SHADERS;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_UNIFORMS = GLenum::GL_ACTIVE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_UNIFORM_MAX_LENGTH = GLenum::GL_ACTIVE_UNIFORM_MAX_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_ATTRIBUTES = GLenum::GL_ACTIVE_ATTRIBUTES;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = GLenum::GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = GLenum::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_MODE = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_VARYINGS = GLenum::GL_TRANSFORM_FEEDBACK_VARYINGS;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = GLenum::GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;

// QueryObjectParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_RESULT = GLenum::GL_QUERY_RESULT;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_RESULT_AVAILABLE = GLenum::GL_QUERY_RESULT_AVAILABLE;

// QueryParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_CURRENT_QUERY = GLenum::GL_CURRENT_QUERY;

// QueryTarget

GLESBINDING_CONSTEXPR static const GLenum GL_ANY_SAMPLES_PASSED = GLenum::GL_ANY_SAMPLES_PASSED;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVES_GENERATED = GLenum::GL_PRIMITIVES_GENERATED;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = GLenum::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
GLESBINDING_CONSTEXPR static const GLenum GL_ANY_SAMPLES_PASSED_CONSERVATIVE = GLenum::GL_ANY_SAMPLES_PASSED_CONSERVATIVE;

// ReadBufferMode

// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer

// RenderbufferParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES = GLenum::GL_RENDERBUFFER_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_WIDTH = GLenum::GL_RENDERBUFFER_WIDTH;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_HEIGHT = GLenum::GL_RENDERBUFFER_HEIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_INTERNAL_FORMAT = GLenum::GL_RENDERBUFFER_INTERNAL_FORMAT;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_RED_SIZE = GLenum::GL_RENDERBUFFER_RED_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_GREEN_SIZE = GLenum::GL_RENDERBUFFER_GREEN_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_BLUE_SIZE = GLenum::GL_RENDERBUFFER_BLUE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_ALPHA_SIZE = GLenum::GL_RENDERBUFFER_ALPHA_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_DEPTH_SIZE = GLenum::GL_RENDERBUFFER_DEPTH_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_STENCIL_SIZE = GLenum::GL_RENDERBUFFER_STENCIL_SIZE;

// RenderbufferTarget

// GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER; // reuse ObjectIdentifier

// SamplerParameterName

// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_R = GLenum::GL_TEXTURE_WRAP_R;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_LOD = GLenum::GL_TEXTURE_MIN_LOD;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAX_LOD = GLenum::GL_TEXTURE_MAX_LOD;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_MODE = GLenum::GL_TEXTURE_COMPARE_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_FUNC = GLenum::GL_TEXTURE_COMPARE_FUNC;

// SemaphoreParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_D3D12_FENCE_VALUE_EXT = GLenum::GL_D3D12_FENCE_VALUE_EXT;

// ShaderParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_TYPE = GLenum::GL_SHADER_TYPE;
// GLESBINDING_CONSTEXPR static const GLenum GL_DELETE_STATUS = GLenum::GL_DELETE_STATUS; // reuse ProgramPropertyARB
GLESBINDING_CONSTEXPR static const GLenum GL_COMPILE_STATUS = GLenum::GL_COMPILE_STATUS;
// GLESBINDING_CONSTEXPR static const GLenum GL_INFO_LOG_LENGTH = GLenum::GL_INFO_LOG_LENGTH; // reuse PipelineParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_SOURCE_LENGTH = GLenum::GL_SHADER_SOURCE_LENGTH;

// ShaderType

// GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER = GLenum::GL_FRAGMENT_SHADER; // reuse PipelineParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_ARB = GLenum::GL_FRAGMENT_SHADER_ARB;
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_SHADER = GLenum::GL_VERTEX_SHADER; // reuse PipelineParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_SHADER_ARB = GLenum::GL_VERTEX_SHADER_ARB;
// GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER = GLenum::GL_GEOMETRY_SHADER; // reuse PipelineParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_TESS_EVALUATION_SHADER = GLenum::GL_TESS_EVALUATION_SHADER; // reuse PipelineParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_SHADER = GLenum::GL_TESS_CONTROL_SHADER; // reuse PipelineParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_COMPUTE_SHADER = GLenum::GL_COMPUTE_SHADER;

// StencilFaceDirection

// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// StencilFunction

// GLESBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// GLESBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse BlendingFactor
// GLESBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT; // reuse LogicOp
GLESBINDING_CONSTEXPR static const GLenum GL_KEEP = GLenum::GL_KEEP;
// GLESBINDING_CONSTEXPR static const GLenum GL_REPLACE = GLenum::GL_REPLACE; // reuse LightEnvModeSGIX
GLESBINDING_CONSTEXPR static const GLenum GL_INCR = GLenum::GL_INCR;
GLESBINDING_CONSTEXPR static const GLenum GL_DECR = GLenum::GL_DECR;

// StringName

GLESBINDING_CONSTEXPR static const GLenum GL_VENDOR = GLenum::GL_VENDOR;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERER = GLenum::GL_RENDERER;
GLESBINDING_CONSTEXPR static const GLenum GL_VERSION = GLenum::GL_VERSION;
GLESBINDING_CONSTEXPR static const GLenum GL_EXTENSIONS = GLenum::GL_EXTENSIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_LANGUAGE_VERSION = GLenum::GL_SHADING_LANGUAGE_VERSION;

// SubroutineParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_SIZE = GLenum::GL_UNIFORM_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_NAME_LENGTH = GLenum::GL_UNIFORM_NAME_LENGTH;

// SyncCondition

GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_GPU_COMMANDS_COMPLETE = GLenum::GL_SYNC_GPU_COMMANDS_COMPLETE;

// SyncParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_OBJECT_TYPE = GLenum::GL_OBJECT_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_CONDITION = GLenum::GL_SYNC_CONDITION;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_STATUS = GLenum::GL_SYNC_STATUS;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_FLAGS = GLenum::GL_SYNC_FLAGS;

// SyncStatus

GLESBINDING_CONSTEXPR static const GLenum GL_ALREADY_SIGNALED = GLenum::GL_ALREADY_SIGNALED;
GLESBINDING_CONSTEXPR static const GLenum GL_TIMEOUT_EXPIRED = GLenum::GL_TIMEOUT_EXPIRED;
GLESBINDING_CONSTEXPR static const GLenum GL_CONDITION_SATISFIED = GLenum::GL_CONDITION_SATISFIED;
GLESBINDING_CONSTEXPR static const GLenum GL_WAIT_FAILED = GLenum::GL_WAIT_FAILED;

// TexCoordPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// TextureEnvMode

// GLESBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap

// TextureLayout

GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT = GLenum::GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT = GLenum::GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_GENERAL_EXT = GLenum::GL_LAYOUT_GENERAL_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_COLOR_ATTACHMENT_EXT = GLenum::GL_LAYOUT_COLOR_ATTACHMENT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT = GLenum::GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT = GLenum::GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_SHADER_READ_ONLY_EXT = GLenum::GL_LAYOUT_SHADER_READ_ONLY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_TRANSFER_SRC_EXT = GLenum::GL_LAYOUT_TRANSFER_SRC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_TRANSFER_DST_EXT = GLenum::GL_LAYOUT_TRANSFER_DST_EXT;

// TextureMagFilter

// GLESBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST; // reuse BlitFramebufferFilter
// GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse BlitFramebufferFilter

// TextureMinFilter

// GLESBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST; // reuse BlitFramebufferFilter
// GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse BlitFramebufferFilter
GLESBINDING_CONSTEXPR static const GLenum GL_NEAREST_MIPMAP_NEAREST = GLenum::GL_NEAREST_MIPMAP_NEAREST;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR_MIPMAP_NEAREST = GLenum::GL_LINEAR_MIPMAP_NEAREST;
GLESBINDING_CONSTEXPR static const GLenum GL_NEAREST_MIPMAP_LINEAR = GLenum::GL_NEAREST_MIPMAP_LINEAR;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR_MIPMAP_LINEAR = GLenum::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WIDTH = GLenum::GL_TEXTURE_WIDTH; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_HEIGHT = GLenum::GL_TEXTURE_HEIGHT; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_INTERNAL_FORMAT = GLenum::GL_TEXTURE_INTERNAL_FORMAT; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR_NV = GLenum::GL_TEXTURE_BORDER_COLOR_NV; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_RED_SIZE = GLenum::GL_TEXTURE_RED_SIZE; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_GREEN_SIZE = GLenum::GL_TEXTURE_GREEN_SIZE; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BLUE_SIZE = GLenum::GL_TEXTURE_BLUE_SIZE; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_ALPHA_SIZE = GLenum::GL_TEXTURE_ALPHA_SIZE; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_R = GLenum::GL_TEXTURE_WRAP_R; // reuse SamplerParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_R_OES = GLenum::GL_TEXTURE_WRAP_R_OES;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_LOD = GLenum::GL_TEXTURE_MIN_LOD; // reuse SamplerParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAX_LOD = GLenum::GL_TEXTURE_MAX_LOD; // reuse SamplerParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BASE_LEVEL = GLenum::GL_TEXTURE_BASE_LEVEL;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAX_LEVEL = GLenum::GL_TEXTURE_MAX_LEVEL;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_MODE = GLenum::GL_TEXTURE_COMPARE_MODE; // reuse SamplerParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_FUNC = GLenum::GL_TEXTURE_COMPARE_FUNC; // reuse SamplerParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SWIZZLE_R = GLenum::GL_TEXTURE_SWIZZLE_R;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SWIZZLE_G = GLenum::GL_TEXTURE_SWIZZLE_G;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SWIZZLE_B = GLenum::GL_TEXTURE_SWIZZLE_B;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SWIZZLE_A = GLenum::GL_TEXTURE_SWIZZLE_A;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_STENCIL_TEXTURE_MODE = GLenum::GL_DEPTH_STENCIL_TEXTURE_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_TILING_EXT = GLenum::GL_TEXTURE_TILING_EXT;

// TextureTarget

// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_3D = GLenum::GL_TEXTURE_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_3D_OES = GLenum::GL_TEXTURE_3D_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP = GLenum::GL_TEXTURE_CUBE_MAP;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_X = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_X;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_X = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Y = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Z = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_ARRAY = GLenum::GL_TEXTURE_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_ARRAY = GLenum::GL_TEXTURE_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_ARRAY_EXT = GLenum::GL_TEXTURE_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_ARRAY_OES = GLenum::GL_TEXTURE_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_MULTISAMPLE = GLenum::GL_TEXTURE_2D_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_MULTISAMPLE_ARRAY = GLenum::GL_TEXTURE_2D_MULTISAMPLE_ARRAY;

// TextureUnit

GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE0 = GLenum::GL_TEXTURE0;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE1 = GLenum::GL_TEXTURE1;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE2 = GLenum::GL_TEXTURE2;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE3 = GLenum::GL_TEXTURE3;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE4 = GLenum::GL_TEXTURE4;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE5 = GLenum::GL_TEXTURE5;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE6 = GLenum::GL_TEXTURE6;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE7 = GLenum::GL_TEXTURE7;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE8 = GLenum::GL_TEXTURE8;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE9 = GLenum::GL_TEXTURE9;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE10 = GLenum::GL_TEXTURE10;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE11 = GLenum::GL_TEXTURE11;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE12 = GLenum::GL_TEXTURE12;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE13 = GLenum::GL_TEXTURE13;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE14 = GLenum::GL_TEXTURE14;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE15 = GLenum::GL_TEXTURE15;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE16 = GLenum::GL_TEXTURE16;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE17 = GLenum::GL_TEXTURE17;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE18 = GLenum::GL_TEXTURE18;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE19 = GLenum::GL_TEXTURE19;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE20 = GLenum::GL_TEXTURE20;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE21 = GLenum::GL_TEXTURE21;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE22 = GLenum::GL_TEXTURE22;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE23 = GLenum::GL_TEXTURE23;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE24 = GLenum::GL_TEXTURE24;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE25 = GLenum::GL_TEXTURE25;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE26 = GLenum::GL_TEXTURE26;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE27 = GLenum::GL_TEXTURE27;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE28 = GLenum::GL_TEXTURE28;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE29 = GLenum::GL_TEXTURE29;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE30 = GLenum::GL_TEXTURE30;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE31 = GLenum::GL_TEXTURE31;

// TextureWrapMode

GLESBINDING_CONSTEXPR static const GLenum GL_REPEAT = GLenum::GL_REPEAT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_BORDER = GLenum::GL_CLAMP_TO_BORDER;
GLESBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_BORDER_NV = GLenum::GL_CLAMP_TO_BORDER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_EDGE = GLenum::GL_CLAMP_TO_EDGE;

// TransformFeedbackPName

GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_START = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_START;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_PAUSED = GLenum::GL_TRANSFORM_FEEDBACK_PAUSED;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_ACTIVE = GLenum::GL_TRANSFORM_FEEDBACK_ACTIVE;

// UniformBlockPName

GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_BINDING = GLenum::GL_UNIFORM_BLOCK_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_DATA_SIZE = GLenum::GL_UNIFORM_BLOCK_DATA_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_NAME_LENGTH = GLenum::GL_UNIFORM_BLOCK_NAME_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = GLenum::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = GLenum::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;

// UniformPName

GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_TYPE = GLenum::GL_UNIFORM_TYPE;
// GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_SIZE = GLenum::GL_UNIFORM_SIZE; // reuse SubroutineParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_NAME_LENGTH = GLenum::GL_UNIFORM_NAME_LENGTH; // reuse SubroutineParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_INDEX = GLenum::GL_UNIFORM_BLOCK_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_OFFSET = GLenum::GL_UNIFORM_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_ARRAY_STRIDE = GLenum::GL_UNIFORM_ARRAY_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_MATRIX_STRIDE = GLenum::GL_UNIFORM_MATRIX_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_IS_ROW_MAJOR = GLenum::GL_UNIFORM_IS_ROW_MAJOR;

// VertexArrayPName

GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_RELATIVE_OFFSET = GLenum::GL_VERTEX_ATTRIB_RELATIVE_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_INTEGER = GLenum::GL_VERTEX_ATTRIB_ARRAY_INTEGER;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR;

// VertexAttribEnum

// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE; // reuse VertexArrayPName
GLESBINDING_CONSTEXPR static const GLenum GL_CURRENT_VERTEX_ATTRIB = GLenum::GL_CURRENT_VERTEX_ATTRIB;
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED; // reuse VertexArrayPName
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = GLenum::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_INTEGER = GLenum::GL_VERTEX_ATTRIB_ARRAY_INTEGER; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR; // reuse VertexArrayPName

// VertexAttribPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
GLESBINDING_CONSTEXPR static const GLenum GL_HALF_FLOAT = GLenum::GL_HALF_FLOAT;
GLESBINDING_CONSTEXPR static const GLenum GL_FIXED = GLenum::GL_FIXED;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_10F_11F_11F_REV = GLenum::GL_UNSIGNED_INT_10F_11F_11F_REV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_2_10_10_10_REV = GLenum::GL_INT_2_10_10_10_REV;

// VertexAttribType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_HALF_FLOAT = GLenum::GL_HALF_FLOAT; // reuse VertexAttribPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_FIXED = GLenum::GL_FIXED; // reuse VertexAttribPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV; // reuse VertexAttribPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_10F_11F_11F_REV = GLenum::GL_UNSIGNED_INT_10F_11F_11F_REV; // reuse VertexAttribPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_2_10_10_10_REV = GLenum::GL_INT_2_10_10_10_REV; // reuse VertexAttribPointerType

// VertexBufferObjectParameter

GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_SIZE = GLenum::GL_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_USAGE = GLenum::GL_BUFFER_USAGE;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAPPED = GLenum::GL_BUFFER_MAPPED;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_ACCESS_FLAGS = GLenum::GL_BUFFER_ACCESS_FLAGS;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAP_LENGTH = GLenum::GL_BUFFER_MAP_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAP_OFFSET = GLenum::GL_BUFFER_MAP_OFFSET;

// VertexBufferObjectUsage

// GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_DRAW = GLenum::GL_STREAM_DRAW; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_READ = GLenum::GL_STREAM_READ; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_COPY = GLenum::GL_STREAM_COPY; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_DRAW = GLenum::GL_STATIC_DRAW; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_READ = GLenum::GL_STATIC_READ; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_COPY = GLenum::GL_STATIC_COPY; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_DRAW = GLenum::GL_DYNAMIC_DRAW; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_READ = GLenum::GL_DYNAMIC_READ; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_COPY = GLenum::GL_DYNAMIC_COPY; // reuse BufferUsageARB

// VertexPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// VertexProvokingMode

GLESBINDING_CONSTEXPR static const GLenum GL_FIRST_VERTEX_CONVENTION = GLenum::GL_FIRST_VERTEX_CONVENTION;
GLESBINDING_CONSTEXPR static const GLenum GL_LAST_VERTEX_CONVENTION = GLenum::GL_LAST_VERTEX_CONVENTION;

// __UNGROUPED__

GLESBINDING_CONSTEXPR static const GLenum GL_CLOSE_PATH_NV = GLenum::GL_CLOSE_PATH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_QUADS_OES = GLenum::GL_QUADS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LINES_ADJACENCY_OES = GLenum::GL_LINES_ADJACENCY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_STRIP_ADJACENCY_OES = GLenum::GL_LINE_STRIP_ADJACENCY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLES_ADJACENCY_OES = GLenum::GL_TRIANGLES_ADJACENCY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_STRIP_ADJACENCY_OES = GLenum::GL_TRIANGLE_STRIP_ADJACENCY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PATCHES_OES = GLenum::GL_PATCHES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MOVE_TO_NV = GLenum::GL_MOVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_MOVE_TO_NV = GLenum::GL_RELATIVE_MOVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_ALPHA_SATURATE_EXT = GLenum::GL_SRC_ALPHA_SATURATE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_TO_NV = GLenum::GL_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_LINE_TO_NV = GLenum::GL_RELATIVE_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_LOST = GLenum::GL_CONTEXT_LOST;
GLESBINDING_CONSTEXPR static const GLenum GL_HORIZONTAL_LINE_TO_NV = GLenum::GL_HORIZONTAL_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_HORIZONTAL_LINE_TO_NV = GLenum::GL_RELATIVE_HORIZONTAL_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTICAL_LINE_TO_NV = GLenum::GL_VERTICAL_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_VERTICAL_LINE_TO_NV = GLenum::GL_RELATIVE_VERTICAL_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_QUADRATIC_CURVE_TO_NV = GLenum::GL_QUADRATIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_QUADRATIC_CURVE_TO_NV = GLenum::GL_RELATIVE_QUADRATIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_MODE_NV = GLenum::GL_POLYGON_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MODELVIEW_STACK_DEPTH_NV = GLenum::GL_PATH_MODELVIEW_STACK_DEPTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_PROJECTION_STACK_DEPTH_NV = GLenum::GL_PATH_PROJECTION_STACK_DEPTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MODELVIEW_MATRIX_NV = GLenum::GL_PATH_MODELVIEW_MATRIX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_PROJECTION_MATRIX_NV = GLenum::GL_PATH_PROJECTION_MATRIX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CUBIC_CURVE_TO_NV = GLenum::GL_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_CUBIC_CURVE_TO_NV = GLenum::GL_RELATIVE_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_CLIP_DISTANCES_APPLE = GLenum::GL_MAX_CLIP_DISTANCES_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_CLIP_DISTANCES_EXT = GLenum::GL_MAX_CLIP_DISTANCES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV = GLenum::GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV = GLenum::GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SMOOTH_QUADRATIC_CURVE_TO_NV = GLenum::GL_SMOOTH_QUADRATIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV = GLenum::GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SMOOTH_CUBIC_CURVE_TO_NV = GLenum::GL_SMOOTH_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR_EXT = GLenum::GL_TEXTURE_BORDER_COLOR_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR_OES = GLenum::GL_TEXTURE_BORDER_COLOR_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV = GLenum::GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SMALL_CCW_ARC_TO_NV = GLenum::GL_SMALL_CCW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMALL_CCW_ARC_TO_NV = GLenum::GL_RELATIVE_SMALL_CCW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SMALL_CW_ARC_TO_NV = GLenum::GL_SMALL_CW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT64_NV = GLenum::GL_INT64_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_NV = GLenum::GL_UNSIGNED_INT64_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMALL_CW_ARC_TO_NV = GLenum::GL_RELATIVE_SMALL_CW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_XOR_NV = GLenum::GL_XOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LARGE_CCW_ARC_TO_NV = GLenum::GL_LARGE_CCW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_LARGE_CCW_ARC_TO_NV = GLenum::GL_RELATIVE_LARGE_CCW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MODELVIEW_NV = GLenum::GL_PATH_MODELVIEW_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_PROJECTION_NV = GLenum::GL_PATH_PROJECTION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LARGE_CW_ARC_TO_NV = GLenum::GL_LARGE_CW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_LARGE_CW_ARC_TO_NV = GLenum::GL_RELATIVE_LARGE_CW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX_OES = GLenum::GL_STENCIL_INDEX_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RED_NV = GLenum::GL_RED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_GREEN_NV = GLenum::GL_GREEN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BLUE_NV = GLenum::GL_BLUE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONIC_CURVE_TO_NV = GLenum::GL_CONIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_CONIC_CURVE_TO_NV = GLenum::GL_RELATIVE_CONIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_POINT_NV = GLenum::GL_POINT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_NV = GLenum::GL_LINE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FILL_NV = GLenum::GL_FILL_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_POINT_NV = GLenum::GL_POLYGON_OFFSET_POINT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_LINE_NV = GLenum::GL_POLYGON_OFFSET_LINE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE0_APPLE = GLenum::GL_CLIP_DISTANCE0_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE0_EXT = GLenum::GL_CLIP_DISTANCE0_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE1_APPLE = GLenum::GL_CLIP_DISTANCE1_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE1_EXT = GLenum::GL_CLIP_DISTANCE1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE2_APPLE = GLenum::GL_CLIP_DISTANCE2_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE2_EXT = GLenum::GL_CLIP_DISTANCE2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE3_APPLE = GLenum::GL_CLIP_DISTANCE3_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE3_EXT = GLenum::GL_CLIP_DISTANCE3_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE4_APPLE = GLenum::GL_CLIP_DISTANCE4_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE4_EXT = GLenum::GL_CLIP_DISTANCE4_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE5_APPLE = GLenum::GL_CLIP_DISTANCE5_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE5_EXT = GLenum::GL_CLIP_DISTANCE5_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE6_APPLE = GLenum::GL_CLIP_DISTANCE6_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE6_EXT = GLenum::GL_CLIP_DISTANCE6_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE7_APPLE = GLenum::GL_CLIP_DISTANCE7_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE7_EXT = GLenum::GL_CLIP_DISTANCE7_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_COLOR = GLenum::GL_BLEND_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN = GLenum::GL_MIN;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX = GLenum::GL_MAX;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION = GLenum::GL_BLEND_EQUATION;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION_RGB = GLenum::GL_BLEND_EQUATION_RGB;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA8_EXT = GLenum::GL_ALPHA8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA8_OES = GLenum::GL_ALPHA8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_EXT = GLenum::GL_LUMINANCE8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_OES = GLenum::GL_LUMINANCE8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE4_ALPHA4_OES = GLenum::GL_LUMINANCE4_ALPHA4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_ALPHA8_EXT = GLenum::GL_LUMINANCE8_ALPHA8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_ALPHA8_OES = GLenum::GL_LUMINANCE8_ALPHA8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_3D_OES = GLenum::GL_TEXTURE_BINDING_3D_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_DEPTH = GLenum::GL_TEXTURE_DEPTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_3D_TEXTURE_SIZE = GLenum::GL_MAX_3D_TEXTURE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_3D_TEXTURE_SIZE_OES = GLenum::GL_MAX_3D_TEXTURE_SIZE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_EXT = GLenum::GL_MULTISAMPLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_ALPHA_TO_COVERAGE = GLenum::GL_SAMPLE_ALPHA_TO_COVERAGE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_ALPHA_TO_ONE_EXT = GLenum::GL_SAMPLE_ALPHA_TO_ONE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE = GLenum::GL_SAMPLE_COVERAGE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE_VALUE = GLenum::GL_SAMPLE_COVERAGE_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE_INVERT = GLenum::GL_SAMPLE_COVERAGE_INVERT;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_DST_RGB = GLenum::GL_BLEND_DST_RGB;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_SRC_RGB = GLenum::GL_BLEND_SRC_RGB;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_DST_ALPHA = GLenum::GL_BLEND_DST_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_SRC_ALPHA = GLenum::GL_BLEND_SRC_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_BGRA_EXT = GLenum::GL_BGRA_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_BGRA_IMG = GLenum::GL_BGRA_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ELEMENTS_VERTICES = GLenum::GL_MAX_ELEMENTS_VERTICES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ELEMENTS_INDICES = GLenum::GL_MAX_ELEMENTS_INDICES;
GLESBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_BORDER_EXT = GLenum::GL_CLAMP_TO_BORDER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_BORDER_OES = GLenum::GL_CLAMP_TO_BORDER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAX_LEVEL_APPLE = GLenum::GL_TEXTURE_MAX_LEVEL_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT24 = GLenum::GL_DEPTH_COMPONENT24;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT = GLenum::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT = GLenum::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT = GLenum::GL_FRAMEBUFFER_DEFAULT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_UNDEFINED_OES = GLenum::GL_FRAMEBUFFER_UNDEFINED_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_STENCIL_ATTACHMENT = GLenum::GL_DEPTH_STENCIL_ATTACHMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAJOR_VERSION = GLenum::GL_MAJOR_VERSION;
GLESBINDING_CONSTEXPR static const GLenum GL_MINOR_VERSION = GLenum::GL_MINOR_VERSION;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_EXTENSIONS = GLenum::GL_NUM_EXTENSIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_FLAGS = GLenum::GL_CONTEXT_FLAGS;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_IMMUTABLE_STORAGE_EXT = GLenum::GL_BUFFER_IMMUTABLE_STORAGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_STORAGE_FLAGS_EXT = GLenum::GL_BUFFER_STORAGE_FLAGS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = GLenum::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES = GLenum::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RG_EXT = GLenum::GL_RG_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG_INTEGER = GLenum::GL_RG_INTEGER;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_OUTPUT_SYNCHRONOUS = GLenum::GL_DEBUG_OUTPUT_SYNCHRONOUS;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = GLenum::GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_LOSE_CONTEXT_ON_RESET = GLenum::GL_LOSE_CONTEXT_ON_RESET;
GLESBINDING_CONSTEXPR static const GLenum GL_LOSE_CONTEXT_ON_RESET_EXT = GLenum::GL_LOSE_CONTEXT_ON_RESET_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GUILTY_CONTEXT_RESET_EXT = GLenum::GL_GUILTY_CONTEXT_RESET_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INNOCENT_CONTEXT_RESET_EXT = GLenum::GL_INNOCENT_CONTEXT_RESET_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNKNOWN_CONTEXT_RESET_EXT = GLenum::GL_UNKNOWN_CONTEXT_RESET_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RESET_NOTIFICATION_STRATEGY = GLenum::GL_RESET_NOTIFICATION_STRATEGY;
GLESBINDING_CONSTEXPR static const GLenum GL_RESET_NOTIFICATION_STRATEGY_EXT = GLenum::GL_RESET_NOTIFICATION_STRATEGY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_PIPELINE_BINDING = GLenum::GL_PROGRAM_PIPELINE_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VIEWPORTS_NV = GLenum::GL_MAX_VIEWPORTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VIEWPORTS_OES = GLenum::GL_MAX_VIEWPORTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SUBPIXEL_BITS_NV = GLenum::GL_VIEWPORT_SUBPIXEL_BITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SUBPIXEL_BITS_OES = GLenum::GL_VIEWPORT_SUBPIXEL_BITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_BOUNDS_RANGE_NV = GLenum::GL_VIEWPORT_BOUNDS_RANGE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_BOUNDS_RANGE_OES = GLenum::GL_VIEWPORT_BOUNDS_RANGE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYER_PROVOKING_VERTEX = GLenum::GL_LAYER_PROVOKING_VERTEX;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYER_PROVOKING_VERTEX_EXT = GLenum::GL_LAYER_PROVOKING_VERTEX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYER_PROVOKING_VERTEX_OES = GLenum::GL_LAYER_PROVOKING_VERTEX_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV = GLenum::GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_INDEX_PROVOKING_VERTEX_OES = GLenum::GL_VIEWPORT_INDEX_PROVOKING_VERTEX_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNDEFINED_VERTEX = GLenum::GL_UNDEFINED_VERTEX;
GLESBINDING_CONSTEXPR static const GLenum GL_UNDEFINED_VERTEX_EXT = GLenum::GL_UNDEFINED_VERTEX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNDEFINED_VERTEX_OES = GLenum::GL_UNDEFINED_VERTEX_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_NO_RESET_NOTIFICATION = GLenum::GL_NO_RESET_NOTIFICATION;
GLESBINDING_CONSTEXPR static const GLenum GL_NO_RESET_NOTIFICATION_EXT = GLenum::GL_NO_RESET_NOTIFICATION_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = GLenum::GL_MAX_COMPUTE_SHARED_MEMORY_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMPUTE_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_ATOMIC_COUNTERS = GLenum::GL_MAX_COMPUTE_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_NOTIFICATION = GLenum::GL_DEBUG_SEVERITY_NOTIFICATION;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEBUG_GROUP_STACK_DEPTH = GLenum::GL_MAX_DEBUG_GROUP_STACK_DEPTH;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_GROUP_STACK_DEPTH = GLenum::GL_DEBUG_GROUP_STACK_DEPTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_UNIFORM_LOCATIONS = GLenum::GL_MAX_UNIFORM_LOCATIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_BINDING = GLenum::GL_VERTEX_ATTRIB_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_BINDING_DIVISOR = GLenum::GL_VERTEX_BINDING_DIVISOR;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_BINDING_OFFSET = GLenum::GL_VERTEX_BINDING_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_BINDING_STRIDE = GLenum::GL_VERTEX_BINDING_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = GLenum::GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATTRIB_BINDINGS = GLenum::GL_MAX_VERTEX_ATTRIB_BINDINGS;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_MIN_LEVEL_EXT = GLenum::GL_TEXTURE_VIEW_MIN_LEVEL_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_MIN_LEVEL_OES = GLenum::GL_TEXTURE_VIEW_MIN_LEVEL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_NUM_LEVELS_EXT = GLenum::GL_TEXTURE_VIEW_NUM_LEVELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_NUM_LEVELS_OES = GLenum::GL_TEXTURE_VIEW_NUM_LEVELS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_MIN_LAYER_EXT = GLenum::GL_TEXTURE_VIEW_MIN_LAYER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_MIN_LAYER_OES = GLenum::GL_TEXTURE_VIEW_MIN_LAYER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_NUM_LAYERS_EXT = GLenum::GL_TEXTURE_VIEW_NUM_LAYERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_NUM_LAYERS_OES = GLenum::GL_TEXTURE_VIEW_NUM_LAYERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_IMMUTABLE_LEVELS = GLenum::GL_TEXTURE_IMMUTABLE_LEVELS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATTRIB_STRIDE = GLenum::GL_MAX_VERTEX_ATTRIB_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_LABEL_LENGTH = GLenum::GL_MAX_LABEL_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_CULL_DISTANCES_EXT = GLenum::GL_MAX_CULL_DISTANCES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT = GLenum::GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_5_6_5 = GLenum::GL_UNSIGNED_SHORT_5_6_5;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT = GLenum::GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG = GLenum::GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT = GLenum::GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV_EXT = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MIRRORED_REPEAT = GLenum::GL_MIRRORED_REPEAT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_DONOT_FLUSH_INTEL = GLenum::GL_PERFQUERY_DONOT_FLUSH_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_FLUSH_INTEL = GLenum::GL_PERFQUERY_FLUSH_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_WAIT_INTEL = GLenum::GL_PERFQUERY_WAIT_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_BLACKHOLE_RENDER_INTEL = GLenum::GL_BLACKHOLE_RENDER_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTERIZATION_INTEL = GLenum::GL_CONSERVATIVE_RASTERIZATION_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_TEXTURE = GLenum::GL_ACTIVE_TEXTURE;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV = GLenum::GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV = GLenum::GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_RENDERBUFFER_SIZE = GLenum::GL_MAX_RENDERBUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_ALL_COMPLETED_NV = GLenum::GL_ALL_COMPLETED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FENCE_STATUS_NV = GLenum::GL_FENCE_STATUS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FENCE_CONDITION_NV = GLenum::GL_FENCE_CONDITION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_24_8 = GLenum::GL_UNSIGNED_INT_24_8;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_24_8_OES = GLenum::GL_UNSIGNED_INT_24_8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_LOD_BIAS = GLenum::GL_MAX_TEXTURE_LOD_BIAS;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAX_ANISOTROPY_EXT = GLenum::GL_TEXTURE_MAX_ANISOTROPY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT = GLenum::GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INCR_WRAP = GLenum::GL_INCR_WRAP;
GLESBINDING_CONSTEXPR static const GLenum GL_DECR_WRAP = GLenum::GL_DECR_WRAP;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_CUBE_MAP = GLenum::GL_TEXTURE_BINDING_CUBE_MAP;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_CUBE_MAP_TEXTURE_SIZE = GLenum::GL_MAX_CUBE_MAP_TEXTURE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC1_ALPHA_EXT = GLenum::GL_SRC1_ALPHA_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY_BINDING = GLenum::GL_VERTEX_ARRAY_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY_BINDING_OES = GLenum::GL_VERTEX_ARRAY_BINDING_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_8_8_APPLE = GLenum::GL_UNSIGNED_SHORT_8_8_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_8_8_REV_APPLE = GLenum::GL_UNSIGNED_SHORT_8_8_REV_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER = GLenum::GL_VERTEX_ATTRIB_ARRAY_POINTER;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_COMPRESSED_TEXTURE_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_Z400_BINARY_AMD = GLenum::GL_Z400_BINARY_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_LENGTH_OES = GLenum::GL_PROGRAM_BINARY_LENGTH_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MIRROR_CLAMP_TO_EDGE_EXT = GLenum::GL_MIRROR_CLAMP_TO_EDGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_FORMAT_MESA = GLenum::GL_PROGRAM_BINARY_FORMAT_MESA;
GLESBINDING_CONSTEXPR static const GLenum GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD = GLenum::GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_3DC_X_AMD = GLenum::GL_3DC_X_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_3DC_XY_AMD = GLenum::GL_3DC_XY_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_PROGRAM_BINARY_FORMATS = GLenum::GL_NUM_PROGRAM_BINARY_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_PROGRAM_BINARY_FORMATS_OES = GLenum::GL_NUM_PROGRAM_BINARY_FORMATS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_FORMATS = GLenum::GL_PROGRAM_BINARY_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_FORMATS_OES = GLenum::GL_PROGRAM_BINARY_FORMATS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_FUNC = GLenum::GL_STENCIL_BACK_FUNC;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_FAIL = GLenum::GL_STENCIL_BACK_FAIL;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_PASS_DEPTH_PASS = GLenum::GL_STENCIL_BACK_PASS_DEPTH_PASS;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB32F = GLenum::GL_RGB32F;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB32F_EXT = GLenum::GL_RGB32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA32F_EXT = GLenum::GL_ALPHA32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE32F_EXT = GLenum::GL_LUMINANCE32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE_ALPHA32F_EXT = GLenum::GL_LUMINANCE_ALPHA32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA16F_EXT = GLenum::GL_ALPHA16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE16F_EXT = GLenum::GL_LUMINANCE16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE_ALPHA16F_EXT = GLenum::GL_LUMINANCE_ALPHA16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_WRITEONLY_RENDERING_QCOM = GLenum::GL_WRITEONLY_RENDERING_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DRAW_BUFFERS = GLenum::GL_MAX_DRAW_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DRAW_BUFFERS_EXT = GLenum::GL_MAX_DRAW_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DRAW_BUFFERS_NV = GLenum::GL_MAX_DRAW_BUFFERS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER0 = GLenum::GL_DRAW_BUFFER0;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER0_EXT = GLenum::GL_DRAW_BUFFER0_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER0_NV = GLenum::GL_DRAW_BUFFER0_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER1 = GLenum::GL_DRAW_BUFFER1;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER1_EXT = GLenum::GL_DRAW_BUFFER1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER1_NV = GLenum::GL_DRAW_BUFFER1_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER2 = GLenum::GL_DRAW_BUFFER2;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER2_EXT = GLenum::GL_DRAW_BUFFER2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER2_NV = GLenum::GL_DRAW_BUFFER2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER3 = GLenum::GL_DRAW_BUFFER3;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER3_EXT = GLenum::GL_DRAW_BUFFER3_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER3_NV = GLenum::GL_DRAW_BUFFER3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER4 = GLenum::GL_DRAW_BUFFER4;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER4_EXT = GLenum::GL_DRAW_BUFFER4_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER4_NV = GLenum::GL_DRAW_BUFFER4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER5 = GLenum::GL_DRAW_BUFFER5;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER5_EXT = GLenum::GL_DRAW_BUFFER5_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER5_NV = GLenum::GL_DRAW_BUFFER5_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER6 = GLenum::GL_DRAW_BUFFER6;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER6_EXT = GLenum::GL_DRAW_BUFFER6_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER6_NV = GLenum::GL_DRAW_BUFFER6_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER7 = GLenum::GL_DRAW_BUFFER7;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER7_EXT = GLenum::GL_DRAW_BUFFER7_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER7_NV = GLenum::GL_DRAW_BUFFER7_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER8 = GLenum::GL_DRAW_BUFFER8;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER8_EXT = GLenum::GL_DRAW_BUFFER8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER8_NV = GLenum::GL_DRAW_BUFFER8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER9 = GLenum::GL_DRAW_BUFFER9;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER9_EXT = GLenum::GL_DRAW_BUFFER9_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER9_NV = GLenum::GL_DRAW_BUFFER9_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER10 = GLenum::GL_DRAW_BUFFER10;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER10_EXT = GLenum::GL_DRAW_BUFFER10_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER10_NV = GLenum::GL_DRAW_BUFFER10_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER11 = GLenum::GL_DRAW_BUFFER11;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER11_EXT = GLenum::GL_DRAW_BUFFER11_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER11_NV = GLenum::GL_DRAW_BUFFER11_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER12 = GLenum::GL_DRAW_BUFFER12;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER12_EXT = GLenum::GL_DRAW_BUFFER12_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER12_NV = GLenum::GL_DRAW_BUFFER12_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER13 = GLenum::GL_DRAW_BUFFER13;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER13_EXT = GLenum::GL_DRAW_BUFFER13_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER13_NV = GLenum::GL_DRAW_BUFFER13_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER14 = GLenum::GL_DRAW_BUFFER14;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER14_EXT = GLenum::GL_DRAW_BUFFER14_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER14_NV = GLenum::GL_DRAW_BUFFER14_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER15 = GLenum::GL_DRAW_BUFFER15;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER15_EXT = GLenum::GL_DRAW_BUFFER15_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER15_NV = GLenum::GL_DRAW_BUFFER15_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION_ALPHA = GLenum::GL_BLEND_EQUATION_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_DEPTH_SIZE = GLenum::GL_TEXTURE_DEPTH_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_MODE_EXT = GLenum::GL_TEXTURE_COMPARE_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_FUNC_EXT = GLenum::GL_TEXTURE_COMPARE_FUNC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPARE_REF_TO_TEXTURE = GLenum::GL_COMPARE_REF_TO_TEXTURE;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPARE_REF_TO_TEXTURE_EXT = GLenum::GL_COMPARE_REF_TO_TEXTURE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_COUNTER_BITS_EXT = GLenum::GL_QUERY_COUNTER_BITS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CURRENT_QUERY_EXT = GLenum::GL_CURRENT_QUERY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_RESULT_EXT = GLenum::GL_QUERY_RESULT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_RESULT_AVAILABLE_EXT = GLenum::GL_QUERY_RESULT_AVAILABLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATTRIBS = GLenum::GL_MAX_VERTEX_ATTRIBS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT = GLenum::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES = GLenum::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = GLenum::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT = GLenum::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES = GLenum::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER_INVOCATIONS = GLenum::GL_GEOMETRY_SHADER_INVOCATIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER_INVOCATIONS_EXT = GLenum::GL_GEOMETRY_SHADER_INVOCATIONS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER_INVOCATIONS_OES = GLenum::GL_GEOMETRY_SHADER_INVOCATIONS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER_BINDING = GLenum::GL_ARRAY_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING = GLenum::GL_ELEMENT_ARRAY_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_WRITE_ONLY_OES = GLenum::GL_WRITE_ONLY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_ACCESS_OES = GLenum::GL_BUFFER_ACCESS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAPPED_OES = GLenum::GL_BUFFER_MAPPED_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAP_POINTER = GLenum::GL_BUFFER_MAP_POINTER;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAP_POINTER_OES = GLenum::GL_BUFFER_MAP_POINTER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TIME_ELAPSED_EXT = GLenum::GL_TIME_ELAPSED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER_NV = GLenum::GL_PIXEL_PACK_BUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER_NV = GLenum::GL_PIXEL_UNPACK_BUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER_BINDING = GLenum::GL_PIXEL_PACK_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER_BINDING_NV = GLenum::GL_PIXEL_PACK_BUFFER_BINDING_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ETC1_SRGB8_NV = GLenum::GL_ETC1_SRGB8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER_BINDING = GLenum::GL_PIXEL_UNPACK_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER_BINDING_NV = GLenum::GL_PIXEL_UNPACK_BUFFER_BINDING_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_STENCIL_SIZE = GLenum::GL_TEXTURE_STENCIL_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC1_COLOR_EXT = GLenum::GL_SRC1_COLOR_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC1_COLOR_EXT = GLenum::GL_ONE_MINUS_SRC1_COLOR_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC1_ALPHA_EXT = GLenum::GL_ONE_MINUS_SRC1_ALPHA_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT = GLenum::GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ARRAY_TEXTURE_LAYERS = GLenum::GL_MAX_ARRAY_TEXTURE_LAYERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_PROGRAM_TEXEL_OFFSET = GLenum::GL_MIN_PROGRAM_TEXEL_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_PROGRAM_TEXEL_OFFSET = GLenum::GL_MAX_PROGRAM_TEXEL_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_VERTICES_OUT_EXT = GLenum::GL_GEOMETRY_LINKED_VERTICES_OUT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_VERTICES_OUT_OES = GLenum::GL_GEOMETRY_LINKED_VERTICES_OUT_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_INPUT_TYPE_EXT = GLenum::GL_GEOMETRY_LINKED_INPUT_TYPE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_INPUT_TYPE_OES = GLenum::GL_GEOMETRY_LINKED_INPUT_TYPE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT = GLenum::GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES = GLenum::GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_BINDING = GLenum::GL_SAMPLER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB_422_APPLE = GLenum::GL_RGB_422_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER_BINDING = GLenum::GL_UNIFORM_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER_START = GLenum::GL_UNIFORM_BUFFER_START;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER_SIZE = GLenum::GL_UNIFORM_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_UNIFORM_BLOCKS = GLenum::GL_MAX_VERTEX_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_BLOCKS = GLenum::GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT = GLenum::GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES = GLenum::GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_UNIFORM_BLOCKS = GLenum::GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_UNIFORM_BLOCKS = GLenum::GL_MAX_COMBINED_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_UNIFORM_BUFFER_BINDINGS = GLenum::GL_MAX_UNIFORM_BUFFER_BINDINGS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_UNIFORM_BLOCK_SIZE = GLenum::GL_MAX_UNIFORM_BLOCK_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = GLenum::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SRGB_DECODE_EXT = GLenum::GL_TEXTURE_SRGB_DECODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DECODE_EXT = GLenum::GL_DECODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SKIP_DECODE_EXT = GLenum::GL_SKIP_DECODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_PIPELINE_OBJECT_EXT = GLenum::GL_PROGRAM_PIPELINE_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB_RAW_422_APPLE = GLenum::GL_RGB_RAW_422_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT = GLenum::GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_OBJECT_APPLE = GLenum::GL_SYNC_OBJECT_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT = GLenum::GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT = GLenum::GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_OBJECT_EXT = GLenum::GL_PROGRAM_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_OBJECT_EXT = GLenum::GL_SHADER_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = GLenum::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_UNIFORM_COMPONENTS = GLenum::GL_MAX_VERTEX_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VARYING_COMPONENTS = GLenum::GL_MAX_VARYING_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_CURRENT_PROGRAM = GLenum::GL_CURRENT_PROGRAM;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE4_RGB8_OES = GLenum::GL_PALETTE4_RGB8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE4_RGBA8_OES = GLenum::GL_PALETTE4_RGBA8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE4_R5_G6_B5_OES = GLenum::GL_PALETTE4_R5_G6_B5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE4_RGBA4_OES = GLenum::GL_PALETTE4_RGBA4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE4_RGB5_A1_OES = GLenum::GL_PALETTE4_RGB5_A1_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE8_RGB8_OES = GLenum::GL_PALETTE8_RGB8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE8_RGBA8_OES = GLenum::GL_PALETTE8_RGBA8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE8_R5_G6_B5_OES = GLenum::GL_PALETTE8_R5_G6_B5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE8_RGBA4_OES = GLenum::GL_PALETTE8_RGBA4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE8_RGB5_A1_OES = GLenum::GL_PALETTE8_RGB5_A1_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COUNTER_TYPE_AMD = GLenum::GL_COUNTER_TYPE_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_COUNTER_RANGE_AMD = GLenum::GL_COUNTER_RANGE_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_AMD = GLenum::GL_UNSIGNED_INT64_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_PERCENTAGE_AMD = GLenum::GL_PERCENTAGE_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFMON_RESULT_AVAILABLE_AMD = GLenum::GL_PERFMON_RESULT_AVAILABLE_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFMON_RESULT_SIZE_AMD = GLenum::GL_PERFMON_RESULT_SIZE_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFMON_RESULT_AMD = GLenum::GL_PERFMON_RESULT_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WIDTH_QCOM = GLenum::GL_TEXTURE_WIDTH_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_HEIGHT_QCOM = GLenum::GL_TEXTURE_HEIGHT_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_DEPTH_QCOM = GLenum::GL_TEXTURE_DEPTH_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_INTERNAL_FORMAT_QCOM = GLenum::GL_TEXTURE_INTERNAL_FORMAT_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FORMAT_QCOM = GLenum::GL_TEXTURE_FORMAT_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_TYPE_QCOM = GLenum::GL_TEXTURE_TYPE_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_IMAGE_VALID_QCOM = GLenum::GL_TEXTURE_IMAGE_VALID_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_NUM_LEVELS_QCOM = GLenum::GL_TEXTURE_NUM_LEVELS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_TARGET_QCOM = GLenum::GL_TEXTURE_TARGET_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_OBJECT_VALID_QCOM = GLenum::GL_TEXTURE_OBJECT_VALID_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STATE_RESTORE = GLenum::GL_STATE_RESTORE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT = GLenum::GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_PROTECTED_EXT = GLenum::GL_TEXTURE_PROTECTED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FOVEATED_FEATURE_BITS_QCOM = GLenum::GL_TEXTURE_FOVEATED_FEATURE_BITS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FOVEATED_MIN_PIXEL_DENSITY_QCOM = GLenum::GL_TEXTURE_FOVEATED_MIN_PIXEL_DENSITY_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FOVEATED_FEATURE_QUERY_QCOM = GLenum::GL_TEXTURE_FOVEATED_FEATURE_QUERY_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FOVEATED_NUM_FOCAL_POINTS_QUERY_QCOM = GLenum::GL_TEXTURE_FOVEATED_NUM_FOCAL_POINTS_QUERY_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_FOVEATION_QCOM = GLenum::GL_FRAMEBUFFER_INCOMPLETE_FOVEATION_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG = GLenum::GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG = GLenum::GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG = GLenum::GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG = GLenum::GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_SGX_BINARY_IMG = GLenum::GL_SGX_BINARY_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_RED_TYPE = GLenum::GL_TEXTURE_RED_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_GREEN_TYPE = GLenum::GL_TEXTURE_GREEN_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BLUE_TYPE = GLenum::GL_TEXTURE_BLUE_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_ALPHA_TYPE = GLenum::GL_TEXTURE_ALPHA_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_DEPTH_TYPE = GLenum::GL_TEXTURE_DEPTH_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_NORMALIZED = GLenum::GL_UNSIGNED_NORMALIZED;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_NORMALIZED_EXT = GLenum::GL_UNSIGNED_NORMALIZED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D_ARRAY = GLenum::GL_TEXTURE_BINDING_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT = GLenum::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES = GLenum::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_BINDING = GLenum::GL_TEXTURE_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_BINDING_EXT = GLenum::GL_TEXTURE_BUFFER_BINDING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_BINDING_OES = GLenum::GL_TEXTURE_BUFFER_BINDING_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_EXT = GLenum::GL_TEXTURE_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OES = GLenum::GL_TEXTURE_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_BUFFER_SIZE = GLenum::GL_MAX_TEXTURE_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_BUFFER_SIZE_EXT = GLenum::GL_MAX_TEXTURE_BUFFER_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_BUFFER_SIZE_OES = GLenum::GL_MAX_TEXTURE_BUFFER_SIZE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_BUFFER = GLenum::GL_TEXTURE_BINDING_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_BUFFER_EXT = GLenum::GL_TEXTURE_BINDING_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_BUFFER_OES = GLenum::GL_TEXTURE_BINDING_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_DATA_STORE_BINDING = GLenum::GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT = GLenum::GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES = GLenum::GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_ANY_SAMPLES_PASSED_EXT = GLenum::GL_ANY_SAMPLES_PASSED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_SHADING = GLenum::GL_SAMPLE_SHADING;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_SHADING_OES = GLenum::GL_SAMPLE_SHADING_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_SAMPLE_SHADING_VALUE = GLenum::GL_MIN_SAMPLE_SHADING_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_SAMPLE_SHADING_VALUE_OES = GLenum::GL_MIN_SAMPLE_SHADING_VALUE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE = GLenum::GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_5_9_9_9_REV = GLenum::GL_UNSIGNED_INT_5_9_9_9_REV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_5_9_9_9_REV_APPLE = GLenum::GL_UNSIGNED_INT_5_9_9_9_REV_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SHARED_SIZE = GLenum::GL_TEXTURE_SHARED_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_SLUMINANCE_ALPHA_NV = GLenum::GL_SLUMINANCE_ALPHA_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SLUMINANCE8_ALPHA8_NV = GLenum::GL_SLUMINANCE8_ALPHA8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SLUMINANCE_NV = GLenum::GL_SLUMINANCE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SLUMINANCE8_NV = GLenum::GL_SLUMINANCE8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_S3TC_DXT1_NV = GLenum::GL_COMPRESSED_SRGB_S3TC_DXT1_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = GLenum::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVES_GENERATED_EXT = GLenum::GL_PRIMITIVES_GENERATED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVES_GENERATED_OES = GLenum::GL_PRIMITIVES_GENERATED_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RASTERIZER_DISCARD = GLenum::GL_RASTERIZER_DISCARD;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = GLenum::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = GLenum::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
GLESBINDING_CONSTEXPR static const GLenum GL_INTERLEAVED_ATTRIBS = GLenum::GL_INTERLEAVED_ATTRIBS;
GLESBINDING_CONSTEXPR static const GLenum GL_SEPARATE_ATTRIBS = GLenum::GL_SEPARATE_ATTRIBS;
GLESBINDING_CONSTEXPR static const GLenum GL_ATC_RGB_AMD = GLenum::GL_ATC_RGB_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_ATC_RGBA_EXPLICIT_ALPHA_AMD = GLenum::GL_ATC_RGBA_EXPLICIT_ALPHA_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_LOWER_LEFT_EXT = GLenum::GL_LOWER_LEFT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UPPER_LEFT_EXT = GLenum::GL_UPPER_LEFT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_REF = GLenum::GL_STENCIL_BACK_REF;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_VALUE_MASK = GLenum::GL_STENCIL_BACK_VALUE_MASK;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_WRITEMASK = GLenum::GL_STENCIL_BACK_WRITEMASK;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_BINDING = GLenum::GL_DRAW_FRAMEBUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_BINDING_ANGLE = GLenum::GL_DRAW_FRAMEBUFFER_BINDING_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_BINDING_APPLE = GLenum::GL_DRAW_FRAMEBUFFER_BINDING_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_BINDING_NV = GLenum::GL_DRAW_FRAMEBUFFER_BINDING_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_BINDING = GLenum::GL_FRAMEBUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_BINDING = GLenum::GL_RENDERBUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_ANGLE = GLenum::GL_READ_FRAMEBUFFER_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_APPLE = GLenum::GL_READ_FRAMEBUFFER_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_NV = GLenum::GL_READ_FRAMEBUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_ANGLE = GLenum::GL_DRAW_FRAMEBUFFER_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_APPLE = GLenum::GL_DRAW_FRAMEBUFFER_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_NV = GLenum::GL_DRAW_FRAMEBUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_BINDING = GLenum::GL_READ_FRAMEBUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_BINDING_ANGLE = GLenum::GL_READ_FRAMEBUFFER_BINDING_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_BINDING_APPLE = GLenum::GL_READ_FRAMEBUFFER_BINDING_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_BINDING_NV = GLenum::GL_READ_FRAMEBUFFER_BINDING_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES_ANGLE = GLenum::GL_RENDERBUFFER_SAMPLES_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES_APPLE = GLenum::GL_RENDERBUFFER_SAMPLES_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES_EXT = GLenum::GL_RENDERBUFFER_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES_NV = GLenum::GL_RENDERBUFFER_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS = GLenum::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_ATTACHMENT = GLenum::GL_STENCIL_ATTACHMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX1_OES = GLenum::GL_STENCIL_INDEX1_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX4_OES = GLenum::GL_STENCIL_INDEX4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX8 = GLenum::GL_STENCIL_INDEX8;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX8_OES = GLenum::GL_STENCIL_INDEX8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES = GLenum::GL_MAX_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES_ANGLE = GLenum::GL_MAX_SAMPLES_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES_APPLE = GLenum::GL_MAX_SAMPLES_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES_EXT = GLenum::GL_MAX_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES_NV = GLenum::GL_MAX_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HALF_FLOAT_OES = GLenum::GL_HALF_FLOAT_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB565 = GLenum::GL_RGB565;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB565_OES = GLenum::GL_RGB565_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_ETC1_RGB8_OES = GLenum::GL_ETC1_RGB8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_EXTERNAL_OES = GLenum::GL_TEXTURE_EXTERNAL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_EXTERNAL_OES = GLenum::GL_TEXTURE_BINDING_EXTERNAL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES = GLenum::GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_RESTART_FIXED_INDEX = GLenum::GL_PRIMITIVE_RESTART_FIXED_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT = GLenum::GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ELEMENT_INDEX = GLenum::GL_MAX_ELEMENT_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RED_INTEGER = GLenum::GL_RED_INTEGER;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB_INTEGER = GLenum::GL_RGB_INTEGER;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA_INTEGER = GLenum::GL_RGBA_INTEGER;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT = GLenum::GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES = GLenum::GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES = GLenum::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_32_UNSIGNED_INT_24_8_REV = GLenum::GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_SRGB_EXT = GLenum::GL_FRAMEBUFFER_SRGB_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RED_GREEN_RGTC2_EXT = GLenum::GL_COMPRESSED_RED_GREEN_RGTC2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT = GLenum::GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_ARRAY = GLenum::GL_SAMPLER_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_BUFFER = GLenum::GL_SAMPLER_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_BUFFER_EXT = GLenum::GL_SAMPLER_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_BUFFER_OES = GLenum::GL_SAMPLER_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_ARRAY_SHADOW = GLenum::GL_SAMPLER_2D_ARRAY_SHADOW;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_ARRAY_SHADOW_NV = GLenum::GL_SAMPLER_2D_ARRAY_SHADOW_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_SHADOW = GLenum::GL_SAMPLER_CUBE_SHADOW;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_SHADOW_NV = GLenum::GL_SAMPLER_CUBE_SHADOW_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_VEC2 = GLenum::GL_UNSIGNED_INT_VEC2;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_VEC3 = GLenum::GL_UNSIGNED_INT_VEC3;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_VEC4 = GLenum::GL_UNSIGNED_INT_VEC4;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D = GLenum::GL_INT_SAMPLER_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_3D = GLenum::GL_INT_SAMPLER_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_CUBE = GLenum::GL_INT_SAMPLER_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_ARRAY = GLenum::GL_INT_SAMPLER_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_BUFFER = GLenum::GL_INT_SAMPLER_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_BUFFER_EXT = GLenum::GL_INT_SAMPLER_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_BUFFER_OES = GLenum::GL_INT_SAMPLER_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D = GLenum::GL_UNSIGNED_INT_SAMPLER_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_3D = GLenum::GL_UNSIGNED_INT_SAMPLER_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_BUFFER = GLenum::GL_UNSIGNED_INT_SAMPLER_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT = GLenum::GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_BUFFER_OES = GLenum::GL_UNSIGNED_INT_SAMPLER_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER_EXT = GLenum::GL_GEOMETRY_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER_OES = GLenum::GL_GEOMETRY_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = GLenum::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_VERTICES = GLenum::GL_MAX_GEOMETRY_OUTPUT_VERTICES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT = GLenum::GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES = GLenum::GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = GLenum::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT = GLenum::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES = GLenum::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_10_10_10_2_OES = GLenum::GL_UNSIGNED_INT_10_10_10_2_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_10_10_10_2_OES = GLenum::GL_INT_10_10_10_2_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_BINARY_FORMATS = GLenum::GL_SHADER_BINARY_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_SHADER_BINARY_FORMATS = GLenum::GL_NUM_SHADER_BINARY_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_COMPILER = GLenum::GL_SHADER_COMPILER;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_UNIFORM_VECTORS = GLenum::GL_MAX_VERTEX_UNIFORM_VECTORS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VARYING_VECTORS = GLenum::GL_MAX_VARYING_VECTORS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_UNIFORM_VECTORS = GLenum::GL_MAX_FRAGMENT_UNIFORM_VECTORS;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_WAIT_NV = GLenum::GL_QUERY_WAIT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_NO_WAIT_NV = GLenum::GL_QUERY_NO_WAIT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_BY_REGION_WAIT_NV = GLenum::GL_QUERY_BY_REGION_WAIT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_BY_REGION_NO_WAIT_NV = GLenum::GL_QUERY_BY_REGION_NO_WAIT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_CLAMP_EXT = GLenum::GL_POLYGON_OFFSET_CLAMP_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_SAMPLES_NV = GLenum::GL_COLOR_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BINDING = GLenum::GL_TRANSFORM_FEEDBACK_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_TIMESTAMP_EXT = GLenum::GL_TIMESTAMP_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT16_NONLINEAR_NV = GLenum::GL_DEPTH_COMPONENT16_NONLINEAR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FIRST_VERTEX_CONVENTION_EXT = GLenum::GL_FIRST_VERTEX_CONVENTION_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FIRST_VERTEX_CONVENTION_OES = GLenum::GL_FIRST_VERTEX_CONVENTION_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LAST_VERTEX_CONVENTION_EXT = GLenum::GL_LAST_VERTEX_CONVENTION_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAST_VERTEX_CONVENTION_OES = GLenum::GL_LAST_VERTEX_CONVENTION_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_LOCATION_NV = GLenum::GL_SAMPLE_LOCATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_POSITION = GLenum::GL_SAMPLE_POSITION;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_MASK = GLenum::GL_SAMPLE_MASK;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_MASK_VALUE = GLenum::GL_SAMPLE_MASK_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLE_MASK_WORDS = GLenum::GL_MAX_SAMPLE_MASK_WORDS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_INVOCATIONS = GLenum::GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT = GLenum::GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES = GLenum::GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = GLenum::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES = GLenum::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = GLenum::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES = GLenum::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = GLenum::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES = GLenum::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = GLenum::GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = GLenum::GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_PATCH_VERTICES_EXT = GLenum::GL_PATCH_VERTICES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PATCH_VERTICES_OES = GLenum::GL_PATCH_VERTICES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_OUTPUT_VERTICES = GLenum::GL_TESS_CONTROL_OUTPUT_VERTICES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_OUTPUT_VERTICES_EXT = GLenum::GL_TESS_CONTROL_OUTPUT_VERTICES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_OUTPUT_VERTICES_OES = GLenum::GL_TESS_CONTROL_OUTPUT_VERTICES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_MODE = GLenum::GL_TESS_GEN_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_MODE_EXT = GLenum::GL_TESS_GEN_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_MODE_OES = GLenum::GL_TESS_GEN_MODE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_SPACING = GLenum::GL_TESS_GEN_SPACING;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_SPACING_EXT = GLenum::GL_TESS_GEN_SPACING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_SPACING_OES = GLenum::GL_TESS_GEN_SPACING_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_VERTEX_ORDER = GLenum::GL_TESS_GEN_VERTEX_ORDER;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_VERTEX_ORDER_EXT = GLenum::GL_TESS_GEN_VERTEX_ORDER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_VERTEX_ORDER_OES = GLenum::GL_TESS_GEN_VERTEX_ORDER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_POINT_MODE = GLenum::GL_TESS_GEN_POINT_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_POINT_MODE_EXT = GLenum::GL_TESS_GEN_POINT_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_POINT_MODE_OES = GLenum::GL_TESS_GEN_POINT_MODE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_ISOLINES = GLenum::GL_ISOLINES;
GLESBINDING_CONSTEXPR static const GLenum GL_ISOLINES_EXT = GLenum::GL_ISOLINES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ISOLINES_OES = GLenum::GL_ISOLINES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_ODD = GLenum::GL_FRACTIONAL_ODD;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_ODD_EXT = GLenum::GL_FRACTIONAL_ODD_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_ODD_OES = GLenum::GL_FRACTIONAL_ODD_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_EVEN = GLenum::GL_FRACTIONAL_EVEN;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_EVEN_EXT = GLenum::GL_FRACTIONAL_EVEN_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_EVEN_OES = GLenum::GL_FRACTIONAL_EVEN_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_PATCH_VERTICES = GLenum::GL_MAX_PATCH_VERTICES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_PATCH_VERTICES_EXT = GLenum::GL_MAX_PATCH_VERTICES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_PATCH_VERTICES_OES = GLenum::GL_MAX_PATCH_VERTICES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_GEN_LEVEL = GLenum::GL_MAX_TESS_GEN_LEVEL;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_GEN_LEVEL_EXT = GLenum::GL_MAX_TESS_GEN_LEVEL_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_GEN_LEVEL_OES = GLenum::GL_MAX_TESS_GEN_LEVEL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT = GLenum::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES = GLenum::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT = GLenum::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES = GLenum::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT = GLenum::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES = GLenum::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_PATCH_COMPONENTS = GLenum::GL_MAX_TESS_PATCH_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_PATCH_COMPONENTS_EXT = GLenum::GL_MAX_TESS_PATCH_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_PATCH_COMPONENTS_OES = GLenum::GL_MAX_TESS_PATCH_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT = GLenum::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES = GLenum::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = GLenum::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT = GLenum::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES = GLenum::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_EVALUATION_SHADER_EXT = GLenum::GL_TESS_EVALUATION_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_EVALUATION_SHADER_OES = GLenum::GL_TESS_EVALUATION_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_SHADER_EXT = GLenum::GL_TESS_CONTROL_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_SHADER_OES = GLenum::GL_TESS_CONTROL_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_BPTC_UNORM_EXT = GLenum::GL_COMPRESSED_RGBA_BPTC_UNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT = GLenum::GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT = GLenum::GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_COMPONENT_NV = GLenum::GL_COVERAGE_COMPONENT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_COMPONENT4_NV = GLenum::GL_COVERAGE_COMPONENT4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_ATTACHMENT_NV = GLenum::GL_COVERAGE_ATTACHMENT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_BUFFERS_NV = GLenum::GL_COVERAGE_BUFFERS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_SAMPLES_NV = GLenum::GL_COVERAGE_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_ALL_FRAGMENTS_NV = GLenum::GL_COVERAGE_ALL_FRAGMENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_EDGE_FRAGMENTS_NV = GLenum::GL_COVERAGE_EDGE_FRAGMENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_AUTOMATIC_NV = GLenum::GL_COVERAGE_AUTOMATIC_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INCLUSIVE_EXT = GLenum::GL_INCLUSIVE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_EXCLUSIVE_EXT = GLenum::GL_EXCLUSIVE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_WINDOW_RECTANGLE_EXT = GLenum::GL_WINDOW_RECTANGLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_WINDOW_RECTANGLE_MODE_EXT = GLenum::GL_WINDOW_RECTANGLE_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_WINDOW_RECTANGLES_EXT = GLenum::GL_MAX_WINDOW_RECTANGLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_WINDOW_RECTANGLES_EXT = GLenum::GL_NUM_WINDOW_RECTANGLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_READ_BUFFER_BINDING = GLenum::GL_COPY_READ_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_READ_BUFFER_NV = GLenum::GL_COPY_READ_BUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_WRITE_BUFFER_BINDING = GLenum::GL_COPY_WRITE_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_WRITE_BUFFER_NV = GLenum::GL_COPY_WRITE_BUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_IMAGE_UNITS = GLenum::GL_MAX_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = GLenum::GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_NAME = GLenum::GL_IMAGE_BINDING_NAME;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_LEVEL = GLenum::GL_IMAGE_BINDING_LEVEL;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_LAYERED = GLenum::GL_IMAGE_BINDING_LAYERED;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_LAYER = GLenum::GL_IMAGE_BINDING_LAYER;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_ACCESS = GLenum::GL_IMAGE_BINDING_ACCESS;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_INDIRECT_BUFFER_BINDING = GLenum::GL_DRAW_INDIRECT_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_BINDING_BUFFER = GLenum::GL_VERTEX_BINDING_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_MALI_SHADER_BINARY_ARM = GLenum::GL_MALI_SHADER_BINARY_ARM;
GLESBINDING_CONSTEXPR static const GLenum GL_MALI_PROGRAM_BINARY_ARM = GLenum::GL_MALI_PROGRAM_BINARY_ARM;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT = GLenum::GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_PIXEL_LOCAL_STORAGE_EXT = GLenum::GL_SHADER_PIXEL_LOCAL_STORAGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FETCH_PER_SAMPLE_ARM = GLenum::GL_FETCH_PER_SAMPLE_ARM;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM = GLenum::GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT = GLenum::GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_ASTC_DECODE_PRECISION_EXT = GLenum::GL_TEXTURE_ASTC_DECODE_PRECISION_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16_SNORM_EXT = GLenum::GL_RGBA16_SNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SIGNED_NORMALIZED = GLenum::GL_SIGNED_NORMALIZED;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFMON_GLOBAL_MODE_QCOM = GLenum::GL_PERFMON_GLOBAL_MODE_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_CPU_OPTIMIZED_QCOM = GLenum::GL_CPU_OPTIMIZED_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_GPU_OPTIMIZED_QCOM = GLenum::GL_GPU_OPTIMIZED_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM = GLenum::GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_GPU_DISJOINT_EXT = GLenum::GL_GPU_DISJOINT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SR8_EXT = GLenum::GL_SR8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SRG8_EXT = GLenum::GL_SRG8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FORMAT_SRGB_OVERRIDE_EXT = GLenum::GL_TEXTURE_FORMAT_SRGB_OVERRIDE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_BINARY_VIV = GLenum::GL_SHADER_BINARY_VIV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT8_NV = GLenum::GL_INT8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT8_VEC2_NV = GLenum::GL_INT8_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT8_VEC3_NV = GLenum::GL_INT8_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT8_VEC4_NV = GLenum::GL_INT8_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT16_NV = GLenum::GL_INT16_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT16_VEC2_NV = GLenum::GL_INT16_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT16_VEC3_NV = GLenum::GL_INT16_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT16_VEC4_NV = GLenum::GL_INT16_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT64_VEC2_NV = GLenum::GL_INT64_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT64_VEC3_NV = GLenum::GL_INT64_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT64_VEC4_NV = GLenum::GL_INT64_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT8_NV = GLenum::GL_UNSIGNED_INT8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT8_VEC2_NV = GLenum::GL_UNSIGNED_INT8_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT8_VEC3_NV = GLenum::GL_UNSIGNED_INT8_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT8_VEC4_NV = GLenum::GL_UNSIGNED_INT8_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT16_NV = GLenum::GL_UNSIGNED_INT16_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT16_VEC2_NV = GLenum::GL_UNSIGNED_INT16_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT16_VEC3_NV = GLenum::GL_UNSIGNED_INT16_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT16_VEC4_NV = GLenum::GL_UNSIGNED_INT16_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_VEC2_NV = GLenum::GL_UNSIGNED_INT64_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_VEC3_NV = GLenum::GL_UNSIGNED_INT64_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_VEC4_NV = GLenum::GL_UNSIGNED_INT64_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT16_NV = GLenum::GL_FLOAT16_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT16_VEC2_NV = GLenum::GL_FLOAT16_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT16_VEC3_NV = GLenum::GL_FLOAT16_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT16_VEC4_NV = GLenum::GL_FLOAT16_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = GLenum::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT = GLenum::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES = GLenum::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_EXT = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_OES = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_INT_SAMPLER_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT = GLenum::GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES = GLenum::GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FACTOR_MIN_AMD = GLenum::GL_FACTOR_MIN_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_FACTOR_MAX_AMD = GLenum::GL_FACTOR_MAX_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_2D = GLenum::GL_IMAGE_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_3D = GLenum::GL_IMAGE_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_CUBE = GLenum::GL_IMAGE_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BUFFER = GLenum::GL_IMAGE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BUFFER_EXT = GLenum::GL_IMAGE_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BUFFER_OES = GLenum::GL_IMAGE_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_2D_ARRAY = GLenum::GL_IMAGE_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_CUBE_MAP_ARRAY = GLenum::GL_IMAGE_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_CUBE_MAP_ARRAY_EXT = GLenum::GL_IMAGE_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_CUBE_MAP_ARRAY_OES = GLenum::GL_IMAGE_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_2D = GLenum::GL_INT_IMAGE_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_3D = GLenum::GL_INT_IMAGE_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_CUBE = GLenum::GL_INT_IMAGE_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_BUFFER = GLenum::GL_INT_IMAGE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_BUFFER_EXT = GLenum::GL_INT_IMAGE_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_BUFFER_OES = GLenum::GL_INT_IMAGE_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_2D_ARRAY = GLenum::GL_INT_IMAGE_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_CUBE_MAP_ARRAY = GLenum::GL_INT_IMAGE_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT = GLenum::GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_CUBE_MAP_ARRAY_OES = GLenum::GL_INT_IMAGE_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_2D = GLenum::GL_UNSIGNED_INT_IMAGE_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_3D = GLenum::GL_UNSIGNED_INT_IMAGE_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_CUBE = GLenum::GL_UNSIGNED_INT_IMAGE_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_BUFFER = GLenum::GL_UNSIGNED_INT_IMAGE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_BUFFER_EXT = GLenum::GL_UNSIGNED_INT_IMAGE_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_BUFFER_OES = GLenum::GL_UNSIGNED_INT_IMAGE_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_2D_ARRAY = GLenum::GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = GLenum::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT = GLenum::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES = GLenum::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_FORMAT = GLenum::GL_IMAGE_BINDING_FORMAT;
GLESBINDING_CONSTEXPR static const GLenum GL_SQUARE_NV = GLenum::GL_SQUARE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ROUND_NV = GLenum::GL_ROUND_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGULAR_NV = GLenum::GL_TRIANGULAR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BEVEL_NV = GLenum::GL_BEVEL_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MITER_REVERT_NV = GLenum::GL_MITER_REVERT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MITER_TRUNCATE_NV = GLenum::GL_MITER_TRUNCATE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_ERROR_POSITION_NV = GLenum::GL_PATH_ERROR_POSITION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_GEN_MODE_NV = GLenum::GL_PATH_GEN_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_GEN_COEFF_NV = GLenum::GL_PATH_GEN_COEFF_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_GEN_COMPONENTS_NV = GLenum::GL_PATH_GEN_COMPONENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MOVE_TO_RESETS_NV = GLenum::GL_MOVE_TO_RESETS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MOVE_TO_CONTINUES_NV = GLenum::GL_MOVE_TO_CONTINUES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STENCIL_FUNC_NV = GLenum::GL_PATH_STENCIL_FUNC_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STENCIL_REF_NV = GLenum::GL_PATH_STENCIL_REF_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STENCIL_VALUE_MASK_NV = GLenum::GL_PATH_STENCIL_VALUE_MASK_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV = GLenum::GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV = GLenum::GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_COVER_DEPTH_FUNC_NV = GLenum::GL_PATH_COVER_DEPTH_FUNC_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_IMAGE_UNIFORMS = GLenum::GL_MAX_VERTEX_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = GLenum::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT = GLenum::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES = GLenum::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = GLenum::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT = GLenum::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES = GLenum::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_IMAGE_UNIFORMS = GLenum::GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT = GLenum::GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES = GLenum::GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_IMAGE_UNIFORMS = GLenum::GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_IMAGE_UNIFORMS = GLenum::GL_MAX_COMBINED_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER_BINDING = GLenum::GL_SHADER_STORAGE_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER_START = GLenum::GL_SHADER_STORAGE_BUFFER_START;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER_SIZE = GLenum::GL_SHADER_STORAGE_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT = GLenum::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES = GLenum::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT = GLenum::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES = GLenum::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT = GLenum::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES = GLenum::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = GLenum::GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_STORAGE_BLOCK_SIZE = GLenum::GL_MAX_SHADER_STORAGE_BLOCK_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = GLenum::GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = GLenum::GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_DISPATCH_INDIRECT_BUFFER_BINDING = GLenum::GL_DISPATCH_INDIRECT_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT_EXT = GLenum::GL_COLOR_ATTACHMENT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTIVIEW_EXT = GLenum::GL_MULTIVIEW_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MULTIVIEW_BUFFERS_EXT = GLenum::GL_MAX_MULTIVIEW_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_ROBUST_ACCESS_EXT = GLenum::GL_CONTEXT_ROBUST_ACCESS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES = GLenum::GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D_MULTISAMPLE = GLenum::GL_TEXTURE_BINDING_2D_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = GLenum::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES = GLenum::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SAMPLES = GLenum::GL_TEXTURE_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = GLenum::GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_MULTISAMPLE = GLenum::GL_SAMPLER_2D_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_MULTISAMPLE = GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_SAMPLER_2D_MULTISAMPLE_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES = GLenum::GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES = GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COLOR_TEXTURE_SAMPLES = GLenum::GL_MAX_COLOR_TEXTURE_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEPTH_TEXTURE_SAMPLES = GLenum::GL_MAX_DEPTH_TEXTURE_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_INTEGER_SAMPLES = GLenum::GL_MAX_INTEGER_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SERVER_WAIT_TIMEOUT = GLenum::GL_MAX_SERVER_WAIT_TIMEOUT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SERVER_WAIT_TIMEOUT_APPLE = GLenum::GL_MAX_SERVER_WAIT_TIMEOUT_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_OBJECT_TYPE_APPLE = GLenum::GL_OBJECT_TYPE_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_CONDITION_APPLE = GLenum::GL_SYNC_CONDITION_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_STATUS_APPLE = GLenum::GL_SYNC_STATUS_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_FLAGS_APPLE = GLenum::GL_SYNC_FLAGS_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_FENCE = GLenum::GL_SYNC_FENCE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_FENCE_APPLE = GLenum::GL_SYNC_FENCE_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE = GLenum::GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNALED = GLenum::GL_UNSIGNALED;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNALED_APPLE = GLenum::GL_UNSIGNALED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SIGNALED = GLenum::GL_SIGNALED;
GLESBINDING_CONSTEXPR static const GLenum GL_SIGNALED_APPLE = GLenum::GL_SIGNALED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_ALREADY_SIGNALED_APPLE = GLenum::GL_ALREADY_SIGNALED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_TIMEOUT_EXPIRED_APPLE = GLenum::GL_TIMEOUT_EXPIRED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CONDITION_SATISFIED_APPLE = GLenum::GL_CONDITION_SATISFIED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_WAIT_FAILED_APPLE = GLenum::GL_WAIT_FAILED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_OUTPUT_COMPONENTS = GLenum::GL_MAX_VERTEX_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_INPUT_COMPONENTS = GLenum::GL_MAX_GEOMETRY_INPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT = GLenum::GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES = GLenum::GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = GLenum::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT = GLenum::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES = GLenum::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_INPUT_COMPONENTS = GLenum::GL_MAX_FRAGMENT_INPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_IMMUTABLE_FORMAT = GLenum::GL_TEXTURE_IMMUTABLE_FORMAT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_IMMUTABLE_FORMAT_EXT = GLenum::GL_TEXTURE_IMMUTABLE_FORMAT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SGX_PROGRAM_BINARY_IMG = GLenum::GL_SGX_PROGRAM_BINARY_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES_IMG = GLenum::GL_RENDERBUFFER_SAMPLES_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES_IMG = GLenum::GL_MAX_SAMPLES_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SAMPLES_IMG = GLenum::GL_TEXTURE_SAMPLES_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG = GLenum::GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG = GLenum::GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_CUBIC_IMG = GLenum::GL_CUBIC_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_CUBIC_MIPMAP_NEAREST_IMG = GLenum::GL_CUBIC_MIPMAP_NEAREST_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_CUBIC_MIPMAP_LINEAR_IMG = GLenum::GL_CUBIC_MIPMAP_LINEAR_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_AND_DOWNSAMPLE_IMG = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_AND_DOWNSAMPLE_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_DOWNSAMPLE_SCALES_IMG = GLenum::GL_NUM_DOWNSAMPLE_SCALES_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_DOWNSAMPLE_SCALES_IMG = GLenum::GL_DOWNSAMPLE_SCALES_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEBUG_MESSAGE_LENGTH = GLenum::GL_MAX_DEBUG_MESSAGE_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEBUG_LOGGED_MESSAGES = GLenum::GL_MAX_DEBUG_LOGGED_MESSAGES;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_LOGGED_MESSAGES = GLenum::GL_DEBUG_LOGGED_MESSAGES;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_OBJECT_EXT = GLenum::GL_BUFFER_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_OBJECT_EXT = GLenum::GL_QUERY_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY_OBJECT_EXT = GLenum::GL_VERTEX_ARRAY_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VIRTUAL_PAGE_SIZE_X_EXT = GLenum::GL_VIRTUAL_PAGE_SIZE_X_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VIRTUAL_PAGE_SIZE_Y_EXT = GLenum::GL_VIRTUAL_PAGE_SIZE_Y_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VIRTUAL_PAGE_SIZE_Z_EXT = GLenum::GL_VIRTUAL_PAGE_SIZE_Z_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SPARSE_TEXTURE_SIZE_EXT = GLenum::GL_MAX_SPARSE_TEXTURE_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT = GLenum::GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT = GLenum::GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET = GLenum::GL_TEXTURE_BUFFER_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET_EXT = GLenum::GL_TEXTURE_BUFFER_OFFSET_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET_OES = GLenum::GL_TEXTURE_BUFFER_OFFSET_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_SIZE = GLenum::GL_TEXTURE_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_SIZE_EXT = GLenum::GL_TEXTURE_BUFFER_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_SIZE_OES = GLenum::GL_TEXTURE_BUFFER_SIZE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = GLenum::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT = GLenum::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES = GLenum::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SPARSE_EXT = GLenum::GL_TEXTURE_SPARSE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VIRTUAL_PAGE_SIZE_INDEX_EXT = GLenum::GL_VIRTUAL_PAGE_SIZE_INDEX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_VIRTUAL_PAGE_SIZES_EXT = GLenum::GL_NUM_VIRTUAL_PAGE_SIZES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT = GLenum::GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_SPARSE_LEVELS_EXT = GLenum::GL_NUM_SPARSE_LEVELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_COMPILER_THREADS_KHR = GLenum::GL_MAX_SHADER_COMPILER_THREADS_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPLETION_STATUS_KHR = GLenum::GL_COMPLETION_STATUS_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_UNIFORM_BLOCKS = GLenum::GL_MAX_COMPUTE_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_IMAGE_UNIFORMS = GLenum::GL_MAX_COMPUTE_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_WORK_GROUP_COUNT = GLenum::GL_MAX_COMPUTE_WORK_GROUP_COUNT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_WORK_GROUP_SIZE = GLenum::GL_MAX_COMPUTE_WORK_GROUP_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_BINARY_DMP = GLenum::GL_SHADER_BINARY_DMP;
GLESBINDING_CONSTEXPR static const GLenum GL_SMAPHS30_PROGRAM_BINARY_DMP = GLenum::GL_SMAPHS30_PROGRAM_BINARY_DMP;
GLESBINDING_CONSTEXPR static const GLenum GL_SMAPHS_PROGRAM_BINARY_DMP = GLenum::GL_SMAPHS_PROGRAM_BINARY_DMP;
GLESBINDING_CONSTEXPR static const GLenum GL_DMP_PROGRAM_BINARY_DMP = GLenum::GL_DMP_PROGRAM_BINARY_DMP;
GLESBINDING_CONSTEXPR static const GLenum GL_GCCSO_SHADER_BINARY_FJ = GLenum::GL_GCCSO_SHADER_BINARY_FJ;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_PREMULTIPLIED_SRC_NV = GLenum::GL_BLEND_PREMULTIPLIED_SRC_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_OVERLAP_NV = GLenum::GL_BLEND_OVERLAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNCORRELATED_NV = GLenum::GL_UNCORRELATED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DISJOINT_NV = GLenum::GL_DISJOINT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONJOINT_NV = GLenum::GL_CONJOINT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_ADVANCED_COHERENT_KHR = GLenum::GL_BLEND_ADVANCED_COHERENT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_ADVANCED_COHERENT_NV = GLenum::GL_BLEND_ADVANCED_COHERENT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_NV = GLenum::GL_SRC_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_NV = GLenum::GL_DST_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_OVER_NV = GLenum::GL_SRC_OVER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_OVER_NV = GLenum::GL_DST_OVER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_IN_NV = GLenum::GL_SRC_IN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_IN_NV = GLenum::GL_DST_IN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_OUT_NV = GLenum::GL_SRC_OUT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_OUT_NV = GLenum::GL_DST_OUT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_ATOP_NV = GLenum::GL_SRC_ATOP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_ATOP_NV = GLenum::GL_DST_ATOP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PLUS_NV = GLenum::GL_PLUS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PLUS_DARKER_NV = GLenum::GL_PLUS_DARKER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTIPLY = GLenum::GL_MULTIPLY;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTIPLY_KHR = GLenum::GL_MULTIPLY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTIPLY_NV = GLenum::GL_MULTIPLY_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SCREEN = GLenum::GL_SCREEN;
GLESBINDING_CONSTEXPR static const GLenum GL_SCREEN_KHR = GLenum::GL_SCREEN_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SCREEN_NV = GLenum::GL_SCREEN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_OVERLAY = GLenum::GL_OVERLAY;
GLESBINDING_CONSTEXPR static const GLenum GL_OVERLAY_KHR = GLenum::GL_OVERLAY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_OVERLAY_NV = GLenum::GL_OVERLAY_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DARKEN = GLenum::GL_DARKEN;
GLESBINDING_CONSTEXPR static const GLenum GL_DARKEN_KHR = GLenum::GL_DARKEN_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DARKEN_NV = GLenum::GL_DARKEN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LIGHTEN = GLenum::GL_LIGHTEN;
GLESBINDING_CONSTEXPR static const GLenum GL_LIGHTEN_KHR = GLenum::GL_LIGHTEN_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_LIGHTEN_NV = GLenum::GL_LIGHTEN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORDODGE = GLenum::GL_COLORDODGE;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORDODGE_KHR = GLenum::GL_COLORDODGE_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORDODGE_NV = GLenum::GL_COLORDODGE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORBURN = GLenum::GL_COLORBURN;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORBURN_KHR = GLenum::GL_COLORBURN_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORBURN_NV = GLenum::GL_COLORBURN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HARDLIGHT = GLenum::GL_HARDLIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_HARDLIGHT_KHR = GLenum::GL_HARDLIGHT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_HARDLIGHT_NV = GLenum::GL_HARDLIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SOFTLIGHT = GLenum::GL_SOFTLIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_SOFTLIGHT_KHR = GLenum::GL_SOFTLIGHT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SOFTLIGHT_NV = GLenum::GL_SOFTLIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DIFFERENCE = GLenum::GL_DIFFERENCE;
GLESBINDING_CONSTEXPR static const GLenum GL_DIFFERENCE_KHR = GLenum::GL_DIFFERENCE_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DIFFERENCE_NV = GLenum::GL_DIFFERENCE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MINUS_NV = GLenum::GL_MINUS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_EXCLUSION = GLenum::GL_EXCLUSION;
GLESBINDING_CONSTEXPR static const GLenum GL_EXCLUSION_KHR = GLenum::GL_EXCLUSION_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_EXCLUSION_NV = GLenum::GL_EXCLUSION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTRAST_NV = GLenum::GL_CONTRAST_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INVERT_RGB_NV = GLenum::GL_INVERT_RGB_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEARDODGE_NV = GLenum::GL_LINEARDODGE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEARBURN_NV = GLenum::GL_LINEARBURN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIVIDLIGHT_NV = GLenum::GL_VIVIDLIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEARLIGHT_NV = GLenum::GL_LINEARLIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PINLIGHT_NV = GLenum::GL_PINLIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HARDMIX_NV = GLenum::GL_HARDMIX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_HUE = GLenum::GL_HSL_HUE;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_HUE_KHR = GLenum::GL_HSL_HUE_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_HUE_NV = GLenum::GL_HSL_HUE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_SATURATION = GLenum::GL_HSL_SATURATION;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_SATURATION_KHR = GLenum::GL_HSL_SATURATION_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_SATURATION_NV = GLenum::GL_HSL_SATURATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_COLOR = GLenum::GL_HSL_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_COLOR_KHR = GLenum::GL_HSL_COLOR_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_COLOR_NV = GLenum::GL_HSL_COLOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_LUMINOSITY = GLenum::GL_HSL_LUMINOSITY;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_LUMINOSITY_KHR = GLenum::GL_HSL_LUMINOSITY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_LUMINOSITY_NV = GLenum::GL_HSL_LUMINOSITY_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PLUS_CLAMPED_NV = GLenum::GL_PLUS_CLAMPED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PLUS_CLAMPED_ALPHA_NV = GLenum::GL_PLUS_CLAMPED_ALPHA_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MINUS_CLAMPED_NV = GLenum::GL_MINUS_CLAMPED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INVERT_OVG_NV = GLenum::GL_INVERT_OVG_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_BOUNDING_BOX = GLenum::GL_PRIMITIVE_BOUNDING_BOX;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_BOUNDING_BOX_EXT = GLenum::GL_PRIMITIVE_BOUNDING_BOX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_BOUNDING_BOX_OES = GLenum::GL_PRIMITIVE_BOUNDING_BOX_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER_START = GLenum::GL_ATOMIC_COUNTER_BUFFER_START;
GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER_SIZE = GLenum::GL_ATOMIC_COUNTER_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATOMIC_COUNTERS = GLenum::GL_MAX_VERTEX_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTERS = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_ATOMIC_COUNTERS = GLenum::GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_ATOMIC_COUNTERS = GLenum::GL_MAX_COMBINED_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = GLenum::GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_ATOMIC_COUNTER = GLenum::GL_UNSIGNED_INT_ATOMIC_COUNTER;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = GLenum::GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_COVERAGE_TO_COLOR_NV = GLenum::GL_FRAGMENT_COVERAGE_TO_COLOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_COVERAGE_COLOR_NV = GLenum::GL_FRAGMENT_COVERAGE_COLOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_OUTPUT = GLenum::GL_DEBUG_OUTPUT;
GLESBINDING_CONSTEXPR static const GLenum GL_IS_PER_PATCH = GLenum::GL_IS_PER_PATCH;
GLESBINDING_CONSTEXPR static const GLenum GL_IS_PER_PATCH_EXT = GLenum::GL_IS_PER_PATCH_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_IS_PER_PATCH_OES = GLenum::GL_IS_PER_PATCH_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_NAME_LENGTH = GLenum::GL_NAME_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_TYPE = GLenum::GL_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_SIZE = GLenum::GL_ARRAY_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_OFFSET = GLenum::GL_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_BLOCK_INDEX = GLenum::GL_BLOCK_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_STRIDE = GLenum::GL_ARRAY_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_MATRIX_STRIDE = GLenum::GL_MATRIX_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_IS_ROW_MAJOR = GLenum::GL_IS_ROW_MAJOR;
GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER_INDEX = GLenum::GL_ATOMIC_COUNTER_BUFFER_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_BINDING = GLenum::GL_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_DATA_SIZE = GLenum::GL_BUFFER_DATA_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_ACTIVE_VARIABLES = GLenum::GL_NUM_ACTIVE_VARIABLES;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_VARIABLES = GLenum::GL_ACTIVE_VARIABLES;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_VERTEX_SHADER = GLenum::GL_REFERENCED_BY_VERTEX_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_CONTROL_SHADER = GLenum::GL_REFERENCED_BY_TESS_CONTROL_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT = GLenum::GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES = GLenum::GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_EVALUATION_SHADER = GLenum::GL_REFERENCED_BY_TESS_EVALUATION_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT = GLenum::GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES = GLenum::GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_GEOMETRY_SHADER = GLenum::GL_REFERENCED_BY_GEOMETRY_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_GEOMETRY_SHADER_EXT = GLenum::GL_REFERENCED_BY_GEOMETRY_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_GEOMETRY_SHADER_OES = GLenum::GL_REFERENCED_BY_GEOMETRY_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_FRAGMENT_SHADER = GLenum::GL_REFERENCED_BY_FRAGMENT_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_COMPUTE_SHADER = GLenum::GL_REFERENCED_BY_COMPUTE_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_TOP_LEVEL_ARRAY_SIZE = GLenum::GL_TOP_LEVEL_ARRAY_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TOP_LEVEL_ARRAY_STRIDE = GLenum::GL_TOP_LEVEL_ARRAY_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_LOCATION = GLenum::GL_LOCATION;
GLESBINDING_CONSTEXPR static const GLenum GL_LOCATION_INDEX_EXT = GLenum::GL_LOCATION_INDEX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT = GLenum::GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_LAYERS_OES = GLenum::GL_FRAMEBUFFER_DEFAULT_LAYERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_WIDTH = GLenum::GL_MAX_FRAMEBUFFER_WIDTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_HEIGHT = GLenum::GL_MAX_FRAMEBUFFER_HEIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_LAYERS = GLenum::GL_MAX_FRAMEBUFFER_LAYERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_LAYERS_EXT = GLenum::GL_MAX_FRAMEBUFFER_LAYERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_LAYERS_OES = GLenum::GL_MAX_FRAMEBUFFER_LAYERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_SAMPLES = GLenum::GL_MAX_FRAMEBUFFER_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_RASTER_MULTISAMPLE_EXT = GLenum::GL_RASTER_MULTISAMPLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RASTER_SAMPLES_EXT = GLenum::GL_RASTER_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_RASTER_SAMPLES_EXT = GLenum::GL_MAX_RASTER_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT = GLenum::GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT = GLenum::GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_EFFECTIVE_RASTER_SAMPLES_EXT = GLenum::GL_EFFECTIVE_RASTER_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_SAMPLES_NV = GLenum::GL_DEPTH_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_SAMPLES_NV = GLenum::GL_STENCIL_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV = GLenum::GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV = GLenum::GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_MODULATION_TABLE_NV = GLenum::GL_COVERAGE_MODULATION_TABLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_MODULATION_NV = GLenum::GL_COVERAGE_MODULATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_MODULATION_TABLE_SIZE_NV = GLenum::GL_COVERAGE_MODULATION_TABLE_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FILL_RECTANGLE_NV = GLenum::GL_FILL_RECTANGLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV = GLenum::GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV = GLenum::GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV = GLenum::GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV = GLenum::GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAMMABLE_SAMPLE_LOCATION_NV = GLenum::GL_PROGRAMMABLE_SAMPLE_LOCATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV = GLenum::GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV = GLenum::GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTERIZATION_NV = GLenum::GL_CONSERVATIVE_RASTERIZATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV = GLenum::GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV = GLenum::GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV = GLenum::GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV = GLenum::GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV = GLenum::GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV = GLenum::GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV = GLenum::GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV = GLenum::GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV = GLenum::GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV = GLenum::GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV = GLenum::GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_X_NV = GLenum::GL_VIEWPORT_SWIZZLE_X_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_Y_NV = GLenum::GL_VIEWPORT_SWIZZLE_Y_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_Z_NV = GLenum::GL_VIEWPORT_SWIZZLE_Z_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_W_NV = GLenum::GL_VIEWPORT_SWIZZLE_W_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_ORIGIN_EXT = GLenum::GL_CLIP_ORIGIN_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DEPTH_MODE_EXT = GLenum::GL_CLIP_DEPTH_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_NEGATIVE_ONE_TO_ONE_EXT = GLenum::GL_NEGATIVE_ONE_TO_ONE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ZERO_TO_ONE_EXT = GLenum::GL_ZERO_TO_ONE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_REDUCTION_MODE_EXT = GLenum::GL_TEXTURE_REDUCTION_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_WEIGHTED_AVERAGE_EXT = GLenum::GL_WEIGHTED_AVERAGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FONT_GLYPHS_AVAILABLE_NV = GLenum::GL_FONT_GLYPHS_AVAILABLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FONT_TARGET_UNAVAILABLE_NV = GLenum::GL_FONT_TARGET_UNAVAILABLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FONT_UNAVAILABLE_NV = GLenum::GL_FONT_UNAVAILABLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FONT_UNINTELLIGIBLE_NV = GLenum::GL_FONT_UNINTELLIGIBLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_STANDARD_FONT_FORMAT_NV = GLenum::GL_STANDARD_FONT_FORMAT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_INPUT_NV = GLenum::GL_FRAGMENT_INPUT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLES_NV = GLenum::GL_MULTISAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SUPERSAMPLE_SCALE_X_NV = GLenum::GL_SUPERSAMPLE_SCALE_X_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SUPERSAMPLE_SCALE_Y_NV = GLenum::GL_SUPERSAMPLE_SCALE_Y_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONFORMANT_NV = GLenum::GL_CONFORMANT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_POSITION_W_SCALE_NV = GLenum::GL_VIEWPORT_POSITION_W_SCALE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV = GLenum::GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV = GLenum::GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_LINE_WIDTH_RANGE = GLenum::GL_MULTISAMPLE_LINE_WIDTH_RANGE;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY = GLenum::GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE = GLenum::GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_BGRA8_EXT = GLenum::GL_BGRA8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_USAGE_ANGLE = GLenum::GL_TEXTURE_USAGE_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_ANGLE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_REVERSE_ROW_ORDER_ANGLE = GLenum::GL_PACK_REVERSE_ROW_ORDER_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_ANGLE = GLenum::GL_PROGRAM_BINARY_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4 = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x4 = GLenum::GL_COMPRESSED_RGBA_ASTC_5x4;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x4_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_5x4_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_6x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_6x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6 = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_8x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_8x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x6 = GLenum::GL_COMPRESSED_RGBA_ASTC_8x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x6_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_8x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x8 = GLenum::GL_COMPRESSED_RGBA_ASTC_8x8;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x8_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_8x8_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x6 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x6_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x8 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x8;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x8_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x8_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x10 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x10;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x10_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x10_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x10 = GLenum::GL_COMPRESSED_RGBA_ASTC_12x10;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x10_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_12x10_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x12 = GLenum::GL_COMPRESSED_RGBA_ASTC_12x12;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x12_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_12x12_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_3x3x3_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_3x3x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x3x3_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_4x3x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4x3_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4x4_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x4x4_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_5x4x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5x4_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5x5_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x5x5_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_6x5x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6x5_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6x6_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6x6_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG = GLenum::GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG = GLenum::GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_EVENT_INTEL = GLenum::GL_PERFQUERY_COUNTER_EVENT_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL = GLenum::GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL = GLenum::GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL = GLenum::GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_RAW_INTEL = GLenum::GL_PERFQUERY_COUNTER_RAW_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL = GLenum::GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL = GLenum::GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL = GLenum::GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL = GLenum::GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL = GLenum::GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL = GLenum::GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL = GLenum::GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL = GLenum::GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL = GLenum::GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL = GLenum::GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTER_MODE_NV = GLenum::GL_CONSERVATIVE_RASTER_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV = GLenum::GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV = GLenum::GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV = GLenum::GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_TILING_TYPES_EXT = GLenum::GL_NUM_TILING_TYPES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TILING_TYPES_EXT = GLenum::GL_TILING_TYPES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_OPTIMAL_TILING_EXT = GLenum::GL_OPTIMAL_TILING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR_TILING_EXT = GLenum::GL_LINEAR_TILING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VIEWS_OVR = GLenum::GL_MAX_VIEWS_OVR;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR = GLenum::GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT = GLenum::GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT = GLenum::GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHARED_EDGE_NV = GLenum::GL_SHARED_EDGE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT_NV = GLenum::GL_ROUNDED_RECT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT_NV = GLenum::GL_RELATIVE_ROUNDED_RECT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT2_NV = GLenum::GL_ROUNDED_RECT2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT2_NV = GLenum::GL_RELATIVE_ROUNDED_RECT2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT4_NV = GLenum::GL_ROUNDED_RECT4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT4_NV = GLenum::GL_RELATIVE_ROUNDED_RECT4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT8_NV = GLenum::GL_ROUNDED_RECT8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT8_NV = GLenum::GL_RELATIVE_ROUNDED_RECT8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RESTART_PATH_NV = GLenum::GL_RESTART_PATH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DUP_FIRST_CUBIC_CURVE_TO_NV = GLenum::GL_DUP_FIRST_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DUP_LAST_CUBIC_CURVE_TO_NV = GLenum::GL_DUP_LAST_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RECT_NV = GLenum::GL_RECT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_RECT_NV = GLenum::GL_RELATIVE_RECT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CIRCULAR_CCW_ARC_TO_NV = GLenum::GL_CIRCULAR_CCW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CIRCULAR_CW_ARC_TO_NV = GLenum::GL_CIRCULAR_CW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CIRCULAR_TANGENT_ARC_TO_NV = GLenum::GL_CIRCULAR_TANGENT_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ARC_TO_NV = GLenum::GL_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ARC_TO_NV = GLenum::GL_RELATIVE_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UUID_SIZE_EXT = GLenum::GL_UUID_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUID_SIZE_EXT = GLenum::GL_LUID_SIZE_EXT;



} // namespace gles
