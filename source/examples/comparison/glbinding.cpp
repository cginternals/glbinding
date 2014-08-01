#include "glbinding.h"
#include "commondata.h"

#include <iostream>

#include <glbinding/gl/gl.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/callbacks.h>


void glbindingInitialize()
{
    glbinding::Binding::initialize();
}

void glbindingEnableErrorCheck(bool /*on*/)
{
    glbinding::setCallbackMaskForAllExcept(glbinding::CallbackMask::After, { "glGetError" });

    glbinding::setAfterCallback([](const glbinding::FunctionCall &) {
        gl::GLenum error = gl::glGetError();
        if (error != gl::GL_NO_ERROR)
        {
            std::cout << "Error: " << error << std::endl;
        }
    });
}

void glbindingTest()
{
    gl::GLuint vaoId;
    gl::GLuint cornerBufferId;
    gl::glGenVertexArrays(1, &vaoId);
    gl::glGenBuffers(1, &cornerBufferId);
    gl::GLuint programId = gl::glCreateProgram();

    gl::GLuint vertexShaderId = gl::glCreateShader(gl::GL_VERTEX_SHADER);
    gl::glShaderSource(vertexShaderId, 1, &vertexShaderCode, 0);
    gl::glCompileShader(vertexShaderId);

    gl::GLuint fragmentShaderId = gl::glCreateShader(gl::GL_FRAGMENT_SHADER);
    gl::glShaderSource(fragmentShaderId, 1, &fragmentShaderCode, 0);
    gl::glCompileShader(fragmentShaderId);

    gl::glAttachShader(programId, vertexShaderId);
    gl::glAttachShader(programId, fragmentShaderId);
    gl::glLinkProgram(programId);

    gl::glBindBuffer(gl::GL_ARRAY_BUFFER, cornerBufferId);
    gl::glBufferData(gl::GL_ARRAY_BUFFER, sizeof(vec2)*4, cornerData, gl::GL_STATIC_DRAW);

    gl::glBindVertexArray(vaoId);

    gl::GLuint attributeIndex = static_cast<gl::GLuint>(gl::glGetAttribLocation(programId, "corner"));
    gl::GLuint bindingIndex = 0;
    gl::glVertexAttribBinding(attributeIndex, bindingIndex);
    gl::glBindVertexBuffer(bindingIndex, cornerBufferId, 0, sizeof(vec2));
    gl::glVertexAttribFormat(attributeIndex, 2, gl::GL_FLOAT, gl::GL_FALSE, 0);
    gl::glEnableVertexAttribArray(attributeIndex);

    gl::glUseProgram(programId);

    gl::glDrawArrays(gl::GL_TRIANGLE_STRIP, 0, 4);

    gl::glDeleteProgram(programId);
    gl::glDeleteBuffers(1, &cornerBufferId);
    gl::glDeleteVertexArrays(1, &vaoId);
}
