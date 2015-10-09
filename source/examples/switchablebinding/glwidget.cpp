#include "glwidget.h"

#include <QPaintEvent>
#include <QResizeEvent>

#include "context.h"
#include "rendergl.h"
#include "rendergles.h"

GLWidget::GLWidget()
: m_displayInitialized(false)
, m_initialized(false)
, m_useGL(true)
{
    setAttribute(Qt::WA_PaintOnScreen);
    setFocusPolicy(Qt::StrongFocus);
}

GLWidget::~GLWidget()
{
    if (m_displayInitialized)
    {
        ::uninitializeDisplay();
    }
}

void GLWidget::showEvent(QShowEvent *)
{
    if (!m_initialized)
    {
        initialize();
    }
}

void GLWidget::paintEvent(QPaintEvent * /*pe*/)
{
    if (!m_initialized)
    {
        initialize();
    }

    ::makeCurrent();
    if (m_useGL)
    {
        ::renderGL();
    }
    else
    {
        ::renderGLES();
    }
    ::waitClient();
    ::swapBuffers();
    ::doneCurrent();
}

void GLWidget::resizeEvent(QResizeEvent * re)
{
    if (!m_initialized)
    {
        initialize();
    }

    ::makeCurrent();
    if (m_useGL)
    {
        ::resizeGL(re->size().width(), re->size().height());
    }
    else
    {
        ::resizeGLES(re->size().width(), re->size().height());
    }
    ::doneCurrent();

    update();
}

void GLWidget::initialize()
{
    if (!m_displayInitialized)
    {
        ::initializeDisplay(winId());
        m_displayInitialized = true;
    }

    if (m_useGL)
    {
        ::createGLContext();
        ::makeCurrent();
        ::initializeGL();
        ::doneCurrent();
    }
    else
    {
        ::createGLESContext();
        ::makeCurrent();
        ::initializeGLES();
        ::doneCurrent();
    }

    m_initialized = true;
}

void GLWidget::uninitialize()
{
    ::makeCurrent();
    if (m_useGL)
    {
        ::uninitializeGL();
    }
    else
    {
        ::uninitializeGLES();
    }

    ::doneCurrent();
    ::releaseContext();

    m_initialized = false;
}

QPaintEngine * GLWidget::paintEngine() const
{
    return nullptr;
}

void GLWidget::keyPressEvent(QKeyEvent * event)
{
    if (event->key() != Qt::Key_Escape)
    {
        uninitialize();
        m_useGL = !m_useGL;

        QResizeEvent re(size(), QSize());
        resizeEvent(&re);
    }
    else
    {
        QWidget::keyPressEvent(event);
    }
}
