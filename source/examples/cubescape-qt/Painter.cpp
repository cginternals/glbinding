
#include "Painter.h"

#include <glbinding/glbinding.h>

#include <glbinding-aux/ContextInfo.h>

#include "../cubescape/CubeScape.h"


Painter::Painter()
    : m_initialized(false)
    , m_cubescape(nullptr)
{
}

Painter::~Painter()
{
    delete m_cubescape;
}

void Painter::initialize(ProcAddressGetter procAddressCallback)
{
    if (m_initialized)
        return;

    glbinding::initialize(procAddressCallback, false); // only resolve functions that are actually used (lazy)

    m_cubescape = new CubeScape();

    m_initialized = true;
}

void Painter::resize(int width, int height)
{
    m_cubescape->resize(width, height);
}

void Painter::draw()
{
    m_cubescape->draw();
}

void Painter::setNumCubes(int numCubes)
{
    m_cubescape->setNumCubes(numCubes);
}

int Painter::numCubes() const
{
    return m_cubescape->numCubes();
}
