
#include "Meta_Maps.h"

#include <wglbinding/wgl/extension.h>


using namespace wgl;


namespace wglbinding
{


const std::unordered_map<GLextension, std::string> Meta_StringsByExtension =
{
    { GLextension::WGL_3DFX_multisample, "WGL_3DFX_multisample" },
    { GLextension::WGL_3DL_stereo_control, "WGL_3DL_stereo_control" },
    { GLextension::WGL_AMD_gpu_association, "WGL_AMD_gpu_association" },
    { GLextension::WGL_ARB_buffer_region, "WGL_ARB_buffer_region" },
    { GLextension::WGL_ARB_context_flush_control, "WGL_ARB_context_flush_control" },
    { GLextension::WGL_ARB_create_context, "WGL_ARB_create_context" },
    { GLextension::WGL_ARB_create_context_no_error, "WGL_ARB_create_context_no_error" },
    { GLextension::WGL_ARB_create_context_profile, "WGL_ARB_create_context_profile" },
    { GLextension::WGL_ARB_create_context_robustness, "WGL_ARB_create_context_robustness" },
    { GLextension::WGL_ARB_extensions_string, "WGL_ARB_extensions_string" },
    { GLextension::WGL_ARB_framebuffer_sRGB, "WGL_ARB_framebuffer_sRGB" },
    { GLextension::WGL_ARB_make_current_read, "WGL_ARB_make_current_read" },
    { GLextension::WGL_ARB_multisample, "WGL_ARB_multisample" },
    { GLextension::WGL_ARB_pbuffer, "WGL_ARB_pbuffer" },
    { GLextension::WGL_ARB_pixel_format, "WGL_ARB_pixel_format" },
    { GLextension::WGL_ARB_pixel_format_float, "WGL_ARB_pixel_format_float" },
    { GLextension::WGL_ARB_render_texture, "WGL_ARB_render_texture" },
    { GLextension::WGL_ARB_robustness_application_isolation, "WGL_ARB_robustness_application_isolation" },
    { GLextension::WGL_ARB_robustness_share_group_isolation, "WGL_ARB_robustness_share_group_isolation" },
    { GLextension::WGL_ATI_pixel_format_float, "WGL_ATI_pixel_format_float" },
    { GLextension::WGL_EXT_colorspace, "WGL_EXT_colorspace" },
    { GLextension::WGL_EXT_create_context_es2_profile, "WGL_EXT_create_context_es2_profile" },
    { GLextension::WGL_EXT_create_context_es_profile, "WGL_EXT_create_context_es_profile" },
    { GLextension::WGL_EXT_depth_float, "WGL_EXT_depth_float" },
    { GLextension::WGL_EXT_display_color_table, "WGL_EXT_display_color_table" },
    { GLextension::WGL_EXT_extensions_string, "WGL_EXT_extensions_string" },
    { GLextension::WGL_EXT_framebuffer_sRGB, "WGL_EXT_framebuffer_sRGB" },
    { GLextension::WGL_EXT_make_current_read, "WGL_EXT_make_current_read" },
    { GLextension::WGL_EXT_multisample, "WGL_EXT_multisample" },
    { GLextension::WGL_EXT_pbuffer, "WGL_EXT_pbuffer" },
    { GLextension::WGL_EXT_pixel_format, "WGL_EXT_pixel_format" },
    { GLextension::WGL_EXT_pixel_format_packed_float, "WGL_EXT_pixel_format_packed_float" },
    { GLextension::WGL_EXT_swap_control, "WGL_EXT_swap_control" },
    { GLextension::WGL_EXT_swap_control_tear, "WGL_EXT_swap_control_tear" },
    { GLextension::WGL_I3D_digital_video_control, "WGL_I3D_digital_video_control" },
    { GLextension::WGL_I3D_gamma, "WGL_I3D_gamma" },
    { GLextension::WGL_I3D_genlock, "WGL_I3D_genlock" },
    { GLextension::WGL_I3D_image_buffer, "WGL_I3D_image_buffer" },
    { GLextension::WGL_I3D_swap_frame_lock, "WGL_I3D_swap_frame_lock" },
    { GLextension::WGL_I3D_swap_frame_usage, "WGL_I3D_swap_frame_usage" },
    { GLextension::WGL_NV_DX_interop, "WGL_NV_DX_interop" },
    { GLextension::WGL_NV_DX_interop2, "WGL_NV_DX_interop2" },
    { GLextension::WGL_NV_copy_image, "WGL_NV_copy_image" },
    { GLextension::WGL_NV_delay_before_swap, "WGL_NV_delay_before_swap" },
    { GLextension::WGL_NV_float_buffer, "WGL_NV_float_buffer" },
    { GLextension::WGL_NV_gpu_affinity, "WGL_NV_gpu_affinity" },
    { GLextension::WGL_NV_multisample_coverage, "WGL_NV_multisample_coverage" },
    { GLextension::WGL_NV_present_video, "WGL_NV_present_video" },
    { GLextension::WGL_NV_render_depth_texture, "WGL_NV_render_depth_texture" },
    { GLextension::WGL_NV_render_texture_rectangle, "WGL_NV_render_texture_rectangle" },
    { GLextension::WGL_NV_swap_group, "WGL_NV_swap_group" },
    { GLextension::WGL_NV_vertex_array_range, "WGL_NV_vertex_array_range" },
    { GLextension::WGL_NV_video_capture, "WGL_NV_video_capture" },
    { GLextension::WGL_NV_video_output, "WGL_NV_video_output" },
    { GLextension::WGL_OML_sync_control, "WGL_OML_sync_control" }
};


} // namespace wglbinding
