#pragma once

using EGLWindow = unsigned long;

void createGLContext(EGLWindow window, void *&context, void *&display);
void createGLESContext(EGLWindow window, void *&context, void *&display);

void releaseContext();
