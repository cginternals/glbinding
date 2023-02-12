
#include <iostream>
#include <map>
#include <array>
#include <set>
#include <cstring>

#include <GLFW/glfw3.h>

#include <glbinding-aux/Meta.h>
#include <glbinding/AbstractFunction.h>
#include <glbinding-aux/ContextInfo.h>
#include <glbinding/Version.h>
#include <glbinding/glbinding.h>

#include <glbinding/gl/gl.h>

#include <glbinding-aux/ValidVersions.h>
#include <glbinding-aux/types_to_string.h>


using namespace gl;
using namespace glbinding;

const auto gles_versions = std::set<glbinding::Version>({
    glbinding::Version(2, 0),
    glbinding::Version(3, 0),
    glbinding::Version(3, 1),
    glbinding::Version(3, 2),
});

void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

void print(
  const Version & version
, const Version & result)
{
    std::cout << "  " << version << "  " << result << std::endl;
}

Version printVersionOfContextRequest(const Version & version)
{
	glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);

    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, version.majorVersion());
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, version.minorVersion());

    GLFWwindow * window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
    if (!window)
    {
        print(version, Version());
        return Version();
    }

    glfwMakeContextCurrent(window);
    glbinding::initialize(glfwGetProcAddress, true);

    auto result = aux::ContextInfo::version();
    glfwMakeContextCurrent(window);

    print(version, result);

    glfwMakeContextCurrent(nullptr);
    glfwDestroyWindow(window);

    return result;
}

int main(int argc, char * argv[])
{
    glfwSetErrorCallback(error);

    if (!glfwInit())
        return 1;

    std::cout << std::endl << "test: requesting all context configurations ..." << std::endl
        << std::endl << "  scheme: <requested_version>  <created_version>" << std::endl << std::endl;

    for (const auto & version : gles_versions)
    {
		printVersionOfContextRequest(version);
        std::cout << std::endl;
    }

    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);

#ifdef SYSTEM_DARWIN
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

	glbinding::initialize(glfwGetProcAddress, false); // only resolve functions that are actually used (lazy)

    // print some gl infos (query)

    std::cout
        << "OpenGL ES Version:  " << aux::ContextInfo::version() << std::endl
        << "OpenGL ES Vendor:   " << aux::ContextInfo::vendor() << std::endl
        << "OpenGL ES Renderer: " << aux::ContextInfo::renderer() << std::endl 
        << "OpenGL Revision:    " << aux::Meta::glRevision() << " (gl.xml)" << std::endl << std::endl;

    glfwTerminate();
    return 0;
}
