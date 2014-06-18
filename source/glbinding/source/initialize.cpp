
#include <glbinding/initialize.h>

#include <glbinding/AbstractFunction.h>


namespace gl 
{

void initialize()
{
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
}

} // namespace gl
