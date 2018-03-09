
#pragma once


#include <glxbinding/nogl.h>
#include <glxbinding/glxbinding_api.h>
#include <glxbinding/glxbinding_features.h>
#include <glxbinding/glx/boolean.h>

#include <cstddef>
#include <cstdint>
#include <array>

#include <functional>
#include <ostream>
#include <string>


#ifdef _MSC_VER
#define GL_APIENTRY __stdcall
#else
#define GL_APIENTRY
#endif


namespace glx
{


enum class GLextension : int;
using GLXFBConfigID = XID;
using GLXFBConfig = struct __GLXFBConfigRec *;
using GLXContextID = XID;
using GLXContext = struct __GLXcontextRec *;
using GLXPixmap = XID;
using GLXDrawable = XID;
using GLXWindow = XID;
using GLXPbuffer = XID;
using __GLXextFuncPtr = void (GL_APIENTRY *)(void);
using GLXVideoCaptureDeviceNV = XID;
using GLXVideoDeviceNV = unsigned int;
using GLXVideoSourceSGIX = XID;
using GLXFBConfigIDSGIX = XID;
using GLXFBConfigSGIX = struct __GLXFBConfigRec *;
using GLXPbufferSGIX = XID;
using GLXPbufferClobberEvent = struct {
    int event_type;             /* GLX_DAMAGED or GLX_SAVED */
    int draw_type;              /* GLX_WINDOW or GLX_PBUFFER */
    unsigned long serial;       /* # of last request processed by server */
    Bool send_event;            /* true if this came for SendEvent request */
    Display *display;           /* display the event was read from */
    GLXDrawable drawable;       /* XID of Drawable */
    unsigned int buffer_mask;   /* mask indicating which buffers are affected */
    unsigned int aux_buffer;    /* which aux buffer was affected */
    int x, y;
    int width, height;
    int count;                  /* if nonzero, at least this many more */
} GLXPbufferClobberEvent;
using GLXBufferSwapComplete = struct {
    int type;
    unsigned long serial;       /* # of last request processed by server */
    Bool send_event;            /* true if this came from a SendEvent request */
    Display *display;           /* Display the event was read from */
    GLXDrawable drawable;       /* drawable on which event was requested in event mask */
    int event_type;
    int64_t ust;
    int64_t msc;
    int64_t sbc;
} GLXBufferSwapComplete;
using GLXEvent = union __ {
    GLXPbufferClobberEvent glxpbufferclobber;
    GLXBufferSwapComplete glxbufferswapcomplete;
    long pad[24];
} GLXEvent;
using GLXStereoNotifyEventEXT = struct {
    int type;
    unsigned long serial;
    Bool send_event;
    Display *display;
    int extension;
    int evtype;
    GLXDrawable window;
    Bool stereo_tree;
} GLXStereoNotifyEventEXT;
using GLXBufferClobberEventSGIX = struct {
    int type;
    unsigned long serial;   /* # of last request processed by server */
    Bool send_event;        /* true if this came for SendEvent request */
    Display *display;       /* display the event was read from */
    GLXDrawable drawable;   /* i.d. of Drawable */
    int event_type;         /* GLX_DAMAGED_SGIX or GLX_SAVED_SGIX */
    int draw_type;          /* GLX_WINDOW_SGIX or GLX_PBUFFER_SGIX */
    unsigned int mask;      /* mask indicating which buffers are affected*/
    int x, y;
    int width, height;
    int count;              /* if nonzero, at least this many more */
} GLXBufferClobberEventSGIX;
using GLXHyperpipeNetworkSGIX = struct {
    char    pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int     networkId;
} GLXHyperpipeNetworkSGIX;
using GLXHyperpipeConfigSGIX = struct {
    char    pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int     channel;
    unsigned int participationType;
    int     timeSlice;
} GLXHyperpipeConfigSGIX;
using GLXPipeRect = struct {
    char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int srcXOrigin, srcYOrigin, srcWidth, srcHeight;
    int destXOrigin, destYOrigin, destWidth, destHeight;
} GLXPipeRect;
using GLXPipeRectLimits = struct {
    char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int XOrigin, YOrigin, maxHeight, maxWidth;
} GLXPipeRectLimits;
using GLuint_array_2 = std::array<GLuint, 2>;

} // namespace glx


// Type Integrations


namespace std
{


template<>
struct hash<glx::GLextension>
{
    hash<std::underlying_type<glx::GLextension>::type>::result_type operator()(const glx::GLextension & t) const
    {
        return hash<std::underlying_type<glx::GLextension>::type>()(static_cast<std::underlying_type<glx::GLextension>::type>(t));
    }
};


} // namespace std


namespace glx
{


GLXBINDING_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);


} // namespace glx


