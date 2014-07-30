
#include <iostream>
#include <algorithm>
#include <thread>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/callbacks.h>
#include <glbinding/Meta.h>
#include <glbinding/ContextInfo.h>
#include <glbinding/Version.h>

#include <glbinding/gl/gl32.h>


using namespace gl32;
using namespace glbinding;

void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

namespace
{
    const GLchar * vertSource = R"(
        #version 150
        #extension GL_ARB_explicit_attrib_location : require

        layout (location = 0) in vec2 a_vertex;

        out vec4 color;

        void main()
        {
            gl_Position = vec4(a_vertex, 0.0, 1.0);
            color = vec4(a_vertex * 0.5 + 0.5, 0.0, 1.0);
        }
        )";

    const GLchar * fragSource = R"(
        #version 150
        #extension GL_ARB_explicit_attrib_location : require

        layout (location = 0) out vec4 fragColor;

        in vec4 color;

        void main()
        {
            fragColor = color;
        }
        )";
}

void doGLStuff(GLFWwindow * window)
{
    // setup

    GLuint program = glCreateProgram();

    GLuint vs = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vs, 1, &vertSource, 0);
    glCompileShader(vs);

    GLuint fs = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fs, 1, &fragSource, 0);
    glCompileShader(fs);

    glAttachShader(program, vs);
    glAttachShader(program, fs);
    glLinkProgram(program);

    // prepare data

    GLuint vao;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    struct vec2 { float x; float y; };

    const vec2 vertices[4] = { { +1.f, -1.f }, { +1.f, +1.f }, { -1.f, -1.f }, { -1.f, +1.f } };

    GLuint buffer;
    glGenBuffers(1, &buffer);
    glBindBuffer(GL_ARRAY_BUFFER, buffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vec2) * 4, vertices, GL_STATIC_DRAW);

    GLint a_vertex = glGetAttribLocation(program, "a_vertex");
    glEnableVertexAttribArray(static_cast<GLuint>(a_vertex));
    glVertexAttribPointer(static_cast<GLuint>(a_vertex), 2, GL_FLOAT, GL_FALSE, 0, nullptr);

    // draw
    glViewport(0, 0, 320, 240);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glUseProgram(program);

    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    glUseProgram(0);
    glBindVertexArray(0);

    glfwSwapBuffers(window);

    //std::this_thread::sleep_for(std::chrono::seconds(2));

    // clean up

    glDeleteProgram(program);
    glDeleteBuffers(1, &buffer);
    glDeleteVertexArrays(1, &vao);
}

int main()
{
    if (!glfwInit())
        return 1;

    glfwSetErrorCallback(error);

    GLFWwindow * window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // print some gl infos (query)

    glbinding::initialize();

    std::cout << std::endl
        << "OpenGL Version:  " << ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << ContextInfo::renderer() << std::endl
        << "OpenGL Revision: " << Meta::glRevision() << " (gl.xml)" << std::endl << std::endl;

    AbstractFunction::setCallbackMaskForAll(CallbackMask::After | CallbackMask::ParametersAndReturnValue);

    setAfterCallback([](const FunctionCall & call) {
        std::cout << call.function.name() << "(";

        for (unsigned i = 0; i < call.parameters.size(); ++i)
        {
            std::cout << call.parameters[i]->asString();
            if (i < call.parameters.size() - 1)
                std::cout << ", ";
        }

        std::cout << ")";

        if (call.returnValue)
        {
            std::cout << " -> " << call.returnValue->asString();
        }

        std::cout << std::endl;
    });

    doGLStuff(window);

    std::cout << std::endl;

    glfwTerminate();
    return 0;
}
