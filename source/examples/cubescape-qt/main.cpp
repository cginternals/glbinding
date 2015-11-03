
#include <QSurfaceFormat>
#include <QWidget>

#include <QApplication>

#include "Viewer.h"


int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

    QSurfaceFormat format;
    format.setDepthBufferSize(16);

#ifdef __APPLE__
    format.setVersion(3, 2);
    format.setProfile(QSurfaceFormat::CoreProfile);
#endif

    QScopedPointer<Viewer> viewer(new Viewer(format));

    return app.exec();
}
