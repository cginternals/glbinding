#include "rendergl.h"

//#include <GL/gl.h>

#include <glbinding/gl/gl.h>
#include <glbinding/Binding.h>

using namespace gl;

void initializeGL()
{
    glbinding::Binding::initialize();
}

void uninitializeGL()
{
    glbinding::Binding::releaseCurrentContext();
}

void render1GL()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void render2GL()
{
    glClearColor(1.0, 1.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void render3GL()
{
    glClearColor(1.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void render4GL()
{
    glClearColor(0.0, 1.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
