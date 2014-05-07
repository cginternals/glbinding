#include <array>
#include <chrono>
#include <iostream>

#define GLM_FORCE_RADIANS

#include <glowwindow/Context.h>
#include <glowwindow/ContextFormat.h>
#include <glowwindow/MainLoop.h>
#include <glowwindow/Window.h>
#include <glowwindow/WindowEventHandler.h>
#include <glowwindow/events.h>

#include <glbinding/glbinding.h>

namespace {
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
}

//using namespace gl;

class EventHandler : public glowwindow::WindowEventHandler
{
public:
    EventHandler()
    {
    }

    virtual ~EventHandler()
    {
        gl::DeleteBuffers(1, &m_cornerBuffer);
        gl::DeleteProgram(m_program);
        gl::DeleteVertexArrays(1, &m_vao);
        gl::DeleteShader(m_vertexShader);
        gl::DeleteShader(m_fragmentShader);
    }

    virtual void initialize(glowwindow::Window &) override
    {
        gl::initialize();

        gl::ClearColor(0.2f, 0.3f, 0.4f, 1.f);

        gl::GenBuffers(1, &m_cornerBuffer);
        m_program = gl::CreateProgram();
        gl::GenVertexArrays(1, &m_vao);

        m_vertexShader = gl::CreateShader(gl::VERTEX_SHADER);
        m_fragmentShader = gl::CreateShader(gl::FRAGMENT_SHADER);

        gl::ShaderSource(m_vertexShader, 1, &vertexShaderCode, nullptr);
        gl::ShaderSource(m_fragmentShader, 1, &fragmentShaderCode, nullptr);

        std::array<glm::vec2, 4> corners{{
            glm::vec2(0, 0),
            glm::vec2(1, 0),
            glm::vec2(0, 1),
            glm::vec2(1, 1)
        }};

        gl::BindBuffer(gl::ARRAY_BUFFER, m_cornerBuffer);
        gl::BufferData(gl::ARRAY_BUFFER, static_cast<GLsizei>(4 * sizeof(glm::vec2)), corners.data(), gl::STATIC_DRAW);

        gl::BindVertexArray(m_vao);
        gl::VertexAttribBinding(/* attributeIndex */ 0, /* bindingIndex */ 0);
        gl::BindVertexBuffer(0, m_cornerBuffer, 0, sizeof(glm::vec2));
        gl::VertexAttribFormat(0, 2, gl::FLOAT, false, 0);
        gl::EnableVertexAttribArray(0);

        gl::CompileShader(m_vertexShader);
        gl::CompileShader(m_fragmentShader);

        gl::AttachShader(m_program, m_vertexShader);
        gl::AttachShader(m_program, m_fragmentShader);

        gl::LinkProgram(m_program);

        //lastRender = std::chrono::system_clock::now();
    }

    virtual void framebufferResizeEvent(glowwindow::ResizeEvent & event) override
    {
        gl::Viewport(0, 0, event.width(), event.height());
    }

    virtual void paintEvent(glowwindow::PaintEvent &) override
    {
        //std::chrono::time_point<std::chrono::system_clock> current = std::chrono::system_clock::now();

        //std::cout << (current - lastRender).count() << std::endl;
        //lastRender = current;

        gl::Clear(gl::COLOR_BUFFER_BIT | gl::DEPTH_BUFFER_BIT);

        gl::BindVertexArray(m_vao);
        gl::UseProgram(m_program);
        gl::DrawArrays(gl::TRIANGLE_STRIP, 0, 4);
        gl::UseProgram(0);
        gl::BindVertexArray(0);
    }

    virtual void idle(glowwindow::Window & /*window*/) override
    {
        //window.repaint();
    }

private:
    //std::chrono::time_point<std::chrono::system_clock> lastRender;
    GLuint m_vao;
    GLuint m_cornerBuffer;
    GLuint m_program;
    GLuint m_vertexShader;
    GLuint m_fragmentShader;
};

int main(int /*argc*/, char* /*argv*/[])
{
    glowwindow::ContextFormat format;
    format.setVersion(3, 0);

    glowwindow::Window window;

    window.setEventHandler(new EventHandler());

    if (window.create(format, "glbinding Example"))
    {
        window.context()->setSwapInterval(glowwindow::Context::NoVerticalSyncronization);

        window.show();

        return glowwindow::MainLoop::run();
    }
    else
    {
        return 1;
    }
}
