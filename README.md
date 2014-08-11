# glbinding

*glbinding* is a generated C++ binding for OpenGL which is solely based on the new xml-based OpenGL API specification (gl.xml). It is a fully fledged OpenGL API binding compatible with current code based on other C bindings, e.g., [GLEW](http://glew.sourceforge.net/) or [glad](https://github.com/Dav1dde/glad). The binding is generated using python scripts and templates, that can be easily adapted to fit custom needs.

*glbinding* leverages modern C++11 features like enum classes, lambdas, and variadic templates, instead of relying on macros (all OpenGL symbols are real functions and variables). It provides [type-safe parameters](#type-safe-parameters), [per feature API header](#per-feature-api-header), [lazy function resolution](#lazy-function-resolution), [multi-context](#multi-context-support) and [multi-thread](#multi-thread-support) support, [global](#global-callbacks) and [local](#local-callbacks) function callbacks, [meta information](#meta-information) about the generated OpenGL binding and the OpenGL runtime, as well as multiple [examples](#examples) for quick-starting your projects. 

Current gl code, written with a typical C binding for OpenGL is fully compatible for the use with *glbinding*.
Just replace all includes to the old binding and use the appropriate api namespace, e.g., ```gl```: 

```
#include <glbinding/gl/gl.h>
#include <glbinding/Binding.h>

using namespace gl;

int main()
{
  // create context, e.g. using GLFW, Qt, SDL, GLUT, ...

  glbinding::Binding::initialize();

  glBegin(GL_TRIANGLES);
  // ...
  glEnd();
}
```

## Features

##### Type-Safe Parameters

Every parameter of an OpenGL function expects a specific type of value and *glbinding* enforces, if possible, this type in its interface. This results in the following behavior:
```
glClear(GL_COLOR_BUFFER_BIT); // valid
glClear(GL_FRAMEBUFFER);      // compile error: bitfield of group ClearBufferMask expected, got GLenum
```
For bitfields there are extensively specified groups that are additionally used to enforce type-safety (a bitfield value can be used by several groups). Combinations of bitfields that share no group results in a compile error.
```
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // valid
glClear(GL_COLOR_BUFFER_BIT | GL_MAP_READ_BIT);     // compile error: both bitfields share no group

glClear(GL_STENCIL_BUFFER_BIT | GL_LIGHTING_BIT);   // compile error: bitwise or operation is valid, 
                                                    //  the shared group is AttribMask, but the
                                                    //  resulting group does not match the expected.
```
The groups for enums are not yet as complete as we would like them to be to enable per function compile time errors when trying to call functions with values from the wrong enum group. For example, ```GL_VERTEX_SHADER``` is in the group ```ShaderType``` and ```GL_COMPUTE_SHADER``` is not.

##### Per Feature API Header

Enums, bitfields, and functions can be included as usual in a combined ```gl.h``` header or individually via ```bitfield.h```, ```enum.h```, and ```functions.h``` respectively. Additionally, these headers are available for  featured-based API subsets, each using a specialized namespace, e.g.:
* ```functions32.h``` provides all OpenGL commands available up to 3.2 in namespace ```gl32```.
* ```functions32core.h``` provides all non-deprecated OpenGL commands available up to 3.2 in namespace ```gl32core```.
* ```functions32ext.h``` provides all OpenGL commands specified either in 3.3 and above, or by extension in ```gl32ext```.

Depending on the intended use-case, this allows to (1) limit coding to a specific OpenGL feature and (2) reduces switching to other features to a replacement of includes and using directives. In both cases, non-featured symbols do not compile.

Furthermore, *glbinding* provides explicit, non-feature dependent headers for special values (```values.h```), booleans (```boolean.h```), and basic types (```types.h```). This allows for refined includes and can reduce compile time.


##### Lazy Function Pointer Resolution

By default, *glbinding* tries to resolve all OpenGL function pointers during initialization, which can consume some time:
```
glbinding::Binding::initialize(); // immediate function pointer resolution
```
Alternatively, the user can decide that functions pointers are resolved only when used for the first time. This is achieved by:
```
glbinding::Binding::initialize(false); // lazy function pointer resolution
```

##### Multi-Context Support

*glbinding* has built-in support for multiple contexts. The only requirement is, that the currently active context has to be specified. This feature mixes well with multi-threaded applications, but keep in mind that concurrent use of one context often result in non-meaningful communication with the OpenGL driver.

To use multiple contexts, use your favorite context creation library (e.g., glut, SDL, egl, glfw, Qt) to request as much contexts as required. The functions to make a context current should be provided by this library and is not part of *glbinding* (except that you can get the current context handle). When using multiple contexts, first, each has to be initialized when active: 
```
// use context library to make current, e.g., glfwMakeCurrent(...)
glbinding::Binding::initialize();
```
Second, contexts switches are required to be communicated to *glinding* explicitly in order to have correctly dispatched function pointers:
```
// use the current active context
glbinding::Binding::useCurrentContext();               

// use another context, identified by platform-specific handle
glbinding::Binding::useContext(ContextHandle context); 
```
This feature is mainly intended for platforms where function pointers for different requested OpenGL features may vary.


##### Multi-Threading Support

Concurrent use of *glbinding* is mainly intended to the usage of multiple contexts in different threads (multiple threads operating on a single OpenGL context requires locking, which *glbinding* will not provide).
For this, *glbinding* supports multiple active contexts, one per thread. This necessitates that *glbinding* gets informed in each thread which context is currently active (see [multi-context](#multi-context-support)).


##### Function Callbacks

ToDo
* Before and After Callbacks
* Callback Scopes
 * Global Function Callbacks (#global-callbacks)
 * Local Function Callbacks (#local-callbacks) 
* Parameter and Return Value Callbacks

Never forget glGetError() again
Logging all OpenGL calls


##### Meta Information

ToDo
* Meta information about the generated OpenGL binding and the OpenGL runtime
  * OpenGL extension support
    * Since when is an extension in the core profile?
    * Is an extension supported by the current context?
    * Collect all supported extensions as list of enums
  * GL symbol to string conversion
  * string to GL symbol conversion

e.g., allows e.g. to be accessed via scripts when turning on OPTION_GL_BY_STRINGS


##### Performance

*glbinding* causes no signigicant impact on runtime performance. The provided comparison example supports this statement. It compares the execution times of identical rendering code, dispatched once with *glbinding* and once with glew. Various results are provided in the [Examples](https://github.com/hpicgs/glbinding/wiki/examples) wiki.


##### Binding Generation

ToDo

As a user of glbinding you are able to update the gl.xml by yourself and generate the glbinding code.
The necessary python scripts are provided in this repository.

Patching gl.xml 

Check out the [wiki](https://github.com/hpicgs/glbinding/wiki) for detailed examples.



## Examples 

##### callbacks 

ToDo - shows extended use of callbacks by logging every function call

##### comparison

ToDo - glew comparison example, shows that there is no measurable overhead involved in using glbinding

##### functions

ToDo - lists functions sorted by extensions and shows supported gl versions (similar to gl extensions viewer)

##### meta 

ToDo - shows all available meta information (depends on options)

##### cubescape

ToDo - little example showing basic rendering 

##### qt-cubescape 

ToDo - same example, but embeded into a qt-window


## Project health

<a href="https://scan.coverity.com/projects/2705">
  <img alt="Coverity Scan Build Status"
       src="https://scan.coverity.com/projects/2705/badge.svg"/>
</a>


## Run-time dependencies

The only run-time dependencies of glbinding are the STL of the used compiler and an OpenGL library, dynamically linked with your application.


## Compile-time dependencies

 * CMake (2.8.12)
 * C++11-Compiler (e.g. GCC 4.7, Clang 3.3, MSVC 2013 Update 3)

Optional dependencies
 * Python 2 or 3 to generate the binding
 * Qt for some examples
 * [GLFW 3](http://www.glfw.org/) for some examples
 * GLEW for some examples
