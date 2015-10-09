#include "rendergles.h"

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

void resizeGLES(int width, int height)
{
    glViewport(0, 0, width, height);
}

void renderGLES()
{
    glClearColor(1.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
}
