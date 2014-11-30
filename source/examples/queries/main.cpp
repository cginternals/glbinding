
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

        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, forwardComaptability ? true : false);
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

    requestAndPrint<float, 1, false>(results, GL_DEPTH_BIAS);
    requestAndPrint<int, 1, false>(results, GL_DEPTH_BITS);
    requestAndPrint<float, 1, false>(results, GL_DEPTH_CLEAR_VALUE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_DEPTH_FUNC);
    requestAndPrint<float, 2, false>(results, GL_DEPTH_RANGE);
    requestAndPrint<float, 1, false>(results, GL_DEPTH_SCALE);
    requestAndPrint<bool, 1, false>(results, GL_DEPTH_TEST);
    requestAndPrint<bool, 1, false>(results, GL_DEPTH_WRITEMASK);
    requestAndPrint<bool, 1, false>(results, GL_DITHER);
    requestAndPrint<bool, 1, false>(results, GL_DOUBLEBUFFER);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_DRAW_BUFFER);
    dynamicRequestAndPrint<gl::GLenum>(results, GL_DRAW_BUFFER, GL_MAX_DRAW_BUFFERS);

    requestAndPrint<bool, 1, false>(results, GL_EDGE_FLAG);
    requestAndPrint<bool, 1, false>(results, GL_EDGE_FLAG_ARRAY);
    requestAndPrint<int, 1, false>(results, GL_EDGE_FLAG_ARRAY_BUFFER_BINDING);
    requestAndPrint<int, 1, false>(results, GL_EDGE_FLAG_ARRAY_STRIDE);
    requestAndPrint<int, 1, false>(results, GL_ELEMENT_ARRAY_BUFFER_BINDING);

    requestAndPrint<int, 1, false>(results, GL_FEEDBACK_BUFFER_SIZE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_FEEDBACK_BUFFER_TYPE);
    requestAndPrint<bool, 1, false>(results, GL_FOG);
    requestAndPrint<bool, 1, false>(results, GL_FOG_COORD_ARRAY);
    requestAndPrint<int, 1, false>(results, GL_FOG_COORD_ARRAY_BUFFER_BINDING);
    requestAndPrint<int, 1, false>(results, GL_FOG_COORD_ARRAY_STRIDE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_FOG_COORD_ARRAY_TYPE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_FOG_COORD_SRC);
    requestAndPrint<float, 4, false>(results, GL_FOG_COLOR);
    requestAndPrint<float, 1, false>(results, GL_FOG_DENSITY);
    requestAndPrint<float, 1, false>(results, GL_FOG_END);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_FOG_HINT);
    requestAndPrint<int, 1, false>(results, GL_FOG_INDEX);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_FOG_MODE);
    requestAndPrint<float, 1, false>(results, GL_FOG_START);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_FRAGMENT_SHADER_DERIVATIVE_HINT);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_FRONT_FACE);

    requestAndPrint<gl::GLenum, 1, false>(results, GL_GENERATE_MIPMAP_HINT);
    requestAndPrint<float, 1, false>(results, GL_GREEN_BIAS);
    requestAndPrint<int, 1, false>(results, GL_GREEN_BITS);
    requestAndPrint<float, 1, false>(results, GL_GREEN_SCALE);

    requestAndPrint<bool, 1, false>(results, GL_HISTOGRAM);

    requestAndPrint<bool, 1, false>(results, GL_INDEX_ARRAY);
    requestAndPrint<int, 1, false>(results, GL_INDEX_ARRAY_BUFFER_BINDING);
    requestAndPrint<int, 1, false>(results, GL_INDEX_ARRAY_STRIDE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_INDEX_ARRAY_TYPE);
    requestAndPrint<int, 1, false>(results, GL_INDEX_BITS);
    requestAndPrint<int, 1, false>(results, GL_INDEX_CLEAR_VALUE);
    requestAndPrint<bool, 1, false>(results, GL_INDEX_LOGIC_OP);
    requestAndPrint<bool, 1, false>(results, GL_INDEX_MODE);
    requestAndPrint<int, 1, false>(results, GL_INDEX_OFFSET);
    requestAndPrint<int, 1, false>(results, GL_INDEX_SHIFT);
    requestAndPrint<int, 1, false>(results, GL_INDEX_WRITEMASK); // TODO: interpret as mask

    multipleDynamicRequestAndPrint<bool>(results, GL_LIGHT0, GL_MAX_LIGHTS);
    requestAndPrint<bool, 1, false>(results, GL_LIGHTING);
    requestAndPrint<float, 4, false>(results, GL_LIGHT_MODEL_AMBIENT);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_LIGHT_MODEL_COLOR_CONTROL);
    requestAndPrint<bool, 1, false>(results, GL_LIGHT_MODEL_LOCAL_VIEWER);
    requestAndPrint<bool, 1, false>(results, GL_LIGHT_MODEL_TWO_SIDE);
    requestAndPrint<bool, 1, false>(results, GL_LINE_SMOOTH);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_LINE_SMOOTH_HINT);
    requestAndPrint<bool, 1, false>(results, GL_LINE_STIPPLE);
    requestAndPrint<int, 1, false>(results, GL_LINE_STIPPLE_PATTERN); // TODO: interpret as mask
    requestAndPrint<int, 1, false>(results, GL_LINE_STIPPLE_REPEAT);
    requestAndPrint<float, 1, false>(results, GL_LINE_WIDTH);
    requestAndPrint<float, 1, false>(results, GL_LINE_WIDTH_GRANULARITY);
    requestAndPrint<float, 2, false>(results, GL_LINE_WIDTH_RANGE);
    requestAndPrint<int, 1, false>(results, GL_LIST_BASE);
    requestAndPrint<int, 1, false>(results, GL_LIST_INDEX);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_LIST_MODE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_LOGIC_OP_MODE);

    requestAndPrint<bool, 1, false>(results, GL_MAP1_COLOR_4);
    requestAndPrint<float, 2, false>(results, GL_MAP1_GRID_DOMAIN);
    requestAndPrint<int, 1, false>(results, GL_MAP1_GRID_SEGMENTS);
    requestAndPrint<bool, 1, false>(results, GL_MAP1_INDEX);
    requestAndPrint<bool, 1, false>(results, GL_MAP1_NORMAL);
    requestAndPrint<bool, 1, false>(results, GL_MAP1_TEXTURE_COORD_1);
    requestAndPrint<bool, 1, false>(results, GL_MAP1_TEXTURE_COORD_2);
    requestAndPrint<bool, 1, false>(results, GL_MAP1_TEXTURE_COORD_3);
    requestAndPrint<bool, 1, false>(results, GL_MAP1_TEXTURE_COORD_4);
    requestAndPrint<bool, 1, false>(results, GL_MAP1_VERTEX_3);
    requestAndPrint<bool, 1, false>(results, GL_MAP1_VERTEX_4);
    requestAndPrint<bool, 1, false>(results, GL_MAP2_COLOR_4);
    requestAndPrint<float, 2 ,false>(results, GL_MAP2_GRID_DOMAIN);
    requestAndPrint<int, 2, false>(results, GL_MAP2_GRID_SEGMENTS);
    requestAndPrint<bool, 1, false>(results, GL_MAP2_INDEX);
    requestAndPrint<bool, 1, false>(results, GL_MAP2_NORMAL);
    requestAndPrint<bool, 1, false>(results, GL_MAP2_TEXTURE_COORD_1);
    requestAndPrint<bool, 1, false>(results, GL_MAP2_TEXTURE_COORD_2);
    requestAndPrint<bool, 1, false>(results, GL_MAP2_TEXTURE_COORD_3);
    requestAndPrint<bool, 1, false>(results, GL_MAP2_TEXTURE_COORD_4);
    requestAndPrint<bool, 1, false>(results, GL_MAP2_VERTEX_3);
    requestAndPrint<bool, 1, false>(results, GL_MAP2_VERTEX_4);
    requestAndPrint<bool, 1, false>(results, GL_MAP_COLOR);
    requestAndPrint<bool, 1, false>(results, GL_MAP_STENCIL);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_MATRIX_MODE);
    requestAndPrint<int, 1, false>(results, GL_MAX_3D_TEXTURE_SIZE);
    requestAndPrint<int, 1, false>(results, GL_MAX_CLIENT_ATTRIB_STACK_DEPTH);
    requestAndPrint<int, 1 ,false>(results, GL_MAX_ATTRIB_STACK_DEPTH);
    requestAndPrint<int, 1, false>(results, GL_MAX_CLIP_PLANES);
    requestAndPrint<int, 1, false>(results, GL_MAX_COLOR_MATRIX_STACK_DEPTH);
    requestAndPrint<int, 1, false>(results, GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS);
    requestAndPrint<int, 1, false>(results, GL_MAX_CUBE_MAP_TEXTURE_SIZE);
    requestAndPrint<int, 1, false>(results, GL_MAX_DRAW_BUFFERS);
    requestAndPrint<int, 1, false>(results, GL_MAX_ELEMENT_INDEX);
    requestAndPrint<int, 1, false>(results, GL_MAX_ELEMENTS_INDICES);
    requestAndPrint<int, 1, false>(results, GL_MAX_ELEMENTS_VERTICES);
    requestAndPrint<int, 1, false>(results, GL_MAX_EVAL_ORDER);
    requestAndPrint<int, 1, false>(results, GL_MAX_FRAGMENT_UNIFORM_COMPONENTS);
    requestAndPrint<int, 1, false>(results, GL_MAX_LIGHTS);
    requestAndPrint<int, 1, false>(results, GL_MAX_LIST_NESTING);
    requestAndPrint<int, 1, false>(results, GL_MAX_MODELVIEW_STACK_DEPTH);
    requestAndPrint<int, 1, false>(results, GL_MAX_NAME_STACK_DEPTH);
    requestAndPrint<int, 1, false>(results, GL_MAX_PIXEL_MAP_TABLE);
    requestAndPrint<int, 1, false>(results, GL_MAX_PROJECTION_STACK_DEPTH);
    requestAndPrint<int, 1, false>(results, GL_MAX_TEXTURE_IMAGE_UNITS);
    requestAndPrint<int, 1, false>(results, GL_MAX_TEXTURE_LOD_BIAS);
    requestAndPrint<int, 1, false>(results, GL_MAX_TEXTURE_SIZE);
    requestAndPrint<int, 1, false>(results, GL_MAX_TEXTURE_STACK_DEPTH);
    requestAndPrint<int, 1, false>(results, GL_MAX_TEXTURE_UNITS);
    requestAndPrint<int, 1, false>(results, GL_MAX_VARYING_FLOATS);
    requestAndPrint<int, 1, false>(results, GL_MAX_VERTEX_ATTRIB_BINDINGS);
    requestAndPrint<int, 1, false>(results, GL_MAX_VERTEX_ATTRIBS);
    requestAndPrint<int, 1, false>(results, GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS);
    requestAndPrint<int, 1, false>(results, GL_MAX_VERTEX_UNIFORM_COMPONENTS);
    requestAndPrint<int, 2, false>(results, GL_MAX_VIEWPORT_DIMS);
    requestAndPrint<bool, 1, false>(results, GL_MINMAX);
    requestAndPrint<float, 16, false>(results, GL_MODELVIEW_MATRIX);
    requestAndPrint<int, 1, false>(results, GL_MODELVIEW_STACK_DEPTH);

    requestAndPrint<int, 1, false>(results, GL_NAME_STACK_DEPTH);
    requestAndPrint<bool, 1, false>(results, GL_NORMAL_ARRAY);
    requestAndPrint<int, 1, false>(results, GL_NORMAL_ARRAY_BUFFER_BINDING);
    requestAndPrint<int, 1, false>(results, GL_NORMAL_ARRAY_STRIDE);
    requestAndPrint<bool, 1, false>(results, GL_NORMAL_ARRAY_TYPE);
    requestAndPrint<bool, 1, false>(results, GL_NORMALIZE);
    requestAndPrint<int, 1, false>(results, GL_NUM_COMPRESSED_TEXTURE_FORMATS);

    requestAndPrint<int, 1, false>(results, GL_PACK_ALIGNMENT);
    requestAndPrint<int, 1, false>(results, GL_PACK_IMAGE_HEIGHT);
    requestAndPrint<bool, 1, false>(results, GL_PACK_LSB_FIRST);
    requestAndPrint<int, 1, false>(results, GL_PACK_ROW_LENGTH);
    requestAndPrint<int, 1, false>(results, GL_PACK_SKIP_IMAGES);
    requestAndPrint<int, 1, false>(results, GL_PACK_SKIP_PIXELS);
    requestAndPrint<int, 1, false>(results, GL_PACK_SKIP_ROWS);
    requestAndPrint<bool, 1, false>(results, GL_PACK_SWAP_BYTES);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_PERSPECTIVE_CORRECTION_HINT);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_MAP_A_TO_A_SIZE);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_MAP_B_TO_B_SIZE);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_MAP_G_TO_G_SIZE);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_MAP_I_TO_A_SIZE);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_MAP_I_TO_B_SIZE);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_MAP_I_TO_G_SIZE);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_MAP_I_TO_I_SIZE);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_MAP_I_TO_R_SIZE);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_MAP_R_TO_R_SIZE);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_MAP_S_TO_S_SIZE);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_PACK_BUFFER_BINDING);
    requestAndPrint<int, 1, false>(results, GL_PIXEL_UNPACK_BUFFER_BINDING);
    requestAndPrint<float, 3, false>(results, GL_POINT_DISTANCE_ATTENUATION);
    requestAndPrint<float, 1, false>(results, GL_POINT_FADE_THRESHOLD_SIZE);
    requestAndPrint<float, 1, false>(results, GL_POINT_SIZE);
    requestAndPrint<float, 1, false>(results, GL_POINT_SIZE_GRANULARITY);
    requestAndPrint<float, 1, false>(results, GL_POINT_SIZE_MIN);
    requestAndPrint<float, 1, false>(results, GL_POINT_SIZE_MAX);
    requestAndPrint<float, 2, false>(results, GL_POINT_SIZE_RANGE);
    requestAndPrint<bool, 1, false>(results, GL_POINT_SMOOTH);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_POINT_SMOOTH_HINT);
    requestAndPrint<bool, 1, false>(results, GL_POINT_SPRITE);
    requestAndPrint<gl::GLenum, 2, false>(results, GL_POLYGON_MODE);
    requestAndPrint<float, 1, false>(results, GL_POLYGON_OFFSET_FACTOR);
    requestAndPrint<float, 1, false>(results, GL_POLYGON_OFFSET_UNITS);
    requestAndPrint<bool, 1, false>(results, GL_POLYGON_OFFSET_FILL);
    requestAndPrint<bool, 1, false>(results, GL_POLYGON_OFFSET_LINE);
    requestAndPrint<bool, 1, false>(results, GL_POLYGON_OFFSET_POINT);
    requestAndPrint<bool, 1, false>(results, GL_POLYGON_SMOOTH);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_POLYGON_SMOOTH_HINT);
    requestAndPrint<bool, 1, false>(results, GL_POLYGON_STIPPLE);
    requestAndPrint<bool, 1, false>(results, GL_POST_COLOR_MATRIX_COLOR_TABLE);
    requestAndPrint<float, 1, false>(results, GL_POST_COLOR_MATRIX_RED_BIAS);
    requestAndPrint<float, 1, false>(results, GL_POST_COLOR_MATRIX_GREEN_BIAS);
    requestAndPrint<float, 1, false>(results, GL_POST_COLOR_MATRIX_BLUE_BIAS);
    requestAndPrint<float, 1, false>(results, GL_POST_COLOR_MATRIX_ALPHA_BIAS);
    requestAndPrint<float, 1, false>(results, GL_POST_COLOR_MATRIX_RED_SCALE);
    requestAndPrint<float, 1, false>(results, GL_POST_COLOR_MATRIX_GREEN_SCALE);
    requestAndPrint<float, 1, false>(results, GL_POST_COLOR_MATRIX_BLUE_SCALE);
    requestAndPrint<float, 1, false>(results, GL_POST_COLOR_MATRIX_ALPHA_SCALE);
    requestAndPrint<bool, 1, false>(results, GL_POST_CONVOLUTION_COLOR_TABLE);
    requestAndPrint<float, 1, false>(results, GL_POST_CONVOLUTION_RED_BIAS);
    requestAndPrint<float, 1, false>(results, GL_POST_CONVOLUTION_GREEN_BIAS);
    requestAndPrint<float, 1, false>(results, GL_POST_CONVOLUTION_BLUE_BIAS);
    requestAndPrint<float, 1, false>(results, GL_POST_CONVOLUTION_ALPHA_BIAS);
    requestAndPrint<float, 1, false>(results, GL_POST_CONVOLUTION_RED_SCALE);
    requestAndPrint<float, 1, false>(results, GL_POST_CONVOLUTION_GREEN_SCALE);
    requestAndPrint<float, 1, false>(results, GL_POST_CONVOLUTION_BLUE_SCALE);
    requestAndPrint<float, 1, false>(results, GL_POST_CONVOLUTION_ALPHA_SCALE);
    requestAndPrint<float, 16, false>(results, GL_PROJECTION_MATRIX);
    requestAndPrint<int, 1, false>(results, GL_PROJECTION_STACK_DEPTH);

    requestAndPrint<gl::GLenum, 1, false>(results, GL_READ_BUFFER);
    requestAndPrint<float, 1, false>(results, GL_RED_BIAS);
    requestAndPrint<int, 1, false>(results, GL_RED_BITS);
    requestAndPrint<float, 1, false>(results, GL_RED_SCALE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_RENDER_MODE);
    requestAndPrint<bool, 1, false>(results, GL_RESCALE_NORMAL);
    requestAndPrint<bool, 1, false>(results, GL_RGBA_MODE);

    requestAndPrint<int, 1, false>(results, GL_SAMPLE_BUFFERS);
    requestAndPrint<float, 1, false>(results, GL_SAMPLE_COVERAGE_VALUE);
    requestAndPrint<bool, 1, false>(results, GL_SAMPLE_COVERAGE_INVERT);
    requestAndPrint<int, 1, false>(results, GL_SAMPLES);
    requestAndPrint<float, 4, false>(results, GL_SCISSOR_BOX);
    requestAndPrint<bool, 1, false>(results, GL_SCISSOR_TEST);
    requestAndPrint<bool, 1, false>(results, GL_SECONDARY_COLOR_ARRAY);
    requestAndPrint<int, 1, false>(results, GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING);
    requestAndPrint<int, 1, false>(results, GL_SECONDARY_COLOR_ARRAY_SIZE);
    requestAndPrint<int, 1, false>(results, GL_SECONDARY_COLOR_ARRAY_STRIDE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_SECONDARY_COLOR_ARRAY_TYPE);
    requestAndPrint<int, 1, false>(results, GL_SELECTION_BUFFER_SIZE);
    requestAndPrint<bool, 1, false>(results, GL_SEPARABLE_2D);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_SHADE_MODEL);
    requestAndPrint<float, 2, false>(results, GL_SMOOTH_LINE_WIDTH_RANGE);
    requestAndPrint<float, 1, false>(results, GL_SMOOTH_LINE_WIDTH_GRANULARITY);
    requestAndPrint<float, 2, false>(results, GL_SMOOTH_POINT_SIZE_RANGE);
    requestAndPrint<float, 1, false>(results, GL_SMOOTH_POINT_SIZE_GRANULARITY);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_STENCIL_BACK_FAIL);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_STENCIL_BACK_FUNC);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_STENCIL_BACK_PASS_DEPTH_FAIL);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_STENCIL_BACK_PASS_DEPTH_PASS);
    requestAndPrint<int, 1, false>(results, GL_STENCIL_BACK_REF);
    requestAndPrint<int, 1, false>(results, GL_STENCIL_BACK_VALUE_MASK); // TODO: interpret as mask
    requestAndPrint<int, 1, false>(results, GL_STENCIL_BACK_WRITEMASK); // TODO: interpret as mask
    requestAndPrint<int, 1, false>(results, GL_STENCIL_BITS);
    requestAndPrint<int, 1, false>(results, GL_STENCIL_CLEAR_VALUE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_STENCIL_FAIL);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_STENCIL_FUNC);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_STENCIL_PASS_DEPTH_FAIL);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_STENCIL_PASS_DEPTH_PASS);
    requestAndPrint<int, 1, false>(results, GL_STENCIL_REF);
    requestAndPrint<bool, 1, false>(results, GL_STENCIL_TEST);
    requestAndPrint<int, 1, false>(results, GL_STENCIL_VALUE_MASK); // TODO: interpret as mask
    requestAndPrint<int, 1, false>(results, GL_STENCIL_WRITEMASK); // TODO: interpret as mask
    requestAndPrint<bool, 1, false>(results, GL_STEREO);
    requestAndPrint<int, 1, false>(results, GL_SUBPIXEL_BITS);

    requestAndPrint<bool, 1, false>(results, GL_TEXTURE_1D);
    requestAndPrint<int, 1, false>(results, GL_TEXTURE_BINDING_1D);
    requestAndPrint<bool, 1, false>(results, GL_TEXTURE_2D);
    requestAndPrint<int, 1, false>(results, GL_TEXTURE_BINDING_2D);
    requestAndPrint<bool, 1, false>(results, GL_TEXTURE_3D);
    requestAndPrint<int, 1, false>(results, GL_TEXTURE_BINDING_3D);
    requestAndPrint<int, 1, false>(results, GL_TEXTURE_BINDING_CUBE_MAP);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_TEXTURE_COMPRESSION_HINT);
    requestAndPrint<bool, 1, false>(results, GL_TEXTURE_COORD_ARRAY);
    requestAndPrint<int, 1, false>(results, GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING);
    requestAndPrint<int, 1, false>(results, GL_TEXTURE_COORD_ARRAY_SIZE);
    requestAndPrint<int, 1, false>(results, GL_TEXTURE_COORD_ARRAY_STRIDE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_TEXTURE_COORD_ARRAY_TYPE);
    requestAndPrint<bool, 1, false>(results, GL_TEXTURE_CUBE_MAP);
    requestAndPrint<bool, 1, false>(results, GL_TEXTURE_GEN_Q);
    requestAndPrint<bool, 1, false>(results, GL_TEXTURE_GEN_R);
    requestAndPrint<bool, 1, false>(results, GL_TEXTURE_GEN_S);
    requestAndPrint<bool, 1, false>(results, GL_TEXTURE_GEN_T);
    requestAndPrint<float, 16, false>(results, GL_TEXTURE_MATRIX);
    requestAndPrint<int, 1, false>(results, GL_TEXTURE_STACK_DEPTH);
    requestAndPrint<float, 16, false>(results, GL_TRANSPOSE_COLOR_MATRIX);
    requestAndPrint<float, 16, false>(results, GL_TRANSPOSE_MODELVIEW_MATRIX);
    requestAndPrint<float, 16, false>(results, GL_TRANSPOSE_PROJECTION_MATRIX);
    requestAndPrint<float, 16, false>(results, GL_TRANSPOSE_TEXTURE_MATRIX);

    requestAndPrint<int, 1, false>(results, GL_UNPACK_ALIGNMENT);
    requestAndPrint<int, 1, false>(results, GL_UNPACK_IMAGE_HEIGHT);
    requestAndPrint<bool, 1, false>(results, GL_UNPACK_LSB_FIRST);
    requestAndPrint<int, 1, false>(results, GL_UNPACK_ROW_LENGTH);
    requestAndPrint<int, 1, false>(results, GL_UNPACK_SKIP_IMAGES);
    requestAndPrint<int, 1, false>(results, GL_UNPACK_SKIP_PIXELS);
    requestAndPrint<int, 1, false>(results, GL_UNPACK_SKIP_ROWS);
    requestAndPrint<bool, 1, false>(results, GL_UNPACK_SWAP_BYTES);

    requestAndPrint<bool, 1, false>(results, GL_VERTEX_ARRAY);
    requestAndPrint<int, 1, false>(results, GL_VERTEX_ARRAY_BUFFER_BINDING);
    requestAndPrint<int, 1, false>(results, GL_VERTEX_ARRAY_SIZE);
    requestAndPrint<int, 1, false>(results, GL_VERTEX_ARRAY_STRIDE);
    requestAndPrint<gl::GLenum, 1, false>(results, GL_VERTEX_ARRAY_TYPE);
    requestAndPrint<bool, 1, false>(results, GL_VERTEX_PROGRAM_POINT_SIZE);
    requestAndPrint<bool, 1, false>(results, GL_VERTEX_PROGRAM_TWO_SIDE);
    requestAndPrint<int, 1, false>(results, GL_VIEWPORT_INDEX_PROVOKING_VERTEX);
    requestAndPrint<int, 1, false>(results, GL_VIEWPORT_SUBPIXEL_BITS);
    requestAndPrint<int, 4, false>(results, GL_VIEWPORT);
    requestAndPrint<int, 2, false>(results, GL_VIEWPORT_BOUNDS_RANGE);

    requestAndPrint<float, 1, false>(results, GL_ZOOM_X);
    requestAndPrint<float, 1, false>(results, GL_ZOOM_Y);

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

    std::cout << std::endl
        << "OpenGL Version:  " << ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << ContextInfo::renderer() << std::endl
        << "OpenGL Revision: " << Meta::glRevision() << " (gl.xml)" << std::endl << std::endl;

    glfwTerminate();
    return 0;
}
