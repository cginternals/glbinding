
#include "Meta_Maps.h"

#include <glesbinding/gles/extension.h>


using namespace gles;


namespace glesbinding { namespace aux
{


const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_0{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_A =
{
    { "glAcquireKeyedMutexWin32EXT", { GLextension::GL_EXT_win32_keyed_mutex } },
    { "glAlphaFuncQCOM", { GLextension::GL_QCOM_alpha_test } },
    { "glApplyFramebufferAttachmentCMAAINTEL", { GLextension::GL_INTEL_framebuffer_CMAA } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_B =
{
    { "glBeginConditionalRenderNV", { GLextension::GL_NV_conditional_render } },
    { "glBeginPerfMonitorAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glBeginPerfQueryINTEL", { GLextension::GL_INTEL_performance_query } },
    { "glBeginQueryEXT", { GLextension::GL_EXT_disjoint_timer_query, GLextension::GL_EXT_occlusion_query_boolean } },
    { "glBindFragDataLocationEXT", { GLextension::GL_EXT_blend_func_extended } },
    { "glBindFragDataLocationIndexedEXT", { GLextension::GL_EXT_blend_func_extended } },
    { "glBindVertexArrayOES", { GLextension::GL_OES_vertex_array_object } },
    { "glBlendBarrierKHR", { GLextension::GL_KHR_blend_equation_advanced } },
    { "glBlendBarrierNV", { GLextension::GL_NV_blend_equation_advanced } },
    { "glBlendEquationSeparateiEXT", { GLextension::GL_EXT_draw_buffers_indexed } },
    { "glBlendEquationSeparateiOES", { GLextension::GL_OES_draw_buffers_indexed } },
    { "glBlendEquationiEXT", { GLextension::GL_EXT_draw_buffers_indexed } },
    { "glBlendEquationiOES", { GLextension::GL_OES_draw_buffers_indexed } },
    { "glBlendFuncSeparateiEXT", { GLextension::GL_EXT_draw_buffers_indexed } },
    { "glBlendFuncSeparateiOES", { GLextension::GL_OES_draw_buffers_indexed } },
    { "glBlendFunciEXT", { GLextension::GL_EXT_draw_buffers_indexed } },
    { "glBlendFunciOES", { GLextension::GL_OES_draw_buffers_indexed } },
    { "glBlendParameteriNV", { GLextension::GL_NV_blend_equation_advanced } },
    { "glBlitFramebufferANGLE", { GLextension::GL_ANGLE_framebuffer_blit } },
    { "glBlitFramebufferNV", { GLextension::GL_NV_framebuffer_blit } },
    { "glBufferStorageEXT", { GLextension::GL_EXT_buffer_storage } },
    { "glBufferStorageExternalEXT", { GLextension::GL_EXT_external_buffer } },
    { "glBufferStorageMemEXT", { GLextension::GL_EXT_memory_object } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_C =
{
    { "glClearPixelLocalStorageuiEXT", { GLextension::GL_EXT_shader_pixel_local_storage2 } },
    { "glClearTexImageEXT", { GLextension::GL_EXT_clear_texture } },
    { "glClearTexSubImageEXT", { GLextension::GL_EXT_clear_texture } },
    { "glClientWaitSyncAPPLE", { GLextension::GL_APPLE_sync } },
    { "glClipControlEXT", { GLextension::GL_EXT_clip_control } },
    { "glColorMaskiEXT", { GLextension::GL_EXT_draw_buffers_indexed } },
    { "glColorMaskiOES", { GLextension::GL_OES_draw_buffers_indexed } },
    { "glCompressedTexImage3DOES", { GLextension::GL_OES_texture_3D } },
    { "glCompressedTexSubImage3DOES", { GLextension::GL_OES_texture_3D } },
    { "glConservativeRasterParameteriNV", { GLextension::GL_NV_conservative_raster_pre_snap_triangles } },
    { "glCopyBufferSubDataNV", { GLextension::GL_NV_copy_buffer } },
    { "glCopyImageSubDataEXT", { GLextension::GL_EXT_copy_image } },
    { "glCopyImageSubDataOES", { GLextension::GL_OES_copy_image } },
    { "glCopyPathNV", { GLextension::GL_NV_path_rendering } },
    { "glCopyTexSubImage3DOES", { GLextension::GL_OES_texture_3D } },
    { "glCopyTextureLevelsAPPLE", { GLextension::GL_APPLE_copy_texture_levels } },
    { "glCoverFillPathInstancedNV", { GLextension::GL_NV_path_rendering } },
    { "glCoverFillPathNV", { GLextension::GL_NV_path_rendering } },
    { "glCoverStrokePathInstancedNV", { GLextension::GL_NV_path_rendering } },
    { "glCoverStrokePathNV", { GLextension::GL_NV_path_rendering } },
    { "glCoverageMaskNV", { GLextension::GL_NV_coverage_sample } },
    { "glCoverageModulationNV", { GLextension::GL_NV_framebuffer_mixed_samples } },
    { "glCoverageModulationTableNV", { GLextension::GL_NV_framebuffer_mixed_samples } },
    { "glCoverageOperationNV", { GLextension::GL_NV_coverage_sample } },
    { "glCreateMemoryObjectsEXT", { GLextension::GL_EXT_memory_object } },
    { "glCreatePerfQueryINTEL", { GLextension::GL_INTEL_performance_query } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_D =
{
    { "glDeleteFencesNV", { GLextension::GL_NV_fence } },
    { "glDeleteMemoryObjectsEXT", { GLextension::GL_EXT_memory_object } },
    { "glDeletePathsNV", { GLextension::GL_NV_path_rendering } },
    { "glDeletePerfMonitorsAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glDeletePerfQueryINTEL", { GLextension::GL_INTEL_performance_query } },
    { "glDeleteQueriesEXT", { GLextension::GL_EXT_disjoint_timer_query, GLextension::GL_EXT_occlusion_query_boolean } },
    { "glDeleteSemaphoresEXT", { GLextension::GL_EXT_semaphore } },
    { "glDeleteSyncAPPLE", { GLextension::GL_APPLE_sync } },
    { "glDeleteVertexArraysOES", { GLextension::GL_OES_vertex_array_object } },
    { "glDepthRangeArrayfvNV", { GLextension::GL_NV_viewport_array } },
    { "glDepthRangeArrayfvOES", { GLextension::GL_OES_viewport_array } },
    { "glDepthRangeIndexedfNV", { GLextension::GL_NV_viewport_array } },
    { "glDepthRangeIndexedfOES", { GLextension::GL_OES_viewport_array } },
    { "glDisableDriverControlQCOM", { GLextension::GL_QCOM_driver_control } },
    { "glDisableiEXT", { GLextension::GL_EXT_draw_buffers_indexed } },
    { "glDisableiNV", { GLextension::GL_NV_viewport_array } },
    { "glDisableiOES", { GLextension::GL_OES_draw_buffers_indexed, GLextension::GL_OES_viewport_array } },
    { "glDiscardFramebufferEXT", { GLextension::GL_EXT_discard_framebuffer } },
    { "glDrawArraysInstancedANGLE", { GLextension::GL_ANGLE_instanced_arrays } },
    { "glDrawArraysInstancedBaseInstanceEXT", { GLextension::GL_EXT_base_instance } },
    { "glDrawArraysInstancedEXT", { GLextension::GL_EXT_draw_instanced, GLextension::GL_EXT_instanced_arrays } },
    { "glDrawArraysInstancedNV", { GLextension::GL_NV_draw_instanced } },
    { "glDrawBuffersEXT", { GLextension::GL_EXT_draw_buffers } },
    { "glDrawBuffersIndexedEXT", { GLextension::GL_EXT_multiview_draw_buffers } },
    { "glDrawBuffersNV", { GLextension::GL_NV_draw_buffers } },
    { "glDrawElementsBaseVertexEXT", { GLextension::GL_EXT_draw_elements_base_vertex } },
    { "glDrawElementsBaseVertexOES", { GLextension::GL_OES_draw_elements_base_vertex } },
    { "glDrawElementsInstancedANGLE", { GLextension::GL_ANGLE_instanced_arrays } },
    { "glDrawElementsInstancedBaseInstanceEXT", { GLextension::GL_EXT_base_instance } },
    { "glDrawElementsInstancedBaseVertexBaseInstanceEXT", { GLextension::GL_EXT_base_instance } },
    { "glDrawElementsInstancedBaseVertexEXT", { GLextension::GL_EXT_draw_elements_base_vertex } },
    { "glDrawElementsInstancedBaseVertexOES", { GLextension::GL_OES_draw_elements_base_vertex } },
    { "glDrawElementsInstancedEXT", { GLextension::GL_EXT_draw_instanced, GLextension::GL_EXT_instanced_arrays } },
    { "glDrawElementsInstancedNV", { GLextension::GL_NV_draw_instanced } },
    { "glDrawRangeElementsBaseVertexEXT", { GLextension::GL_EXT_draw_elements_base_vertex } },
    { "glDrawRangeElementsBaseVertexOES", { GLextension::GL_OES_draw_elements_base_vertex } },
    { "glDrawTransformFeedbackEXT", { GLextension::GL_EXT_draw_transform_feedback } },
    { "glDrawTransformFeedbackInstancedEXT", { GLextension::GL_EXT_draw_transform_feedback } },
    { "glDrawVkImageNV", { GLextension::GL_NV_draw_vulkan_image } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_E =
{
    { "glEGLImageTargetRenderbufferStorageOES", { GLextension::GL_OES_EGL_image } },
    { "glEGLImageTargetTexStorageEXT", { GLextension::GL_EXT_EGL_image_storage } },
    { "glEGLImageTargetTexture2DOES", { GLextension::GL_OES_EGL_image } },
    { "glEGLImageTargetTextureStorageEXT", { GLextension::GL_EXT_EGL_image_storage } },
    { "glEnableDriverControlQCOM", { GLextension::GL_QCOM_driver_control } },
    { "glEnableiEXT", { GLextension::GL_EXT_draw_buffers_indexed } },
    { "glEnableiNV", { GLextension::GL_NV_viewport_array } },
    { "glEnableiOES", { GLextension::GL_OES_draw_buffers_indexed, GLextension::GL_OES_viewport_array } },
    { "glEndConditionalRenderNV", { GLextension::GL_NV_conditional_render } },
    { "glEndPerfMonitorAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glEndPerfQueryINTEL", { GLextension::GL_INTEL_performance_query } },
    { "glEndQueryEXT", { GLextension::GL_EXT_disjoint_timer_query, GLextension::GL_EXT_occlusion_query_boolean } },
    { "glEndTilingQCOM", { GLextension::GL_QCOM_tiled_rendering } },
    { "glExtGetBufferPointervQCOM", { GLextension::GL_QCOM_extended_get } },
    { "glExtGetBuffersQCOM", { GLextension::GL_QCOM_extended_get } },
    { "glExtGetFramebuffersQCOM", { GLextension::GL_QCOM_extended_get } },
    { "glExtGetProgramBinarySourceQCOM", { GLextension::GL_QCOM_extended_get2 } },
    { "glExtGetProgramsQCOM", { GLextension::GL_QCOM_extended_get2 } },
    { "glExtGetRenderbuffersQCOM", { GLextension::GL_QCOM_extended_get } },
    { "glExtGetShadersQCOM", { GLextension::GL_QCOM_extended_get2 } },
    { "glExtGetTexLevelParameterivQCOM", { GLextension::GL_QCOM_extended_get } },
    { "glExtGetTexSubImageQCOM", { GLextension::GL_QCOM_extended_get } },
    { "glExtGetTexturesQCOM", { GLextension::GL_QCOM_extended_get } },
    { "glExtIsProgramBinaryQCOM", { GLextension::GL_QCOM_extended_get2 } },
    { "glExtTexObjectStateOverrideiQCOM", { GLextension::GL_QCOM_extended_get } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_F =
{
    { "glFenceSyncAPPLE", { GLextension::GL_APPLE_sync } },
    { "glFinishFenceNV", { GLextension::GL_NV_fence } },
    { "glFlushMappedBufferRangeEXT", { GLextension::GL_EXT_map_buffer_range } },
    { "glFragmentCoverageColorNV", { GLextension::GL_NV_fragment_coverage_to_color } },
    { "glFramebufferFetchBarrierEXT", { GLextension::GL_EXT_shader_framebuffer_fetch_non_coherent } },
    { "glFramebufferFetchBarrierQCOM", { GLextension::GL_QCOM_shader_framebuffer_fetch_noncoherent } },
    { "glFramebufferFoveationConfigQCOM", { GLextension::GL_QCOM_framebuffer_foveated } },
    { "glFramebufferFoveationParametersQCOM", { GLextension::GL_QCOM_framebuffer_foveated } },
    { "glFramebufferPixelLocalStorageSizeEXT", { GLextension::GL_EXT_shader_pixel_local_storage2 } },
    { "glFramebufferSampleLocationsfvNV", { GLextension::GL_NV_sample_locations } },
    { "glFramebufferTexture2DDownsampleIMG", { GLextension::GL_IMG_framebuffer_downsample } },
    { "glFramebufferTexture2DMultisampleEXT", { GLextension::GL_EXT_multisampled_render_to_texture } },
    { "glFramebufferTexture2DMultisampleIMG", { GLextension::GL_IMG_multisampled_render_to_texture } },
    { "glFramebufferTexture3DOES", { GLextension::GL_OES_texture_3D } },
    { "glFramebufferTextureEXT", { GLextension::GL_EXT_geometry_shader } },
    { "glFramebufferTextureLayerDownsampleIMG", { GLextension::GL_IMG_framebuffer_downsample } },
    { "glFramebufferTextureMultisampleMultiviewOVR", { GLextension::GL_OVR_multiview_multisampled_render_to_texture } },
    { "glFramebufferTextureMultiviewOVR", { GLextension::GL_OVR_multiview } },
    { "glFramebufferTextureOES", { GLextension::GL_OES_geometry_shader } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_G =
{
    { "glGenFencesNV", { GLextension::GL_NV_fence } },
    { "glGenPathsNV", { GLextension::GL_NV_path_rendering } },
    { "glGenPerfMonitorsAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glGenQueriesEXT", { GLextension::GL_EXT_disjoint_timer_query, GLextension::GL_EXT_occlusion_query_boolean } },
    { "glGenSemaphoresEXT", { GLextension::GL_EXT_semaphore } },
    { "glGenVertexArraysOES", { GLextension::GL_OES_vertex_array_object } },
    { "glGetBufferPointervOES", { GLextension::GL_OES_mapbuffer } },
    { "glGetCoverageModulationTableNV", { GLextension::GL_NV_framebuffer_mixed_samples } },
    { "glGetDriverControlStringQCOM", { GLextension::GL_QCOM_driver_control } },
    { "glGetDriverControlsQCOM", { GLextension::GL_QCOM_driver_control } },
    { "glGetFenceivNV", { GLextension::GL_NV_fence } },
    { "glGetFirstPerfQueryIdINTEL", { GLextension::GL_INTEL_performance_query } },
    { "glGetFloati_vNV", { GLextension::GL_NV_viewport_array } },
    { "glGetFloati_vOES", { GLextension::GL_OES_viewport_array } },
    { "glGetFragDataIndexEXT", { GLextension::GL_EXT_blend_func_extended } },
    { "glGetFramebufferPixelLocalStorageSizeEXT", { GLextension::GL_EXT_shader_pixel_local_storage2 } },
    { "glGetGraphicsResetStatusEXT", { GLextension::GL_EXT_robustness } },
    { "glGetImageHandleNV", { GLextension::GL_NV_bindless_texture } },
    { "glGetInteger64vAPPLE", { GLextension::GL_APPLE_sync } },
    { "glGetIntegeri_vEXT", { GLextension::GL_EXT_multiview_draw_buffers } },
    { "glGetInternalformatSampleivNV", { GLextension::GL_NV_internalformat_sample_query } },
    { "glGetMemoryObjectParameterivEXT", { GLextension::GL_EXT_memory_object } },
    { "glGetNextPerfQueryIdINTEL", { GLextension::GL_INTEL_performance_query } },
    { "glGetObjectLabelEXT", { GLextension::GL_EXT_debug_label } },
    { "glGetPathCommandsNV", { GLextension::GL_NV_path_rendering } },
    { "glGetPathCoordsNV", { GLextension::GL_NV_path_rendering } },
    { "glGetPathDashArrayNV", { GLextension::GL_NV_path_rendering } },
    { "glGetPathLengthNV", { GLextension::GL_NV_path_rendering } },
    { "glGetPathMetricRangeNV", { GLextension::GL_NV_path_rendering } },
    { "glGetPathMetricsNV", { GLextension::GL_NV_path_rendering } },
    { "glGetPathParameterfvNV", { GLextension::GL_NV_path_rendering } },
    { "glGetPathParameterivNV", { GLextension::GL_NV_path_rendering } },
    { "glGetPathSpacingNV", { GLextension::GL_NV_path_rendering } },
    { "glGetPerfCounterInfoINTEL", { GLextension::GL_INTEL_performance_query } },
    { "glGetPerfMonitorCounterDataAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glGetPerfMonitorCounterInfoAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glGetPerfMonitorCounterStringAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glGetPerfMonitorCountersAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glGetPerfMonitorGroupStringAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glGetPerfMonitorGroupsAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glGetPerfQueryDataINTEL", { GLextension::GL_INTEL_performance_query } },
    { "glGetPerfQueryIdByNameINTEL", { GLextension::GL_INTEL_performance_query } },
    { "glGetPerfQueryInfoINTEL", { GLextension::GL_INTEL_performance_query } },
    { "glGetProgramBinaryOES", { GLextension::GL_OES_get_program_binary } },
    { "glGetProgramResourceLocationIndexEXT", { GLextension::GL_EXT_blend_func_extended } },
    { "glGetProgramResourcefvNV", { GLextension::GL_NV_path_rendering } },
    { "glGetQueryObjecti64vEXT", { GLextension::GL_EXT_disjoint_timer_query } },
    { "glGetQueryObjectivEXT", { GLextension::GL_EXT_disjoint_timer_query } },
    { "glGetQueryObjectui64vEXT", { GLextension::GL_EXT_disjoint_timer_query } },
    { "glGetQueryObjectuivEXT", { GLextension::GL_EXT_disjoint_timer_query, GLextension::GL_EXT_occlusion_query_boolean } },
    { "glGetQueryivEXT", { GLextension::GL_EXT_disjoint_timer_query, GLextension::GL_EXT_occlusion_query_boolean } },
    { "glGetSamplerParameterIivEXT", { GLextension::GL_EXT_texture_border_clamp } },
    { "glGetSamplerParameterIivOES", { GLextension::GL_OES_texture_border_clamp } },
    { "glGetSamplerParameterIuivEXT", { GLextension::GL_EXT_texture_border_clamp } },
    { "glGetSamplerParameterIuivOES", { GLextension::GL_OES_texture_border_clamp } },
    { "glGetSemaphoreParameterui64vEXT", { GLextension::GL_EXT_semaphore } },
    { "glGetSyncivAPPLE", { GLextension::GL_APPLE_sync } },
    { "glGetTexParameterIivEXT", { GLextension::GL_EXT_texture_border_clamp } },
    { "glGetTexParameterIivOES", { GLextension::GL_OES_texture_border_clamp } },
    { "glGetTexParameterIuivEXT", { GLextension::GL_EXT_texture_border_clamp } },
    { "glGetTexParameterIuivOES", { GLextension::GL_OES_texture_border_clamp } },
    { "glGetTextureHandleIMG", { GLextension::GL_IMG_bindless_texture } },
    { "glGetTextureHandleNV", { GLextension::GL_NV_bindless_texture } },
    { "glGetTextureSamplerHandleIMG", { GLextension::GL_IMG_bindless_texture } },
    { "glGetTextureSamplerHandleNV", { GLextension::GL_NV_bindless_texture } },
    { "glGetTranslatedShaderSourceANGLE", { GLextension::GL_ANGLE_translated_shader_source } },
    { "glGetUniformi64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glGetUnsignedBytei_vEXT", { GLextension::GL_EXT_memory_object, GLextension::GL_EXT_semaphore } },
    { "glGetUnsignedBytevEXT", { GLextension::GL_EXT_memory_object, GLextension::GL_EXT_semaphore } },
    { "glGetVkProcAddrNV", { GLextension::GL_NV_draw_vulkan_image } },
    { "glGetnUniformfvEXT", { GLextension::GL_EXT_robustness } },
    { "glGetnUniformivEXT", { GLextension::GL_EXT_robustness } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_H{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_I =
{
    { "glImportMemoryFdEXT", { GLextension::GL_EXT_memory_object_fd } },
    { "glImportMemoryWin32HandleEXT", { GLextension::GL_EXT_memory_object_win32 } },
    { "glImportMemoryWin32NameEXT", { GLextension::GL_EXT_memory_object_win32 } },
    { "glImportSemaphoreFdEXT", { GLextension::GL_EXT_semaphore_fd } },
    { "glImportSemaphoreWin32HandleEXT", { GLextension::GL_EXT_semaphore_win32 } },
    { "glImportSemaphoreWin32NameEXT", { GLextension::GL_EXT_semaphore_win32 } },
    { "glInsertEventMarkerEXT", { GLextension::GL_EXT_debug_marker } },
    { "glInterpolatePathsNV", { GLextension::GL_NV_path_rendering } },
    { "glIsEnablediEXT", { GLextension::GL_EXT_draw_buffers_indexed } },
    { "glIsEnablediNV", { GLextension::GL_NV_viewport_array } },
    { "glIsEnablediOES", { GLextension::GL_OES_draw_buffers_indexed, GLextension::GL_OES_viewport_array } },
    { "glIsFenceNV", { GLextension::GL_NV_fence } },
    { "glIsImageHandleResidentNV", { GLextension::GL_NV_bindless_texture } },
    { "glIsMemoryObjectEXT", { GLextension::GL_EXT_memory_object } },
    { "glIsPathNV", { GLextension::GL_NV_path_rendering } },
    { "glIsPointInFillPathNV", { GLextension::GL_NV_path_rendering } },
    { "glIsPointInStrokePathNV", { GLextension::GL_NV_path_rendering } },
    { "glIsQueryEXT", { GLextension::GL_EXT_disjoint_timer_query, GLextension::GL_EXT_occlusion_query_boolean } },
    { "glIsSemaphoreEXT", { GLextension::GL_EXT_semaphore } },
    { "glIsSyncAPPLE", { GLextension::GL_APPLE_sync } },
    { "glIsTextureHandleResidentNV", { GLextension::GL_NV_bindless_texture } },
    { "glIsVertexArrayOES", { GLextension::GL_OES_vertex_array_object } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_J{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_K{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_L =
{
    { "glLabelObjectEXT", { GLextension::GL_EXT_debug_label } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_M =
{
    { "glMakeImageHandleNonResidentNV", { GLextension::GL_NV_bindless_texture } },
    { "glMakeImageHandleResidentNV", { GLextension::GL_NV_bindless_texture } },
    { "glMakeTextureHandleNonResidentNV", { GLextension::GL_NV_bindless_texture } },
    { "glMakeTextureHandleResidentNV", { GLextension::GL_NV_bindless_texture } },
    { "glMapBufferOES", { GLextension::GL_OES_mapbuffer } },
    { "glMapBufferRangeEXT", { GLextension::GL_EXT_map_buffer_range } },
    { "glMatrixFrustumEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixLoad3x2fNV", { GLextension::GL_NV_path_rendering } },
    { "glMatrixLoad3x3fNV", { GLextension::GL_NV_path_rendering } },
    { "glMatrixLoadIdentityEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixLoadTranspose3x3fNV", { GLextension::GL_NV_path_rendering } },
    { "glMatrixLoadTransposedEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixLoadTransposefEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixLoaddEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixLoadfEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixMult3x2fNV", { GLextension::GL_NV_path_rendering } },
    { "glMatrixMult3x3fNV", { GLextension::GL_NV_path_rendering } },
    { "glMatrixMultTranspose3x3fNV", { GLextension::GL_NV_path_rendering } },
    { "glMatrixMultTransposedEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixMultTransposefEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixMultdEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixMultfEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixOrthoEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixPopEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixPushEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixRotatedEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixRotatefEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixScaledEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixScalefEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixTranslatedEXT", { GLextension::GL_NV_path_rendering } },
    { "glMatrixTranslatefEXT", { GLextension::GL_NV_path_rendering } },
    { "glMaxShaderCompilerThreadsKHR", { GLextension::GL_KHR_parallel_shader_compile } },
    { "glMemoryObjectParameterivEXT", { GLextension::GL_EXT_memory_object } },
    { "glMinSampleShadingOES", { GLextension::GL_OES_sample_shading } },
    { "glMultiDrawArraysEXT", { GLextension::GL_EXT_multi_draw_arrays } },
    { "glMultiDrawArraysIndirectEXT", { GLextension::GL_EXT_multi_draw_indirect } },
    { "glMultiDrawElementsBaseVertexEXT", { GLextension::GL_EXT_draw_elements_base_vertex, GLextension::GL_OES_draw_elements_base_vertex } },
    { "glMultiDrawElementsEXT", { GLextension::GL_EXT_multi_draw_arrays } },
    { "glMultiDrawElementsIndirectEXT", { GLextension::GL_EXT_multi_draw_indirect } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_N =
{
    { "glNamedBufferStorageExternalEXT", { GLextension::GL_EXT_external_buffer } },
    { "glNamedBufferStorageMemEXT", { GLextension::GL_EXT_memory_object } },
    { "glNamedFramebufferSampleLocationsfvNV", { GLextension::GL_NV_sample_locations } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_O{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_P =
{
    { "glPatchParameteriEXT", { GLextension::GL_EXT_tessellation_shader } },
    { "glPatchParameteriOES", { GLextension::GL_OES_tessellation_shader } },
    { "glPathCommandsNV", { GLextension::GL_NV_path_rendering } },
    { "glPathCoordsNV", { GLextension::GL_NV_path_rendering } },
    { "glPathCoverDepthFuncNV", { GLextension::GL_NV_path_rendering } },
    { "glPathDashArrayNV", { GLextension::GL_NV_path_rendering } },
    { "glPathGlyphIndexArrayNV", { GLextension::GL_NV_path_rendering } },
    { "glPathGlyphIndexRangeNV", { GLextension::GL_NV_path_rendering } },
    { "glPathGlyphRangeNV", { GLextension::GL_NV_path_rendering } },
    { "glPathGlyphsNV", { GLextension::GL_NV_path_rendering } },
    { "glPathMemoryGlyphIndexArrayNV", { GLextension::GL_NV_path_rendering } },
    { "glPathParameterfNV", { GLextension::GL_NV_path_rendering } },
    { "glPathParameterfvNV", { GLextension::GL_NV_path_rendering } },
    { "glPathParameteriNV", { GLextension::GL_NV_path_rendering } },
    { "glPathParameterivNV", { GLextension::GL_NV_path_rendering } },
    { "glPathStencilDepthOffsetNV", { GLextension::GL_NV_path_rendering } },
    { "glPathStencilFuncNV", { GLextension::GL_NV_path_rendering } },
    { "glPathStringNV", { GLextension::GL_NV_path_rendering } },
    { "glPathSubCommandsNV", { GLextension::GL_NV_path_rendering } },
    { "glPathSubCoordsNV", { GLextension::GL_NV_path_rendering } },
    { "glPointAlongPathNV", { GLextension::GL_NV_path_rendering } },
    { "glPolygonModeNV", { GLextension::GL_NV_polygon_mode } },
    { "glPolygonOffsetClampEXT", { GLextension::GL_EXT_polygon_offset_clamp } },
    { "glPopGroupMarkerEXT", { GLextension::GL_EXT_debug_marker } },
    { "glPrimitiveBoundingBoxEXT", { GLextension::GL_EXT_primitive_bounding_box } },
    { "glPrimitiveBoundingBoxOES", { GLextension::GL_OES_primitive_bounding_box } },
    { "glProgramBinaryOES", { GLextension::GL_OES_get_program_binary } },
    { "glProgramPathFragmentInputGenNV", { GLextension::GL_NV_path_rendering } },
    { "glProgramUniform1i64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform1i64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform1ui64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform1ui64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform2i64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform2i64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform2ui64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform2ui64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform3i64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform3i64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform3ui64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform3ui64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform4i64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform4i64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform4ui64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniform4ui64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glProgramUniformHandleui64IMG", { GLextension::GL_IMG_bindless_texture } },
    { "glProgramUniformHandleui64NV", { GLextension::GL_NV_bindless_texture } },
    { "glProgramUniformHandleui64vIMG", { GLextension::GL_IMG_bindless_texture } },
    { "glProgramUniformHandleui64vNV", { GLextension::GL_NV_bindless_texture } },
    { "glPushGroupMarkerEXT", { GLextension::GL_EXT_debug_marker } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_Q =
{
    { "glQueryCounterEXT", { GLextension::GL_EXT_disjoint_timer_query } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_R =
{
    { "glRasterSamplesEXT", { GLextension::GL_EXT_raster_multisample, GLextension::GL_NV_framebuffer_mixed_samples } },
    { "glReadBufferIndexedEXT", { GLextension::GL_EXT_multiview_draw_buffers } },
    { "glReadBufferNV", { GLextension::GL_NV_read_buffer } },
    { "glReadnPixelsEXT", { GLextension::GL_EXT_robustness } },
    { "glReleaseKeyedMutexWin32EXT", { GLextension::GL_EXT_win32_keyed_mutex } },
    { "glRenderbufferStorageMultisampleANGLE", { GLextension::GL_ANGLE_framebuffer_multisample } },
    { "glRenderbufferStorageMultisampleAPPLE", { GLextension::GL_APPLE_framebuffer_multisample } },
    { "glRenderbufferStorageMultisampleEXT", { GLextension::GL_EXT_multisampled_render_to_texture } },
    { "glRenderbufferStorageMultisampleIMG", { GLextension::GL_IMG_multisampled_render_to_texture } },
    { "glRenderbufferStorageMultisampleNV", { GLextension::GL_NV_framebuffer_multisample } },
    { "glResolveDepthValuesNV", { GLextension::GL_NV_sample_locations } },
    { "glResolveMultisampleFramebufferAPPLE", { GLextension::GL_APPLE_framebuffer_multisample } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_S =
{
    { "glSamplerParameterIivEXT", { GLextension::GL_EXT_texture_border_clamp } },
    { "glSamplerParameterIivOES", { GLextension::GL_OES_texture_border_clamp } },
    { "glSamplerParameterIuivEXT", { GLextension::GL_EXT_texture_border_clamp } },
    { "glSamplerParameterIuivOES", { GLextension::GL_OES_texture_border_clamp } },
    { "glScissorArrayvNV", { GLextension::GL_NV_viewport_array } },
    { "glScissorArrayvOES", { GLextension::GL_OES_viewport_array } },
    { "glScissorIndexedNV", { GLextension::GL_NV_viewport_array } },
    { "glScissorIndexedOES", { GLextension::GL_OES_viewport_array } },
    { "glScissorIndexedvNV", { GLextension::GL_NV_viewport_array } },
    { "glScissorIndexedvOES", { GLextension::GL_OES_viewport_array } },
    { "glSelectPerfMonitorCountersAMD", { GLextension::GL_AMD_performance_monitor } },
    { "glSemaphoreParameterui64vEXT", { GLextension::GL_EXT_semaphore } },
    { "glSetFenceNV", { GLextension::GL_NV_fence } },
    { "glSignalSemaphoreEXT", { GLextension::GL_EXT_semaphore } },
    { "glSignalVkFenceNV", { GLextension::GL_NV_draw_vulkan_image } },
    { "glSignalVkSemaphoreNV", { GLextension::GL_NV_draw_vulkan_image } },
    { "glStartTilingQCOM", { GLextension::GL_QCOM_tiled_rendering } },
    { "glStencilFillPathInstancedNV", { GLextension::GL_NV_path_rendering } },
    { "glStencilFillPathNV", { GLextension::GL_NV_path_rendering } },
    { "glStencilStrokePathInstancedNV", { GLextension::GL_NV_path_rendering } },
    { "glStencilStrokePathNV", { GLextension::GL_NV_path_rendering } },
    { "glStencilThenCoverFillPathInstancedNV", { GLextension::GL_NV_path_rendering } },
    { "glStencilThenCoverFillPathNV", { GLextension::GL_NV_path_rendering } },
    { "glStencilThenCoverStrokePathInstancedNV", { GLextension::GL_NV_path_rendering } },
    { "glStencilThenCoverStrokePathNV", { GLextension::GL_NV_path_rendering } },
    { "glSubpixelPrecisionBiasNV", { GLextension::GL_NV_conservative_raster } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_T =
{
    { "glTestFenceNV", { GLextension::GL_NV_fence } },
    { "glTexBufferEXT", { GLextension::GL_EXT_texture_buffer } },
    { "glTexBufferOES", { GLextension::GL_OES_texture_buffer } },
    { "glTexBufferRangeEXT", { GLextension::GL_EXT_texture_buffer } },
    { "glTexBufferRangeOES", { GLextension::GL_OES_texture_buffer } },
    { "glTexImage3DOES", { GLextension::GL_OES_texture_3D } },
    { "glTexPageCommitmentEXT", { GLextension::GL_EXT_sparse_texture } },
    { "glTexParameterIivEXT", { GLextension::GL_EXT_texture_border_clamp } },
    { "glTexParameterIivOES", { GLextension::GL_OES_texture_border_clamp } },
    { "glTexParameterIuivEXT", { GLextension::GL_EXT_texture_border_clamp } },
    { "glTexParameterIuivOES", { GLextension::GL_OES_texture_border_clamp } },
    { "glTexStorage1DEXT", { GLextension::GL_EXT_texture_storage } },
    { "glTexStorage2DEXT", { GLextension::GL_EXT_texture_storage } },
    { "glTexStorage3DEXT", { GLextension::GL_EXT_texture_storage } },
    { "glTexStorage3DMultisampleOES", { GLextension::GL_OES_texture_storage_multisample_2d_array } },
    { "glTexStorageMem2DEXT", { GLextension::GL_EXT_memory_object } },
    { "glTexStorageMem2DMultisampleEXT", { GLextension::GL_EXT_memory_object } },
    { "glTexStorageMem3DEXT", { GLextension::GL_EXT_memory_object } },
    { "glTexStorageMem3DMultisampleEXT", { GLextension::GL_EXT_memory_object } },
    { "glTexSubImage3DOES", { GLextension::GL_OES_texture_3D } },
    { "glTextureFoveationParametersQCOM", { GLextension::GL_QCOM_texture_foveated } },
    { "glTextureStorage1DEXT", { GLextension::GL_EXT_texture_storage } },
    { "glTextureStorage2DEXT", { GLextension::GL_EXT_texture_storage } },
    { "glTextureStorage3DEXT", { GLextension::GL_EXT_texture_storage } },
    { "glTextureStorageMem2DEXT", { GLextension::GL_EXT_memory_object } },
    { "glTextureStorageMem2DMultisampleEXT", { GLextension::GL_EXT_memory_object } },
    { "glTextureStorageMem3DEXT", { GLextension::GL_EXT_memory_object } },
    { "glTextureStorageMem3DMultisampleEXT", { GLextension::GL_EXT_memory_object } },
    { "glTextureViewEXT", { GLextension::GL_EXT_texture_view } },
    { "glTextureViewOES", { GLextension::GL_OES_texture_view } },
    { "glTransformPathNV", { GLextension::GL_NV_path_rendering } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_U =
{
    { "glUniform1i64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform1i64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform1ui64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform1ui64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform2i64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform2i64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform2ui64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform2ui64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform3i64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform3i64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform3ui64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform3ui64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform4i64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform4i64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform4ui64NV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniform4ui64vNV", { GLextension::GL_NV_gpu_shader5 } },
    { "glUniformHandleui64IMG", { GLextension::GL_IMG_bindless_texture } },
    { "glUniformHandleui64NV", { GLextension::GL_NV_bindless_texture } },
    { "glUniformHandleui64vIMG", { GLextension::GL_IMG_bindless_texture } },
    { "glUniformHandleui64vNV", { GLextension::GL_NV_bindless_texture } },
    { "glUniformMatrix2x3fvNV", { GLextension::GL_NV_non_square_matrices } },
    { "glUniformMatrix2x4fvNV", { GLextension::GL_NV_non_square_matrices } },
    { "glUniformMatrix3x2fvNV", { GLextension::GL_NV_non_square_matrices } },
    { "glUniformMatrix3x4fvNV", { GLextension::GL_NV_non_square_matrices } },
    { "glUniformMatrix4x2fvNV", { GLextension::GL_NV_non_square_matrices } },
    { "glUniformMatrix4x3fvNV", { GLextension::GL_NV_non_square_matrices } },
    { "glUnmapBufferOES", { GLextension::GL_OES_mapbuffer } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_V =
{
    { "glVertexAttribDivisorANGLE", { GLextension::GL_ANGLE_instanced_arrays } },
    { "glVertexAttribDivisorEXT", { GLextension::GL_EXT_instanced_arrays } },
    { "glVertexAttribDivisorNV", { GLextension::GL_NV_instanced_arrays } },
    { "glViewportArrayvNV", { GLextension::GL_NV_viewport_array } },
    { "glViewportArrayvOES", { GLextension::GL_OES_viewport_array } },
    { "glViewportIndexedfNV", { GLextension::GL_NV_viewport_array } },
    { "glViewportIndexedfOES", { GLextension::GL_OES_viewport_array } },
    { "glViewportIndexedfvNV", { GLextension::GL_NV_viewport_array } },
    { "glViewportIndexedfvOES", { GLextension::GL_OES_viewport_array } },
    { "glViewportPositionWScaleNV", { GLextension::GL_NV_clip_space_w_scaling } },
    { "glViewportSwizzleNV", { GLextension::GL_NV_viewport_swizzle } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_W =
{
    { "glWaitSemaphoreEXT", { GLextension::GL_EXT_semaphore } },
    { "glWaitSyncAPPLE", { GLextension::GL_APPLE_sync } },
    { "glWaitVkSemaphoreNV", { GLextension::GL_NV_draw_vulkan_image } },
    { "glWeightPathsNV", { GLextension::GL_NV_path_rendering } },
    { "glWindowRectanglesEXT", { GLextension::GL_EXT_window_rectangles } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_X{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_Y{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_Z{};

const std::array<std::unordered_map<std::string, std::set<gles::GLextension>>, 27> Meta_ExtensionsByFunctionStringMaps =
{ {
    Meta_ExtensionsByFunctionString_0,
    Meta_ExtensionsByFunctionString_A,
    Meta_ExtensionsByFunctionString_B,
    Meta_ExtensionsByFunctionString_C,
    Meta_ExtensionsByFunctionString_D,
    Meta_ExtensionsByFunctionString_E,
    Meta_ExtensionsByFunctionString_F,
    Meta_ExtensionsByFunctionString_G,
    Meta_ExtensionsByFunctionString_H,
    Meta_ExtensionsByFunctionString_I,
    Meta_ExtensionsByFunctionString_J,
    Meta_ExtensionsByFunctionString_K,
    Meta_ExtensionsByFunctionString_L,
    Meta_ExtensionsByFunctionString_M,
    Meta_ExtensionsByFunctionString_N,
    Meta_ExtensionsByFunctionString_O,
    Meta_ExtensionsByFunctionString_P,
    Meta_ExtensionsByFunctionString_Q,
    Meta_ExtensionsByFunctionString_R,
    Meta_ExtensionsByFunctionString_S,
    Meta_ExtensionsByFunctionString_T,
    Meta_ExtensionsByFunctionString_U,
    Meta_ExtensionsByFunctionString_V,
    Meta_ExtensionsByFunctionString_W,
    Meta_ExtensionsByFunctionString_X,
    Meta_ExtensionsByFunctionString_Y,
    Meta_ExtensionsByFunctionString_Z
} };


} } // namespace glesbinding::aux
