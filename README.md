[//]: # (Comment)

![glbinding](glbinding-logo.png)

The state-of-the-art way for low-level OpenGL programming;
*glbinding* is a full-fledged, [MIT licensed](http://opensource.org/licenses/MIT), cross-platform C++ binding for the OpenGL API, professionally maintained by [CG Internals](http://www.cginternals.com).

See what's new in [glbinding-2.0.0](https://github.com/cginternals/glbinding/releases/tag/v2.0.0).

*glbinding* leverages modern C++11 features like enum classes, lambdas, and variadic templates, instead of relying on macros; 
all OpenGL symbols are real functions and variables. 
It provides type-safe parameters, per feature API header, lazy function resolution, multi-context and multi-thread support, 
global and local function callbacks, meta information about the generated OpenGL binding and the OpenGL runtime, as well as tools and examples for quick-starting your projects.
Based on the OpenGL API specification ([gl.xml](https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/gl.xml)) 
*glbinding* is generated using python scripts and templates that can be easily adapted to fit custom needs.

Code written using a typical C binding for OpenGL, e.g., [GLEW](http://glew.sourceforge.net/), is fully compatible for the use with *glbinding* and causes no significant impact on runtime performance (see [compare example](https://github.com/cginternals/glbinding/wiki/examples#compare)): just replace all includes to the former binding, replace the initialization code and *use* the appropriate API namespace, e.g., ```gl```.

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
* [Tools](https://github.com/cginternals/glbinding/wiki/tools)
* [Examples](https://github.com/cginternals/glbinding/wiki/examples)
* [Project Health](#project-health)
* [Context Creation Cheat Sheet](https://github.com/cginternals/glbinding/wiki/Context-Creation-Cheat-Sheet)

###### Installation and Development
* [Install Instructions](#install-instructions)
* [Build form Source](#build-instructions)
* [Tips for Linking](#tips-for-linking)

###### Feature Documentation and Code Snippets
* [Type-safe Parameters](#type-safe-parameters)
* [Compilation-Centered Header Design](#compilation-centered-header-design)
* [Feature-Centered Header Design](#feature-centered-header-design)
* [Lazy Function Resolution](#lazy-function-pointer-resolution)
* [Multi-context Support](#multi-context-support)
* [Multi-thread Support](#multi-threading-support)
* [Global and Local Function Callbacks](#function-callbacks) 
* [Alternative Signatures for GLboolean and GLenum types](#alternative-signatures)
* [Meta Information System](#meta-information)
* [Doxygen Documentation](https://cginternals.github.io/glbinding/documentation)


## Project Health

| Service | System | Compiler | Status |
| ------- | ------ | -------- | -----: |
|  [Travis-CI](https://travis-ci.org/cginternals/glbinding) | Ubuntu 14.04 | GCC 4.8, Clang 3.5 | [![Build Status](https://travis-ci.org/cginternals/glbinding.svg?branch=glbinding-2.0-release)](https://travis-ci.org/cginternals/glbinding) |
| [Coverity](https://scan.coverity.com/projects/6828?tab=overview) | Ubuntu 14.04 | GCC 5.3 | [![Coverity Status](https://scan.coverity.com/projects/6828/badge.svg)](https://scan.coverity.com/projects/6828) |
| Jenkins <br><br><br><br> | Ubuntu 14.04 <br><br><br><br> | GCC 4.8 <br> GCC 4.9 <br> GCC 5.3 <br> Clang 3.5 <br> | [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-linux-gcc4.8)](http://jenkins.hpi3d.de/job/glbinding-linux-gcc4.8) <br> [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-linux-gcc4.9)](http://jenkins.hpi3d.de/job/glbinding-linux-gcc4.9) <br> [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-linux-gcc5.3)](http://jenkins.hpi3d.de/job/glbinding-linux-gcc5.3) <br> [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-linux-clang3.5)](http://jenkins.hpi3d.de/job/glbinding-linux-clang3.5) <br> |
| Jenkins <br><br> | Windows 10 <br><br> | MSVC 2013 Update 5 <br>  MSVC 2015 Update 1 <br> | [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-windows-msvc2013)](http://jenkins.hpi3d.de/job/glbinding-windows-msvc2013) <br> [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-windows-msvc2015)](http://jenkins.hpi3d.de/job/glbinding-windows-msvc2015) <br> |
| Jenkins | OS X 10.10 | Clang 3.5 | [![Build Status](http://jenkins.hpi3d.de/buildStatus/icon?job=glbinding-osx-clang3.5)](http://jenkins.hpi3d.de/job/glbinding-osx-clang3.5) |

Please note that our OS X build node is currently broken (physically). However, *glbinding* is maintained for OS X as well and there are many people using it on OS X on a regular basis.


## Install Instructions

*glbinding* is available for different platforms using different distribution channels. 
You can either download the source and manually [compile](#build-instructions) it or use one of the [pre-compiled releases](https://github.com/cginternals/glbinding/releases) of this repository.
For systems providing package managers, we generally strive for packages in these package managers.

###### Windows

The various glbinding packages can be installed either by downloading an installer, e.g., the [latest x64 installer](https://github.com/cginternals/glbinding/releases/download/v2.0.0/glbinding-2.0.0-msvc14-x64.exe) for Microsoft Visual Studio 2015, or downloading and extracting one of the precompiled archives, e.g. [runtime](https://github.com/cginternals/glbinding/releases/download/v2.0.0/glbinding-2.0.0-msvc14-x64-runtime.zip),
[examples](https://github.com/cginternals/glbinding/releases/download/v2.0.0/glbinding-2.0.0-msvc14-x64-examples.zip),
[dev](https://github.com/cginternals/glbinding/releases/download/v2.0.0/glbinding-2.0.0-msvc14-x64-dev.zip), and
[tools](https://github.com/cginternals/glbinding/releases/download/v2.0.0/glbinding-2.0.0-msvc14-x64-tools.zip).
Alternatively, download the source code and commence [building from source](#build-instructions).

###### Ubuntu

*glbinding* is provided on Ubuntu using PPAs.
For Ubuntu 16.04 (xenial), 15.10 (wily), and 15.04 (vivid) use the [current PPA](https://launchpad.net/~cginternals/+archive/ubuntu/ppa), for Ubuntu 14.04 (trusty) use the [backports PPA](https://launchpad.net/~cginternals/+archive/ubuntu/backports-ppa).
Using the current PPA as example, the following lines install *glbinding* including the GLFW examples:
```shell
> sudo apt-add repository ppa:cginternals/ppa
> sudo apt-get update
> sudo apt-get install libglbinding-examples-glfw
> # start example
> /usr/share/glbinding/cubescape
```
To use glbinding as dependency, install the development package:
```shell
> sudo apt-get install libglbinding-dev libglbinding-dbg
```
Alternatively, download the source code and commence [building from source](#build-instructions).

###### Arch Linux

On Arch, *glbinding* is currently provided using AUR in the package [glbinding-git](https://aur.archlinux.org/packages/glbinding-git/) that is currently not maintained by us. For build instructions, follow the [ARCH wiki](https://wiki.archlinux.org/index.php/Arch_User_Repository#Installing_packages).

Alternatively, download the source code and commence [building from source](#build-instructions).

###### OS X

The package manager on OS X we depend on is homebrew. The package there is called [glbinding](http://brewformulas.org/Glbinding).
To install *glbinding* using homebrew, execute the following line:
```shell
> brew install glbinding
```

Alternatively, download the source code and commence [building from source](#build-instructions).

###### Debian-based Systems

There is currently no precompiled package maintained. Please download the source code and commence [building from source](#build-instructions).


## Build Instructions

##### Prerequisites and Dependencies

The only mandatory run-time dependencies of glbinding are the STL of the used compiler and an OpenGL driver library, dynamically linked with your application. However, compiling *glbinding* requires the following required and optional dependencies:
* [CMake](https://cmake.org/) 3.0 or higher for building glbinding from source (mandatory for any build from source)
* [git](https://git-scm.com/) for version control and script supporting tasks
* [Python](https://www.python.org/) 2.7, 3.0 or higher for re-generating the binding
  * [SVN](https://subversion.apache.org/) for updating the ```gl.xml```
* [GLFW](http://www.glfw.org/) 3.0 or higher for examples and tools
* [GLEW](http://glew.sourceforge.net/) 1.6 or higher for the comparison example
* [cpplocate](https://github.com/cginternals/cpplocate) for the examples
* [Qt5](http://www.qt.io/developers/) 5.0 or higher for the qt-based example
* [Doxygen](http://www.stack.nl/~dimitri/doxygen/) 1.8 or higher for generating the documentation on your system
  * [graphviz](http://www.graphviz.org/) for generating diagrams (optional)

##### Compile Instructions

For compilation, a C++11 compliant compiler, e.g., GCC 4.8, Clang 3.3, MSVC 2013 **Update 3**, is required.

First, download the source code [as archive](https://github.com/cginternals/glbinding/releases) or via git:
```shell
> git clone https://github.com/cginternals/glbinding.git
> cd glbinding
```
Then, depending on the version of glbinding you want to build, choose the appropriate tag or branch, e.g., for the 2.0.0 release:
```shell
> git fetch --tags
> git checkout v2.0.0
```
The actual compilation can be done using CMake and your favorite compiler and IDE.

For building *glbinding* CMake via command line can be used (should work on all systems):

First create a build directory (we do not recommend in-source builds):
```
mkdir build
cd build
```

Configure *glbinding* with your prefered or default generator, e.g., for Visual Studio 2015 in x64 use
(note: some IDEs have integrated support for CMake projects, e.g., Qt Creator, and allow you to skip the manual project configuration):
```
cmake .. -G "Visual Studio 14 2015 Win64"
```

In order to compile the project, either use you favorite Editor/IDE with the created project or use CMake as follows:
```
cmake --build .
```

##### Generating/Updating the Binding Manually

For updating the ```gl.xml``` and the resulting glbinding interfaces python scripts are provided in ```codegeneration``` directory.
An additional ```patch.xml``` is used to resolve possible conflicts or missing specifications (with the ongoing development of the xml-based OpenGL API specification this could become obsolete in the future).
For ease-of-use, the update and generation can be triggered using the generated build targets ```update``` and ```generate```.




## Tips for Linking

We suggest using the build system of glbinding for a smooth integration: [CMake](https://cmake.org/)
For it, *glbinding* provides a find configuration script that should be installed into your system or at least accessible by CMake. 
In the projects CMakeLists.txt, add one of the following lines:
```
find_package(glbinding QUIET) # if you want to check for existance
find_package(glbinding REQUIRED) # if it is really required in your project
```
Finally, just link glbinding to your own library or executable:
```
target_link_libraries(${target} ... PUBLIC glbinding::glbinding)
```




## Features


#### Type-Safe Parameters

The original OpenGL API provides several concepts in their interface, namely functions, booleans, bitfields, enums, as well as special values and basic types but mostly does not differentiate between these types.
Hence, actuall knowledge about each function, its parameters and their ranges is required; there is no way for a basic code assistance. 
As glbinding differentiates between all these types, IDEs and compilers can detect wrong usages of the OpenGL API.

One example is the passing of a named constant in places where a bit combination is expected:
```cpp
glClear(GL_COLOR_BUFFER_BIT); // valid
glClear(GL_FRAMEBUFFER);      // compilation error: bitfield of group ClearBufferMask expected, got GLenum
```
In the case of bitfields, the OpenGL API offers groups and each parameter states the group valid values must come from. *glbinding* uses this information to prevent invalid bit combinations:
```cpp
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // valid
glClear(GL_COLOR_BUFFER_BIT | GL_MAP_READ_BIT);     // compile error: both bitfields share no group

glClear(GL_STENCIL_BUFFER_BIT | GL_LIGHTING_BIT);   // compile error: bitwise or operation is valid, 
                                                    // the shared group is AttribMask, but the
                                                    // resulting group does not match the expected.
```
Unfortunately, such groups are incomplete and unmaintained for enums (named values). 
Thus, glbinding could not provide any assistance for cases such as:
```cpp
GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER); // All good
GLuint colorShader = glCreateShader(GL_COLOR);          // No compilation error but a runtime error!
```




#### Compilation-Centered Header Design

C++ strictly separates interface from implementation. 
For improving the compilation time of a program or system written in C++ usually forward declarations of types are used and includes of unnecessary symbols are ommited.

For an interface of a library, class, or module providing OpenGL related functionality, it is likely that only the type information of OpenGL is needed, not actual functions or constants usually required for implementation.
In addition to the customary all-in-one header ```gl.h``` *glbinding* also provides specialized headers:

```cpp
#include <glbinding/gl/gl.h>        // all of the headers below, meaning the complete OpenGL API

#include <glbinding/gl/bitfield.h>  // bitfield constants (e.g., GL_COLOR_BUFFER_BIT)
#include <glbinding/gl/boolean.h>   // boolean constants (GL_TRUE and GL_FALSE)
#include <glbinding/gl/enum.h>      // symbol constants (e.g., GL_VERTEX_SHADER)
#include <glbinding/gl/functions.h> // functions
#include <glbinding/gl/types.h>     // type declarations of the OpenGL API (including bitfields, boolean, enum, and extensions)
#include <glbinding/gl/values.h>    // special values (e.g., GL_INVALID_INDEX)
```

There is one additional header that provides all extensions and provide them as an enumeration in terms of C++ enums.
```cpp
#include <glbinding/gl/extension.h> 
```




#### Feature-Centered Header Design

The OpenGL API is iteratively develeoped and released in versions, internally (for the API specification) named *features*.
The latest feature/version of OpenGL is 4.5.
The previous version are 1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 2.0, 2.1, 3.0, 3.1, 3.2, 3.3, 4.0, 4.1, 4.2, 4.3, and 4.4. 
OpenGL uses a deprecation model for removing outdated parts of its API which results in compatability (with deprecated API) and core (without deprecated API) usage that is manifested in the targeted OpenGL context.
On top of that, new API concepts are suggested as extensions (often vendor specific) that might be integrated in future versions.
All this results in many possible specific manifestations of the OpenGL API you can use in your program.

One tough task is to adhere to one agreed set of functions in your own OpenGL program (e.g., OpenGL 3.2 Core if you want to develop for every Windows, OS X, and Linux released in the last 4 years). 
*glbinding* facilitates this by providing per-feature headers by means of well-defined/generated subsets of the OpenGL API.

##### All-Features OpenGL Headers

If you do not use per-feature headers the OpenGL program can look like this:
```cpp
#include <glbinding/gl/gl.h>

// draw code
gl::glClear(gl::GL_COLOR_BUFFER_BIT | gl::GL_DEPTH_BUFFER_BIT);
gl::glUniform1i(u_numcubes, m_numcubes);
gl::glDrawElementsInstanced(gl::GL_TRIANGLES, 18, gl::GL_UNSIGNED_BYTE, 0, m_numcubes * m_numcubes);
```

##### Single-Feature OpenGL Headers

When developing your code on Windows with latest drivers installed, the code above is likely to compile and run. 
But if you want to port it to systems with less mature driver support (e.g., OS X or Linux using open source drivers), you may wonder if ```glDrawElementsInstanced``` is available.
In this case, just switch to per-feature headers of glbinding and choose the OpenGL 3.2 Core headers (as you know that at least this version is available on all target platforms):
```cpp
#include <glbinding/gl32core/gl.h>

// draw code
gl32core::glClear(gl32core::GL_COLOR_BUFFER_BIT | gl32core::GL_DEPTH_BUFFER_BIT);
gl32core::glUniform1i(u_numcubes, m_numcubes);
gl32core::glDrawElementsInstanced(gl32core::GL_TRIANGLES, 18, gl32core::GL_UNSIGNED_BYTE, 0, m_numcubes * m_numcubes);
```
If the code compiles than you can be sure it is OpenGL 3.2 Core compliant.
Using functions that are not yet available or relying on deprecated functionality is prevented.




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




#### Alternative Signatures

The OpenGL API is designed without function overloading using only simple parameter types. 
This results in explicit parameter encoding in function names for conceptually overloaded functions (e.g., glTexParameteri and glTexParameterf). 
Another design decision for the OpenGL API is the high similarity of the integer, boolean, enum, and bitfield data types. 
This means, that for *overloaded* functions, there is no separate function for ```GLboolean```, ```GLenum```, and ```GLbitfield``` types. 
Using type-save functions of glbinding, some typically compiling code constructs are now deliberately broken. 
For most of those cases we provide alternative *overloaded* function signatures. 
Additionally, we also fix signatures that are semantically broken in the OpenGL API specification, i.e., when base types (C types) are similar such as in the case of enums and integers.

To use alternative function signatures, confer to the following example:
```cpp
#include <glbinding/gl/gl.h>
#include <glbinding/gl/functions-patches.h>

using namespace gl;

// ...
glTexParametere(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
glTexParametere(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
glTexParametere(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
glTexParametere(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
glTexImage2D(GL_TEXTURE_2D, 0, GL_R8, 64, 64, 0, GL_RED, GL_UNSIGNED_BYTE, terrain.data());
```
Note that these function signatures are *only* defined in the ```gl``` namespace. 
If you want to use per-feature API header and the patched signatures together in your project, you have to use either the ```gl``` namespace in addition to other ones or manually import the used alternative signatures into the other namespace using ```using``` declarations.




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
