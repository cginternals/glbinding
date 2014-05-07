#include <array>
#include <chrono>
#include <iostream>

#define GLM_FORCE_RADIANS

#include <GL/glew.h>

#include <glowwindow/Context.h>
#include <glowwindow/ContextFormat.h>
#include <glowwindow/MainLoop.h>
#include <glowwindow/Window.h>
#include <glowwindow/WindowEventHandler.h>
#include <glowwindow/events.h>


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

class EventHandler : public glowwindow::WindowEventHandler
{
public:
    EventHandler()
    {
    }

    virtual ~EventHandler()
    {
        glDeleteBuffers(1, &m_cornerBuffer);
        assert(glGetError() == GL_NO_ERROR);
        glDeleteProgram(m_program);
        assert(glGetError() == GL_NO_ERROR);
        glDeleteVertexArrays(1, &m_vao);
        assert(glGetError() == GL_NO_ERROR);
        glDeleteShader(m_vertexShader);
        assert(glGetError() == GL_NO_ERROR);
        glDeleteShader(m_fragmentShader);
        assert(glGetError() == GL_NO_ERROR);
    }

    virtual void initialize(glowwindow::Window &) override
    {
        glewInit();

        glClearColor(0.2f, 0.3f, 0.4f, 1.f);
        assert(glGetError() == GL_NO_ERROR);

        glGenBuffers(1, &m_cornerBuffer);
        assert(glGetError() == GL_NO_ERROR);
        m_program = glCreateProgram();
        assert(glGetError() == GL_NO_ERROR);
        glGenVertexArrays(1, &m_vao);
        assert(glGetError() == GL_NO_ERROR);

        m_vertexShader = glCreateShader(GL_VERTEX_SHADER);
        assert(glGetError() == GL_NO_ERROR);
        m_fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
        assert(glGetError() == GL_NO_ERROR);

        glShaderSource(m_vertexShader, 1, &vertexShaderCode, nullptr);
        assert(glGetError() == GL_NO_ERROR);
        glShaderSource(m_fragmentShader, 1, &fragmentShaderCode, nullptr);
        assert(glGetError() == GL_NO_ERROR);

        std::array<glm::vec2, 4> corners{{
            glm::vec2(0, 0),
            glm::vec2(1, 0),
            glm::vec2(0, 1),
            glm::vec2(1, 1)
        }};

        glBindBuffer(GL_ARRAY_BUFFER, m_cornerBuffer);
        assert(glGetError() == GL_NO_ERROR);
        glBufferData(GL_ARRAY_BUFFER, static_cast<GLsizei>(4 * sizeof(glm::vec2)), corners.data(), GL_STATIC_DRAW);
        assert(glGetError() == GL_NO_ERROR);

        glBindVertexArray(m_vao);
        assert(glGetError() == GL_NO_ERROR);
        glVertexAttribBinding(/* attributeIndex */ 0, /* bindingIndex */ 0);
        assert(glGetError() == GL_NO_ERROR);
        glBindVertexBuffer(0, m_cornerBuffer, 0, sizeof(glm::vec2));
        assert(glGetError() == GL_NO_ERROR);
        glVertexAttribFormat(0, 2, GL_FLOAT, false, 0);
        assert(glGetError() == GL_NO_ERROR);
        glEnableVertexAttribArray(0);
        assert(glGetError() == GL_NO_ERROR);

        glCompileShader(m_vertexShader);
        assert(glGetError() == GL_NO_ERROR);
        glCompileShader(m_fragmentShader);
        assert(glGetError() == GL_NO_ERROR);

        glAttachShader(m_program, m_vertexShader);
        assert(glGetError() == GL_NO_ERROR);
        glAttachShader(m_program, m_fragmentShader);
        assert(glGetError() == GL_NO_ERROR);

        glLinkProgram(m_program);
        assert(glGetError() == GL_NO_ERROR);

        //lastRender = std::chrono::system_clock::now();
    }

    virtual void framebufferResizeEvent(glowwindow::ResizeEvent & event) override
    {
        glViewport(0, 0, event.width(), event.height());
        assert(glGetError() == GL_NO_ERROR);
    }

    virtual void paintEvent(glowwindow::PaintEvent &) override
    {
        //std::chrono::time_point<std::chrono::system_clock> current = std::chrono::system_clock::now();

        //std::cout << (current - lastRender).count() << std::endl;
        //lastRender = current;

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        assert(glGetError() == GL_NO_ERROR);

        glBindVertexArray(m_vao);
        assert(glGetError() == GL_NO_ERROR);
        glUseProgram(m_program);
        assert(glGetError() == GL_NO_ERROR);
        glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
        assert(glGetError() == GL_NO_ERROR);
        glUseProgram(0);
        assert(glGetError() == GL_NO_ERROR);
        glBindVertexArray(0);
        assert(glGetError() == GL_NO_ERROR);
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

    if (window.create(format, "GLEW Example"))
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
