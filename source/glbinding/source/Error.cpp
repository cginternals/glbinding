#include <glbinding/Error.h>

#include <cassert>

#include <glbinding/glbinding.h>
#include <glbinding/constants.h>

namespace glbinding {

void CheckError()
{
    assert(glbGetError() == Error::NO_ERROR);
}

}
