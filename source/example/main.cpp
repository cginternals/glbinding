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
        deleteBuffers(1, &m_cornerBuffer);
        deleteProgram(m_program);
        deleteVertexArrays(1, &m_vao);
        deleteShader(m_vertexShader);
        deleteShader(m_fragmentShader);
    }

    virtual void initialize(glowwindow::Window &) override
    {
        glbinding::initialize();

        clearColor(0.2f, 0.3f, 0.4f, 1.f);

        genBuffers(1, &m_cornerBuffer);
        m_program = createProgram();
        genVertexArrays(1, &m_vao);

        m_vertexShader = createShader(GL_VERTEX_SHADER);
        m_fragmentShader = createShader(GL_FRAGMENT_SHADER);

        shaderSource(m_vertexShader, 1, &vertexShaderCode, nullptr);
        shaderSource(m_fragmentShader, 1, &fragmentShaderCode, nullptr);

        std::array<glm::vec2, 4> corners{{
            glm::vec2(0, 0),
            glm::vec2(1, 0),
            glm::vec2(0, 1),
            glm::vec2(1, 1)
        }};

        bindBuffer(GL_ARRAY_BUFFER, m_cornerBuffer);
        bufferData(GL_ARRAY_BUFFER, static_cast<GLsizei>(4 * sizeof(glm::vec2)), corners.data(), GL_STATIC_DRAW);

        bindVertexArray(m_vao);
        vertexAttribBinding(/* attributeIndex */ 0, /* bindingIndex */ 0);
        bindVertexBuffer(0, m_cornerBuffer, 0, sizeof(glm::vec2));
        vertexAttribFormat(0, 2, GL_FLOAT, false, 0);
        enableVertexAttribArray(0);

        compileShader(m_vertexShader);
        compileShader(m_fragmentShader);

        attachShader(m_program, m_vertexShader);
        attachShader(m_program, m_fragmentShader);

        linkProgram(m_program);
    }

    virtual void framebufferResizeEvent(glowwindow::ResizeEvent & event) override
    {
        viewport(0, 0, event.width(), event.height());
    }

    virtual void paintEvent(glowwindow::PaintEvent &) override
    {
        clear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        bindVertexArray(m_vao);
        useProgram(m_program);
        drawArrays(GL_TRIANGLE_STRIP, 0, 4);
        useProgram(0);
        bindVertexArray(0);
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
