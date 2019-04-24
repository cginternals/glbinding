
#pragma once


#include <functional>


class CubeScape;

// wrapper for cubescape to avoid overlapping qopengl and glbinding includes

// Note: Qt could use a NO_GL_FUNCTIONS define (similar to GLFW_INCLUDE_NONE), but for
//       now the QOpenGLContext is tightly coupled with qopengl.h and QOpenGLFunctions.

using ProcAddress = void(*)();
using ProcAddressGetter = ProcAddress(*)(const char*);

class Painter
{
public:
    Painter();
    ~Painter();

    void initialize(ProcAddressGetter procAddressCallback);

    void resize(int width, int height);
    void draw();

    void setNumCubes(int numCubes);
    int numCubes() const;

protected:
    bool m_initialized;

    CubeScape * m_cubescape;
};
