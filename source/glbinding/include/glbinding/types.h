#pragma once

#include <glbinding/glbinding_api.h>

namespace glbinding {

/*
<type>typedef unsigned int <name>GLenum</name>;</type>
<type>typedef unsigned char <name>GLboolean</name>;</type>
<type>typedef unsigned int <name>GLbitfield</name>;</type>
<type comment="Not an actual GL type, though used in headers in the past">typedef void <name>GLvoid</name>;</type>
<type>typedef signed char <name>GLbyte</name>;</type>
<type>typedef short <name>GLshort</name>;</type>
<type>typedef int <name>GLint</name>;</type>
<type>typedef int <name>GLclampx</name>;</type>
<type>typedef unsigned char <name>GLubyte</name>;</type>
<type>typedef unsigned short <name>GLushort</name>;</type>
<type>typedef unsigned int <name>GLuint</name>;</type>
<type>typedef int <name>GLsizei</name>;</type>
<type>typedef float <name>GLfloat</name>;</type>
<type>typedef float <name>GLclampf</name>;</type>
<type>typedef double <name>GLdouble</name>;</type>
<type>typedef double <name>GLclampd</name>;</type>
<type>typedef void *<name>GLeglImageOES</name>;</type>
<type>typedef char <name>GLchar</name>;</type>
<type>typedef char <name>GLcharARB</name>;</type>
*/
using GLBbool = unsigned int;
using GLBbitfield = unsigned int;
using GLBbyte = char;
using GLBshort = short;
using GLBint = int;
using GLBubyte = unsigned char;
using GLBushort = unsigned short;
using GLBuint = unsigned int;
using GLBsizei = int;
using GLBfloat = float;
using GLBclampf = float;
using GLBdouble = double;
using GLBclampd = double;

} // namespace glbinding
