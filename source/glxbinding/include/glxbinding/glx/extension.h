
#pragma once


#include <glxbinding/nogl.h>


namespace glx
{


enum class GLextension : int // GLextension is not a type introduced by OpenGL API so far
{
    UNKNOWN = -1,
    GLX_3DFX_multisample,
    GLX_AMD_gpu_association,
    GLX_ARB_context_flush_control,
    GLX_ARB_create_context,
    GLX_ARB_create_context_no_error,
    GLX_ARB_create_context_profile,
    GLX_ARB_create_context_robustness,
    GLX_ARB_fbconfig_float,
    GLX_ARB_framebuffer_sRGB,
    GLX_ARB_get_proc_address,
    GLX_ARB_multisample,
    GLX_ARB_robustness_application_isolation,
    GLX_ARB_robustness_share_group_isolation,
    GLX_ARB_vertex_buffer_object,
    GLX_EXT_buffer_age,
    GLX_EXT_create_context_es2_profile,
    GLX_EXT_create_context_es_profile,
    GLX_EXT_fbconfig_packed_float,
    GLX_EXT_framebuffer_sRGB,
    GLX_EXT_import_context,
    GLX_EXT_libglvnd,
    GLX_EXT_no_config_context,
    GLX_EXT_stereo_tree,
    GLX_EXT_swap_control,
    GLX_EXT_swap_control_tear,
    GLX_EXT_texture_from_pixmap,
    GLX_EXT_visual_info,
    GLX_EXT_visual_rating,
    GLX_INTEL_swap_event,
    GLX_MESA_agp_offset,
    GLX_MESA_copy_sub_buffer,
    GLX_MESA_pixmap_colormap,
    GLX_MESA_query_renderer,
    GLX_MESA_release_buffers,
    GLX_MESA_set_3dfx_mode,
    GLX_MESA_swap_control,
    GLX_NV_copy_buffer,
    GLX_NV_copy_image,
    GLX_NV_delay_before_swap,
    GLX_NV_float_buffer,
    GLX_NV_multisample_coverage,
    GLX_NV_present_video,
    GLX_NV_robustness_video_memory_purge,
    GLX_NV_swap_group,
    GLX_NV_video_capture,
    GLX_NV_video_out,
    GLX_OML_swap_method,
    GLX_OML_sync_control,
    GLX_SGIS_blended_overlay,
    GLX_SGIS_multisample,
    GLX_SGIS_shared_multisample,
    GLX_SGIX_dmbuffer,
    GLX_SGIX_fbconfig,
    GLX_SGIX_hyperpipe,
    GLX_SGIX_pbuffer,
    GLX_SGIX_swap_barrier,
    GLX_SGIX_swap_group,
    GLX_SGIX_video_resize,
    GLX_SGIX_video_source,
    GLX_SGIX_visual_select_group,
    GLX_SGI_cushion,
    GLX_SGI_make_current_read,
    GLX_SGI_swap_control,
    GLX_SGI_video_sync,
    GLX_SUN_get_transparent_index
};


} // namespace glx
