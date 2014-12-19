
#include <iostream>
#include <sstream>
#include <array>
#include <string>
#include <type_traits>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/Meta.h>
#include <glbinding/ContextInfo.h>
#include <glbinding/Version.h>
#include <glbinding/Binding.h>

#include <glbinding/gl/types.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/functions.h>
#include <glbinding/gl/boolean.h>


using namespace gl;
using namespace glbinding;

namespace
{

    void error(int errnum, const char * errmsg)
    {
        std::cerr << errnum << ": " << errmsg << std::endl;
    }

    static const std::array<GLfloat, 9> identity3{ { 1.f, 0.f, 0.f,  0.f, 1.f, 0.f,  0.f, 0.f, 1.f } };
    static const std::array<GLfloat, 16> identity4{ { 1.f, 0.f, 0.f, 0.f,  0.f, 1.f, 0.f, 0.f,  0.f, 0.f, 1.f, 0.f,  0.f, 0.f, 0.f, 1.f } };

    template <typename T>
    void glrequest(const GLenum pname, T * data);

    template <>
    void glrequest<GLboolean>(const GLenum pname, GLboolean * data)
    {
        glGetBooleanv(pname, data);
    }

    template <>
    void glrequest<GLenum>(const GLenum pname, GLenum * data)
    {
        glGetIntegerv(pname, reinterpret_cast<GLint *>(data));
    }

    template <>
    void glrequest<GLint>(const GLenum pname, GLint * data)
    {
        glGetIntegerv(pname, data);
    }

    template <>
    void glrequest<GLfloat>(const GLenum pname, GLfloat * data)
    {
        glGetFloatv(pname, data);
    }

	template <>
	void glrequest<GLdouble>(const GLenum pname, GLdouble * data)
	{
		glGetDoublev(pname, data);
	}

    template <typename T, int count>
    struct identity
    {
        static bool valid(const std::array<T, count> &)
        {
            return false;
        }
        static std::string str()
        {
            return "";
        }
    };

    template <>
    struct identity<GLfloat, 9>
    {
        static bool valid(const std::array<GLfloat, 9> & data)
        {
            return identity3 == data;
        }
        static std::string str()
        {
            return "identity3";
        }
    };

    template <>
    struct identity<GLfloat, 16>
    {
        static bool valid(const std::array<GLfloat, 16> & data)
        {
            return identity4 == data;
        }
        static std::string str()
        {
            return "identity4";
        }
    };

    template <typename T, int count>
    std::string string(const std::array<T, count> & data)
    {
        std::stringstream stream;

        if (identity<T, count>::valid(data))
            stream << identity<T, count>::str();
        else
        {
            if (data.size() > 1)
                stream << "(";

            for (int i = 0; i < count; ++i)
            {
                stream << data[i];
                if (i + 1 < count)
                    stream << ", ";
            }

            if (data.size() > 1)
                stream << ")";
        }

        return stream.str();
    }

    template <typename T, int count>
    void request(const GLenum pname, std::array<T, count> & data)
    {
        glrequest<T>(pname, data.data());

        static const size_t MAX_PSTRING_LENGTH { 37 };    // actually, it's 44 / average is 23,
                                                          // but 37 works for 452 of 462 glGet enums (98%)

        const std::string pstring{ glbinding::Meta::getString(pname) };
		const std::string spaces{ std::string((glbinding::Meta::getString(pname).length() > 37) ? 1 : (MAX_PSTRING_LENGTH - pstring.length()), ' ') };

        if (glGetError() != gl::GL_NO_ERROR)
        {
            std::cout << "\t" << pstring << spaces << " = NOT AVAILABLE" << std::endl;
            return;
        }
        std::cout << "\t" << glbinding::Meta::getString(pname) << spaces << " = " << string<T, count>(data);
    }

    template <typename T, int count>
    void requestState(const GLenum pname)
    {
        std::array<T, count> data;
        request<T, count>(pname, data);

        std::cout << std::endl;
    }

    template <typename T, int count>
    void requestState(const GLenum pname, const std::array<T, count> & expected)
    {
        std::array<T, count> data;
        request<T, count>(pname, data);

        if (!expected.empty() && expected != data)
            std::cout << ", expected " << string<T, count>(expected);

        std::cout << std::endl;
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

        glfwWindowHint(GLFW_OPENGL_PROFILE, core ? GLFW_OPENGL_CORE_PROFILE : GLFW_OPENGL_ANY_PROFILE);
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

    std::cout << std::endl << "[QUERYING STATE VALUES]" << std::endl;

    std::cout << std::endl << "Matrix Stack States" << std::endl;
    requestState<GLenum   , 1>(GL_MATRIX_MODE, { { GL_MODELVIEW } });
    requestState<GLfloat  , 16>(GL_COLOR_MATRIX, identity4);
    requestState<GLfloat  , 16>(GL_MODELVIEW_MATRIX, identity4);
    requestState<GLfloat  , 16>(GL_PROJECTION_MATRIX, identity4);
    requestState<GLfloat  , 16>(GL_TEXTURE_MATRIX, identity4);
    requestState<GLint    , 1>(GL_COLOR_MATRIX_STACK_DEPTH);
    requestState<GLint    , 1>(GL_MODELVIEW_STACK_DEPTH);
    requestState<GLint    , 1>(GL_PROJECTION_STACK_DEPTH);
    requestState<GLint    , 1>(GL_TEXTURE_STACK_DEPTH);
    requestState<GLint    , 1>(GL_MAX_MODELVIEW_STACK_DEPTH);
    requestState<GLint    , 1>(GL_MAX_PROJECTION_STACK_DEPTH);
    requestState<GLint    , 1>(GL_MAX_TEXTURE_STACK_DEPTH);

    std::cout << std::endl << "Viewport States" << std::endl;
    requestState<GLint    , 4>(GL_VIEWPORT);
    requestState<GLint    , 2>(GL_MAX_VIEWPORT_DIMS);

    std::cout << std::endl << "Pixel Sotre States" << std::endl;
    requestState<GLboolean, 1>(GL_PACK_SWAP_BYTES, { { GL_FALSE } });
    requestState<GLboolean, 1>(GL_PACK_LSB_FIRST, { { GL_FALSE } });
    requestState<GLint    , 1>(GL_PACK_ROW_LENGTH, { { 0 } });
    requestState<GLint    , 1>(GL_PACK_IMAGE_HEIGHT, { { 0 } });
    requestState<GLint    , 1>(GL_PACK_SKIP_ROWS, { { 0 } });
    requestState<GLint    , 1>(GL_PACK_SKIP_PIXELS, { { 0 } });
    requestState<GLint    , 1>(GL_PACK_SKIP_IMAGES, { { 0 } });
    requestState<GLint    , 1>(GL_PACK_ALIGNMENT, { { 4 } });
    requestState<GLboolean, 1>(GL_UNPACK_SWAP_BYTES, { { GL_FALSE } });
    requestState<GLboolean, 1>(GL_UNPACK_LSB_FIRST, { { GL_FALSE } });
    requestState<GLint    , 1>(GL_UNPACK_ROW_LENGTH, { { 0 } });
    requestState<GLint    , 1>(GL_UNPACK_IMAGE_HEIGHT, { { 0 } });
    requestState<GLint    , 1>(GL_UNPACK_SKIP_ROWS, { { 0 } });
    requestState<GLint    , 1>(GL_UNPACK_SKIP_PIXELS, { { 0 } });
    requestState<GLint    , 1>(GL_UNPACK_SKIP_IMAGES, { { 0 } });
    requestState<GLint    , 1>(GL_UNPACK_ALIGNMENT, { { 4 } });

    std::cout << std::endl << "Pixel Transfer States" << std::endl;
    requestState<GLboolean, 1>(GL_MAP_COLOR, { { GL_FALSE } });
    requestState<GLboolean, 1>(GL_MAP_STENCIL, { { GL_FALSE } });
    requestState<GLint    , 1>(GL_INDEX_SHIFT, { { 0 } });
    requestState<GLint    , 1>(GL_INDEX_OFFSET, { { 0 } });
    requestState<GLint    , 1>(GL_RED_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_GREEN_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_BLUE_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_ALPHA_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_DEPTH_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_RED_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_GREEN_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_BLUE_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_ALPHA_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_DEPTH_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_POST_COLOR_MATRIX_RED_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_POST_COLOR_MATRIX_GREEN_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_POST_COLOR_MATRIX_BLUE_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_POST_COLOR_MATRIX_ALPHA_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_POST_COLOR_MATRIX_RED_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_POST_COLOR_MATRIX_GREEN_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_POST_COLOR_MATRIX_BLUE_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_POST_COLOR_MATRIX_ALPHA_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_POST_CONVOLUTION_RED_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_POST_CONVOLUTION_GREEN_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_POST_CONVOLUTION_BLUE_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_POST_CONVOLUTION_ALPHA_SCALE, { { 1 } });
    requestState<GLint    , 1>(GL_POST_CONVOLUTION_RED_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_POST_CONVOLUTION_GREEN_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_POST_CONVOLUTION_BLUE_BIAS, { { 0 } });
    requestState<GLint    , 1>(GL_POST_CONVOLUTION_ALPHA_BIAS, { { 0 } });

    std::cout << std::endl << "Pixel Zoom States" << std::endl;
    requestState<GLfloat  , 1>(GL_ZOOM_X, { { 1 } });
    requestState<GLfloat  , 1>(GL_ZOOM_Y, { { 1 } });

    std::cout << std::endl << "Pixel Map States" << std::endl;
    requestState<GLint    , 1>(GL_PIXEL_MAP_I_TO_I_SIZE, { { 1 } });
    requestState<GLint    , 1>(GL_PIXEL_MAP_S_TO_S_SIZE, { { 1 } });
    requestState<GLint    , 1>(GL_PIXEL_MAP_I_TO_R_SIZE, { { 1 } });
    requestState<GLint    , 1>(GL_PIXEL_MAP_I_TO_G_SIZE, { { 1 } });
    requestState<GLint    , 1>(GL_PIXEL_MAP_I_TO_B_SIZE, { { 1 } });
    requestState<GLint    , 1>(GL_PIXEL_MAP_I_TO_A_SIZE, { { 1 } });
    requestState<GLint    , 1>(GL_PIXEL_MAP_R_TO_R_SIZE, { { 1 } });
    requestState<GLint    , 1>(GL_PIXEL_MAP_G_TO_G_SIZE, { { 1 } });
    requestState<GLint    , 1>(GL_PIXEL_MAP_B_TO_B_SIZE, { { 1 } });
    requestState<GLint    , 1>(GL_PIXEL_MAP_A_TO_A_SIZE, { { 1 } });

    std::cout << std::endl << "Read Buffer States" << std::endl;
    requestState<GLenum   , 1>(GL_READ_BUFFER);


    std::cout << std::endl << std::endl << "[QUERYING STATE VALUES - UNGROUPED/TODO]" << std::endl;


    std::cout << std::endl
        << "OpenGL Version:  " << ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << ContextInfo::renderer() << std::endl
        << "OpenGL Revision: " << Meta::glRevision() << " (gl.xml)" << std::endl << std::endl;

    glfwTerminate();
    return 0;
}
