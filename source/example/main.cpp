#include <type_traits>
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
        glowDeleteBuffers(1, &m_cornerBuffer);
        glowDeleteProgram(m_program);
        glowDeleteVertexArrays(1, &m_vao);
        glowDeleteShader(m_vertexShader);
        glowDeleteShader(m_fragmentShader);
    }

    virtual void initialize(glowwindow::Window &) override
    {
        glbinding::initialize();

        glowClearColor(0.2f, 0.3f, 0.4f, 1.f);

        glowGenBuffers(1, &m_cornerBuffer);
        m_program = glowCreateProgram();
        glowGenVertexArrays(1, &m_vao);

        m_vertexShader = glowCreateShader(GL_VERTEX_SHADER);
        m_fragmentShader = glowCreateShader(GL_FRAGMENT_SHADER);

        glowShaderSource(m_vertexShader, 1, &vertexShaderCode, nullptr);
        glowShaderSource(m_fragmentShader, 1, &fragmentShaderCode, nullptr);

        std::array<glm::vec2, 4> corners{{
            glm::vec2(0, 0),
            glm::vec2(1, 0),
            glm::vec2(0, 1),
            glm::vec2(1, 1)
        }};

        glowBindBuffer(GL_ARRAY_BUFFER, m_cornerBuffer);
        glowBufferData(GL_ARRAY_BUFFER, static_cast<GLsizei>(4 * sizeof(glm::vec2)), corners.data(), GL_STATIC_DRAW);

        glowBindVertexArray(m_vao);
        glowVertexAttribBinding(/* attributeIndex */ 0, /* bindingIndex */ 0);
        glowBindVertexBuffer(0, m_cornerBuffer, 0, sizeof(glm::vec2));
        glowVertexAttribFormat(0, 2, GL_FLOAT, false, 0);
        glowEnableVertexAttribArray(0);

        glowCompileShader(m_vertexShader);
        glowCompileShader(m_fragmentShader);

        glowAttachShader(m_program, m_vertexShader);
        glowAttachShader(m_program, m_fragmentShader);

        glowLinkProgram(m_program);
    }

    virtual void framebufferResizeEvent(glowwindow::ResizeEvent & event) override
    {
        glowViewport(0, 0, event.width(), event.height());
    }

    virtual void paintEvent(glowwindow::PaintEvent &) override
    {
        glowClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glowBindVertexArray(m_vao);
        glowUseProgram(m_program);
        glowDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
        glowUseProgram(0);
        glowBindVertexArray(0);
    }

    virtual void idle(glowwindow::Window & /*window*/) override
    {
        //window.repaint();
    }

private:
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
