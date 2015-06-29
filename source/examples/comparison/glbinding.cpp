
#include "glbinding.h"

#include <iostream>

#include <glbinding/gl/gl.h>

#include <khrapi/AbstractFunction.h> 
#include <khrapi/callbacks.h>

#include <glbinding/Binding.h>


using namespace gl;

namespace
{
    #include "gltest_data.inl"
}


void glbinding_init()
{
    glbinding::Binding::initialize(false);
}


void glbinding_test()
{
    #include "gltest.inl"
}


void glbinding_error(bool enable)
{
    if (enable)
    {
        glbinding::Binding::setCallbackMaskExcept(khrapi::CallbackMask::After, { "glGetError" });

        khrapi::setAfterCallback([](const khrapi::FunctionCall &)
        {
            gl::GLenum error = gl::glGetError();
            if (error != gl::GL_NO_ERROR)
                std::cout << "Error: " << error << std::endl;
        });
    }
    else
        glbinding::Binding::setCallbackMask(khrapi::CallbackMask::None);
}
