
#include <iostream>
#include <algorithm>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/featured/gl32.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/Meta.h>
#include <glbinding/Query.h>
#include <glbinding/Version.h>


using namespace gl32;


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

int main(int, char * [])
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

    std::cout << std::endl
        << "OpenGL Version:  " << Query::version() << std::endl
        << "OpenGL Vendor:   " << Query::vendor() << std::endl
        << "OpenGL Renderer: " << Query::renderer() << std::endl
        << "OpenGL Revision: " << Meta::glRevision() << " (gl.xml)" << std::endl << std::endl;

    // initialize(); // rely on lazy init


    AbstractFunction::setCallbackLevelForAll(AbstractFunction::CallbackLevel::All);

    AbstractFunction::setUnresolvedCallback([](const AbstractFunction & f) 
        { std::cout << "Calling unresolved function: " << f.name() << std::endl; });

    AbstractFunction::setBeforeCallback([](const AbstractFunction & f) 
        { std::cout << f.name(); });

    AbstractFunction::setAfterCallback([](const AbstractFunction &) 
        { std::cout << std::endl; });

    AbstractFunction::setParametersCallback([](const AbstractFunction &
        , const std::vector<AbstractValue *> & parameters) 
        {
            std::cout << "(";

            for (unsigned i = 0; i < parameters.size(); ++i)
            {
                parameters[i]->printOn(std::cout);
                if (i < parameters.size() - 1)
                    std::cout << ", ";
            }
            std::cout << ")";
        });
    
    AbstractFunction::setReturnValueCallback([](const AbstractFunction &
        , const AbstractValue * returnValue) 
        {
            if (returnValue)
            {
                std::cout << " -> ";
                returnValue->printOn(std::cout);
            }
        });


    // do gl stuff

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
    glEnableVertexAttribArray(a_vertex);
    glVertexAttribPointer(a_vertex, 2, GL_FLOAT, GL_FALSE, 0, nullptr);

    // draw
    glViewport(0, 0, 320, 240);

    // ToDo: operators here...
    glClear(GL_COLOR_BUFFER_BIT);
    glClear(GL_DEPTH_BUFFER_BIT);

    glUseProgram(program);

    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    glUseProgram(0);
    glBindVertexArray(0);

    glfwSwapBuffers(window);

    // clean up

    glDeleteProgram(program);
    glDeleteBuffers(1, &buffer);
    glDeleteVertexArrays(1, &vao);


    std::cout << std::endl;

    glfwTerminate();
    return 0;
}
