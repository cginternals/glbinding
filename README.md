*glbinding* is a generated C++ binding for OpenGL solely based on the new xml-based OpenGL API specification (gl.xml). It is a fully fledged OpenGL API binding compatible with current code based on other C bindings, e.g., [GLEW](http://glew.sourceforge.net/) or [glad](https://github.com/Dav1dde/glad). The binding is generated using python scripts and templates, that can be easily adapted to fit custom needs.

*glbinding* leverages modern C++11 features like enum classes, lambdas, and variadic templates, instead of relying on macros (all OpenGL symbols are real functions and variables). It provides [type-safe parameters](#type-safe-parameters), [per feature API header](#per-feature-api-header), [lazy function resolving](#lazy-function-resolving), [multi-context](#multi-context-support) and [multi-thread](#multi-thread-support) support, [global](#global-callbacks) and [local](#local-callbacks) function callbacks, [meta information](#meta-information) about the generated OpenGL binding and the OpenGL runtime, as well as multiple [examples](#examples) for quick-starting your projects. 

Current code written with a typical C binding for OpenGL is fully compatible for the use with *glbinding*.
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

#### Type-Safe Parameters 
moo

#### Per Feature API Header

Enums, bitfields, and functions can be included as usual in a combined ```gl.h``` header or individually via ```bitfield.h```, ```enum.h```, and ```functions.h``` respectively. Additionally, these headers are available for  featured-based API subsets, each using a specialized namespace, e.g.:
* ```functions32.h``` contains all OpenGL commands available up to Version 3.2 in ```namespace gl32```.
* ```functions32core.h``` contains all non-deprecated OpenGL commands available up to Version 3.2 in ```namespace gl32```.
* ```functions32ext.h``` containing all OpenGL commands not yet specified in Version 3.2 in ```namespace gl32```.
Depending on the use-case this allows to (1) limit coding to a specific OpenGL feature and (2) reduces switching to other features to swapping includes and using directives. In both cases, non-featured commads will not compile.


* Per OpenGL Feature API headers (e.g. gl44core.h)
  * Core, extensions, combined
  * Per feature functions and constants (enums, bitfields, special values)
  * Separate namespaces


#### Lazy Function Resolving
moo

#### Multi-Context Support
moo

#### Multi-Thread Support
moo

#### Function Callbacks

* Before and After Callbacks
* Callback Scopes
 * Global Function Callbacks (#global-callbacks)
 * Local Function Callbacks (#local-callbacks) 
* Parameter and Return Value Callbacks

#### Meta Information
moo


## Examples 
foo




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




### Project health
<a href="https://scan.coverity.com/projects/2705">
  <img alt="Coverity Scan Build Status"
       src="https://scan.coverity.com/projects/2705/badge.svg"/>
</a>



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


(#type-safe-parameters)### TypeSafe

foobar
