#include <glbinding/glbinding.h>

#include <glbinding/AbstractFunction.h>

#include <glbinding/functions.h>

#include <iostream>

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

    AbstractFunction::initializeFunctions(0);

    /*AbstractFunction::enableCallbacksForAllExcept({ "glGetError" });
    AbstractFunction::setBeforeCallback([](const AbstractFunction & f) {
        std::cout << f.name() << std::endl;
    });
    AbstractFunction::setAfterCallback([](const AbstractFunction &) {
        GLenum error = GetError();
        if (error != NO_ERROR)
        {
            std::cout << "Error!" << std::endl;
        }
    });*/

    initialized = true;

    return true;
}

} // namespace gl
