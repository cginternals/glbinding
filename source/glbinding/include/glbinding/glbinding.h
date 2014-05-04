#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/constants.h>
#include <glbinding/types.h>

namespace glbinding {

GLBINDING_API bool initialize();

/*
<command>
    <proto group="ErrorCode"><ptype>GLenum</ptype> <name>glGetError</name></proto>
    <glx type="single" opcode="115"/>
</command>
*/
GLBINDING_API Error glbGetError();

/*
<command>
    <proto>void <name>glClear</name></proto>
    <param group="ClearBufferMask"><ptype>GLbitfield</ptype> <name>mask</name></param>
    <glx type="render" opcode="127"/>
</command>
*/
GLBINDING_API void glbClear(GLBbitfield buffers);

/*
<command>
    <proto>void <name>glClearColor</name></proto>
    <param group="ColorF"><ptype>GLfloat</ptype> <name>red</name></param>
    <param group="ColorF"><ptype>GLfloat</ptype> <name>green</name></param>
    <param group="ColorF"><ptype>GLfloat</ptype> <name>blue</name></param>
    <param group="ColorF"><ptype>GLfloat</ptype> <name>alpha</name></param>
    <glx type="render" opcode="130"/>
</command>
*/
GLBINDING_API void glbClearColor(GLBfloat red, GLBfloat green, GLBfloat blue, GLBfloat alpha);

/*
<command>
    <proto>void <name>glGenBuffers</name></proto>
    <param><ptype>GLsizei</ptype> <name>n</name></param>
    <param len="n"><ptype>GLuint</ptype> *<name>buffers</name></param>
</command>
*/
GLBINDING_API void glbGenBuffers(GLBsizei count, GLBuint* ids);

/*
<command>
    <proto>void <name>glDeleteBuffers</name></proto>
    <param><ptype>GLsizei</ptype> <name>n</name></param>
    <param len="n">const <ptype>GLuint</ptype> *<name>buffers</name></param>
</command>
*/
GLBINDING_API void glbDeleteBuffers(GLBsizei count, GLBuint* ids);

/*
<command>
    <proto>void <name>glViewport</name></proto>
    <param group="WinCoord"><ptype>GLint</ptype> <name>x</name></param>
    <param group="WinCoord"><ptype>GLint</ptype> <name>y</name></param>
    <param><ptype>GLsizei</ptype> <name>width</name></param>
    <param><ptype>GLsizei</ptype> <name>height</name></param>
    <glx type="render" opcode="191"/>
</command>
*/
GLBINDING_API void glbViewport(GLBint x, GLBint y, GLBsizei width, GLBsizei height);

/*
<command>
    <proto>void <name>glBindVertexArray</name></proto>
    <param><ptype>GLuint</ptype> <name>array</name></param>
    <glx type="render" opcode="350"/>
</command>
*/
GLBINDING_API void glbBindVertexArray(GLBuint id);

/*
<command>
    <proto>void <name>glUseProgram</name></proto>
    <param><ptype>GLuint</ptype> <name>program</name></param>
</command>
*/
GLBINDING_API void glbUseProgram(GLBuint id);

/*
<command>
    <proto>void <name>glDrawArrays</name></proto>
    <param group="PrimitiveType"><ptype>GLenum</ptype> <name>mode</name></param>
    <param><ptype>GLint</ptype> <name>first</name></param>
    <param><ptype>GLsizei</ptype> <name>count</name></param>
    <glx type="render" opcode="193"/>
</command>
*/
GLBINDING_API void glbDrawArrays(Primitive primitive, GLBint start, GLBsizei count);

/*
<command>
    <proto><ptype>GLuint</ptype> <name>glCreateProgram</name></proto>
</command>
*/
GLBINDING_API GLBuint glbCreateProgram();

/*
<command>
    <proto>void <name>glDeleteProgram</name></proto>
    <param><ptype>GLuint</ptype> <name>program</name></param>
    <glx type="single" opcode="202"/>
</command>
*/
GLBINDING_API void glbDeleteProgram(GLBuint id);

/*
<command>
    <proto>void <name>glGenVertexArrays</name></proto>
    <param><ptype>GLsizei</ptype> <name>n</name></param>
    <param len="n"><ptype>GLuint</ptype> *<name>arrays</name></param>
    <glx type="single" opcode="206"/>
</command>
*/
GLBINDING_API void glbGenVertexArrays(GLBsizei count, GLBuint* ids);

/*
<command>
    <proto>void <name>glDeleteVertexArrays</name></proto>
    <param><ptype>GLsizei</ptype> <name>n</name></param>
    <param len="n">const <ptype>GLuint</ptype> *<name>arrays</name></param>
    <glx type="render" opcode="351"/>
</command>
*/
GLBINDING_API void glbDeleteVertexArrays(GLBsizei count, GLBuint* ids);

/*
<command>
    <proto>void <name>glLinkProgram</name></proto>
    <param><ptype>GLuint</ptype> <name>program</name></param>
</command>
*/
GLBINDING_API void glbLinkProgram(GLBuint id);

/*
<command>
    <proto>void <name>glCompileShader</name></proto>
    <param><ptype>GLuint</ptype> <name>shader</name></param>
</command>
*/
GLBINDING_API void glbCompileShader(GLBuint id);

/*
<command>
    <proto>void <name>glAttachShader</name></proto>
    <param><ptype>GLuint</ptype> <name>program</name></param>
    <param><ptype>GLuint</ptype> <name>shader</name></param>
</command>
*/
GLBINDING_API void glbAttachShader(GLBuint programId, GLBuint shaderId);

/*
<command>
    <proto><ptype>GLuint</ptype> <name>glCreateShader</name></proto>
    <param><ptype>GLenum</ptype> <name>type</name></param>
</command>
*/
GLBINDING_API GLBuint glbCreateShader(ShaderType type);

/*
<command>
    <proto>void <name>glDeleteShader</name></proto>
    <param><ptype>GLuint</ptype> <name>shader</name></param>
    <glx type="single" opcode="195"/>
</command>
*/
GLBINDING_API void glbDeleteShader(GLBuint id);

/*
<command>
    <proto>void <name>glShaderSource</name></proto>
    <param><ptype>GLuint</ptype> <name>shader</name></param>
    <param><ptype>GLsizei</ptype> <name>count</name></param>
    <param len="count">const <ptype>GLchar</ptype> *const*<name>string</name></param>
    <param len="count">const <ptype>GLint</ptype> *<name>length</name></param>
</command>
*/
GLBINDING_API void glbShaderSource(GLBuint id, GLBsizei count, const GLBbyte** strings, const GLBint* lengths);

/*
<command>
    <proto>void <name>glBindBuffer</name></proto>
    <param group="BufferTargetARB"><ptype>GLenum</ptype> <name>target</name></param>
    <param><ptype>GLuint</ptype> <name>buffer</name></param>
</command>
*/
GLBINDING_API void glbBindBuffer(BufferTarget target, GLBuint id);

/*
<command>
    <proto>void <name>glBufferData</name></proto>
    <param group="BufferTargetARB"><ptype>GLenum</ptype> <name>target</name></param>
    <param group="BufferSize"><ptype>GLsizeiptr</ptype> <name>size</name></param>
    <param len="size">const void *<name>data</name></param>
    <param group="BufferUsageARB"><ptype>GLenum</ptype> <name>usage</name></param>
</command>
*/
GLBINDING_API void glbBufferData(BufferTarget target, GLBsizei size, void* data, AccessMode mode);

/*
<command>
    <proto>void <name>glVertexAttribBinding</name></proto>
    <param><ptype>GLuint</ptype> <name>attribindex</name></param>
    <param><ptype>GLuint</ptype> <name>bindingindex</name></param>
</command>
*/
GLBINDING_API void glbVertexAttribBinding(GLBuint attributeIndex, GLBuint bindingIndex);

/*
<command>
    <proto>void <name>glBindVertexBuffer</name></proto>
    <param><ptype>GLuint</ptype> <name>bindingindex</name></param>
    <param><ptype>GLuint</ptype> <name>buffer</name></param>
    <param group="BufferOffset"><ptype>GLintptr</ptype> <name>offset</name></param>
    <param><ptype>GLsizei</ptype> <name>stride</name></param>
</command>
*/
GLBINDING_API void glbBindVertexBuffer(GLBuint bindingIndex, GLBuint bufferId, GLBint offset, GLBsizei stride);

/*
<command>
    <proto>void <name>glVertexAttribFormat</name></proto>
    <param><ptype>GLuint</ptype> <name>attribindex</name></param>
    <param><ptype>GLint</ptype> <name>size</name></param>
    <param><ptype>GLenum</ptype> <name>type</name></param>
    <param group="Boolean"><ptype>GLboolean</ptype> <name>normalized</name></param>
    <param><ptype>GLuint</ptype> <name>relativeoffset</name></param>
</command>
*/
GLBINDING_API void glbVertexAttribFormat(GLBuint attributeIndex, GLBsizei size, DataType type, GLBbool normalized, GLBint relativeOffset);

/*
<command>
    <proto>void <name>glEnableVertexAttribArray</name></proto>
    <param><ptype>GLuint</ptype> <name>index</name></param>
</command>
*/
GLBINDING_API void glbEnableVertexAttribArray(GLBuint index);

} // namespace glbinding
