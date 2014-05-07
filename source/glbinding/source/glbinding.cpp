#include <glbinding/glbinding.h>

#include "AbstractFunction.h"

namespace {
    bool initialized = false;
}

namespace gl {

bool initialize()
{
    if (initialized)
    {
        return false;
    }

    AbstractFunction::initializeFunctions();

    initialized = true;

    return true;
}

} // namespace gl
