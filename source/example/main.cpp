#include <array>

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

using namespace glbinding;

class EventHandler : public glowwindow::WindowEventHandler
{
public:
    EventHandler()
    {
    }

    virtual ~EventHandler()
    {
        glbDeleteBuffers(1, &m_cornerBuffer);
        glbDeleteProgram(m_program);
        glbDeleteVertexArrays(1, &m_vao);
        glbDeleteShader(m_vertexShader);
        glbDeleteShader(m_fragmentShader);
    }

    virtual void initialize(glowwindow::Window &) override
    {
        glbinding::initialize();

        glbClearColor(0.2f, 0.3f, 0.4f, 1.f);

        glbGenBuffers(1, &m_cornerBuffer);
        m_program = glbCreateProgram();
        glbGenVertexArrays(1, &m_vao);

        m_vertexShader = glbCreateShader(ShaderType::VERTEX_SHADER);
        m_fragmentShader = glbCreateShader(ShaderType::FRAGMENT_SHADER);

        glbShaderSource(m_vertexShader, 1, &vertexShaderCode, nullptr);
        glbShaderSource(m_fragmentShader, 1, &fragmentShaderCode, nullptr);

        std::array<glm::vec2, 4> corners{{
            glm::vec2(0, 0),
            glm::vec2(1, 0),
            glm::vec2(0, 1),
            glm::vec2(1, 1)
        }};

        glbBindBuffer(BufferTarget::ARRAY_BUFFER, m_cornerBuffer);
        glbBufferData(BufferTarget::ARRAY_BUFFER, static_cast<GLsizei>(4 * sizeof(glm::vec2)), corners.data(), AccessMode::STATIC_DRAW);

        glbBindVertexArray(m_vao);
        glbVertexAttribBinding(/* attributeIndex */ 0, /* bindingIndex */ 0);
        glbBindVertexBuffer(0, m_cornerBuffer, 0, sizeof(glm::vec2));
        glbVertexAttribFormat(0, 2, DataType::FLOAT, false, 0);
        glbEnableVertexAttribArray(0);

        glbCompileShader(m_vertexShader);
        glbCompileShader(m_fragmentShader);

        glbAttachShader(m_program, m_vertexShader);
        glbAttachShader(m_program, m_fragmentShader);

        glbLinkProgram(m_program);
    }

    virtual void framebufferResizeEvent(glowwindow::ResizeEvent & event) override
    {
        glbViewport(0, 0, event.width(), event.height());
    }

    virtual void paintEvent(glowwindow::PaintEvent &) override
    {
        glbClear(Bit::COLOR_BUFFER_BIT | Bit::DEPTH_BUFFER_BIT);

        glbBindVertexArray(m_vao);
        glbUseProgram(m_program);
        glbDrawArrays(Primitive::TRIANGLE_STRIP, 0, 4);
        glbUseProgram(0);
        glbBindVertexArray(0);
    }

    virtual void idle(glowwindow::Window & /*window*/) override
    {
        //window.repaint();
    }

private:
    GLBuint m_vao;
    GLBuint m_cornerBuffer;
    GLBuint m_program;
    GLBuint m_vertexShader;
    GLBuint m_fragmentShader;
};

int main(int /*argc*/, char* /*argv*/[])
{
    glowwindow::ContextFormat format;
    format.setVersion(3, 0);

    glowwindow::Window window;

    window.setEventHandler(new EventHandler());

    if (window.create(format, "GLBindings Example"))
    {
        window.context()->setSwapInterval(glowwindow::Context::VerticalSyncronization);

        window.show();

        return glowwindow::MainLoop::run();
    }
    else
    {
        return 1;
    }
}
