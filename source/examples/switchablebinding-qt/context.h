#pragma once

using EGLWindow = unsigned long;

unsigned long long createGLContext(EGLWindow window);
unsigned long long createGLESContext(EGLWindow window);

void releaseContext();
