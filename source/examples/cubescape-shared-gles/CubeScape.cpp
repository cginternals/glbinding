
#include "CubeScape.h"

#include <iostream>
#include <algorithm>
#include <fstream>
#include <cmath>

#ifdef cpplocate_FOUND
#include <cpplocate/cpplocate.h>
#endif

#include <glbinding/gl/gl.h>

#include "glutils.h"
#include "RawFile.h"

using namespace gl;

namespace
{


bool readFile(const std::string & filePath, std::string & content)
{
    // http://insanecoding.blogspot.de/2011/11/how-to-read-in-file-in-c.html

    std::ifstream in(filePath, std::ios::in | std::ios::binary);

    if (!in)
        return false;

    content = std::string(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
    return true;
}

std::string determineDataPath()
{
#ifdef cpplocate_FOUND
    std::string path = cpplocate::locatePath("data/cubescape-gles", "share/glbinding/cubescape-gles", reinterpret_cast<void *>(&gl::glCreateShader));
    if (path.empty()) path = "./data";
    else              path = path + "/data";
#else
    const std::string path = "./data";
#endif

    return path;
}


} // namespace


CubeScape::CubeScape()
: m_initialized(false)
, a_vertex(-1)
, u_transform(-1)
, u_time(-1)
, u_numcubes(-1)
, u_terrain(-1)
, u_patches(-1)
, m_vao(0)
, m_indices(0)
, m_vertices(0)
, m_program(0)
, m_a(0.f)
, m_numcubes(16)
{
    // Get data path
    std::string dataPath = determineDataPath();

    GLuint vs = glCreateShader(GL_VERTEX_SHADER);
    GLuint gs = glCreateShader(GL_GEOMETRY_SHADER);
    GLuint fs = glCreateShader(GL_FRAGMENT_SHADER);

    std::string vertexSource;
    std::string geometrySource;
    std::string fragmentSource;

    auto success = readFile(dataPath + "/cubescape-gles/cubescape.vert", vertexSource);
    success &= readFile(dataPath + "/cubescape-gles/cubescape.geom", geometrySource);
    success &= readFile(dataPath + "/cubescape-gles/cubescape.frag", fragmentSource);

    if (!success)
    {
        std::cerr << "Could not load shaders in " << dataPath + "/cubescape-gles/cubescape.*" << "." << std::endl;
        return;
    }

    const char * vertSource = vertexSource.c_str();
    const char * geomSource = geometrySource.c_str();
    const char * fragSource = fragmentSource.c_str();

    glShaderSource(vs, 1, &vertSource, nullptr);
    glCompileShader(vs);
    compile_info(vs);

    glShaderSource(gs, 1, &geomSource, nullptr);
    glCompileShader(gs);
    compile_info(gs);

    glShaderSource(fs, 1, &fragSource, nullptr);
    glCompileShader(fs);
    compile_info(fs);

    m_program = glCreateProgram();

    glAttachShader(m_program, vs);
    glAttachShader(m_program, gs);
    glAttachShader(m_program, fs);

    glLinkProgram(m_program);
    link_info(m_program);

    glUseProgram(m_program);

    // setup uniforms

    u_transform = glGetUniformLocation(m_program, "modelViewProjection");
    u_time = glGetUniformLocation(m_program, "time");
    u_numcubes = glGetUniformLocation(m_program, "numcubes");

    m_time = clock::now();

    u_terrain = glGetUniformLocation(m_program, "terrain");
    u_patches = glGetUniformLocation(m_program, "patches");

    a_vertex = glGetAttribLocation(m_program, "a_vertex");

    glUseProgram(0);

    // create textures

    glGenTextures(2, m_textures);

    glBindTexture(GL_TEXTURE_2D, m_textures[0]);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    {
        RawFile terrain(dataPath + "/cubescape-gles/terrain.64.64.r.ub.raw");
        if (!terrain.isValid())
            std::cout << "warning: loading texture from " << terrain.filePath() << " failed.";

        glTexImage2D(GL_TEXTURE_2D, 0, GL_R8, 64, 64, 0, GL_RED, GL_UNSIGNED_BYTE, terrain.data());
    }

    glBindTexture(GL_TEXTURE_2D, m_textures[1]);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    {
        RawFile patches(dataPath + "/cubescape-gles/patches.64.16.rgb.ub.raw");
        if (!patches.isValid())
            std::cout << "warning: loading texture from " << patches.filePath() << " failed.";

        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB8, 64, 16, 0, GL_RGB, GL_UNSIGNED_BYTE, patches.data());
    }

    // create cube

    static const GLfloat vertices_data[24] =
    {
        -1.f, -1.f, -1.f, // 0
        -1.f, -1.f,  1.f, // 1
        -1.f,  1.f, -1.f, // 2
        -1.f,  1.f,  1.f, // 3
         1.f, -1.f, -1.f, // 4
         1.f, -1.f,  1.f, // 5
         1.f,  1.f, -1.f, // 6
         1.f,  1.f,  1.f  // 7
    };

    static const GLubyte indices_data[18] = {
        2, 3, 6, 0, 1, 2, 1, 5, 3, 5, 4, 7, 4, 0, 6, 5, 1, 4 };

    glGenVertexArrays(1, &m_vao);
    glBindVertexArray(m_vao);

    glGenBuffers(1, &m_vertices);
    glBindBuffer(GL_ARRAY_BUFFER, m_vertices);
    glBufferData(GL_ARRAY_BUFFER, (8 * 3) * sizeof(float), vertices_data, GL_STATIC_DRAW);

    glGenBuffers(1, &m_indices);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_indices);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, (6 * 3) * sizeof(GLubyte), indices_data, GL_STATIC_DRAW);

    glEnableVertexAttribArray(static_cast<GLuint>(a_vertex));

    glVertexAttribPointer(static_cast<GLuint>(a_vertex), 3, GL_FLOAT, GL_FALSE, 0, nullptr);

    glBindVertexArray(0);

    // view

    m_view = mat4::lookAt(0.f, 0.8f,-2.0f, 0.f, -1.2f, 0.f, 0.f, 1.f, 0.f);

    m_initialized = true;
}

CubeScape::~CubeScape()
{
    if (!m_initialized)
    {
        return;
    }

    glDeleteBuffers(1, &m_vertices);
    glDeleteBuffers(1, &m_indices);

    glDeleteProgram(m_program);
}

void CubeScape::setNumCubes(int _numCubes)
{
    m_numcubes = std::min(4096, std::max(1, _numCubes));
}

int CubeScape::numCubes() const
{
    return m_numcubes;
}

void CubeScape::resize(int width, int height)
{
    m_projection = mat4::perspective(40.f, static_cast<GLfloat>(width) / static_cast<GLfloat>(height), 1.f, 4.f);

    glViewport(0, 0, width, height);
}

void CubeScape::draw()
{
    if (!m_initialized)
    {
        return;
    }

    glClearColor(0.f, 0.f, 0.f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glUseProgram(m_program);

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, m_textures[0]);
    glUniform1i(u_terrain, 0);

    glActiveTexture(GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, m_textures[1]);
    glUniform1i(u_patches, 1);

    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - m_time);
    float t = static_cast<float>(ms.count()) * 1e-3f;

    const mat4 transform = m_projection * m_view * mat4::rotate(t * 0.1f, 0.f, 1.f, 0.f);

    glUniformMatrix4fv(u_transform, 1, GL_FALSE, &transform[0]);
    glUniform1f(u_time, t);
    glUniform1i(u_numcubes, m_numcubes);

    glEnable(GL_DEPTH_TEST);

    glBindVertexArray(m_vao);
    glDrawElementsInstanced(GL_TRIANGLES, 18, GL_UNSIGNED_BYTE, 0, m_numcubes * m_numcubes);

    glBindVertexArray(0);
    glUseProgram(0);
}
