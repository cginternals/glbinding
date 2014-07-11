
#include <gmock/gmock.h>

#include <map>
#include <set>

#include <glbinding/gl.h>

#include <glbinding/Meta.h>
#include <glbinding/Version.h>


class extensions_test : public testing::Test
{
public:
};

using namespace gl;

// these values are based on glview (gl extension viewer) and are not taken from gl.xml 

TEST_F(extensions_test, VerifyVersion30Completeness)
{
    // #22

    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_ARB_map_buffer_range));  // GLextension::GL_APPLE_flush_buffer_range
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_ARB_vertex_array_object)); // GLextension::GL_APPLE_vertex_array_object
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_ARB_color_buffer_float));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_ARB_depth_buffer_float));
    
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_ARB_framebuffer_object));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_ARB_framebuffer_sRGB));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_ARB_half_float_pixel));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_ARB_texture_compression_rgtc));
    
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_ARB_texture_float));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_ARB_texture_rg));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_EXT_draw_buffers2));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_EXT_framebuffer_blit));

    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_EXT_framebuffer_multisample));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_EXT_gpu_shader4));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_EXT_packed_depth_stencil));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_EXT_packed_float));

    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_EXT_texture_array));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_EXT_texture_integer));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_EXT_texture_shared_exponent));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_EXT_transform_feedback));

    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_NV_conditional_render));
    EXPECT_EQ(Version(3, 0), Meta::getRequiringVersion(GLextension::GL_NV_half_float)); // GLextension::GL_ARB_half_float_vertex
}

TEST_F(extensions_test, VerifyVersion31Completeness)
{
    // #07

    EXPECT_EQ(Version(3, 1), Meta::getRequiringVersion(GLextension::GL_ARB_copy_buffer));
    EXPECT_EQ(Version(3, 1), Meta::getRequiringVersion(GLextension::GL_ARB_draw_instanced));
    EXPECT_EQ(Version(3, 1), Meta::getRequiringVersion(GLextension::GL_ARB_texture_buffer_object));
    EXPECT_EQ(Version(3, 1), Meta::getRequiringVersion(GLextension::GL_ARB_texture_rectangle));

    //EXPECT_EQ(Version(3, 1), Meta::getRequiringVersion(GLextension::GL_ARB_texture_snorm)); // GLextension::GL_EXT_texture_snorm ?
    EXPECT_EQ(Version(3, 1), Meta::getRequiringVersion(GLextension::GL_ARB_uniform_buffer_object));
    EXPECT_EQ(Version(3, 1), Meta::getRequiringVersion(GLextension::GL_NV_primitive_restart));
}

TEST_F(extensions_test, VerifyVersion32Completeness)
{
    // #09

    EXPECT_EQ(Version(3, 2), Meta::getRequiringVersion(GLextension::GL_ARB_depth_clamp));
    EXPECT_EQ(Version(3, 2), Meta::getRequiringVersion(GLextension::GL_ARB_draw_elements_base_vertex));
    EXPECT_EQ(Version(3, 2), Meta::getRequiringVersion(GLextension::GL_ARB_fragment_coord_conventions));
    EXPECT_EQ(Version(3, 2), Meta::getRequiringVersion(GLextension::GL_ARB_geometry_shader4));

    EXPECT_EQ(Version(3, 2), Meta::getRequiringVersion(GLextension::GL_ARB_provoking_vertex));
    EXPECT_EQ(Version(3, 2), Meta::getRequiringVersion(GLextension::GL_ARB_seamless_cube_map));
    EXPECT_EQ(Version(3, 2), Meta::getRequiringVersion(GLextension::GL_ARB_sync));
    EXPECT_EQ(Version(3, 2), Meta::getRequiringVersion(GLextension::GL_ARB_texture_multisample));

    EXPECT_EQ(Version(3, 2), Meta::getRequiringVersion(GLextension::GL_ARB_vertex_array_bgra)); // GL_EXT_vertex_array_bgra ?
}


TEST_F(extensions_test, VerifyVersion33Completeness)
{
    // #09

    EXPECT_EQ(Version(3, 3), Meta::getRequiringVersion(GLextension::GL_ARB_blend_func_extended));
    EXPECT_EQ(Version(3, 3), Meta::getRequiringVersion(GLextension::GL_ARB_explicit_attrib_location));
    EXPECT_EQ(Version(3, 3), Meta::getRequiringVersion(GLextension::GL_ARB_instanced_arrays));
    EXPECT_EQ(Version(3, 3), Meta::getRequiringVersion(GLextension::GL_ARB_occlusion_query2));

    EXPECT_EQ(Version(3, 3), Meta::getRequiringVersion(GLextension::GL_ARB_sampler_objects));
    EXPECT_EQ(Version(3, 3), Meta::getRequiringVersion(GLextension::GL_ARB_texture_rgb10_a2ui));
    EXPECT_EQ(Version(3, 3), Meta::getRequiringVersion(GLextension::GL_ARB_texture_swizzle));
    EXPECT_EQ(Version(3, 3), Meta::getRequiringVersion(GLextension::GL_ARB_timer_query));

    EXPECT_EQ(Version(3, 3), Meta::getRequiringVersion(GLextension::GL_ARB_vertex_type_2_10_10_10_rev));
}

TEST_F(extensions_test, VerifyVersion40Completeness)
{
    // #13

    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_draw_buffers_blend));
    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_draw_indirect));
    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_gpu_shader5));
    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_gpu_shader_fp64));

    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_sample_shading));
    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_shader_subroutine));
    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_tessellation_shader));
    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_texture_buffer_object_rgb32));

    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_texture_cube_map_array));
    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_texture_gather));
    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_texture_query_lod));
    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_transform_feedback2));

    EXPECT_EQ(Version(4, 0), Meta::getRequiringVersion(GLextension::GL_ARB_transform_feedback3));
}

TEST_F(extensions_test, VerifyVersion41Completeness)
{
    // #6

    EXPECT_EQ(Version(4, 1), Meta::getRequiringVersion(GLextension::GL_ARB_ES2_compatibility));
    EXPECT_EQ(Version(4, 1), Meta::getRequiringVersion(GLextension::GL_ARB_get_program_binary));
    EXPECT_EQ(Version(4, 1), Meta::getRequiringVersion(GLextension::GL_ARB_separate_shader_objects));
    EXPECT_EQ(Version(4, 1), Meta::getRequiringVersion(GLextension::GL_ARB_shader_precision));

    EXPECT_EQ(Version(4, 1), Meta::getRequiringVersion(GLextension::GL_ARB_vertex_attrib_64bit));
    EXPECT_EQ(Version(4, 1), Meta::getRequiringVersion(GLextension::GL_ARB_viewport_array));
}

TEST_F(extensions_test, VerifyVersion42Completeness)
{
    // #12

    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_base_instance));
    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_compressed_texture_pixel_storage));
    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_conservative_depth));
    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_internalformat_query));

    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_map_buffer_alignment));
    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_robustness));
    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_shader_atomic_counters));
    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_shader_image_load_store));

    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_shading_language_420pack));
    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_texture_compression_bptc));
    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_texture_storage));
    EXPECT_EQ(Version(4, 2), Meta::getRequiringVersion(GLextension::GL_ARB_transform_feedback_instanced));
}

TEST_F(extensions_test, VerifyVersion43Completeness)
{
    // #22

    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_arrays_of_arrays));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_clear_buffer_object));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_compute_shader));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_copy_image));

    //EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_debug_group));
    //EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_debug_label)); // GLextension::GL_EXT_debug_label ?
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_debug_output)); // GLextension::GL_KHR_debug_output ?
    //EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_debug_output2));

    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_ES3_compatibility));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_explicit_uniform_location));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_framebuffer_no_attachments));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_internalformat_query2));

    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_invalidate_subdata));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_multi_draw_indirect));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_program_interface_query));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_shader_image_size));

    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_shader_storage_buffer_object));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_stencil_texturing));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_texture_buffer_range));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_texture_storage_multisample));

    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_texture_view));
    EXPECT_EQ(Version(4, 3), Meta::getRequiringVersion(GLextension::GL_ARB_vertex_attrib_binding));
}

TEST_F(extensions_test, VerifyVersion44Completeness)
{
    // #09

    EXPECT_EQ(Version(4, 4), Meta::getRequiringVersion(GLextension::GL_ARB_bindless_texture));
    EXPECT_EQ(Version(4, 4), Meta::getRequiringVersion(GLextension::GL_ARB_buffer_storage));
    EXPECT_EQ(Version(4, 4), Meta::getRequiringVersion(GLextension::GL_ARB_clear_texture));
    EXPECT_EQ(Version(4, 4), Meta::getRequiringVersion(GLextension::GL_ARB_enhanced_layouts));

    EXPECT_EQ(Version(4, 4), Meta::getRequiringVersion(GLextension::GL_ARB_multi_bind));
    EXPECT_EQ(Version(4, 4), Meta::getRequiringVersion(GLextension::GL_ARB_query_buffer_object));
    EXPECT_EQ(Version(4, 4), Meta::getRequiringVersion(GLextension::GL_ARB_texture_mirror_clamp_to_edge));
    EXPECT_EQ(Version(4, 4), Meta::getRequiringVersion(GLextension::GL_ARB_texture_stencil8));

    EXPECT_EQ(Version(4, 4), Meta::getRequiringVersion(GLextension::GL_ARB_vertex_type_10f_11f_11f_rev));
}
