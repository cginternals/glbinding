#include "rendergles.h"

//#include <GLES3/gl3.h>

#include <glesbinding/gles/gles.h>
#include <glesbinding/Binding.h>

using namespace gles;

void initializeGLES()
{
    glesbinding::Binding::initialize();
}

void uninitializeGLES()
{
    glesbinding::Binding::releaseCurrentContext();
}

void render1GLES()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void render2GLES()
{
    glClearColor(1.0, 1.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void render3GLES()
{
    glClearColor(1.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void render4GLES()
{
    glClearColor(0.0, 1.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
