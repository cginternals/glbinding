
#pragma once

#include <glbinding/gl/types.h>

#include <chrono>

#include "glutils.h"


class CubeScape
{
    using clock = std::chrono::system_clock;

public:
    CubeScape();
    ~CubeScape();

    void resize(int width, int height);
    void draw();

    void setNumCubes(int numCubes);
    int numCubes() const;

protected:
    bool m_initialized;

    gl::GLint a_vertex;
    gl::GLint u_transform;
    gl::GLint u_time;
    gl::GLint u_numcubes;
    gl::GLint u_terrain;
    gl::GLint u_patches;

    gl::GLuint m_vao;
    gl::GLuint m_indices;
    gl::GLuint m_vertices;

    gl::GLuint m_program;

    gl::GLuint m_textures[2];
    
    float m_a;
    int m_numcubes;

    mat4 m_view;
    mat4 m_projection;

    clock::time_point m_time;
};
