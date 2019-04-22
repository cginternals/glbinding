
#include "glbinding.h"

#include <iostream>

#include <GLFW/glfw3.h>

#include <glbinding/gl/gl.h>

#include <glbinding/AbstractFunction.h>

#include <glbinding-aux/types_to_string.h>

#include <glbinding/Binding.h>

#include <glbinding/CallbackMask.h>

#include <glbinding/FunctionCall.h>


using namespace gl;

namespace
{
    #include "gltest_data.inl"
}


void glbinding_init()
{
    glbinding::Binding::initialize([](const char * name) {
        return glfwGetProcAddress(name);
    }, false);
}


void glbinding_test()
{
    #include "gltest.inl"
}


void glbinding_error(bool enable)
{
    if (enable)
    {
        glbinding::Binding::setCallbackMaskExcept(glbinding::CallbackMask::After, { "glGetError" });

        glbinding::Binding::setAfterCallback([](const glbinding::FunctionCall &)
        {
            gl::GLenum error = gl::glGetError();
            if (error != gl::GL_NO_ERROR)
                std::cout << "Error: " << error << std::endl;
        });
    }
    else
        glbinding::Binding::setCallbackMask(glbinding::CallbackMask::None);
}
