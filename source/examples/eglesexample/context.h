#pragma once

struct _XDisplay;
typedef struct _XDisplay Display;

using Window = unsigned long;

int runGL(Display * display, Window window);
int runGLES(Display * display, Window window);
