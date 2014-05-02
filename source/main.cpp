#include <glowwindow/Context.h>
#include <glowwindow/ContextFormat.h>
#include <glowwindow/MainLoop.h>
#include <glowwindow/Window.h>
#include <glowwindow/WindowEventHandler.h>

#include <GL/glx.h>

namespace {
    __GLXextFuncPtr (*glowGetProcAddress) (const GLubyte*) = glXGetProcAddressARB;

    void (*glowClear) (GLbitfield);
    void (*glowClearColor) (GLfloat, GLfloat, GLfloat, GLfloat);
}

class EventHandler : public glowwindow::WindowEventHandler
{
public:
    EventHandler()
    {
    }

    virtual ~EventHandler()
    {
    }

    virtual void initialize(glowwindow::Window &) override
    {
        glowClear = reinterpret_cast<void (*) (GLbitfield)>(glowGetProcAddress(reinterpret_cast<const GLubyte*>("glClear")));
        glowClearColor = reinterpret_cast<void (*) (GLfloat, GLfloat, GLfloat, GLfloat)>(glowGetProcAddress(reinterpret_cast<const GLubyte*>("glClearColor")));

        glowClearColor(0.2f, 0.3f, 0.4f, 1.f);
        glowClear(GL_COLOR_BUFFER_BIT);
        /*glClearColor(0.2f, 0.3f, 0.4f, 1.f);
        CheckGLError();


        glowutils::StringTemplate* vertexShaderSource = new glowutils::StringTemplate(new glow::StaticStringSource(vertexShaderCode));
        glowutils::StringTemplate* fragmentShaderSource = new glowutils::StringTemplate(new glow::StaticStringSource(fragmentShaderCode));


#ifdef MAC_OS
        vertexShaderSource->replace("#version 140", "#version 150");
        fragmentShaderSource->replace("#version 140", "#version 150");
#endif



        cornerBuffer = new glow::Buffer();
        cornerBuffer->ref();
        program = new glow::Program();
        program->ref();
        vao = new glow::VertexArrayObject();
        vao->ref();

        program->attach(
                        new glow::Shader(GL_VERTEX_SHADER, vertexShaderSource),
                        new glow::Shader(GL_FRAGMENT_SHADER, fragmentShaderSource)
                        );

        cornerBuffer->setData(std::array<glm::vec2, 4>{ {
            glm::vec2(0, 0),
            glm::vec2(1, 0),
            glm::vec2(0, 1),
            glm::vec2(1, 1)
        } });

        vao->binding(0)->setAttribute(0);
        vao->binding(0)->setBuffer(cornerBuffer, 0, sizeof(glm::vec2));
        vao->binding(0)->setFormat(2, GL_FLOAT);
        vao->enable(0);
        */
    }

    virtual void framebufferResizeEvent(glowwindow::ResizeEvent &) override
    {
        //glViewport(0, 0, event.width(), event.height());
        //CheckGLError();
    }

    virtual void paintEvent(glowwindow::PaintEvent &) override
    {
        /*glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        CheckGLError();

        program->use();
        vao->drawArrays(GL_TRIANGLE_STRIP, 0, 4);*/
    }

    virtual void idle(glowwindow::Window & /*window*/) override
    {
        //window.repaint();
    }

private:
    //glow::VertexArrayObject* vao;
    //glow::Buffer* cornerBuffer;
    //glow::Program* program;
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
