#include "impl.h"

#include <glbinding/glbinding.h>
#include <glbinding/AbstractFunction.h>

#include <iostream>

using namespace gl;

void glbindingSetErrorChecking(bool b)
{
    if (b)
    {
        AbstractFunction::setAfterCallback([](const AbstractFunction &) {
            GLenum error = glGetError();
            if (error != GL_NO_ERROR)
            {
                std::cout << "Error: " << error << std::endl;
            }
        });

        AbstractFunction::setCallbackLevelForAllExcept(AbstractFunction::CallbackLevel::After, { "glGetError" });
    }
    else
    {
        AbstractFunction::setCallbackLevelForAll(AbstractFunction::CallbackLevel::None);
    }
}

void glbindingExample()
{
    GLuint vaoId;
    GLuint cornerBufferId;
    glGenVertexArrays(1, &vaoId);
    glGenBuffers(1, &cornerBufferId);
    GLuint programId = glCreateProgram();

    GLuint vertexShaderId = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShaderId, 1, &vertexShaderCode, 0);
    glCompileShader(vertexShaderId);

    GLuint fragmentShaderId = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShaderId, 1, &fragmentShaderCode, 0);
    glCompileShader(fragmentShaderId);

    glAttachShader(programId, vertexShaderId);
    glAttachShader(programId, fragmentShaderId);
    glLinkProgram(programId);

    glBindBuffer(GL_ARRAY_BUFFER, cornerBufferId);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vec2)*4, cornerData, GL_STATIC_DRAW);

    glBindVertexArray(vaoId);

    GLint attributeIndex = glGetAttribLocation(programId, "corner");
    GLint bindingIndex = 0;
    glVertexAttribBinding(attributeIndex, bindingIndex);
    glBindVertexBuffer(bindingIndex, cornerBufferId, 0, sizeof(vec2));
    glVertexAttribFormat(attributeIndex, 2, GL_FLOAT, GL_FALSE, 0);
    glEnableVertexAttribArray(attributeIndex);

    glUseProgram(programId);

    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    glDeleteProgram(programId);
    glDeleteBuffers(1, &cornerBufferId);
    glDeleteVertexArrays(1, &vaoId);
}
