#include "QtOpenGLWindow.h"

#include <QApplication>
#include <QResizeEvent>
#include <QOpenGLContext>
#include <QDebug>

#include "context.h"

QtOpenGLWindow::QtOpenGLWindow()
: m_context(new QOpenGLContext)
, m_initialized(false)
, m_updatePending(false)
{
    auto contextId = createGLContext(static_cast<EGLWindow>(winId()));

    m_context->setNativeHandle(contextId);
    m_context->create();
}

/**
*  @brief
*    Destructor
*/
QtOpenGLWindow::~QtOpenGLWindow()
{
    releaseContext();
}

void QtOpenGLWindow::onInitialize()
{
}

void QtOpenGLWindow::onResize(QResizeEvent * )
{
}

void QtOpenGLWindow::onPaint()
{
}

/**
*  @brief
*    Get OpenGL context
*/
QOpenGLContext *QtOpenGLWindow::context() const
{
    return m_context.data();
}

/**
*  @brief
*    Request update (repaint) of the window
*/
void QtOpenGLWindow::updateGL()
{
    if (!m_updatePending) {
        m_updatePending = true;
        QCoreApplication::postEvent(this, new QEvent(QEvent::UpdateRequest));
    }
}

/**
*  @brief
*    Initialize OpenGL rendering
*/
void QtOpenGLWindow::initialize()
{
    m_context->makeCurrent(this);

    onInitialize();

    m_context->doneCurrent();

    m_initialized = true;
}

/**
*  @brief
*    Resize OpenGL scene
*/
void QtOpenGLWindow::resize(QResizeEvent * event)
{
    if (!m_initialized) {
        initialize();
    }

    m_context->makeCurrent(this);

    QResizeEvent deviceSpecificResizeEvent(event->size() * devicePixelRatio(), event->oldSize() * devicePixelRatio());

    onResize(&deviceSpecificResizeEvent);

    m_context->doneCurrent();
}

/**
*  @brief
*    Render OpenGL scene
*/
void QtOpenGLWindow::paint()
{
    if (!m_initialized) {
        initialize();
    }

    if (!isExposed()) {
        return;
    }

    m_updatePending = false;

    m_context->makeCurrent(this);

    onPaint();

    m_context->swapBuffers(this);

    m_context->doneCurrent();
}

bool QtOpenGLWindow::event(QEvent * event)
{
    switch (event->type()) {
        case QEvent::UpdateRequest:
            paint();
            return true;
        default:
            return QWindow::event(event);
    }
}

void QtOpenGLWindow::resizeEvent(QResizeEvent * event)
{
    resize(event);
    paint();
}

void QtOpenGLWindow::exposeEvent(QExposeEvent * )
{
    paint();
}

void QtOpenGLWindow::makeCurrent()
{
    m_context->makeCurrent(this);
}

void QtOpenGLWindow::doneCurrent()
{
    m_context->doneCurrent();
}
