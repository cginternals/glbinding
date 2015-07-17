#pragma once

using EGLWindow = unsigned long;

void initializeDisplay();
void uninitializeDisplay();

void createGLContext(EGLWindow window);
void createGLESContext(EGLWindow window);

void makeCurrent();
void doneCurrent();

void swapBuffers();

void releaseContext();
