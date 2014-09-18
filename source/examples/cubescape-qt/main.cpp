
#include <QSurfaceFormat>
#include <QWidget>

#include <QApplication>

#include "Viewer.h"


int main(int argc, char * argv[])
{
    int result = -1;

    QApplication app(argc, argv);

    QSurfaceFormat format;
    QScopedPointer<Viewer> viewer(new Viewer(format));

    result = app.exec();

    return result;
    // ToDo: QWidget seems to take double ownership of canvas and frees it doubled
}
