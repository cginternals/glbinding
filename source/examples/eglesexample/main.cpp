
#include  <iostream>
#include  <cstdlib>
#include  <cstring>

using namespace std;

#include  <cmath>
#include  <sys/time.h>
#include <unistd.h>

#include  <X11/Xlib.h>
#include  <X11/Xatom.h>
#include  <X11/Xutil.h>

#include "context.h"

int  main()
{
    Display    *x_display;
    Window      win;

    x_display = XOpenDisplay ( NULL );   // open the standard display (the primary screen)
    if ( x_display == NULL ) {
        cerr << "cannot connect to X server" << endl;
        return 1;
    }

    Window root  =  DefaultRootWindow( x_display );   // get the root window (usually the whole screen)

    XSetWindowAttributes  swa;
    swa.event_mask  =  ExposureMask | PointerMotionMask | KeyPressMask;

    win  =  XCreateWindow (   // create a window with the provided parameters
        x_display, root,
        0, 0, 800, 480,   0,
        CopyFromParent, InputOutput,
        CopyFromParent, CWEventMask,
        &swa );

    XSetWindowAttributes  xattr;

    xattr.override_redirect = False;
    XChangeWindowAttributes ( x_display, win, CWOverrideRedirect, &xattr );

    XWMHints hints;
    hints.input = True;
    hints.flags = InputHint;
    XSetWMHints(x_display, win, &hints);

    XMapWindow ( x_display , win );             // make the window visible on the screen
    XStoreName ( x_display , win , "GLES test" ); // give the window a name

    //runGLES(x_display, win);
    runGLES(x_display, win);

    XDestroyWindow    ( x_display, win );
    XCloseDisplay     ( x_display );

    return 0;
}
