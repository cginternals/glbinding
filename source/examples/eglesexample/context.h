#pragma once

struct _XDisplay;
typedef struct _XDisplay Display;

using Window = unsigned long;

int run(Display * display, Window window);
