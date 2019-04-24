
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

void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

void print(
  const Version & version
, const bool forward
, const bool core
, const Version & result
, const bool isForward
, const bool isCore)
{
    std::cout << "  "
        << version << "  " << (forward ? "f" : "-") << " " << (core ? "c" : "-") << "  " << result << (isForward ? "f" : "") << (isCore ? "c" : "") << std::endl;
}

bool isCore(const Version & version)
{
    if (version<glbinding::Version(3,2))
    {
        return false;
    }

    GLint value = 0;

    glGetIntegerv(GL_CONTEXT_PROFILE_MASK, &value);

    return (value & static_cast<unsigned int>(GL_CONTEXT_CORE_PROFILE_BIT)) > 0;
}

Version printVersionOfContextRequest(
  const Version & version
, const bool forward
, const bool core)
{
	if (version < Version(3, 2) && (forward || core)) 
	{
		print(version, forward, core, Version(), false, false);
		return Version();
	}

	glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, version.majorVersion());
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, version.minorVersion());
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, forward);
    if (core)
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow * window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
    if (!window)
    {
        print(version, forward, core, Version(), false, false);
        return Version();
    }

    glfwMakeContextCurrent(window);
    glbinding::initialize(glfwGetProcAddress, true);

    auto result = aux::ContextInfo::version();
    glfwMakeContextCurrent(window);

    print(version, forward, core, result, forward, isCore(result));

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
        << std::endl << "  scheme: <requested_version>  <forward> <core>  <created_version>" << std::endl << std::endl;

    std::map<Version, std::array<Version, 4>> markdown;

    for (const auto & version : aux::ValidVersions::versions())
    {
		markdown[version][0] = printVersionOfContextRequest(version, false, false);
		markdown[version][1] = printVersionOfContextRequest(version, false, true);
		markdown[version][2] = printVersionOfContextRequest(version, true, false);
		markdown[version][3] = printVersionOfContextRequest(version, true, true);
        std::cout << std::endl;
    }

    auto printMarkdown = false;
    for (int i = 0; i < argc; ++i)
        printMarkdown |= (strcmp(argv[i], "--markdown") == 0);

    if (printMarkdown)
    {
        std::cout << "printing markdown formatted results ..." << std::endl;

        std::cout << std::endl << "|";

        for (const auto & version : aux::ValidVersions::versions())
            std::cout << version << (version != aux::ValidVersions::latest() ? "<br>" : "");

        for (int i = 0; i < 4; ++i)
        {
            std::cout << "|";
            for (const auto & version : aux::ValidVersions::versions())
                std::cout << markdown[version][i] << (version != aux::ValidVersions::latest() ? "<br>" : "");
        }
        std::cout << "|" << std::endl << std::endl;
    }

    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);

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
        << "OpenGL Version:  " << aux::ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << aux::ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << aux::ContextInfo::renderer() << std::endl << std::endl;

    glfwTerminate();
    return 0;
}
