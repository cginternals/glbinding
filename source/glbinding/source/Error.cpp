#include <glbinding/Error.h>

#include <cassert>

#include <glbinding/glbinding.h>
#include <glbinding/constants.h>

namespace glbinding {

void CheckError()
{
    assert(getError() == Error::NO_ERROR);
}

}
