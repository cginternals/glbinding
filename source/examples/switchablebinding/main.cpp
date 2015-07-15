
#include <QApplication>
#include <QString>

#include "mainwindow.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    MainWindow window(argc < 2 || QString(argv[1]).toLower() != "gles");
    window.show();

    return app.exec();
}
