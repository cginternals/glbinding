
#include <iostream>

#include <gtk/gtk.h>
#include <gdk/gdkkeysyms.h>

#include <glbinding/glbinding.h>
#include <glbinding/Version.h>
#include <glbinding/FunctionCall.h>
#include <glbinding/CallbackMask.h>

#include <glbinding/gl/gl.h>
#include <glbinding/getProcAddress.h>

#include <glbinding-aux/ContextInfo.h>
#include <glbinding-aux/Meta.h>
#include <glbinding-aux/types_to_string.h>
#include <glbinding-aux/ValidVersions.h>
#include <glbinding-aux/debug.h>

#include <CubeScape.h>


using namespace gl;
using namespace glbinding;


namespace
{
    CubeScape * cubescape(nullptr);
    GdkFrameClock * frame_clock;
    gint64 start_time;
}

gboolean key_press(GtkWidget *widget, GdkEventKey *event, gpointer /*user_data*/) {
    bool numCubesChanged = false;

    switch (event->keyval)
    {
    case GDK_KEY_Q:
    case GDK_KEY_q:
        if (event->state & GDK_CONTROL_MASK)
        {
            gtk_main_quit();
            return false;
        }
        break;
    
    case GDK_KEY_I:
    case GDK_KEY_i:
        cubescape->setNumCubes(cubescape->numCubes() + 1);
        numCubesChanged = true;
        
        break;
    
    case GDK_KEY_D:
    case GDK_KEY_d:
        cubescape->setNumCubes(cubescape->numCubes() - 1);
        numCubesChanged = true;

        break;
    }

    if (numCubesChanged)
    {
        const int n = cubescape->numCubes();
        std::cout << "#cubes = " << n << " * " << n << " = " << n * n << std::endl;
    }

    return false;
}

void realize(GtkGLArea *glarea) {
    gtk_gl_area_set_has_depth_buffer(glarea, true);
    gtk_gl_area_make_current(glarea);
    
    // initialize glbinding
    glbinding::initialize(glbinding::getProcAddress, false); // only resolve functions that are actually used (lazy)
    glbinding::aux::enableGetErrorCallback();

    // print some gl infos (query)
    std::cout << std::endl
        << "OpenGL Version:  " << aux::ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << aux::ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << aux::ContextInfo::renderer() << std::endl;

    std::cout << std::endl
        << "Press i or d to either increase or decrease number of cubes." << std::endl << std::endl;


    cubescape = new CubeScape();

    // initial size
    GtkAllocation* alloc = g_new(GtkAllocation, 1);
    gtk_widget_get_allocation(GTK_WIDGET(glarea), alloc);

    const auto width = alloc->width;
    const auto height = alloc->height;

    cubescape->resize(width, height);
    
    g_free(alloc);
    // initial size

    GdkWindow * gdk_window = gtk_widget_get_window(GTK_WIDGET(glarea));
    frame_clock = gdk_window_get_frame_clock(gdk_window);
    start_time = gdk_frame_clock_get_frame_time(frame_clock);
    g_signal_connect_swapped(frame_clock, "update", G_CALLBACK(gtk_gl_area_queue_render), glarea);
    gdk_frame_clock_begin_updating(frame_clock);
}

void resize(GtkGLArea *, GtkAllocation *allocation, gpointer /*user_data*/) {
    if (cubescape == nullptr)
    {
        return;
    }

    const auto width = allocation->width;
    const auto height = allocation->height;

    cubescape->resize(width, height);
}

void render(GtkGLArea *glarea, GdkGLContext *context) {
    cubescape->draw();
}

int main(int argc, char * argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkWidget *glarea = gtk_gl_area_new();
    gtk_container_add(GTK_CONTAINER(window), glarea);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    g_signal_connect(glarea, "realize", G_CALLBACK(realize), NULL);
    g_signal_connect(glarea, "size-allocate", G_CALLBACK(resize), NULL);
    g_signal_connect(glarea, "render", G_CALLBACK(render), NULL);
    g_signal_connect (G_OBJECT(window), "key_press_event", G_CALLBACK(key_press), NULL);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
