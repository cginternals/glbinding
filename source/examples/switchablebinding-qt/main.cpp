
#include <QApplication>
#include <QMainWindow>

#include "QtOpenGLWindow.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;

    QtOpenGLWindow openglWindow;

    window.setCentralWidget(QWidget::createWindowContainer(&openglWindow));

    window.show();

    return app.exec();
}
