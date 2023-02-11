
#pragma once

#include <glbinding/gl30/gl.h>

void compile_info(const gl30::GLuint shader);
void link_info(const gl30::GLuint program);

struct mat4
{
    mat4();

    inline gl30::GLfloat & operator[](const int i) { return m[i]; }
    inline const gl30::GLfloat & operator[](const int i) const { return m[i]; }

    static mat4 lookAt(gl30::GLfloat eyex, gl30::GLfloat eyey, gl30::GLfloat eyez
        , gl30::GLfloat centerx, gl30::GLfloat centery, gl30::GLfloat centerz, gl30::GLfloat upx, gl30::GLfloat upy, gl30::GLfloat upz);

    static mat4 perspective(gl30::GLfloat fovy, gl30::GLfloat aspect, gl30::GLfloat zNear, gl30::GLfloat zFar);

    static mat4 translate(gl30::GLfloat x, gl30::GLfloat y, gl30::GLfloat z);
    static mat4 scale(gl30::GLfloat x, gl30::GLfloat y, gl30::GLfloat z);
    static mat4 rotate(gl30::GLfloat angle, gl30::GLfloat x, gl30::GLfloat y, gl30::GLfloat z);

    gl30::GLfloat m[16];
};

mat4 operator*(const mat4 & a, const mat4 & b);

struct vec3
{
    vec3();
    vec3(gl30::GLfloat x, gl30::GLfloat y, gl30::GLfloat z);

    inline gl30::GLfloat & operator[](const int i) { return v[i]; }
    inline const gl30::GLfloat & operator[](const int i) const { return v[i]; }

    vec3 & operator+(const vec3 & rhs);
    vec3 & operator-(const vec3 & rhs);
    vec3 & operator*(const vec3 & rhs);
    vec3 & operator/(const vec3 & rhs);

    gl30::GLfloat length();
    void normalize();

    gl30::GLfloat v[3];
};

vec3 crossp(const vec3 & a, const vec3 & b);
gl30::GLfloat dotp(const vec3 & a, const vec3 & b);
