
#pragma once

#include <glbinding/gl/types.h>

#include <chrono>

#include "glutils.h"


class CubeScape
{
public:
    CubeScape();
    ~CubeScape();

    void resize(int width, int height);
    void draw();

protected:
    gl::GLint a_vertex;
    gl::GLint u_transform;
    gl::GLint u_time;

    gl::GLuint m_vao;
    gl::GLuint m_indices;
    gl::GLuint m_vertices;

    gl::GLuint m_program;

    gl::GLuint m_textures[2];

    float m_a;

    mat4 m_view;
    mat4 m_projection;

    using clock = std::chrono::system_clock;
    clock::time_point m_time;
};
