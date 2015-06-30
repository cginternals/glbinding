#pragma once

struct _XDisplay;
typedef struct _XDisplay Display;

using Window = unsigned long;

int render(Display * display, Window window);
