#include "rendergl.h"

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

void resizeGL(int width, int height)
{
    glViewport(0, 0, width, height);
}

void renderGL()
{
    glClearColor(0.0, 0.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
