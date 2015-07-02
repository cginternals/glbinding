#pragma once

#include <QWindow>
#include <QScopedPointer>
#include <QSurfaceFormat>

class QOpenGLContext;

class QtOpenGLWindow : public QWindow
{
public:
    QtOpenGLWindow();

    virtual ~QtOpenGLWindow();

    QOpenGLContext * context() const;

    void updateGL();

    void initialize();

	void makeCurrent();
	void doneCurrent();

protected:

    void resize(QResizeEvent * event);

    void paint();

    void onInitialize();

    void onResize(QResizeEvent * );

    void onPaint();

    virtual bool event(QEvent * event) override;
    virtual void resizeEvent(QResizeEvent * event) override;
    virtual void exposeEvent(QExposeEvent * ) override;

protected:
    QScopedPointer<QOpenGLContext> m_context;
    bool                           m_initialized;
    bool                           m_updatePending;
};
