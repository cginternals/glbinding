glbinding is an automatically generated C++ binding for OpenGL (using the gl.xml).
The current release is [glbinding-v1.0.0](https://github.com/hpicgs/glbinding/releases/tag/v1.0.0).
The implementation uses modern C++11 features like enum classes, lambdas and variadic templates.
All defined OpenGL symbols are real functions and variables, they don't rely on macros.
It should serve as an alternative to other OpenGL bindings like [GLEW](http://glew.sourceforge.net/) and [glad](https://github.com/Dav1dde/glad).

The standard glbinding API setup looks like
```
#include <glbinding/gl/gl.h>
#include <glbinding/glbinding.h>

using namespace gl;

int main()
{
  // create context, e.g. using GLFW, Qt, SDL, GLUT, ...
  
  glbinding::initialize();
  
  glBegin(GL_TRIANGLES);
  // ...
  glEnd();
}
```

Current code written with a typical C binding for OpenGL (e.g. GLEW) is fully compatible for the use with glbinding.
Just replace all includes to the old binding with the include to glbinding and use the ```gl``` namespace.
Besides the actual binding, glbinding comes with these additional features:
* Per OpenGL Feature API headers (e.g. gl44core.h)
  * Core, extensions, combined
  * Per feature functions and constants (enums, bitfields, special values)
  * Separate namespaces
* Type-safe OpenGL parameters (enums, bitfields, bitfield groups)
  * Never mix bitfields of different groups again
  * Code completion for all allowed values
* Global callbacks
  * Never forget glGetError() again
  * Logging all OpenGL calls
* Per function callbacks
* Meta information about the generated OpenGL binding and the OpenGL runtime
  * OpenGL extension support
    * Since when is an extension in the core profile?
    * Is an extension supported by the current context?
    * Collect all supported extensions as list of enums
  * GL symbol to string conversion
  * string to GL symbol conversion
* Multi-context support (explicit switch required)
* Multi-threading support

As a user of glbinding you are able to update the gl.xml by yourself and generate the glbinding code.
The necessary python scripts are provided in this repository.

Check out the [wiki](https://github.com/hpicgs/glbinding/wiki) for detailed examples.

### Run-time dependencies

The only run-time dependencies of glbinding are the STL of the used compiler and an OpenGL dynamically linked library, linked with your application.

### Compile-time dependencies

 * CMake (2.8.12)
 * C++11-Compiler (e.g. GCC 4.7, Clang 3.3, MSVC 2013 Update 3)

Optional dependencies
 * Python 2 or 3 to generate the binding
 * Qt for some examples
 * [GLFW 3](http://www.glfw.org/) for some examples
 * GLEW for some examples

### Development Notes

If you are contributing to this project, please keep the following notes in mind:
* Add your name and email to the AUTHORS file.
* Follow coding conventions according to google's [C++ Style Guide](http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml).
* Commits should provide a meaningful  message, which uses the imperative, present tense: "change", not "changed" nor "changes", AND start with a capital letter.
* Commits should always refer to an issue: use ```#xxx```, ```fix #xxx```, or ```close #xxx```.
* Pull Requests are reviewed by at least one other developer on another platform.
* Use lazy initialization as often as possible for time consuming tasks.
* Member Variables always start with ```m_```, ```g_```, and ```s_``` (e.g.,```m_member```, ```g_global```, and ```s_static```)..
* Interface or abstract class names always start with Abstract (e.g., ```AbstractArray```).
* Enforce strict include sequence: cpp-related header, std, glbinding.
