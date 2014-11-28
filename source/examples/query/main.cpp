
#include <iostream>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/Meta.h>
#include <glbinding/ContextInfo.h>
#include <glbinding/Version.h>

#include <glbinding/gl/gl.h>


using namespace gl;
using namespace glbinding;


void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

int main(int argc, const char * argv[])
{
    if (argc == 1)
    {
        std::cout << "Usage: " << argv[0] << " <GL constant>" << std::endl;

        std::cout << std::endl;
        std::cout << "Example queries:" << std::endl;
        std::cout << std::endl;
        std::cout << "\t" << argv[0] << " GL_MAX_VIEWPORT_DIMS" << std::endl;
        std::cout << "\t" << argv[0] << " GL_MAX_VIEWPORTS" << std::endl;
        std::cout << "\t" << argv[0] << " GL_MAX_DRAW_BUFFERS" << std::endl;
        std::cout << std::endl;
        std::cout << "\t" << argv[0] << " GL_MAX_COMPUTE_WORK_GROUP_COUNT 0" << std::endl;
        std::cout << "\t" << argv[0] << " GL_MAX_COMPUTE_WORK_GROUP_COUNT 1" << std::endl;
        std::cout << "\t" << argv[0] << " GL_MAX_COMPUTE_WORK_GROUP_COUNT 2" << std::endl;
        std::cout << std::endl;
        std::cout << "\t" << argv[0] << " GL_MAJOR_VERSION" << std::endl;
        std::cout << "\t" << argv[0] << " GL_MINOR_VERSION" << std::endl;

        return 1;
    }

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

    // print some gl infos (query)

    std::cout << std::endl
        << "OpenGL Version:  " << ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << ContextInfo::renderer() << std::endl
        << "OpenGL Revision: " << Meta::glRevision() << " (gl.xml)" << std::endl << std::endl;


    if (Meta::glByStrings())
    {
        GLenum value = Meta::getEnum(argv[1]);

        GLint result;
        if (argc == 2)
        {
            glGetIntegerv(value, &result);
        }
        else
        {
            int index = atoi(argv[2]);

            glGetIntegeri_v(value, index, &result);
        }

        if (glGetError() != GL_NO_ERROR)
        {
            std::cout << "Error while querying " << argv[1] << std::endl;
        }
        else
        {
            std::cout << argv[1] << " = " << result << std::endl;
        }
    }
    else
    {
        std::cout << "GL_BY_STRINGS disabled" << std::endl;
    }

    glfwTerminate();
    return 0;
}
