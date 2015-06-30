#include "render.h"

#include <unistd.h>

//#include <glbinding/gl/gl.h>
//#include <glbinding/Binding.h>

//using namespace gl;

#include <GLES3/gl3.h>

void initialize()
{
    //glbinding::Binding::initialize();
}

void render1()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void render2()
{
    sleep(1);

    glClearColor(1.0, 1.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void render3()
{
    sleep(1);

    glClearColor(1.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void render4()
{
    sleep(1);

    glClearColor(0.0, 1.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
