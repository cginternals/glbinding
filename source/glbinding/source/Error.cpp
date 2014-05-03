#include <glbinding/Error.h>

#include <cassert>
#include <GL/gl.h>

#include <glbinding/glbinding.h>

namespace glbinding {

void CheckError()
{
    assert(getError() == GL_NO_ERROR);
}

}
