
#include <iostream>
#include <map>
#include <set>
#include <tuple>
#include <vector>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/Meta.h>
#include <glbinding/AbstractFunction.h>
#include <glbinding/ContextInfo.h>
#include <glbinding/Version.h>

#include <glbinding/gl/gl.h>


using namespace gl;
using namespace glbinding;

//
//void error(int errnum, const char * errmsg)
//{
//    //std::cerr << errnum << ": " << errmsg << std::endl;
//}
//

void printVersionOfContextRequest(
    const Version & version
,   const bool forward
,   const bool core)
{
    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, version.m_major);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, version.m_minor);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, forward);
    if (core)
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow * window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
    if (!window)
    {
        std::cout << "  "
            << "(" << version.m_major << "," << version.m_minor << "," << (forward ? 1 : 0) << "," << (core ? 1 : 0) << ") "
            << "(-,-,-,-)" << std::endl;

        return;
    }
    glfwMakeContextCurrent(window);
    Binding::initialize();

    auto result = ContextInfo::version();
    glfwMakeContextCurrent(window);

    std::cout << "  "
        << "(" << version.m_major << "," << version.m_minor << "," << (forward ? 1 : 0) << "," << (core ? 1 : 0) << ") "
        << "(" << result.m_major << "," << result.m_minor << "," << (forward ? 1 : 0) << "," << (core ? 1 : 0) << ")" << std::endl;

    glfwMakeContextCurrent(nullptr);
    glfwDestroyWindow(window);
}



int main()
{
    if (!glfwInit())
        return 1;

    //glfwSetErrorCallback(error);

    std::cout << std::endl << "test: requesting all context configurations ..." << std::endl
        << std::endl << "  tuple scheme: (major, minor, forward { 0, 1}, core { 0, 1 })" << std::endl
        << std::endl << "  versions: requested  created" << std::endl << std::endl;

    for (const auto & version : Version::versions())
    {
        printVersionOfContextRequest(version, false, false);
        printVersionOfContextRequest(version, false, true);
        printVersionOfContextRequest(version, true , false);
        printVersionOfContextRequest(version, true,  true);
        std::cout << std::endl;
    }

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

    glfwTerminate();
    return 0;
}
