#include "mainwindow.h"

#include <QTimer>

#include "context.h"
#include "rendergl.h"
#include "rendergles.h"

#define USE_OPENGL 0

MainWindow::MainWindow()
{
#if USE_OPENGL
    QTimer::singleShot(0, this, SLOT(initializeGL()));
    QTimer::singleShot(0, this, SLOT(render1GL()));
    QTimer::singleShot(1000, this, SLOT(render2GL()));
    QTimer::singleShot(2000, this, SLOT(render3GL()));
    QTimer::singleShot(3000, this, SLOT(render4GL()));
    QTimer::singleShot(4000, this, SLOT(uninitializeGL()));
#else
    QTimer::singleShot(0, this, SLOT(initializeGLES()));
    QTimer::singleShot(0, this, SLOT(render1GLES()));
    QTimer::singleShot(1000, this, SLOT(render2GLES()));
    QTimer::singleShot(2000, this, SLOT(render3GLES()));
    QTimer::singleShot(3000, this, SLOT(render4GLES()));
    QTimer::singleShot(4000, this, SLOT(uninitializeGLES()));
#endif

    QTimer::singleShot(4000, this, SLOT(close()));
}

void MainWindow::initializeGL()
{
    ::createGLContext(winId());
    ::initializeGL();
}

void MainWindow::uninitializeGL()
{
    ::uninitializeGL();
    ::releaseContext();
}

void MainWindow::render1GL()
{
    ::render1GL();
    ::swapBuffers();
}

void MainWindow::render2GL()
{
    ::render2GL();
    ::swapBuffers();
}

void MainWindow::render3GL()
{
    ::render3GL();
    ::swapBuffers();
}

void MainWindow::render4GL()
{
    ::render4GL();
    ::swapBuffers();
}

void MainWindow::initializeGLES()
{
    ::createGLESContext(winId());
    ::initializeGLES();
}

void MainWindow::uninitializeGLES()
{
    ::uninitializeGLES();
    ::releaseContext();
}

void MainWindow::render1GLES()
{
    ::render1GLES();
    ::swapBuffers();
}

void MainWindow::render2GLES()
{
    ::render2GLES();
    ::swapBuffers();
}

void MainWindow::render3GLES()
{
    ::render3GLES();
    ::swapBuffers();
}

void MainWindow::render4GLES()
{
    ::render4GLES();
    ::swapBuffers();
}
