
#include <iostream>

#include <gtk/gtk.h>

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
    GtkApplication *app = nullptr;
    CubeScape * cubescape = nullptr;
    GtkEventController * controller = nullptr;
    GtkGLArea * glarea = nullptr;
}

gboolean key_press(GtkEventController *controller, guint keyval, guint keycode, GdkModifierType state, GtkEventControllerKey *event_controller) {
    bool numCubesChanged = false;

    switch (keyval)
    {
    case GDK_KEY_Q:
    case GDK_KEY_q:
        if (state & GDK_CONTROL_MASK)
        {
            g_application_quit(G_APPLICATION(app));
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

        gtk_gl_area_queue_render(glarea);
    }

    return false;
}

void realize(GtkGLArea *glarea) {
    gtk_gl_area_make_current(glarea);
    
    // initialize glbinding
    glbinding::initialize(glbinding::getProcAddress, true); // only resolve functions that are actually used (lazy)
    glbinding::aux::enableGetErrorCallback();

    // print some gl infos (query)
    std::cout << std::endl
        << "OpenGL ES Version:  " << aux::ContextInfo::version() << std::endl
        << "OpenGL ES Vendor:   " << aux::ContextInfo::vendor() << std::endl
        << "OpenGL ES Renderer: " << aux::ContextInfo::renderer() << std::endl;

    std::cout << std::endl
        << "Press i or d to either increase or decrease number of cubes." << std::endl << std::endl;


    cubescape = new CubeScape();

    // initial size
    GtkAllocation* alloc = g_new(GtkAllocation, 1);
    gtk_widget_get_allocation(GTK_WIDGET(glarea), alloc);

    const auto width = alloc->width;
    const auto height = alloc->height;

    g_free(alloc);

    cubescape->resize(width, height);
}

void resize(GtkGLArea * glarea, int width, int height, gpointer /*user_data*/) {
    if (cubescape == nullptr)
    {
        return;
    }

    // gtk_gl_area_make_current(glarea);

    cubescape->resize(width, height);

    gtk_gl_area_queue_render(glarea);
}

gboolean queue_render(GtkWidget *widget, GdkFrameClock * frame_clock, gpointer data)
{
    gtk_gl_area_queue_render(glarea);
    return true;
}

gboolean render(GtkGLArea *glarea, GdkGLContext * /*context*/) {
    // gtk_gl_area_make_current(glarea);
    
    cubescape->draw();

    return true;
}

void activate(GtkApplication* app, gpointer /*user_data*/)
{
    GtkWidget *window;

    window = gtk_application_window_new (app);
    gtk_window_set_title (GTK_WINDOW (window), "Cubescape GTK 4 OpenGL ES");
    gtk_window_set_default_size (GTK_WINDOW (window), 800, 800);

    glarea = reinterpret_cast<GtkGLArea *>(gtk_gl_area_new());
    // until of GTK 4.6
    gtk_gl_area_set_use_es(glarea, true);
    //gtk_gl_area_set_required_version(glarea, 3, 2);
    // as of GTK 4.6
    //gtk_gl_area_set_allowed_apis(glarea, GDK_GL_API_GLES);

    gtk_gl_area_set_has_depth_buffer(glarea, true);
    gtk_gl_area_set_has_stencil_buffer(glarea, false);
    gtk_gl_area_set_auto_render(glarea, true);

    gtk_window_set_child(GTK_WINDOW(window), GTK_WIDGET(glarea));
    
    g_signal_connect(G_OBJECT(glarea), "realize", G_CALLBACK(realize), NULL);
    g_signal_connect(G_OBJECT(glarea), "resize", G_CALLBACK(resize), NULL);
    g_signal_connect(G_OBJECT(glarea), "render", G_CALLBACK (render), NULL);

    controller = gtk_event_controller_key_new();
    g_signal_connect(controller, "key-pressed", G_CALLBACK(key_press), NULL);
    gtk_widget_add_controller(GTK_WIDGET(window), controller);

    // Get the frame clock
    gtk_widget_add_tick_callback(GTK_WIDGET(glarea), queue_render, NULL, 0);

    gtk_window_present (GTK_WINDOW (window));
}

int main(int argc, char * argv[])
{
    int status;

    GApplicationFlags flags;

    #if GLIB_CHECK_VERSION(2, 74, 0)
    flags = G_APPLICATION_DEFAULT_FLAGS;
    #else
    flags = G_APPLICATION_FLAGS_NONE;
    #endif

    app = gtk_application_new("org.glbinding.example-gtk4-gles", flags);
    g_signal_connect(app, "activate", G_CALLBACK (activate), NULL);
    status = g_application_run(G_APPLICATION (app), argc, argv);
    g_object_unref(app);

    return status;
}
