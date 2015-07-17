
#include <QApplication>
#include <QMainWindow>
#include <QAction>

#include "glwidget.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.setCentralWidget(new GLWidget);
    window.show();

    QAction action(nullptr);
    action.setShortcut(Qt::Key_Escape);
    action.setShortcutContext(Qt::ApplicationShortcut);
    QObject::connect(&action, SIGNAL(triggered()), &window, SLOT(close()));

    window.addAction(&action);

    return app.exec();
}
