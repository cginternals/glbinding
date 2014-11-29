
#include <iostream>
#include <string>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/Meta.h>
#include <glbinding/ContextInfo.h>
#include <glbinding/Version.h>
#include <glbinding/Binding.h>
#include <glbinding/gl/enum.h>

#include "printfunctions.h"


using namespace gl;
using namespace glbinding;

namespace {

void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

}

int main(int argc, const char * argv[])
{
    if (!Meta::stringsByGL())
    {
        std::cout << "Strings by GL not supported (enable through OPTION_STRINGS_BY_GL)" << std::endl;

        return 1;
    }
#ifndef __APPLE__
    if (argc == 2 && (std::string(argv[1]).compare("--help") || std::string(argv[1]).compare("-h")))
    {
        std::cout << "Usage: " << argv[0] << " [MAJOR_VERSION MINOR_VERSION [CORE [FORWARD_COMPATIBLE]]]" << std::endl;

        return 1;
    }
#endif

    if (!glfwInit())
        return 1;

    glfwSetErrorCallback(error);

    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);

#ifdef __APPLE__
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, true);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#else
    if (argc >= 3)
    {
        int majorVersion = atoi(argv[1]);
        int minorVersion = atoi(argv[2]);

        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, majorVersion);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, minorVersion);
    }

    if (argc >= 4)
    {
        int core = atoi(argv[3]);

        glfwWindowHint(GLFW_OPENGL_PROFILE, core  ? GLFW_OPENGL_CORE_PROFILE : GLFW_OPENGL_ANY_PROFILE);
    }

    if (argc >= 5)
    {
        int forwardComaptability = atoi(argv[3]);

        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, static_cast<bool>(forwardComaptability));
    }
#endif

    GLFWwindow * window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    glfwHideWindow(window);

    glfwMakeContextCurrent(window);

    Binding::initialize();

    std::cout << std::endl
        << "OpenGL Version:  " << ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << ContextInfo::renderer() << std::endl
        << "OpenGL Revision: " << Meta::glRevision() << " (gl.xml)" << std::endl << std::endl;

    std::vector<QueryResult> results;

    requestAndPrint<int, 1, false>(results, GL_ACCUM_ALPHA_BITS);
    requestAndPrint<int, 1, false>(results, GL_ACCUM_BLUE_BITS);
    requestAndPrint<float, 4, false>(results, GL_ACCUM_CLEAR_VALUE);
    requestAndPrint<int, 1, false>(results, GL_ACCUM_GREEN_BITS);
    requestAndPrint<int, 1, false>(results, GL_ACCUM_RED_BITS);
    requestAndPrint<int, 1, false>(results, GL_ACTIVE_TEXTURE);
    requestAndPrint<float, 2, false>(results, GL_ALIASED_POINT_SIZE_RANGE);
    requestAndPrint<float, 2, false>(results, GL_ALIASED_LINE_WIDTH_RANGE);
    requestAndPrint<float, 1, false>(results, GL_ALPHA_BIAS);
    requestAndPrint<int, 1, false>(results, GL_ALPHA_BITS);
    requestAndPrint<float, 1, false>(results, GL_ALPHA_SCALE);
    requestAndPrint<bool, 1, false>(results, GL_ALPHA_TEST);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_ALPHA_TEST_FUNC);
    requestAndPrint<float, 1, false>(results, GL_ALPHA_TEST_REF);
    requestAndPrint<int, 1, false>(results, GL_ARRAY_BUFFER_BINDING);
    requestAndPrint<int, 1, false>(results, GL_ATTRIB_STACK_DEPTH);
    requestAndPrint<bool, 1, false>(results, GL_AUTO_NORMAL);
    requestAndPrint<int, 1, false>(results, GL_AUX_BUFFERS);


    requestAndPrint<bool, 1, false>(results, GL_BLEND);
    requestAndPrint<float, 4, false>(results, GL_BLEND_COLOR);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_BLEND_DST_ALPHA);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_BLEND_DST_RGB);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_BLEND_EQUATION_ALPHA);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_BLEND_EQUATION_RGB);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_BLEND_SRC_ALPHA);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_BLEND_SRC_RGB);
    requestAndPrint<float, 1, false>(results, GL_BLUE_BIAS);
    requestAndPrint<int, 1, false>(results, GL_BLUE_BITS);
    requestAndPrint<float, 1, false>(results, GL_BLUE_SCALE);

    requestAndPrint<gl::GLenum, 1, false>(results, GL_CLIENT_ACTIVE_TEXTURE);
    requestAndPrint<int, 1, false>(results, GL_CLIENT_ATTRIB_STACK_DEPTH);
    multipleRequestAndPrint<bool>(results, GL_CLIP_PLANE0, GL_MAX_CLIP_PLANES);
    requestAndPrint<bool, 1, false>(results, GL_COLOR_ARRAY);
    requestAndPrint<int, 1, false>(results, GL_COLOR_ARRAY_BUFFER_BINDING);
    requestAndPrint<int, 1, false>(results, GL_COLOR_ARRAY_SIZE);
    requestAndPrint<int, 1, false>(results, GL_COLOR_ARRAY_STRIDE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_COLOR_ARRAY_TYPE);
    requestAndPrint<float, 4, false>(results, GL_COLOR_CLEAR_VALUE);
    requestAndPrint<bool, 1, false>(results, GL_COLOR_LOGIC_OP);
    requestAndPrint<bool, 1, false>(results, GL_COLOR_MATERIAL);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_COLOR_MATERIAL_FACE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_COLOR_MATERIAL_PARAMETER);
    requestAndPrint<float, 16, false>(results, GL_COLOR_MATRIX);
    requestAndPrint<int, 1, false>(results, GL_COLOR_MATRIX_STACK_DEPTH);
    requestAndPrint<bool, 1, false>(results, GL_COLOR_SUM);
    requestAndPrint<bool, 1, false>(results, GL_COLOR_TABLE);
    requestAndPrint<bool, 4, false>(results, GL_COLOR_WRITEMASK);
    dynamicRequestAndPrint<gl::GLenum>(results, GL_COMPRESSED_TEXTURE_FORMATS, GL_NUM_COMPRESSED_TEXTURE_FORMATS);
    requestAndPrint<bool, 1, false>(results, GL_CONVOLUTION_1D);
    requestAndPrint<bool, 1, false>(results, GL_CONVOLUTION_2D);
    requestAndPrint<bool, 1, false>(results, GL_CULL_FACE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_CULL_FACE_MODE);
    requestAndPrint<float, 4, false>(results, GL_CURRENT_COLOR);
    requestAndPrint<int, 1, false>(results, GL_CURRENT_FOG_COORD);
    requestAndPrint<int, 1, false>(results, GL_CURRENT_INDEX);
    requestAndPrint<float, 3, false>(results, GL_CURRENT_NORMAL);
    requestAndPrint<int, 1, false>(results, GL_CURRENT_PROGRAM);
    requestAndPrint<float, 4, false>(results, GL_CURRENT_RASTER_COLOR);
    requestAndPrint<float, 1, false>(results, GL_CURRENT_RASTER_DISTANCE);
    requestAndPrint<int, 1, false>(results, GL_CURRENT_RASTER_INDEX);
    requestAndPrint<float, 4, false>(results, GL_CURRENT_RASTER_POSITION);
    requestAndPrint<bool, 1, false>(results, GL_CURRENT_RASTER_POSITION_VALID);
    requestAndPrint<float, 4, false>(results, GL_CURRENT_RASTER_SECONDARY_COLOR);
    requestAndPrint<float, 4, false>(results, GL_CURRENT_RASTER_TEXTURE_COORDS);
    requestAndPrint<float, 4, false>(results, GL_CURRENT_SECONDARY_COLOR);
    requestAndPrint<float, 4, false>(results, GL_CURRENT_TEXTURE_COORDS);

    /*
    requestAndPrinti(GL_DEPTH_BIAS);
    requestAndPrinti(GL_DEPTH_BITS);
    requestAndPrintf(GL_DEPTH_CLEAR_VALUE);
    requestAndPrinte(GL_DEPTH_FUNC);
    requestAndPrinti(GL_DEPTH_SCALE);
    requestAndPrintb(GL_DEPTH_TEST);
    requestAndPrintb(GL_DEPTH_WRITEMASK);
    requestAndPrintb(GL_DITHER);
    requestAndPrintb(GL_DOUBLEBUFFER);
    requestAndPrinte(GL_DRAW_BUFFER);

    // GL_DEPTH_RANGE
    // GL_DRAW_BUFFER_i

    requestAndPrintb(GL_EDGE_FLAG);
    requestAndPrintb(GL_EDGE_FLAG_ARRAY);
    requestAndPrinti(GL_EDGE_FLAG_ARRAY_BUFFER_BINDING);
    requestAndPrinti(GL_EDGE_FLAG_ARRAY_STRIDE);
    requestAndPrinti(GL_ELEMENT_ARRAY_BUFFER_BINDING);

    requestAndPrinti(GL_FEEDBACK_BUFFER_SIZE);
    requestAndPrinte(GL_FEEDBACK_BUFFER_TYPE);
    requestAndPrintb(GL_FOG);
    requestAndPrintb(GL_FOG_COORD_ARRAY);
    requestAndPrinti(GL_FOG_COORD_ARRAY_BUFFER_BINDING);
    requestAndPrinti(GL_FOG_COORD_ARRAY_STRIDE);
    requestAndPrinte(GL_FOG_COORD_ARRAY_TYPE);
    requestAndPrintf(GL_FOG_DENSITY);
    requestAndPrintf(GL_FOG_END);
    requestAndPrinte(GL_FOG_HINT);
    requestAndPrinti(GL_FOG_INDEX);
    requestAndPrinte(GL_FOG_MODE);
    requestAndPrintf(GL_FOG_START);
    requestAndPrinte(GL_FRAGMENT_SHADER_DERIVATIVE_HINT);
    requestAndPrinte(GL_FRONT_FACE);

    // GL_FOG_COORD_SRC
    // GL_FOG_COLOR

    requestAndPrinte(GL_GENERATE_MIPMAP_HINT);
    requestAndPrinti(GL_GREEN_BIAS);
    requestAndPrinti(GL_GREEN_BITS);
    requestAndPrinti(GL_GREEN_SCALE);

    requestAndPrintb(GL_HISTOGRAM);

    requestAndPrintb(GL_INDEX_ARRAY);
    requestAndPrinti(GL_INDEX_ARRAY_BUFFER_BINDING);
    requestAndPrinti(GL_INDEX_ARRAY_STRIDE);
    requestAndPrinte(GL_INDEX_ARRAY_TYPE);
    requestAndPrinti(GL_INDEX_BITS);
    requestAndPrinti(GL_INDEX_CLEAR_VALUE);
    requestAndPrintb(GL_INDEX_LOGIC_OP);
    requestAndPrintb(GL_INDEX_MODE);
    requestAndPrinti(GL_INDEX_OFFSET);
    requestAndPrinti(GL_INDEX_SHIFT);

    // GL_INDEX_WRITEMASK

    requestAndPrintb(GL_LIGHTING);
    requestAndPrinte(GL_LIGHT_MODEL_COLOR_CONTROL);
    requestAndPrintb(GL_LIGHT_MODEL_LOCAL_VIEWER);
    requestAndPrintb(GL_LIGHT_MODEL_TWO_SIDE);
    requestAndPrintb(GL_LINE_SMOOTH);
    requestAndPrinte(GL_LINE_SMOOTH_HINT);
    requestAndPrintb(GL_LINE_STIPPLE);
    requestAndPrinti(GL_LINE_STIPPLE_REPEAT);
    requestAndPrintf(GL_LINE_WIDTH);
    requestAndPrintf(GL_LINE_WIDTH_GRANULARITY);
    requestAndPrinti(GL_LIST_BASE);
    requestAndPrinti(GL_LIST_INDEX);
    requestAndPrinte(GL_LIST_MODE);
    requestAndPrinte(GL_LOGIC_OP_MODE);

    // GL_LIGHT_i
    // GL_LIGHT_MODEL_AMBIENT
    // GL_LINE_STIPPLE_PATTERN
    // GL_LINE_WIDTH_RANGE

    requestAndPrintb(GL_MAP1_COLOR_4);
    requestAndPrinti(GL_MAP1_GRID_SEGMENTS);
    requestAndPrintb(GL_MAP1_INDEX);
    requestAndPrintb(GL_MAP1_NORMAL);
    requestAndPrintb(GL_MAP1_TEXTURE_COORD_1);
    requestAndPrintb(GL_MAP1_TEXTURE_COORD_2);
    requestAndPrintb(GL_MAP1_TEXTURE_COORD_3);
    requestAndPrintb(GL_MAP1_TEXTURE_COORD_4);
    requestAndPrintb(GL_MAP1_VERTEX_3);
    requestAndPrintb(GL_MAP1_VERTEX_4);
    requestAndPrintb(GL_MAP2_COLOR_4);
    requestAndPrintb(GL_MAP2_INDEX);
    requestAndPrintb(GL_MAP2_NORMAL);
    requestAndPrintb(GL_MAP2_TEXTURE_COORD_1);
    requestAndPrintb(GL_MAP2_TEXTURE_COORD_2);
    requestAndPrintb(GL_MAP2_TEXTURE_COORD_3);
    requestAndPrintb(GL_MAP2_TEXTURE_COORD_4);
    requestAndPrintb(GL_MAP2_VERTEX_3);
    requestAndPrintb(GL_MAP2_VERTEX_4);
    requestAndPrintb(GL_MAP_COLOR);
    requestAndPrintb(GL_MAP_STENCIL);
    requestAndPrinte(GL_MATRIX_MODE);
    requestAndPrinti(GL_MAX_3D_TEXTURE_SIZE);
    requestAndPrinti(GL_MAX_CLIP_PLANES);
    requestAndPrinti(GL_MAX_COLOR_MATRIX_STACK_DEPTH);
    requestAndPrinti(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS);
    requestAndPrinti(GL_MAX_CUBE_MAP_TEXTURE_SIZE);
    requestAndPrinti(GL_MAX_DRAW_BUFFERS);
    requestAndPrinti(GL_MAX_ELEMENT_INDEX);
    requestAndPrinti(GL_MAX_ELEMENTS_INDICES);
    requestAndPrinti(GL_MAX_ELEMENTS_VERTICES);
    requestAndPrinti(GL_MAX_EVAL_ORDER);
    requestAndPrinti(GL_MAX_FRAGMENT_UNIFORM_COMPONENTS);
    requestAndPrinti(GL_MAX_LIGHTS);
    requestAndPrinti(GL_MAX_LIST_NESTING);
    requestAndPrinti(GL_MAX_MODELVIEW_STACK_DEPTH);
    requestAndPrinti(GL_MAX_NAME_STACK_DEPTH);
    requestAndPrinti(GL_MAX_PIXEL_MAP_TABLE);
    requestAndPrinti(GL_MAX_PROJECTION_STACK_DEPTH);
    requestAndPrinti(GL_MAX_TEXTURE_COORDS);
    requestAndPrinti(GL_MAX_TEXTURE_IMAGE_UNITS);
    requestAndPrinti(GL_MAX_TEXTURE_LOD_BIAS);
    requestAndPrinti(GL_MAX_TEXTURE_SIZE);
    requestAndPrinti(GL_MAX_TEXTURE_STACK_DEPTH);
    requestAndPrinti(GL_MAX_TEXTURE_UNITS);
    requestAndPrinti(GL_MAX_VARYING_FLOATS);
    requestAndPrinti(GL_MAX_VERTEX_ATTRIB_BINDINGS);
    requestAndPrinti(GL_MAX_VERTEX_ATTRIBS);
    requestAndPrinti(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS);
    requestAndPrinti(GL_MAX_VERTEX_UNIFORM_COMPONENTS);
    requestAndPrintb(GL_MINMAX);
    requestAndPrinti(GL_MODELVIEW_STACK_DEPTH);

    // GL_MAP1_GRID_DOMAIN
    // GL_MAP2_GRID_DOMAIN
    // GL_MAP2_GRID_SEGMENTS
    // GL_MAX_CLIENT_ATTRIB_STACK_DEPTH
    // GL_MAX_ATTRIB_STACK_DEPTH
    // GL_MAX_VIEWPORT_DIMS
    // GL_MODELVIEW_MATRIX

    requestAndPrinti(GL_NAME_STACK_DEPTH);
    requestAndPrintb(GL_NORMAL_ARRAY);
    requestAndPrinti(GL_NORMAL_ARRAY_BUFFER_BINDING);
    requestAndPrinti(GL_NORMAL_ARRAY_STRIDE);
    requestAndPrinte(GL_NORMAL_ARRAY_TYPE);
    requestAndPrintb(GL_NORMALIZE);

    // GL_NUM_COMPRESSED_TEXTURE_FORMATS

    requestAndPrinti(GL_PACK_ALIGNMENT);
    requestAndPrinti(GL_PACK_IMAGE_HEIGHT);
    requestAndPrintb(GL_PACK_LSB_FIRST);
    requestAndPrinti(GL_PACK_ROW_LENGTH);
    requestAndPrinti(GL_PACK_SKIP_IMAGES);
    requestAndPrinti(GL_PACK_SKIP_PIXELS);
    requestAndPrinti(GL_PACK_SKIP_ROWS);
    requestAndPrintb(GL_PACK_SWAP_BYTES);
    requestAndPrinte(GL_PERSPECTIVE_CORRECTION_HINT);
    requestAndPrinti(GL_PIXEL_MAP_A_TO_A_SIZE);
    requestAndPrinti(GL_PIXEL_MAP_B_TO_B_SIZE);
    requestAndPrinti(GL_PIXEL_MAP_G_TO_G_SIZE);
    requestAndPrinti(GL_PIXEL_MAP_I_TO_A_SIZE);
    requestAndPrinti(GL_PIXEL_MAP_I_TO_B_SIZE);
    requestAndPrinti(GL_PIXEL_MAP_I_TO_G_SIZE);
    requestAndPrinti(GL_PIXEL_MAP_I_TO_I_SIZE);
    requestAndPrinti(GL_PIXEL_MAP_I_TO_R_SIZE);
    requestAndPrinti(GL_PIXEL_MAP_R_TO_R_SIZE);
    requestAndPrinti(GL_PIXEL_MAP_S_TO_S_SIZE);
    requestAndPrinti(GL_PIXEL_PACK_BUFFER_BINDING);
    requestAndPrinti(GL_PIXEL_UNPACK_BUFFER_BINDING);
    requestAndPrintf(GL_POINT_FADE_THRESHOLD_SIZE);
    requestAndPrintf(GL_POINT_SIZE);
    requestAndPrintf(GL_POINT_SIZE_GRANULARITY);
    requestAndPrintf(GL_POINT_SIZE_MAX);
    requestAndPrintf(GL_POINT_SIZE_MIN);
    requestAndPrintb(GL_POINT_SMOOTH);
    requestAndPrinte(GL_POINT_SMOOTH_HINT);
    requestAndPrintb(GL_POINT_SPRITE);
    requestAndPrintf(GL_POLYGON_OFFSET_FACTOR);
    requestAndPrintf(GL_POLYGON_OFFSET_UNITS);
    requestAndPrintb(GL_POLYGON_OFFSET_FILL);
    requestAndPrintb(GL_POLYGON_OFFSET_LINE);
    requestAndPrintb(GL_POLYGON_OFFSET_POINT);
    requestAndPrintb(GL_POLYGON_SMOOTH);
    requestAndPrinte(GL_POLYGON_SMOOTH_HINT);
    requestAndPrintb(GL_POLYGON_STIPPLE);
    requestAndPrintb(GL_POST_COLOR_MATRIX_COLOR_TABLE);
    requestAndPrintf(GL_POST_COLOR_MATRIX_RED_BIAS);
    requestAndPrintf(GL_POST_COLOR_MATRIX_GREEN_BIAS);
    requestAndPrintf(GL_POST_COLOR_MATRIX_BLUE_BIAS);
    requestAndPrintf(GL_POST_COLOR_MATRIX_ALPHA_BIAS);
    requestAndPrintf(GL_POST_COLOR_MATRIX_RED_SCALE);
    requestAndPrintf(GL_POST_COLOR_MATRIX_GREEN_SCALE);
    requestAndPrintf(GL_POST_COLOR_MATRIX_BLUE_SCALE);
    requestAndPrintf(GL_POST_COLOR_MATRIX_ALPHA_SCALE);
    requestAndPrintb(GL_POST_CONVOLUTION_COLOR_TABLE);
    requestAndPrintf(GL_POST_CONVOLUTION_RED_BIAS);
    requestAndPrintf(GL_POST_CONVOLUTION_GREEN_BIAS);
    requestAndPrintf(GL_POST_CONVOLUTION_BLUE_BIAS);
    requestAndPrintf(GL_POST_CONVOLUTION_ALPHA_BIAS);
    requestAndPrintf(GL_POST_CONVOLUTION_RED_SCALE);
    requestAndPrintf(GL_POST_CONVOLUTION_GREEN_SCALE);
    requestAndPrintf(GL_POST_CONVOLUTION_BLUE_SCALE);
    requestAndPrintf(GL_POST_CONVOLUTION_ALPHA_SCALE);
    requestAndPrinti(GL_PROJECTION_STACK_DEPTH);

    // GL_POINT_DISTANCE_ATTENUATION
    // GL_POINT_SIZE_RANGE
    // GL_POLYGON_MODE
    // GL_PROJECTION_MATRIX

    requestAndPrinte(GL_READ_BUFFER);
    requestAndPrintf(GL_RED_BIAS);
    requestAndPrinti(GL_RED_BITS);
    requestAndPrintf(GL_RED_SCALE);
    requestAndPrinte(GL_RENDER_MODE);
    requestAndPrintb(GL_RESCALE_NORMAL);
    requestAndPrintb(GL_RGBA_MODE);

    requestAndPrinti(GL_SAMPLE_BUFFERS);
    requestAndPrintf(GL_SAMPLE_COVERAGE_VALUE);
    requestAndPrintb(GL_SAMPLE_COVERAGE_INVERT);
    requestAndPrinti(GL_SAMPLES);
    requestAndPrintb(GL_SCISSOR_TEST);
    requestAndPrintb(GL_SECONDARY_COLOR_ARRAY);
    requestAndPrinti(GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING);
    requestAndPrinti(GL_SECONDARY_COLOR_ARRAY_SIZE);
    requestAndPrinti(GL_SECONDARY_COLOR_ARRAY_STRIDE);
    requestAndPrinte(GL_SECONDARY_COLOR_ARRAY_TYPE);
    requestAndPrinti(GL_SELECTION_BUFFER_SIZE);
    requestAndPrintb(GL_SEPARABLE_2D);
    requestAndPrinte(GL_SHADE_MODEL);
    requestAndPrintf(GL_SMOOTH_LINE_WIDTH_GRANULARITY);
    requestAndPrintf(GL_SMOOTH_POINT_SIZE_GRANULARITY);
    requestAndPrinte(GL_STENCIL_BACK_FAIL);
    requestAndPrinte(GL_STENCIL_BACK_FUNC);
    requestAndPrinte(GL_STENCIL_BACK_PASS_DEPTH_FAIL);
    requestAndPrinte(GL_STENCIL_BACK_PASS_DEPTH_PASS);
    requestAndPrinti(GL_STENCIL_BACK_REF);
    requestAndPrinti(GL_STENCIL_BITS);
    requestAndPrinti(GL_STENCIL_CLEAR_VALUE);
    requestAndPrinte(GL_STENCIL_FAIL);
    requestAndPrinte(GL_STENCIL_FUNC);
    requestAndPrinte(GL_STENCIL_PASS_DEPTH_FAIL);
    requestAndPrinte(GL_STENCIL_PASS_DEPTH_PASS);
    requestAndPrinti(GL_STENCIL_REF);
    requestAndPrintb(GL_STENCIL_TEST);
    requestAndPrintb(GL_STEREO);
    requestAndPrinti(GL_SUBPIXEL_BITS);

    // GL_SCISSOR_BOX
    // GL_SMOOTH_LINE_WIDTH_RANGE
    // GL_SMOOTH_POINT_SIZE_RANGE
    // GL_STENCIL_BACK_VALUE_MASK
    // GL_STENCIL_BACK_WRITEMASK
    // GL_STENCIL_VALUE_MASK
    // GL_STENCIL_WRITEMASK

    requestAndPrintb(GL_TEXTURE_1D);
    requestAndPrinti(GL_TEXTURE_BINDING_1D);
    requestAndPrintb(GL_TEXTURE_2D);
    requestAndPrinti(GL_TEXTURE_BINDING_2D);
    requestAndPrintb(GL_TEXTURE_3D);
    requestAndPrinti(GL_TEXTURE_BINDING_3D);
    requestAndPrinti(GL_TEXTURE_BINDING_CUBE_MAP);
    requestAndPrinte(GL_TEXTURE_COMPRESSION_HINT);
    requestAndPrintb(GL_TEXTURE_COORD_ARRAY);
    requestAndPrinti(GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING);
    requestAndPrinti(GL_TEXTURE_COORD_ARRAY_SIZE);
    requestAndPrinti(GL_TEXTURE_COORD_ARRAY_STRIDE);
    requestAndPrinte(GL_TEXTURE_COORD_ARRAY_TYPE);
    requestAndPrintb(GL_TEXTURE_CUBE_MAP);
    requestAndPrintb(GL_TEXTURE_GEN_Q);
    requestAndPrintb(GL_TEXTURE_GEN_R);
    requestAndPrintb(GL_TEXTURE_GEN_S);
    requestAndPrintb(GL_TEXTURE_GEN_T);
    requestAndPrinti(GL_TEXTURE_STACK_DEPTH);

    // GL_TEXTURE_MATRIX
    // GL_TRANSPOSE_COLOR_MATRIX
    // GL_TRANSPOSE_MODELVIEW_MATRIX
    // GL_TRANSPOSE_PROJECTION_MATRIX
    // GL_TRANSPOSE_TEXTURE_MATRIX

    requestAndPrinti(GL_UNPACK_ALIGNMENT);
    requestAndPrinti(GL_UNPACK_IMAGE_HEIGHT);
    requestAndPrintb(GL_UNPACK_LSB_FIRST);
    requestAndPrinti(GL_UNPACK_ROW_LENGTH);
    requestAndPrinti(GL_UNPACK_SKIP_IMAGES);
    requestAndPrinti(GL_UNPACK_SKIP_PIXELS);
    requestAndPrinti(GL_UNPACK_SKIP_ROWS);
    requestAndPrintb(GL_UNPACK_SWAP_BYTES);

    requestAndPrintb(GL_VERTEX_ARRAY);
    requestAndPrinti(GL_VERTEX_ARRAY_BUFFER_BINDING);
    requestAndPrinti(GL_VERTEX_ARRAY_SIZE);
    requestAndPrinti(GL_VERTEX_ARRAY_STRIDE);
    requestAndPrinte(GL_VERTEX_ARRAY_TYPE);
    requestAndPrintb(GL_VERTEX_PROGRAM_POINT_SIZE);
    requestAndPrintb(GL_VERTEX_PROGRAM_TWO_SIDE);
    requestAndPrinti(GL_VIEWPORT_INDEX_PROVOKING_VERTEX);
    requestAndPrinti(GL_VIEWPORT_SUBPIXEL_BITS);
    requestAndPrintf(GL_ZOOM_X);
    requestAndPrintf(GL_ZOOM_Y);

    // GL_VIEWPORT
    // GL_VIEWPORT_BOUNDS_RANGE
    */

    unsigned char firstChar = 0;
    for (const auto & result : results)
    {
        if (result.name[3] != firstChar && firstChar > 0)
        {
            std::cout << std::endl;
        }

        std::cout << result.result << std::endl;

        firstChar = result.name[3];
    }

    glfwTerminate();
    return 0;
}
