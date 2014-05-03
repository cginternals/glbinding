#include <glbinding/glbinding.h>

namespace {

    bool initialized = false;

}

namespace glbinding {

GLenum (*glowGetError) (void);
GlowFunction<void, GLbitfield> glowClear;
GlowFunction<void, GLfloat, GLfloat, GLfloat, GLfloat> glowClearColor;
GlowFunction<void, GLsizei, GLuint*> glowGenBuffers;
GlowFunction<void, GLsizei, GLuint*> glowDeleteBuffers;
GlowFunction<void, GLint, GLint, GLsizei, GLsizei> glowViewport;
GlowFunction<void, GLuint> glowBindVertexArray;
GlowFunction<void, GLuint> glowUseProgram;
GlowFunction<void, GLenum, GLint, GLsizei> glowDrawArrays;
GlowFunction<GLuint> glowCreateProgram;
GlowFunction<void, GLuint> glowDeleteProgram;
GlowFunction<void, GLsizei, GLuint*> glowGenVertexArrays;
GlowFunction<void, GLsizei, GLuint*> glowDeleteVertexArrays;
GlowFunction<void, GLuint> glowLinkProgram;
GlowFunction<void, GLuint> glowCompileShader;
GlowFunction<void, GLuint, GLuint> glowAttachShader;
GlowFunction<GLuint, GLenum> glowCreateShader;
GlowFunction<void, GLuint> glowDeleteShader;
GlowFunction<void, GLuint, GLsizei, const GLchar**, const GLint*> glowShaderSource;
GlowFunction<void, GLenum, GLuint> glowBindBuffer;
GlowFunction<void, GLenum, GLsizei, GLvoid*, GLenum> glowBufferData;
GlowFunction<void, GLuint, GLuint> glowVertexAttribBinding;
GlowFunction<void, GLuint, GLuint, GLsizeiptr, GLsizei> glowBindVertexBuffer;
GlowFunction<void, GLuint, GLsizei, GLenum, GLboolean, GLsizeiptr> glowVertexAttribFormat;
GlowFunction<void, GLuint> glowEnableVertexAttribArray;

bool initialize()
{
    if (initialized)
    {
        return false;
    }

    initializeGlowFunction("glGetError", glowGetError);
    initializeGlowFunction("glClear", glowClear);
    initializeGlowFunction("glClearColor", glowClearColor);
    initializeGlowFunction("glGenBuffers", glowGenBuffers);
    initializeGlowFunction("glDeleteBuffers", glowDeleteBuffers);
    initializeGlowFunction("glViewport", glowViewport);
    initializeGlowFunction("glBindVertexArray", glowBindVertexArray);
    initializeGlowFunction("glUseProgram", glowUseProgram);
    initializeGlowFunction("glDrawArrays", glowDrawArrays);
    initializeGlowFunction("glCreateProgram", glowCreateProgram);
    initializeGlowFunction("glDeleteProgram", glowDeleteProgram);
    initializeGlowFunction("glGenVertexArrays", glowGenVertexArrays);
    initializeGlowFunction("glDeleteVertexArrays", glowDeleteVertexArrays);
    initializeGlowFunction("glLinkProgram", glowLinkProgram);
    initializeGlowFunction("glCompileShader", glowCompileShader);
    initializeGlowFunction("glAttachShader", glowAttachShader);
    initializeGlowFunction("glCreateShader", glowCreateShader);
    initializeGlowFunction("glDeleteShader", glowDeleteShader);
    initializeGlowFunction("glShaderSource", glowShaderSource);
    initializeGlowFunction("glBindBuffer", glowBindBuffer);
    initializeGlowFunction("glBufferData", glowBufferData);
    initializeGlowFunction("glVertexAttribBinding", glowVertexAttribBinding);
    initializeGlowFunction("glBindVertexBuffer", glowBindVertexBuffer);
    initializeGlowFunction("glVertexAttribFormat", glowVertexAttribFormat);
    initializeGlowFunction("glEnableVertexAttribArray", glowEnableVertexAttribArray);

    initialized = true;

    return true;
}

} // namespace glbinding
