#include <glbinding/Error.h>

#include <cassert>
#include <GL/gl.h>

#include <glbinding/glbinding.h>

namespace glbinding {

void CheckGlowError()
{
    assert(glowGetError() == GL_NO_ERROR);
}

}
