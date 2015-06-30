
#include  <iostream>
#include  <cstdlib>
#include  <cstring>

using namespace std;

#include  <cmath>
#include  <sys/time.h>

#include  <X11/Xlib.h>
#include  <X11/Xatom.h>
#include  <X11/Xutil.h>

#include "render.h"

int  main()
{
    Display    *x_display;
    Window      win;
   ///////  the X11 part  //////////////////////////////////////////////////////////////////
   // in the first part the program opens a connection to the X11 window manager
   //

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
   //Atom  atom;
   //int   one = 1;

   xattr.override_redirect = False;
   XChangeWindowAttributes ( x_display, win, CWOverrideRedirect, &xattr );

   /*
   atom = XInternAtom ( x_display, "_NET_WM_STATE_FULLSCREEN", True );
   XChangeProperty (
      x_display, win,
      XInternAtom ( x_display, "_NET_WM_STATE", True ),
      XA_ATOM,  32,  PropModeReplace,
      (unsigned char*) &atom,  1 );

   XChangeProperty (
      x_display, win,
      XInternAtom ( x_display, "_HILDON_NON_COMPOSITED_WINDOW", True ),
      XA_INTEGER,  32,  PropModeReplace,
      (unsigned char*) &one,  1);

      */

   XWMHints hints;
   hints.input = True;
   hints.flags = InputHint;
   XSetWMHints(x_display, win, &hints);

   XMapWindow ( x_display , win );             // make the window visible on the screen
   XStoreName ( x_display , win , "GLES test" ); // give the window a name

   /*
   // get identifiers for the provided atom name strings
   Atom wm_state   = XInternAtom ( x_display, "_NET_WM_STATE", False );
   Atom fullscreen = XInternAtom ( x_display, "_NET_WM_STATE_FULLSCREEN", False );

   XEvent xev;
   memset ( &xev, 0, sizeof(xev) );

   xev.type                 = ClientMessage;
   xev.xclient.window       = win;
   xev.xclient.message_type = wm_state;
   xev.xclient.format       = 32;
   xev.xclient.data.l[0]    = 1;
   xev.xclient.data.l[1]    = fullscreen;
   XSendEvent (                // send an event mask to the X-server
      x_display,
      DefaultRootWindow ( x_display ),
      False,
      SubstructureNotifyMask,
      &xev );
    */

   ///////  the egl part  //////////////////////////////////////////////////////////////////
   //  egl provides an interface to connect the graphics related functionality of openGL ES
   //  with the windowing interface and functionality of the native operation system (X11
   //  in our case.

   render(x_display, win);

   XDestroyWindow    ( x_display, win );
   XCloseDisplay     ( x_display );

   return 0;
}
