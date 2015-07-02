
#include <unistd.h>

#define GLFW_EXPOSE_NATIVE_EGL

#ifdef WIN32
#define GLFW_EXPOSE_NATIVE_WIN32
#elif __APPLE__
#define GLFW_EXPOSE_NATIVE_COCOA
#else
#define GLFW_EXPOSE_NATIVE_X11
#endif

#include <GLFW/glfw3.h>
#include <GLFW/glfw3native.h>

#include "context.h"
#include "rendergl.h"
#include "rendergles.h"

int main(int /*argc*/, char* /*argv*/[])
{
    if (!glfwInit())
        return 1;

    glfwDefaultWindowHints();

    GLFWwindow * glfwWindow = glfwCreateWindow(640, 480, "", nullptr, nullptr);
    if (!glfwWindow)
    {
        glfwTerminate();
        return -1;
    }

    #ifdef WIN32
    EGLWindow window = (EGLWindow)glfwGetWin32Window(glfwWindow);
#elif __APPLE__
    EGLWindow window = (EGLWindow)glfwGetCocoaWindow(glfwWindow);
#else
    EGLWindow window = (EGLWindow)glfwGetX11Window(glfwWindow);
#endif

    createGLContext(window);
    //createGLESContext(window);

    // OpenGL

    initializeGL();

    render1GL();
    glfwSwapBuffers(glfwWindow);
    sleep(1);

    render2GL();
    glfwSwapBuffers(glfwWindow);
    sleep(1);

    render3GL();
    glfwSwapBuffers(glfwWindow);
    sleep(1);

    render4GL();
    glfwSwapBuffers(glfwWindow);
    sleep(1);

    uninitializeGL();

    // OpenGL ES
    /*
    initializeGLES();

    render1GLES();
    glfwSwapBuffers(glfwWindow);
    sleep(1);

    render2GLES();
    glfwSwapBuffers(glfwWindow);
    sleep(1);

    render3GLES();
    glfwSwapBuffers(glfwWindow);
    sleep(1);

    render4GLES();
    glfwSwapBuffers(glfwWindow);
    sleep(1);

    uninitializeGLES();
    */

    releaseContext();

    glfwTerminate();

    return 0;
}
