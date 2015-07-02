#pragma once

using EGLWindow = unsigned long;

void createGLContext(EGLWindow window);
void createGLESContext(EGLWindow window);

void releaseContext();
