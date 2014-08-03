#include <gmock/gmock.h>

#include <thread>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/Meta.h>
#include <glbinding/ContextInfo.h>
#include <glbinding/Version.h>
#include <glbinding/Binding.h>

#include <glbinding/gl/gl.h>

using namespace gl;
using namespace glbinding;

class MultiThreading_test : public testing::Test
{
public:
};

namespace {
    void error(int /*errnum*/, const char * /*errmsg*/)
    {
        FAIL();
    }
}

TEST_F(MultiThreading_test, Test)
{
    int success = glfwInit();

    EXPECT_EQ(1, success);

    glfwSetErrorCallback(error);

    glfwWindowHint(GLFW_VISIBLE, false);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, false);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow * window1 = glfwCreateWindow(320, 240, "", nullptr, nullptr);

    EXPECT_NE(nullptr, window1);

    glfwWindowHint(GLFW_VISIBLE, false);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, false);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow * window2 = glfwCreateWindow(320, 240, "", nullptr, nullptr);

    EXPECT_NE(nullptr, window2);

    std::thread t1([window1]() {
        glfwMakeContextCurrent(window1);
        Binding::initialize();

        int major = 0;
        int minor = 0;

        for (int i=0; i < 10; ++i)
        {
            glGetIntegerv(GL_MAJOR_VERSION, &major);
            glGetIntegerv(GL_MINOR_VERSION, &minor);

            EXPECT_EQ(3, major);
            EXPECT_EQ(2, minor);

            //std::cout << "Processing Thread 1 (OpenGL " << major << "." << minor << " context)" << std::endl;

            std::this_thread::sleep_for(std::chrono::milliseconds(15));
        }
    });

    std::thread t2([window2]() {
        glfwMakeContextCurrent(window2);
        Binding::initialize();

        int major = 0;
        int minor = 0;

        for (int i=0; i < 10; ++i)
        {
            glGetIntegerv(GL_MAJOR_VERSION, &major);
            glGetIntegerv(GL_MINOR_VERSION, &minor);

            EXPECT_EQ(4, major);
            EXPECT_EQ(0, minor);

            //std::cout << "Processing Thread 2 (OpenGL " << major << "." << minor << " context)" << std::endl;

            std::this_thread::sleep_for(std::chrono::milliseconds(20));
        }
    });

    t1.join();
    t2.join();

    glfwTerminate();
}
