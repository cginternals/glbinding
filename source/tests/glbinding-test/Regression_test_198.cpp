#include <gmock/gmock.h>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/glbinding.h>
#include <glbinding-aux/Meta.h>


#include <glbinding/gl/functions.h>  // < imagine this was included by a 3rd party library (e.g., globjects.cpp)

#include <glbinding/gl/types.h>
#include <glbinding/gl/functions.h>
#include <glbinding/gl/enum.h>

#include <glbinding-aux/types_to_string.h>

#include <stdexcept>

glbinding::ContextHandle context_cast(GLFWwindow* context) {
    static_assert(
        sizeof(glbinding::ContextHandle) >= sizeof(GLFWwindow*), 
        "glbinding::ContextHandle doesn't have enough space to hold GLFWwindow*");
    return reinterpret_cast<glbinding::ContextHandle>(context);
}

class Regression_198 : public testing::Test
{
public:
};

TEST(Regression_198, releaseContext)  // GL calls fail if function returns GLboolean
{
    try {
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

        auto context_A = glfwCreateWindow(320, 240, "Regession198-A", nullptr, nullptr);
        ASSERT_NE(nullptr, context_A);
        auto context_A_gl = context_cast(context_A);
        glbinding::initialize(context_A_gl, ::glfwGetProcAddress, true, true);

        auto context_B = glfwCreateWindow(320, 240, "Regession198-B", nullptr, nullptr);
        ASSERT_NE(nullptr, context_B);
        auto context_B_gl = context_cast(context_B);
        glbinding::initialize(context_B_gl, ::glfwGetProcAddress, true, true);

        glbinding::releaseContext(context_B_gl);

        glfwMakeContextCurrent(context_A);
        glbinding::useContext(context_A_gl);
        gl::GLint major = 0;
        glGetIntegerv(gl::GL_MAJOR_VERSION, &major);

        glbinding::releaseContext(context_A_gl);
        glfwTerminate();
    } catch (std::out_of_range & ex) {
        FAIL() << "Unexpected exception std::out_of_range thrown with message: " << ex.what();
    } catch (...) {
        SUCCEED();
    }
    SUCCEED();
}


