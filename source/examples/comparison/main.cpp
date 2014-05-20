#include <GL/glew.h>

#include <GLFW/glfw3.h>


#include <glbinding/glbinding.h>
#include <glbinding/AbstractFunction.h>
#include <glbinding/functions.h>
#include <glbinding/constants.h>
#include <glbinding/meta.h>
#include <glbinding/GLenum.h>

#include <iostream>
#include <chrono>
#include <ratio>
#include <thread>

class Timer
{
public:
    Timer() : m_msg(nullptr) {}

    void start(const char * msg)
    {
        m_msg = msg;
        time = std::chrono::system_clock::now();
    }

    void stop()
    {
        auto delta = std::chrono::system_clock::now() - time;

        float ms = std::chrono::duration_cast<std::chrono::duration<float, std::milli>>(delta).count();

        std::cout << m_msg << ": " << ms << " ms" << std::endl;
    }

    void restart(const char * msg)
    {
        stop();
        start(msg);
    }

protected:
    const char * m_msg;
    std::chrono::time_point<std::chrono::system_clock> time;
};

void errorfun(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

const char* vertexShaderCode = R"(
#version 140
#extension GL_ARB_explicit_attrib_location : require

layout (location = 0) in vec2 corner;

out vec4 color;

void main()
{
gl_Position = vec4(corner * 2.0 - 1.0, 0.0, 1.0);
color = vec4(corner, 0.0, 1.0);
}

)";
const char* fragmentShaderCode = R"(
#version 140
#extension GL_ARB_explicit_attrib_location : require

layout (location = 0) out vec4 fragColor;

in vec4 color;

void main()
{
fragColor = color;
}

)";

struct vec2 { float x; float y; };

const vec2 cornerData[4] = {
    vec2{0, 0},
    vec2{1, 0},
    vec2{0, 1},
    vec2{1, 1}
};

//------------------------------------------------------------------------

void glewExample()
{
    GLuint vaoId;
    GLuint cornerBufferId;
    glGenVertexArrays(1, &vaoId);
    glGenBuffers(1, &cornerBufferId);
    GLuint programId = glCreateProgram();

    GLuint vertexShaderId = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShaderId, 1, &vertexShaderCode, 0);
    glCompileShader(vertexShaderId);

    GLuint fragmentShaderId = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShaderId, 1, &fragmentShaderCode, 0);
    glCompileShader(fragmentShaderId);

    glAttachShader(programId, vertexShaderId);
    glAttachShader(programId, fragmentShaderId);
    glLinkProgram(programId);

    glBindBuffer(GL_ARRAY_BUFFER, cornerBufferId);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vec2)*4, cornerData, GL_STATIC_DRAW);

    glBindVertexArray(vaoId);

    GLint attributeIndex = glGetAttribLocation(programId, "corner");
    GLint bindingIndex = 0;
    glVertexAttribBinding(attributeIndex, bindingIndex);
    glBindVertexBuffer(bindingIndex, cornerBufferId, 0, sizeof(vec2));
    glVertexAttribFormat(attributeIndex, 2, GL_FLOAT, GL_FALSE, 0);
    glEnableVertexAttribArray(attributeIndex);

    glUseProgram(programId);

    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    glDeleteProgram(programId);
    glDeleteBuffers(1, &cornerBufferId);
    glDeleteVertexArrays(1, &vaoId);
}

void glewCheckGLError()
{
    GLenum error = glGetError();
    if (error != GL_NO_ERROR)
    {
        std::cout << "Error: 0x" << std::hex << error << std::endl;
    }
}

void glewExampleWithErrorChecking()
{
    GLuint vaoId;
    GLuint cornerBufferId;
    glGenVertexArrays(1, &vaoId);
    glewCheckGLError();
    glGenBuffers(1, &cornerBufferId);
    glewCheckGLError();
    GLuint programId = glCreateProgram();
    glewCheckGLError();

    GLuint vertexShaderId = glCreateShader(GL_VERTEX_SHADER);
    glewCheckGLError();
    glShaderSource(vertexShaderId, 1, &vertexShaderCode, 0);
    glewCheckGLError();
    glCompileShader(vertexShaderId);
    glewCheckGLError();

    GLuint fragmentShaderId = glCreateShader(GL_FRAGMENT_SHADER);
    glewCheckGLError();
    glShaderSource(fragmentShaderId, 1, &fragmentShaderCode, 0);
    glewCheckGLError();
    glCompileShader(fragmentShaderId);
    glewCheckGLError();

    glAttachShader(programId, vertexShaderId);
    glewCheckGLError();
    glAttachShader(programId, fragmentShaderId);
    glewCheckGLError();
    glLinkProgram(programId);
    glewCheckGLError();

    glBindBuffer(GL_ARRAY_BUFFER, cornerBufferId);
    glewCheckGLError();
    glBufferData(GL_ARRAY_BUFFER, sizeof(vec2)*4, cornerData, GL_STATIC_DRAW);
    glewCheckGLError();

    glBindVertexArray(vaoId);
    glewCheckGLError();

    GLint attributeIndex = glGetAttribLocation(programId, "corner");
    glewCheckGLError();
    GLint bindingIndex = 0;
    glVertexAttribBinding(attributeIndex, bindingIndex);
    glewCheckGLError();
    glBindVertexBuffer(bindingIndex, cornerBufferId, 0, sizeof(vec2));
    glewCheckGLError();
    glVertexAttribFormat(attributeIndex, 2, GL_FLOAT, GL_FALSE, 0);
    glewCheckGLError();
    glEnableVertexAttribArray(attributeIndex);
    glewCheckGLError();

    glUseProgram(programId);
    glewCheckGLError();

    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    glewCheckGLError();

    glDeleteProgram(programId);
    glewCheckGLError();
    glDeleteBuffers(1, &cornerBufferId);
    glewCheckGLError();
    glDeleteVertexArrays(1, &vaoId);
    glewCheckGLError();
}

void glbindingExample()
{
    gl::GLuint vaoId;
    gl::GLuint cornerBufferId;
    gl::GenVertexArrays(1, &vaoId);
    gl::GenBuffers(1, &cornerBufferId);
    gl::GLuint programId = gl::CreateProgram();

    gl::GLuint vertexShaderId = gl::CreateShader(gl::VERTEX_SHADER);
    gl::ShaderSource(vertexShaderId, 1, &vertexShaderCode, 0);
    gl::CompileShader(vertexShaderId);

    gl::GLuint fragmentShaderId = gl::CreateShader(gl::FRAGMENT_SHADER);
    gl::ShaderSource(fragmentShaderId, 1, &fragmentShaderCode, 0);
    gl::CompileShader(fragmentShaderId);

    gl::AttachShader(programId, vertexShaderId);
    gl::AttachShader(programId, fragmentShaderId);
    gl::LinkProgram(programId);

    gl::BindBuffer(gl::ARRAY_BUFFER, cornerBufferId);
    gl::BufferData(gl::ARRAY_BUFFER, sizeof(vec2)*4, cornerData, gl::STATIC_DRAW);

    gl::BindVertexArray(vaoId);

    gl::GLint attributeIndex = gl::GetAttribLocation(programId, "corner");
    gl::GLint bindingIndex = 0;
    gl::VertexAttribBinding(attributeIndex, bindingIndex);
    gl::BindVertexBuffer(bindingIndex, cornerBufferId, 0, sizeof(vec2));
    gl::VertexAttribFormat(attributeIndex, 2, gl::FLOAT, gl::FALSE_, 0);
    gl::EnableVertexAttribArray(attributeIndex);

    gl::UseProgram(programId);

    gl::DrawArrays(gl::TRIANGLE_STRIP, 0, 4);

    gl::DeleteProgram(programId);
    gl::DeleteBuffers(1, &cornerBufferId);
    gl::DeleteVertexArrays(1, &vaoId);
}

void compare()
{
    const int ITERATIONS = 10000;

    Timer timer;

    timer.start("glewInit()");

    if (glewInit() != GLEW_OK)
        return;

    timer.restart("gl::initialize()");

    if (!gl::initialize())
        return;

    timer.restart("sleep");
    std::this_thread::sleep_for(std::chrono::seconds(1));

    timer.restart("glew calls");

    for (int i = 0; i < ITERATIONS; ++i)
        glewExample();

    timer.restart("glbinding calls");

    for (int i = 0; i < ITERATIONS; ++i)
        glbindingExample();

    timer.stop();

    gl::AbstractFunction::setCallbackLevelForAllExcept(gl::AbstractFunction::CallbackLevel::After, { "glGetError" });

    timer.start("glew calls with check error");

    for (int i = 0; i < ITERATIONS; ++i)
        glewExampleWithErrorChecking();

    timer.restart("glbinding calls with check error (by after-callback)");

    for (int i = 0; i < ITERATIONS; ++i)
        glbindingExample();

    timer.stop();
}

int main(int /*argc*/, char* /*argv*/[])
{
    if (!glfwInit())
    {
        return 1;
    }

    glfwSetErrorCallback(errorfun);

    glfwDefaultWindowHints();
    GLFWwindow * window = glfwCreateWindow(640, 480, "Dummy Window", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    gl::AbstractFunction::setAfterCallback([](const gl::AbstractFunction &) {
        gl::GLenum error = gl::GetError();
        if (error != gl::NO_ERROR_)
        {
            std::cout << "Error: " << error.toString() << std::endl;
        }
    });

    compare();

    glfwTerminate();
    return 0;
}
