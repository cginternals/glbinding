#include "impl.h"

#include <glbinding/glbinding.h>
#include <glbinding/AbstractFunction.h>
#include <glbinding/functions.h>
#include <glbinding/constants.h>
#include <glbinding/meta.h>

#include <iostream>

using namespace gl;

const char* vertexShaderCode = R"(
#version 140
#extension GL_ARB_explicit_attrib_location : require

layout (location = 0) in vec2 corner;

out vec4 color;

void main()
{
    gl_Position = vec4(corner * 2.0 - 1.0, 0.0, 1.0);
    color = vec4(corner, 0.0, 1.0);
}

)";

const char* fragmentShaderCode = R"(
#version 140
#extension GL_ARB_explicit_attrib_location : require

layout (location = 0) out vec4 fragColor;

in vec4 color;

void main()
{
    fragColor = color;
}

)";

void doSomeOpenGLStuff()
{
    std::set<Extension> extensions;
    int num = 0;
    glGetIntegerv(GL_NUM_EXTENSIONS, &num);

    for (int i = 0; i < std::min(num, 5); ++i)
    {
        const unsigned char * name = glGetStringi(GL_EXTENSIONS, i);
        Extension extension = meta::extensionFromString(reinterpret_cast<const char*>(name));
        if (extension != Extension::Unknown)
            extensions.insert(extension);
    }

    std::cout << std::endl;

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

    struct vec2 { float x; float y; };

    const vec2 cornerData[4] = {
        vec2{0, 0},
        vec2{1, 0},
        vec2{0, 1},
        vec2{1, 1}
    };

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

void setCallbacks()
{
    AbstractFunction::setCallbackLevelForAll(AbstractFunction::CallbackLevel::All);

    AbstractFunction::setUnresolvedCallback([](const AbstractFunction & f) {
        std::cout << "Calling unresolved function: " << f.name() << std::endl;
    });

    AbstractFunction::setBeforeCallback([](const AbstractFunction & f) {
        std::cout << f.name();
    });
    AbstractFunction::setAfterCallback([](const AbstractFunction &) {
        std::cout << std::endl;
    });
    AbstractFunction::setParametersCallback([](const AbstractFunction &, const std::vector<AbstractValue*> & parameters) {
        std::cout << "(";
        for (unsigned i = 0; i < parameters.size(); ++i)
        {
            parameters[i]->printOn(std::cout);
            if (i < parameters.size()-1)
                std::cout << ", ";
        }
        std::cout << ")";
    });
    AbstractFunction::setReturnValueCallback([](const AbstractFunction &, const AbstractValue* returnValue) {
        if (returnValue)
        {
            std::cout << " -> ";
            returnValue->printOn(std::cout);
        }
    });
}
