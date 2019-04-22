
#include <glbinding-aux/debug.h>

#include <iostream>

#include <glbinding/glbinding.h>
#include <glbinding/Binding.h>
#include <glbinding/gl/gl.h>
#include <glbinding/FunctionCall.h>


namespace
{


// Don't rely on Meta.h for now
std::string readableErrorCode(gl::GLenum errorCode)
{
    switch(errorCode)
    {
    case gl::GL_NO_ERROR:
        return "GL_NO_ERROR";
    case gl::GL_INVALID_ENUM:
        return "GL_INVALID_ENUM";
    case gl::GL_INVALID_VALUE:
        return "GL_INVALID_VALUE";
    case gl::GL_INVALID_OPERATION:
        return "GL_INVALID_OPERATION";
    case gl::GL_INVALID_FRAMEBUFFER_OPERATION:
        return "GL_INVALID_FRAMEBUFFER_OPERATION";
    case gl::GL_OUT_OF_MEMORY:
        return "GL_OUT_OF_MEMORY";
    default:
        return "Unknown Error";
    }
}

auto getErrorCallbackRegistered = false;


} // namespace


namespace glbinding { namespace aux
{


void registerGetErrorCallback()
{
    glbinding::setAfterCallback([](const glbinding::FunctionCall & functionCall) {
        const auto errorCode = Binding::GetError.directCall();

        if (errorCode == gl::GL_NO_ERROR)
        {
            return;
        }

        std::cerr << functionCall.function->name() << " generated " << readableErrorCode(errorCode);
    });

    getErrorCallbackRegistered = true;
}

void enableGetErrorCallback()
{
    if (!getErrorCallbackRegistered)
    {
        registerGetErrorCallback();
    }

    glbinding::setCallbackMaskExcept(glbinding::CallbackMask::After, { "glGetError" });
}

void disableGetErrorCallback()
{
    glbinding::removeCallbackMaskExcept(glbinding::CallbackMask::After, { "glGetError" });
}


} } // namespace glbinding::aux
