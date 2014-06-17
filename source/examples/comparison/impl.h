#pragma once

extern const char * vertexShaderCode;
extern const char * fragmentShaderCode;

struct vec2 { float x; float y; };

extern const vec2 cornerData[4];

void glewExample();
void glewExampleWithErrorChecking();

void glbindingExample();
void glbindingSetErrorChecking(bool b);
