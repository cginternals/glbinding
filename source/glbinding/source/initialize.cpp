
#include <glbinding/initialize.h>

#include <glbinding/FunctionObjects.h>


namespace gl 
{

void initialize()
{
    glbinding::FunctionObjects::initialize();

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
