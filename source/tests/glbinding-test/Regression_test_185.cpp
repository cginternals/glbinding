
#include <gmock/gmock.h>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/Binding.h>
#include <glbinding/Meta.h>


#include <glbinding/gl/functions.h>  // < imagine this was included by a 3rd party library (e.g., globjects.cpp)

#include <glbinding/gl/types.h>
#include <glbinding/gl/functions.h>
#include <glbinding/gl/enum.h>



class Regression_185 : public testing::Test
{
public:
};

#ifdef BUILD_GPU_TESTS

TEST(Regression_185, GLbooleanReturnValueCall)  // GL calls fail if function returns GLboolean
{
    if (!glfwInit())
    {
        SUCCEED();
        return;
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
    ASSERT_NE(nullptr, window);

    glfwMakeContextCurrent(window);

    glbinding::Binding::initialize();

    ASSERT_EQ(gl::GL_NO_ERROR, gl::glGetError());

    // "Death Test": resolve a basic OpenGL of return type GLboolean (with underlying type char)
    // note: this might work on some OpenGL drivers without expected failure (try NVIDIA for expected failure on windows x64)
    ASSERT_NO_THROW(gl::glIsProgram(0));    

    ASSERT_EQ(gl::GL_NO_ERROR, gl::glGetError());

    glfwMakeContextCurrent(nullptr);
    glfwTerminate();

    SUCCEED();
}

#endif

TEST(Regression_185, GetString)  // Static initializiation issue ...
{
    ASSERT_EQ(glbinding::Meta::getString(gl::GL_TRUE), "GL_TRUE");
    ASSERT_EQ(glbinding::Meta::getString(gl::GL_FALSE), "GL_FALSE");

    SUCCEED();
}
