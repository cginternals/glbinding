#pragma once

using EGLWindow = unsigned long;

void initializeDisplay(EGLWindow window);
void uninitializeDisplay();

void createGLContext();
void createGLESContext();

void makeCurrent();
void doneCurrent();

void swapBuffers();

void releaseContext();
