#include "glew.h"
#include "commondata.h"

#include <GL/glew.h>

#include <iostream>

namespace {
    bool enableErrorCheck = false;
}

void glewInitialize()
{
    glewInit();
    glGetError();
}

void glewExample()
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

void glewCheckGLError()
{
    GLenum error = glGetError();
    if (error != GL_NO_ERROR)
    {
        std::cout << "Error: 0x" << std::hex << error << std::endl;
    }
}

void glewExampleWithErrorChecking()
{
    GLuint vaoId;
    GLuint cornerBufferId;
    glGenVertexArrays(1, &vaoId);
    glewCheckGLError();
    glGenBuffers(1, &cornerBufferId);
    glewCheckGLError();
    GLuint programId = glCreateProgram();
    glewCheckGLError();

    GLuint vertexShaderId = glCreateShader(GL_VERTEX_SHADER);
    glewCheckGLError();
    glShaderSource(vertexShaderId, 1, &vertexShaderCode, 0);
    glewCheckGLError();
    glCompileShader(vertexShaderId);
    glewCheckGLError();

    GLuint fragmentShaderId = glCreateShader(GL_FRAGMENT_SHADER);
    glewCheckGLError();
    glShaderSource(fragmentShaderId, 1, &fragmentShaderCode, 0);
    glewCheckGLError();
    glCompileShader(fragmentShaderId);
    glewCheckGLError();

    glAttachShader(programId, vertexShaderId);
    glewCheckGLError();
    glAttachShader(programId, fragmentShaderId);
    glewCheckGLError();
    glLinkProgram(programId);
    glewCheckGLError();

    glBindBuffer(GL_ARRAY_BUFFER, cornerBufferId);
    glewCheckGLError();
    glBufferData(GL_ARRAY_BUFFER, sizeof(vec2)*4, cornerData, GL_STATIC_DRAW);
    glewCheckGLError();

    glBindVertexArray(vaoId);
    glewCheckGLError();

    GLint attributeIndex = glGetAttribLocation(programId, "corner");
    glewCheckGLError();
    GLint bindingIndex = 0;
    glVertexAttribBinding(attributeIndex, bindingIndex);
    glewCheckGLError();
    glBindVertexBuffer(bindingIndex, cornerBufferId, 0, sizeof(vec2));
    glewCheckGLError();
    glVertexAttribFormat(attributeIndex, 2, GL_FLOAT, GL_FALSE, 0);
    glewCheckGLError();
    glEnableVertexAttribArray(attributeIndex);
    glewCheckGLError();

    glUseProgram(programId);
    glewCheckGLError();

    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    glewCheckGLError();

    glDeleteProgram(programId);
    glewCheckGLError();
    glDeleteBuffers(1, &cornerBufferId);
    glewCheckGLError();
    glDeleteVertexArrays(1, &vaoId);
    glewCheckGLError();
}

void glewEnableErrorCheck(bool on)
{
    enableErrorCheck = on;
}

void glewTest()
{
    if (enableErrorCheck)
    {
        glewExampleWithErrorChecking();
    }
    else
    {
        glewExample();
    }
}
