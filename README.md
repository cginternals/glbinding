[//]: # (Comment)

![glbinding](glbinding-logo.png)

The state-of-the-art way for low-level OpenGL programming;
*glbinding* is a full-fledged, [MIT licensed](http://opensource.org/licenses/MIT), cross-platform C++ binding for the OpenGL API professionally maintained by [CG Internals](http://www.cginternals.com).

*glbinding* leverages modern C++11 features like enum classes, lambdas, and variadic templates, instead of relying on macros; 
All OpenGL symbols are real functions and variables. 
It provides type-safe parameters, per feature API header, lazy function resolution, multi-context and multi-thread support, 
global and local function callbacks, meta information about the generated OpenGL binding and the OpenGL runtime, as well as tools and examples for quick-starting your projects. 
Based on the OpenGL API specification ([gl.xml](https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/gl.xml)) 
*glbinding* is generated using python scripts and templates that can be easily adapted to fit custom needs.

See what's new in [glbinding-2.0.0](https://github.com/hpicgs/glbinding/releases/tag/v2.0.0).

Code written using a typical C binding for OpenGL, e.g., [GLEW](http://glew.sourceforge.net/), is fully compatible for the use with *glbinding*.
Just replace all includes to the old binding and use the appropriate API namespace, e.g., ```gl```: 

```cpp
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

## Resources

* [Professional Support and Services](https://www.cginternals.com) by CG Internals
* [Tools](https://github.com/hpicgs/glbinding/wiki/tools)
* [Examples](https://github.com/hpicgs/glbinding/wiki/examples)
* [Project Health](#project-health)
* [Context Creation Cheat Sheet](https://github.com/hpicgs/glbinding/wiki/Context-Creation-Cheat-Sheet)

###### Installation and Development
* [Install Instructions](#install-instructions)
* [Build form Source](#build-from-source)
* [Tips for Linking](#tips-for-linking)

###### Feature Documentation and Code Snippets
* [Type-safe Parameters](#type-safe-parameters)
* [Per Feature API Header](#per-feature-api-header)
* [Lazy Function Resolution](#lazy-function-pointer-resolution)
* [Multi-context Support](#multi-context-support)
* [Multi-thread Support](#multi-threading-support)
* [Global and Local Function Callbacks](#function-callbacks) 
* [Meta Information System](#meta-information)
* [Doxygen Documentation](cginternals.github.io/glbinding/documentation)




## Project Health

| Service | System | Compiler | Status |
| ------- | ------ | -------- | -----: |
|  [Travis-CI](https://travis-ci.org/cginternals/glbinding) | Ubuntu 14.04 | GCC 4.8, Clang 3.5 | [![Build Status](https://travis-ci.org/cginternals/glbinding.svg?branch=glbinding-2.0-release)](https://travis-ci.org/cginternals/glbinding) |
| [Coverity](https://scan.coverity.com/projects/6828?tab=overview) | Ubuntu | GCC 4.8 | [![Coverity Status](https://scan.coverity.com/projects/6828/badge.svg)](https://scan.coverity.com/projects/6828) |
| Jenkins <br><br><br><br> | Ubuntu 14.04 <br><br><br><br> | GCC 4.8 <br> GCC 4.9 <br> GCC 5.3 <br> Clang 3.5 <br> | [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-linux-gcc4.8)](http://jenkins.hpi3d.de/job/glbinding-linux-gcc4.8) <br> [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-linux-gcc4.9)](http://jenkins.hpi3d.de/job/glbinding-linux-gcc4.9) <br> [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-linux-gcc5.3)](http://jenkins.hpi3d.de/job/glbinding-linux-gcc5.3) <br> [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-linux-clang3.5)](http://jenkins.hpi3d.de/job/glbinding-linux-clang3.5) <br> |
| Jenkins <br><br> | Windows 10 <br><br> | MSVC 2013 Update 5 <br>  MSVC 2015 Update 1 <br> | [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-windows-msvc2013)](http://jenkins.hpi3d.de/job/glbinding-windows-msvc2013) <br> [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-windows-msvc2015)](http://jenkins.hpi3d.de/job/glbinding-windows-msvc2015) <br> |
| Jenkins | OS X 10.10 | Clang 3.5 | [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-osx-clang3.5)](http://jenkins.hpi3d.de/job/glbinding-osx-clang3.5) |

Please note that our OS X build node (physical) is currently broken. However, *glbinding* is maintained for OS X as well and there are many people using it in OS X on a regular basis.




## Install Instructions

*glbinding* is available for different platforms using different distribution channels. 
You can either download the source and manually [compile](#build-instructions) it or use one of the [pre-compiled releases](https://github.com/cginternals/glbinding/releases) of this repository.
For systems providing package managers, we generally strive for precompiled packages.

###### Windows

The various glbinding packages can be installed either by downloading an installer, e.g., the [latest x64 installer](https://github.com/cginternals/glbinding/releases/download/v2.0.0/glbinding-2.0.0-msvc14-x64.exe) for Microsoft Visual Studio 2015, or downloading and extracting one of the precompiled archives, e.g. [runtime](https://github.com/cginternals/glbinding/releases/download/v2.0.0/glbinding-2.0.0-msvc14-x64-runtime.zip),
[examples](https://github.com/cginternals/glbinding/releases/download/v2.0.0/glbinding-2.0.0-msvc14-x64-examples.zip),
[dev](https://github.com/cginternals/glbinding/releases/download/v2.0.0/glbinding-2.0.0-msvc14-x64-dev.zip), and
[tools](https://github.com/cginternals/glbinding/releases/download/v2.0.0/glbinding-2.0.0-msvc14-x64-tools.zip).
Alternatively, download the source code and commence [building from source](#build-instructions).

###### Ubuntu

ToDo: apt-get
Alternatively, download the source code and commence [building from source](#build-instructions).

###### Arch Linux

ToDo: apt-get
Alternatively, download the source code and commence [building from source](#build-instructions).

###### OS X

ToDo: homebrew
Alternatively, download the source code and commence [building from source](#build-instructions).

###### Debian-based Systems

There is currently no precompiled package maintained. 
Please download the source code and commence [building from source](#build-instructions).


## Build from Source

##### Prerequisites and Dependencies

* [CMake](https://cmake.org/) 3.0 or higher for building glbinding from source (mandatory for any build from source)
* [git](https://git-scm.com/) for version control and script supporting tasks
* [Python](https://www.python.org/) 2.7, 3.0, or higher   for updating the ```gl.xml``` or re-generating the binding
* [GLFW](http://www.glfw.org/) 3.0 or higher for examples and tools
* [GLEW](http://glew.sourceforge.net/) 1.6 or higher for the comparison example
* [cpplocate](https://github.com/cginternals/cpplocate) for the comparison example
* [Qt5](http://www.qt.io/developers/) 5.0 or higher for the qt-based example
* [Doxygen](http://www.stack.nl/~dimitri/doxygen/) 1.8 or higher for generating the documentation on your system
  * [graphviz](http://www.graphviz.org/) for generating diagrams (optional)

##### Compile Instructions

First, download the source code [as archive](https://github.com/cginternals/glbinding/releases) or via git:
```
git clone https://github.com/cginternals/glbinding.git
cd glbinding
```
Then, depending on the version of glbinding you want to build, choose the appropriate tag or branch, e.g., for the 2.0.0 release:
```
git fetch --tags
git checkout v2.0.0
```

... ToDo.



#### Type-Safe Parameters

Every parameter of an OpenGL function expects a specific data type and *glbinding* enforces, if possible, this type in its interface. This results in the following behavior:

```cpp
glClear(GL_COLOR_BUFFER_BIT); // valid
glClear(GL_FRAMEBUFFER);      // compilation error: bitfield of group ClearBufferMask expected, got GLenum
```

For bitfields there are extensively specified groups that are additionally used to enforce type-safety (note: a bitfield value can be used by several groups). Combinations of bitfields that share no group results in a compilation error.

```cpp
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // valid
glClear(GL_COLOR_BUFFER_BIT | GL_MAP_READ_BIT);     // compile error: both bitfields share no group

glClear(GL_STENCIL_BUFFER_BIT | GL_LIGHTING_BIT);   // compile error: bitwise or operation is valid, 
                                                    //  the shared group is AttribMask, but the
                                                    //  resulting group does not match the expected.
```

The groups for enums are not yet as complete as we would like them to be to enable per function compile-time errors when trying to call functions with values from the wrong enum group. For example, ```GL_VERTEX_SHADER``` is in the group ```ShaderType``` and ```GL_COMPUTE_SHADER``` is not.


# MORE FROM WIKI BEGIN

The original OpenGL API provides several concepts in their interface, namely functions, boolean values, bitfield values, named values and special values and basic types values but mostly don't differentiate in them.

So comes one must actually know each function of the OpenGL API to know what parameters and their ranges can be passed. There is no way for a basic code assistance. As glbinding differs between all types of values, IDEs can hint the programmer most wrong usages of the OpenGL API with a compilation error.

One example is the passing of a named constant in places where bit combination is expected:
```cpp
glClear(GL_COLOR_BUFFER_BIT); // valid
glClear(GL_FRAMEBUFFER);      // compilation error: bitfield of group ClearBufferMask expected, got GLenum
```
In the case of bitfield values, the OpenGL API offers groups and each parameter states the group valid values must come from. This means that glbinding can actually assist with valid and invalid bit combinations:
```cpp
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // valid
glClear(GL_COLOR_BUFFER_BIT | GL_MAP_READ_BIT);     // compile error: both bitfields share no group

glClear(GL_STENCIL_BUFFER_BIT | GL_LIGHTING_BIT);   // compile error: bitwise or operation is valid, 
                                                    //  the shared group is AttribMask, but the
                                                    //  resulting group does not match the expected.
```
Unfortunately, such groups are incomplete and unmaintained for the named values. Thus, glbinding couldn't provide any assistance for the following case:
```cpp
GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER); // All good
GLuint colorShader = glCreateShader(GL_COLOR);          // No compilation error but a runtime error!
```

# MORE FROM WIKI END


#### Per Feature API Header

Enums, bitfields, and functions can be included as usual in a combined ```gl.h``` header or individually via ```bitfield.h```, ```enum.h```, and ```functions.h``` respectively. Additionally, these headers are available for  feature-based API subsets, each using a specialized namespace, e.g.:

* ```gl32/functions.h``` provides all OpenGL commands available up to 3.2 in namespace ```gl32```.
* ```gl32core/functions.h``` provides all non-deprecated OpenGL commands available up to 3.2 in namespace ```gl32core```.
* ```gl32ext/functions.h``` provides all OpenGL commands specified either in 3.3 and above, or by extension in ```gl32ext```.

Depending on the intended use-case, this allows to limit coding to a specific OpenGL feature and reduces switching to other features to a replacement of includes and using directives. In both cases, non-featured symbols do not compile.

Furthermore, *glbinding* provides explicit, non-feature dependent headers for special values (```values.h```), booleans (```boolean.h```), and basic types (```types.h```). This allows for refined includes and can reduce compile time.


# MORE FROM WIKI BEGIN

## Compilation-Centered Header Design

As C++ is a language that strictly separates interface from implementation and don't come with sophisticated modularization concepts, there is often much potential to improve the compilation time. This is mainly done with forward declarations of types and omitting includes of unnecessary symbols.

For an interface of a library, class or module providing OpenGL related functionality, it is likely that only the type information of OpenGL are needed, not actual functions or constants. Those are mainly required in the implementation.
If you want to apply such optimizations, glbinding provides specialized headers, but if you want the traditional approach to include the complete OpenGL API using one header, this is also supported.

So comes that glbinding provides 7 headers, one for the whole API and 6 specialized ones.
```cpp
#include <glbinding/gl/gl.h> // Include all of the headers below, meaning the complete OpenGL API

#include <glbinding/gl/bitfield.h> // Include the bitfield constants (e.g., GL_COLOR_BUFFER_BIT)
#include <glbinding/gl/boolean.h> // Include the boolean constants (GL_TRUE and GL_FALSE)
#include <glbinding/gl/enum.h> // Include the symbol constants (e.g., GL_VERTEX_SHADER)
#include <glbinding/gl/functions.h> // Include all functions
#include <glbinding/gl/types.h> // Include all type declarations of the OpenGL API (including bitfields, boolean, enum, and extensions)
#include <glbinding/gl/values.h> // Include all special values (e.g., GL_INVALID_INDEX)
```
There is one additional header that provides all extensions and provide them as an enumeration in terms of C++ enums.
```cpp
#include <glbinding/gl/extension.h> // Include the extensions the OpenGL API offers
```

## Feature-Centered Header Design

The OpenGL API comes with different versions, internally named *features*. The current features of OpenGL are 1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 2.0, 2.1, 3.0, 3.1, 3.2, 3.3, 4.0, 4.1, 4.2, 4.3, 4.4, and 4.5. Besides the features, there is a distinction between compatability and core contexts as well as forward and non-forward contexts. This results in many possible specific manifestations of the OpenGL API you can use in your program.

One tough task is to adhere to one agreed set of functions in your own OpenGL program (e.g., OpenGL 3.2 Core if you want to develop for every Windows, OS X and Linux since the last 4 years). glbinding helps with this task in providing per-feature headers so you can specify which functions and constants you want to use.

### All-Features OpenGL Headers

If you don't use per-feature headers the OpenGL program can look like this:
```cpp
#include <glbinding/gl/gl.h>

// draw code
gl::glClear(gl::GL_COLOR_BUFFER_BIT | gl::GL_DEPTH_BUFFER_BIT);
gl::glUniform1i(u_numcubes, m_numcubes);
gl::glDrawElementsInstanced(gl::GL_TRIANGLES, 18, gl::GL_UNSIGNED_BYTE, 0, m_numcubes * m_numcubes);
```
### Per-Feature OpenGL Headers

When developing your code on Windows with latest drivers installed, this code will likely work. But if you want to port it to systems with less driver support (OS X, Linux using open source drivers), you may wonder if ```glDrawElementsInstanced``` is available.
Then you can switch to per-feature headers of glbinding and choose the OpenGL 3.2 Core headers (as you know that at least this version is available on all target platforms).
```cpp
#include <glbinding/gl32core/gl.h>

// draw code
gl32core::glClear(gl32core::GL_COLOR_BUFFER_BIT | gl32core::GL_DEPTH_BUFFER_BIT);
gl32core::glUniform1i(u_numcubes, m_numcubes);
gl32core::glDrawElementsInstanced(gl32core::GL_TRIANGLES, 18, gl32core::GL_UNSIGNED_BYTE, 0, m_numcubes * m_numcubes);
```
If the code compiles than you can be sure it is OpenGL 3.2 Core compliant.

This checking works in both ways: You can check that you don't use any function that isn't available yet but you also can be sure to omit any deprecated functionality.
As the list of available extensions is the same for every feature of OpenGL, this header is only provided in the general header namespace (```glbinding/gl/extension.h```).

# MORE FROM WIKI END










##### Lazy Function Pointer Resolution

By default, *glbinding* tries to resolve all OpenGL function pointers during initialization, which can consume some time:

```cpp
glbinding::Binding::initialize(); // immediate function pointer resolution
```

Alternatively, the user can decide that functions pointers are resolved only when used for the first time. This is achieved by:

```cpp
glbinding::Binding::initialize(false); // lazy function pointer resolution
```

##### Multi-Context Support

*glbinding* has built-in support for multiple contexts. The only requirement is, that the currently active context has to be specified. This feature mixes well with multi-threaded applications, but keep in mind that concurrent use of one context often result in non-meaningful communication with the OpenGL driver.

To use multiple contexts, use your favorite context creation library (e.g., glut, SDL, egl, glfw, Qt) to request as much contexts as required. The functions to make a context current should be provided by this library and is not part of *glbinding* (except that you can get the current context handle). When using multiple contexts, first, each has to be initialized when active: 

```cpp
// use context library to make current, e.g., glfwMakeCurrent(...)
glbinding::Binding::initialize();
```

Second, contexts switches are required to be communicated to *glinding* explicitly in order to have correctly dispatched function pointers:

```cpp
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

*glbinding* supports different types of callbacks that can be registered.
The main types are

 * Global before callbacks, that are called before the OpenGL function call
 * Per function before callbacks
 * Global after callbacks, that are called after the OpenGL function call
 * Per function after callbacks
 * Unresolved callbacks, that are called each time an unresolved OpenGL function should be called (instead of a segmentation fault)

The before callbacks are useful , e.g., for tracing or application-specific parameter checking.
The available informations in this callback are the wrapped OpenGL function (including its name and bound function address) and all parameters.
The after callbacks are useful, .e.g., for tracing, logging, or the obligatory error check.
Available informations are extended by the return value.
The unresolved callback provides information about the (unresolved) wrapped OpenGL function object.

Example for error checking:

```cpp
#include <iostream>

#include <glbinding/callbacks.h>

using namespace glbinding;

// ...
setCallbackMaskExcept(CallbackMask::After, { "glGetError" });
setAfterCallback([](const FunctionCall &)
{
  GLenum error = glGetError();
  if (error != GL_NO_ERROR)
    std::cout << "error: " << std::hex << error << std::endl;
});

// ... OpenGL code
```

Example for logging:

```cpp
#include <iostream>

#include <glbinding/callbacks.h>

using namespace glbinding;

// ...
setCallbackMask(CallbackMask::After | CallbackMask::ParametersAndReturnValue);
glbinding::setAfterCallback([](const glbinding::FunctionCall & call)
{
  std::cout << call.function->name() << "(";
  
  for (unsigned i = 0; i < call.parameters.size(); ++i)
  {
    std::cout << call.parameters[i]->asString();
    if (i < call.parameters.size() - 1)
      std::cout << ", ";
  }
  
  std::cout << ")";
  
  if (call.returnValue)
  {
    std::cout << " -> " << call.returnValue->asString();
  }
  
  std::cout << std::endl;
});

// ... OpenGL code
```

Example for per function callbacks:

```cpp
#include <iostream>

#include <glbinding/Binding.h>

using namespace glbinding;

// ...
Binding::ClearColor.setBeforeCallback([](GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    std::cout << "Switching clear color to ("
        << red << ", " << green << ", " << blue << ", " << alpha << ")" << std::endl;
});

// ...
glClearColor(0.5, 0.5, 0.5, 1.0);
// Output: Switching clear color to (0.5, 0.5, 0.5, 1.0)
```

It is also possible to call an OpenGL function without triggering registered callbacks (except unresolved callbacks), using the ```directCall()``` member function.

```cpp
#include <glbinding/Binding.h>

using namespace glbinding;

// ...
GLenum errorCode = Binding::GetError.directCall();
```

##### Context-Switch Callbacks

When switching between active contexts, not only *glbinding* may be interested in the current context, but your application as well (e.g., per context cached OpenGL state).
You may also not know when contexts will get changed (especially if you write a library) and propagating the current context may be troublesome.
Therefore, you can register one callback that is called when the current active context in *glbinding* is changed.

```cpp
#include <iostream>

#include <glbinding/Binding.h>

using namespace glbinding;

// ...
Binding::addContextSwitchCallback([](ContextHandle handle) {
    std::cout << "Switching to context " << handle << std::endl;
});
```

# MORE FROM WIKI BEGIN

To support orthogonal features of an API, glbinding allows to attach a number of callbacks to each function of the OpenGL API. Such orthogonal features include runtime error checking (e.g., glGetError after each function call), logging, caching of driver information, general function call interception (e.g., wait until the next call is requested).

To support each of the above tasks (and even more), glbinding supports the following types of callbacks: context switch callbacks, unresolved functions callbacks, before function call callbacks, after function call callbacks. The latter two are again separated into global and local callbacks (i.e., one callback for each function or per-function callbacks).

### Context Switch Callback (Global)

To use the global context switch callback, you just have to register one using the code below.
```cpp
#include <glbinding/callbacks.h>
#include <glbinding/Binding.h>
#include <glbinding/ContextHandle.h>
using namespace glbinding;

// register global callbacks
Binding::addContextSwitchCallback([](ContextHandle handle){
    std::cout << "Activating context " << handle << std::endl;
});
```

### Unresolved Function Callback (Global)

To detect unresolved functions, you can register a callback that is called each time an unresolved OpenGL function is about to get called. With such a callback you can quickly detect unsupported features of your OpenGL driver without introducing much error checking code.
```cpp
#include <glbinding/callbacks.h>
#include <glbinding/AbstractFunction.h>

using namespace glbinding;

// setup error checking after each OpenGL API call callback mask
setUnresolvedCallback([](const AbstractFunction & function) {
    std::cout << "Function " << function.name() << " couldn't get resolved" << std::endl;
});
```

### Before Function Call Callback (Global)

The global before function callback can be used to indicate the upcoming OpenGL function call. In case some drivers don't handle all wrong usages of the OpenGL API correctly and sometimes fail and crash, this callback can give you a direct hint about the OpenGL call that causes the crash. With correct configuration you have even access to all parameters of the call (see below):
```cpp

```

### After Function Call Callback (Global)

### Before Function Call Callback (Local)

### After Function Call Callback (Local)

### Activate Function-Call Related Callbacks

For fine control about activated and de-activated callbacks, each OpenGL API function in glbinding saves the status for before and after callbacks for itself. This allows for invidivual callback registration and evaluation.

```cpp
#include <glbinding/callbacks.h>
#include <glbinding/Binding.h>
using namespace glbinding;

// setup error checking after each OpenGL API call callback mask
setCallbackMaskExcept(CallbackMask::After, { "glGetError" });

// setup logging callback mask
setCallbackMask(CallbackMask::After | CallbackMask::ParametersAndReturnValue);
```

# MORE FROM WIKI END



##### Meta Information

Besides an actual OpenGL binding, *glbinding* also supports queries for both compile time and run time information about the gl.xml and your OpenGL driver.
Typical use cases are querying the available OpenGL extensions or the associated extensions to an OpenGL feature and their functions and enums.

Example list of all available OpenGL versions/features (compile time):

```cpp
#include <iostream>

#include <glbinding/Meta.h>
#include <glbinding/Version.h>

using glbinding::Meta;

for (const Version & v : Meta::versions())
  std::cout << v.toString() << std::endl;
```

Example output of all enums (compile time):

```cpp
#include <iostream>
#include <iomanip>

#include <glbinding/Meta.h>

using glbinding::Meta;

if (Meta::extensive())
{
  std::cout << "# Enums: " << Meta::enums().size() << std::endl << std::endl;

  for (GLenum e : Meta::enums()) // c++ 14 ...
    std::cout << " (" << std::hex << std::showbase << std::internal << std::setfill('0') << std::setw(8) 
              << static_cast<std::underlying_type<GLenum>::type>(e) << ") " << Meta::getString(e) << std::dec << std::endl;

  std::cout << std::dec;
}
```

Example output of all available extensions (run time):

```cpp
#include <iostream>

#include <glbinding/Meta.h>

using glbinding::Meta;

if (Meta::stringsByGL())
{
  std::cout << " # Extensions: " << Meta::extensions().size() << std::endl << std::endl;

  for (GLextension e : Meta::extensions())
  {
    const Version v = Meta::getRequiringVersion(e);
    std::cout << " " << Meta::getString(e) << " " << (v.isNull() ? "" : v.toString()) << std::endl;
  }
}
```

##### Performance

*glbinding* causes no significant impact on runtime performance. The provided comparison example supports this statement. It compares the execution times of identical rendering code, dispatched once with *glbinding* and once with glew. Various results are provided in the [Examples](https://github.com/hpicgs/glbinding/wiki/examples) wiki.


##### Binding Generation

As a user of glbinding you are able to update the gl.xml by yourself and generate the glbinding code.
The necessary python scripts are provided in this repository. Since the ```gl.xml``` is not complete, a ```patch.xml``` is used to resolve possible conflicts or missing specifications. With ongoing development of the xml-based OpenGL API specification this could become obsolete in the future.
For ease-of-use, the update and generation can be triggered using the generated targets from cmake named *update* and *generate*.


## Context Creation Cheat Sheet

When requesting an OpenGL context of a specific version, the created context does not always match that version, but instead returns a context with "appropriate" capabilities. The mapping of requested and created version depends on various aspects, e.g., forward compatibility and core flags, context creation library, driver, graphics card, and operating system. To get some understanding of that mapping a [Context Creation Cheat Sheet](https://github.com/hpicgs/glbinding/wiki/Context-Creation-Cheat-Sheet) is provided, gathering the ouput of glbindings contexts example.


## Using glbinding




##### Dependencies

The only run-time dependencies of glbinding are the STL of the used compiler and an OpenGL library, dynamically linked with your application.

Optional dependencies

* Python 2 or 3 to generate the binding
* Qt for some examples
* GLFW 3 for some examples
* GLEW for some examples

For building *glbinding* CMake 3.2 or newer and a C++11 compliant compiler (e.g. GCC 4.8, Clang 3.3, MSVC 2013 **Update 3**) are required.

When configuring *glbinding*, the options ```OPTION_BUILD_EXAMPLES``` (disabled by default) can be used to enable examples.
The tools of glbinding are build automatically if GLFW is found.
