
struct vec2
{
    float x;
    float y;
};

const vec2 cornerData[] = { { 0, 0 }, { 1, 0 }, { 0, 1 }, { 1, 1 } };

const char * vert = R"(
#version 150
#extension GL_ARB_explicit_attrib_location : require

layout (location = 0) in vec2 corner;

out vec4 color;

void main()
{
gl_Position = vec4(corner * 2.0 - 1.0, 0.0, 1.0);
color = vec4(corner, 0.0, 1.0);
}

)";

const char * frag = R"(
#version 150
#extension GL_ARB_explicit_attrib_location : require

layout (location = 0) out vec4 fragColor;

in vec4 color;

void main()
{
fragColor = color;
}

)";

GLuint vao;
GLuint quad;
GLuint program;
GLuint vs;
GLuint fs;
GLuint a_vertex;
