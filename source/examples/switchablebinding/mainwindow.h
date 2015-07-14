#pragma once

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();
public slots:
    void initializeGL();
    void uninitializeGL();
    void render1GL();
    void render2GL();
    void render3GL();
    void render4GL();

    void initializeGLES();
    void uninitializeGLES();
    void render1GLES();
    void render2GLES();
    void render3GLES();
    void render4GLES();
};
