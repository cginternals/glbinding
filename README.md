[//]: # (Comment)

<br><a href="https://glbinding.org"><img src="https://raw.githubusercontent.com/cginternals/glbinding/master/glbinding-logo.svg?sanitize=true" width="50%"></a>

*glbinding* is a cross-platform C++ binding for the [OpenGL API](http://www.opengl.org).

![GitHub release](https://img.shields.io/github/release/cginternals/glbinding.svg)
![C++ CI](https://github.com/cginternals/glbinding/actions/workflows/ci.yml/badge.svg)
[![Travis](https://img.shields.io/travis/cginternals/glbinding/master.svg?style=flat&logo=travis)](https://travis-ci.org/cginternals/glbinding)
[![Appveyor](https://img.shields.io/appveyor/build/scheibel/glbinding/master.svg?style=flat&logo=appveyor)](https://ci.appveyor.com/project/scheibel/glbinding)
[![Tokei](https://tokei.rs/b1/github/cginternals/glbinding)](https://github.com/Aaronepower/tokei)

[![Documentation](https://img.shields.io/badge/documentation-online-blue.svg?style=flat&logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMC41IDEzLjciPjxwYXRoIGQ9Ik0xMS41IDYuOGwtMy43IDYuNEwuNS41aDE0LjdsLTEuMyAyLjFINC4yTDcuOCA5bDIuNS00LjN6bTcuMyA0LjNsMS4yIDIuMWgtOS43TDE3LjYuNWwxLjIgMi4xLTQuOSA4LjV6IiBmaWxsPSIjZmZmIi8%2BPC9zdmc%2B)](https://glbinding.org/docs.html)
[![Examples](https://img.shields.io/badge/examples-wiki-blue.svg?style=flat&logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMC41IDEzLjciPjxwYXRoIGQ9Ik0xMS41IDYuOGwtMy43IDYuNEwuNS41aDE0LjdsLTEuMyAyLjFINC4yTDcuOCA5bDIuNS00LjN6bTcuMyA0LjNsMS4yIDIuMWgtOS43TDE3LjYuNWwxLjIgMi4xLTQuOSA4LjV6IiBmaWxsPSIjZmZmIi8%2BPC9zdmc%2B)](https://github.com/cginternals/glbinding/wiki/Examples)
[![Tools](https://img.shields.io/badge/tools-wiki-blue.svg?style=flat&logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMC41IDEzLjciPjxwYXRoIGQ9Ik0xMS41IDYuOGwtMy43IDYuNEwuNS41aDE0LjdsLTEuMyAyLjFINC4yTDcuOCA5bDIuNS00LjN6bTcuMyA0LjNsMS4yIDIuMWgtOS43TDE3LjYuNWwxLjIgMi4xLTQuOSA4LjV6IiBmaWxsPSIjZmZmIi8%2BPC9zdmc%2B)](https://github.com/cginternals/glbinding/wiki/Tools)

[//]: # (HEADER_END)

*glbinding* leverages C++11 features like enum classes, lambdas, and variadic templates, instead of relying on macros;
all OpenGL symbols are real functions and variables.
It provides type-safe parameters, per-feature API headers, lazy function resolution, multi-context and multi-thread support, global and local function callbacks, meta information about the generated OpenGL binding and the OpenGL runtime, as well as tools and examples for quick-starting your projects.
Based on the OpenGL API specification ([gl.xml](https://github.com/KhronosGroup/OpenGL-Registry/blob/main/xml/gl.xml)) *glbinding* is generated using [python scripts and templates](https://github.com/cginternals/khrbinding-generator) that can be easily adapted to fit custom needs.

![what-is-glbinding](https://raw.githubusercontent.com/cginternals/glbinding/master/docs/what-is-glbinding-v2.png)

Code that is written using a typical C binding for OpenGL, e.g., [GLEW](http://glew.sourceforge.net/), is fully compatible for the use with *glbinding* and causes no significant impact on runtime performance (see [compare example](https://github.com/cginternals/glbinding/wiki/examples#compare)): just replace all includes to the former binding, replace the initialization code and *use* the appropriate API namespace, e.g., ```gl``` for full availability of the OpenGL API.

```cpp
#include <glbinding/gl/gl.h>
using namespace gl;

// ...
auto shader = glCreateShader(GL_COMPUTE_SHADER);
// ...
```

*glbinding* is compatible with OpenGL-compatible windowing toolkits and we provide example integrations for the following ones within the examples:

* [GLFW OpenGL](https://github.com/cginternals/glbinding/tree/master/source/examples/cubescape-glfw-gl)
* [GTK 3 OpenGL](https://github.com/cginternals/glbinding/tree/master/source/examples/cubescape-gtk3-gl) and [GTK 3 OpenGL ES](https://github.com/cginternals/glbinding/tree/master/source/examples/cubescape-gtk3-gles) (may require `GDK_GL=gles` environment variable)
* [GTK 4 OpenGL](https://github.com/cginternals/glbinding/tree/master/source/examples/cubescape-gtk4-gl) and [GTK 4 OpenGL ES](https://github.com/cginternals/glbinding/tree/master/source/examples/cubescape-gtk3-gles)
* [Qt 5 OpenGL](https://github.com/cginternals/glbinding/tree/master/source/examples/cubescape-qt-gl) and [Qt 5 OpenGL ES](https://github.com/cginternals/glbinding/tree/master/source/examples/cubescape-qt-gles)
* [SDL OpenGL](https://github.com/cginternals/glbinding/tree/master/source/examples/cubescape-sdl-gl) and [SDL OpenGL ES](https://github.com/cginternals/glbinding/tree/master/source/examples/cubescape-sdl-gles)

# Resources

* [Tools](https://github.com/cginternals/glbinding/wiki/tools)
* [Examples](https://github.com/cginternals/glbinding/wiki/examples)
* [Context Creation Cheat Sheet](https://github.com/cginternals/glbinding/wiki/Context-Creation-Cheat-Sheet)

### Installation and Development

* [Install Instructions](#install-instructions)
* [Build from Source](#build-instructions)
* [Updating the Generated Source Code](#update-generated-source-code)
* [Tips for Linking](#tips-for-linking)
* [Dependency on KHR Headers](#dependency-on-khr-headers)
* [Basic Example](#basic-example)

### Feature Documentation and Code Snippets

* [Type-safe Parameters](#type-safe-parameters)
* [Compilation-Centered Header Design](#compilation-centered-header-design)
* [Feature-Centered Header Design](#feature-centered-header-design)
* [Lazy Function Resolution](#lazy-function-pointer-resolution)
* [Multi-context Support](#multi-context-support)
* [Multi-thread Support](#multi-threading-support)
* [Global and Local Function Callbacks](#function-callbacks)
* [Alternative Signatures for GLboolean and GLenum types](#alternative-signatures)
* [Meta Information System](#meta-information)
* [Doxygen Documentations](https://glbinding.org/docs.html) ([stable](https://glbinding.org/docs/v3.1/), [master](https://glbinding.org/docs/master))

# Install Instructions

*glbinding* is available for different platforms using different distribution channels.
You can either download the source and manually [compile](#build-instructions) it or use one of the [pre-compiled releases](https://github.com/cginternals/glbinding/releases) of this repository.
For systems providing package managers, we generally strive for packages in these package managers.
An overview on availability of glbinding can be found on [repology.org](https://repology.org/project/glbinding/versions).

## Windows

The various *glbinding* packages can be installed either by downloading an installer, e.g., the [x64 installer for glbinding v3.1.0](https://github.com/cginternals/glbinding/releases/download/v3.1.0/glbinding-3.1.0-msvc2017-x64-installer.exe) for Microsoft Visual Studio 2015, or downloading and extracting one of the precompiled archives, e.g. [runtime](https://github.com/cginternals/glbinding/releases/download/v3.1.0/glbinding-3.1.0-msvc2017-x64-runtime.zip),
[examples](https://github.com/cginternals/glbinding/releases/download/v3.1.0/glbinding-3.1.0-msvc2017-x64-examples.zip),
[dev](https://github.com/cginternals/glbinding/releases/download/v3.1.0/glbinding-3.1.0-msvc2017-x64-dev.zip), and
[tools](https://github.com/cginternals/glbinding/releases/download/v3.1.0/glbinding-3.1.0-msvc2017-x64-tools.zip).
Since lately, glbinding is also available on [vcpkg](https://github.com/Microsoft/vcpkg/tree/master/ports/glbinding) with more recent releases:
```bash
> vcpkg install glbinding
```
Alternatively, download the source code and commence [building from source](#build-instructions).

## Ubuntu

*glbinding* is provided on Ubuntu using PPAs and in [Ubuntu universe](https://packages.ubuntu.com/source/artful/glbinding) since Artful Aardvark. We maintain our own [PPA](https://launchpad.net/~cginternals/+archive/ubuntu/ppa) for most recent releases.
Using the current PPA as example, the following lines install *glbinding* including the GLFW examples:

```shell
> sudo apt-add-repository ppa:cginternals/ppa
> sudo apt-get update
> sudo apt-get install libglbinding-examples-glfw
> # start example
> /usr/share/glbinding/cubescape
```

To use *glbinding* as dependency, install the development package:

```shell
> sudo apt-get install libglbinding-dev libglbinding-dbg
```

Alternatively, download the source code and commence [building from source](#build-instructions).

## Arch Linux

On Arch, *glbinding* is provided by the [glbinding](https://www.archlinux.org/packages/community/x86_64/glbinding/) package in the community repository. To install *glbinding* execute the following line:

```shell
> sudo pacman -S glbinding
```

Alternatively, download the source code and commence [building from source](#build-instructions).

## macOS

The package manager on macOS we depend on is homebrew. The package there is called [glbinding](http://formulae.brew.sh/formula/glbinding).
To install *glbinding* using homebrew, execute the following line:

```bash
> brew install glbinding
```

Alternatively, download the source code and commence [building from source](#build-instructions).

## Debian-based Systems

*glbinding* is available for Debian 9 (Stretch), 10 (Buster), 11 (Bullseye) and Sid. Install it using `apt install libglbinding-dev`.
For advanced use, download the source code and commence [building from source](#build-instructions).


## Cross-Platform Package Managers

As one of the cross-platform package managers, *conan* provides glbinding in its [center index](https://conan.io/center/glbinding). You can use the following line to install glbinding using conan:

```bash
> conan install glbinding/3.1.0@
```


# Build Instructions

### Prerequisites and Dependencies

The only mandatory run-time dependencies of *glbinding* are the STL of the used compiler and an OpenGL driver library, dynamically linked with your application.
Building *glbinding* from source has several mandatory and optional dependencies:

* [CMake](https://cmake.org/) 3.0 or higher for building *glbinding* from source (mandatory for any build from source)
* [git](https://git-scm.com/) for version control and script supporting tasks
* [GLFW](http://www.glfw.org/) 3.2 or higher for examples and tools
* [GLEW](http://glew.sourceforge.net/) 1.6 or higher for the comparison example (optional)
* [cpplocate](https://github.com/cginternals/cpplocate) for the examples (optional)
* [Qt5](http://www.qt.io/developers/) 5.0 or higher for the qt-based example (optional)
* [googletest](https://github.com/google/googletest) for tests (optional)
* [Doxygen](http://www.stack.nl/~dimitri/doxygen/) 1.8 or higher for generating the documentation on your system
  * [graphviz](http://www.graphviz.org/) for generating diagrams (optional)

### Compile Instructions

For compilation, a C++11 compliant compiler, e.g., GCC 4.8, Clang 3.3, MSVC 2013 **Update 3**, is required.
First, download the source code [as archive](https://github.com/cginternals/glbinding/releases) or via git:

```bash
> git clone https://github.com/cginternals/glbinding.git
> cd glbinding
```

Then, depending on the version of *glbinding* you want to build, choose the appropriate tag or branch, e.g., for the 2.1.4 release:

```bash
> git fetch --tags
> git checkout v2.1.4
```

The actual compilation can be done using CMake and your favorite compiler and IDE.

For building *glbinding* CMake via command line can be used (should work on all systems):

First, create a build directory (we do not recommend in-source builds):

```bash
> mkdir build
> cd build
```

Configure *glbinding* with your preferred or default generator, e.g., for Visual Studio 2017 in x64 use
(note: some IDEs have integrated support for CMake projects, e.g., Qt Creator, and allow you to skip the manual project configuration):

```bash
> cmake .. -G "Visual Studio 17 2022" -A x64
```

In order to compile the project, either use you favorite Editor/IDE with the created project or use CMake as follows:

```bash
> cmake --build .
```

For multi-configuration projects specific configuration (e.g., on Windows using MSVC) can be built using:

```bash
> cmake --build . --config Release
> cmake --build . --config Debug
```

### Update Generated Source Code

The generation scripts for *glbinding* are maintained within the [khrbinding-generator](https://github.com/cginternals/khrbinding-generator) project.
Assuming a directory structure with both projects such as `<projects>/glbinding` and `<projects>/khrbinding-generator`, updating the source code is started as follows:

```bash
> python3 update.py -p "profiles/gl.json"
> python3 generate.py -p "profiles/gl.json" -d "../glbinding/source"
```

# Tips for Linking

We suggest using the build system [CMake](https://cmake.org/) for a smooth integration.
For it, *glbinding* provides a configuration script that should be installed into your system or at least accessible by CMake.
In your projects' `CMakeLists.txt`, add one of the following lines:

```cmake
find_package(glbinding QUIET) # if you want to check for existence
find_package(glbinding REQUIRED) # if it is really required in your project
```

Finally, just link *glbinding* to your own library or executable:

```cmake
target_link_libraries(${target} ... PUBLIC
    glbinding::glbinding
    glbinding::glbinding-aux # for additional, auxiliary features as logging, meta information, or debugging functionality
)
```

# Dependency on KHR Headers

As of mid 2019, the OpenGL API depends on the platform headers from the Khronos group, even on desktop systems.
This introduced a direct dependency of *glbinding* to the `KHR/khrplatform.h` header file. For most Linux systems, these headers are easily available (e.g., by installing `libegl1-mesa-dev` on Ubuntu), whereas on other systems, pre-existing packages are scarce. Even in the case of Ubuntu, one can argue that installing the EGL dependency is strange, as glbinding does not depend on EGL in any way.

For those cases, glbinding comes with a copy of the headers for internal use.

This solution has one significant downside: As those headers are used by the types of the OpenGL API and the types are used within the public interface of glbinding, the `khrplatform.h` headers needs to be present when building downstream projects, i.e., they need to be installed along glbinding. In order to not conflict with packages providing the official headers, this internal header has to be installed on a separate location. This complicates the project setup and results in the following usage scenarios for you to choose from:

### KHR/khrplatform.h Usage

For this usage scenario, glbinding needs to get built with the CMake option `OPTION_BUILD_OWN_KHR_HEADERS` set to `Off` and system-wide availability of the `KHR/khrplatform.h` headers, e.g., by having `libegl1-mesa-dev` installed. If either the option is `On` or the system-wide headers are not found, the internally provided headers are used instead.

This decision is stored as property of the glbinding CMake target and will be used for downstream projects as well.
The use and propagation of this decision is transparent to the user as well, i.e., the user should not need to handle this downstream. The only thing to consider is to have the system-wide `KHR/khrplatform.h` headers available when building the downstream project.

### glbinding-internal khrplatform.h Usage

For this usage scenario, glbinding should get built with the CMake option `OPTION_BUILD_OWN_KHR_HEADERS` set to `On`. Alternatively, this scenario is the fallback if the official `KHR/khrplatform.h` headers are not found.

This decision is stored as property of the glbinding CMake target and will be used for downstream projects as well.
The use and propagation of this decision is transparent to the user as well, i.e., the user should not need to handle this downstream.

# Basic Example

The following examples are tailored for use with *glbinding* 3.0 and above.

*glbinding* has to be initialized once on the active OpenGL context you want to use *glbinding* with. For initialization, a callback for function pointer resolution must be passed, which your context creation API should provide.
In the most basic case, you call ```glbinding::initialize``` once:

```cpp
#include <glbinding/gl/gl.h>
#include <glbinding/glbinding.h>

using namespace gl;

int main()
{
  // create context, e.g. using GLFW, Qt, SDL, GLUT, ...

  // Assume context creation using GLFW
  glbinding::initialize(glfwGetProcAddress);

  glBegin(GL_TRIANGLES);
  // ...
  glEnd();
}
```


# Features

The following examples are tailored for use with *glbinding* 3.0 and above.

### Type-Safe Parameters

The original OpenGL API provides several concepts in their interface, namely functions, booleans, bitfields, enums, as well as special values and basic types but mostly does not differentiate between these types.
Hence, actual knowledge about each function and its parameters is required; there is no way for a basic code assistance.
As *glbinding* differentiates between all these types, IDEs and compilers can detect wrong usages of the OpenGL API.

One example is the passing of a named constant in places where a bit combination is expected:

```cpp
glClear(GL_COLOR_BUFFER_BIT); // valid
glClear(GL_FRAMEBUFFER);      // compilation error: bitfield of group ClearBufferMask expected, got GLenum
```

In the case of bitfields, the OpenGL API offers groups and each parameter states the group valid values must come from.
*glbinding* uses this information to prevent invalid bit combinations:

```cpp
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // valid
glClear(GL_COLOR_BUFFER_BIT | GL_MAP_READ_BIT);     // compile error: both bitfields share no group

glClear(GL_STENCIL_BUFFER_BIT | GL_LIGHTING_BIT);   // compile error: bitwise or operation is valid,
                                                    // the shared group is AttribMask, but the
                                                    // resulting group does not match the expected.
```

Unfortunately, such groups are incomplete and unmaintained for enums (named values).
Thus, *glbinding* could not provide any assistance for cases such as:

```cpp
GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER); // All good
GLuint colorShader = glCreateShader(GL_COLOR);          // No compilation error but a runtime error!
```

### Compilation-Centered Header Design

C++ strictly separates interface from implementation.
For improving the compilation time of a program or system written in C++ forward declarations of types are commonly used and includes of unnecessary symbols are omitted.

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

### Feature-Centered Header Design

The OpenGL API is iteratively developed and released in versions, internally (for the API specification) named *features*.
The latest feature/version of OpenGL is 4.6.
The previous version are 1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 2.0, 2.1, 3.0, 3.1, 3.2, 3.3, 4.0, 4.1, 4.2, 4.3, 4.4., and 4.5.
OpenGL uses a deprecation model for removing outdated parts of its API which results in compatibility (with deprecated API) and core (without deprecated API) usage that is manifested in the targeted OpenGL context.
On top of that, new API concepts are suggested as extensions (often vendor specific) that might be integrated into future versions.
All this results in many possible specific manifestations of the OpenGL API you can use in your program.

One tough task is to adhere to one agreed set of functions in your own OpenGL program (e.g., OpenGL 3.2 Core if you want to develop for every Windows, macOS, and Linux released in the last 4 years).
*glbinding* facilitates this by providing per-feature headers by means of well-defined/generated subsets of the OpenGL API.

#### All-Features OpenGL Headers

If you do not use per-feature headers the OpenGL program can look like this:

```cpp
#include <glbinding/gl/gl.h>

// draw code
gl::glClear(gl::GL_COLOR_BUFFER_BIT | gl::GL_DEPTH_BUFFER_BIT);
gl::glUniform1i(u_numcubes, m_numcubes);
gl::glDrawElementsInstanced(gl::GL_TRIANGLES, 18, gl::GL_UNSIGNED_BYTE, 0, m_numcubes * m_numcubes);
```

#### Single-Feature OpenGL Headers

When developing your code on Windows with latest drivers installed, the code above is likely to compile and run.
But if you want to port it to systems with less mature driver support (e.g., macOS or Linux using open source drivers), you may wonder if ```glDrawElementsInstanced``` is available.
In this case, just switch to per-feature headers of *glbinding* and choose the OpenGL 3.2 Core headers (as you know that at least this version is available on all target platforms):

```cpp
#include <glbinding/gl32core/gl.h>

// draw code
gl32core::glClear(gl32core::GL_COLOR_BUFFER_BIT | gl32core::GL_DEPTH_BUFFER_BIT);
gl32core::glUniform1i(u_numcubes, m_numcubes);
gl32core::glDrawElementsInstanced(gl32core::GL_TRIANGLES, 18, gl32core::GL_UNSIGNED_BYTE, 0, m_numcubes * m_numcubes);
```

If the code compiles you can be sure it is OpenGL 3.2 Core compliant.
Using functions that are not yet available or relying on deprecated functionality is prevented.

### Lazy Function Pointer Resolution

By default, *glbinding* tries to resolve all OpenGL function pointers during initialization, which can consume some time:

```cpp
// Assume context creation using GLFW
glbinding::initialize(glfwGetProcAddress); // immediate function pointer resolution
```

Alternatively, the user can decide that functions pointers are resolved only when used for the first time. This is achieved by:

```cpp
// Assume context creation using GLFW
glbinding::initialize(glfwGetProcAddress, false); // lazy function pointer resolution
```

### Multi-Context Support

*glbinding* has built-in support for multiple contexts. The only requirement is, that the currently active context has to be specified. This feature mixes well with multi-threaded applications, but keep in mind that concurrent use of one context often results in non-meaningful communication with the OpenGL driver.

In order to use multiple contexts, use your favorite context creation library (e.g., glut, SDL, egl, glfw, Qt) to request the required contexts.
The functions to make a context current should be provided by these libraries and is not part of *glbinding* (except that you can get the current context handle).
When using multiple contexts, *glbinding* has to be initialized for each context (when current).

Since each context can correspond to a different feature set of OpenGL and the drivers are free to assign their function pointers, *glbinding* cannot assume any equalities of requested function pointers.
Thus, contexts switches have to be communicated to *glbinding* explicitly in order to have correctly dispatched function pointers:

```cpp
// use the current active context
glbinding::useCurrentContext();

// use another context, identified by platform-specific handle
glbinding::useContext(ContextHandle context);
```

### Multi-Threading Support

Concurrent use of *glbinding* is mainly intended for usage over multiple contexts in different threads (multiple threads operating on a single OpenGL context requires locking, which *glbinding* will not provide).
For it, *glbinding* supports multiple active contexts, one per thread.
This necessitates that *glbinding* gets informed in each thread which context is currently active (see [multi-context example](https://github.com/cginternals/glbinding/tree/master/source/examples/multi-context)).

Note: multi-threaded communication with OpenGL will most likely result in a meaningless sequence of OpenGL calls.
To avoid this, semantic groups of OpenGL calls should be treated as critical sections.

Example for usage of multiple contexts:
```cpp
// Context 1 creation
// GLFWwindow * window1 = glfwCreateWindow(640, 480, "", nullptr, nullptr);
// glfwMakeContextCurrent(window1);
glbinding::initialize(0, glfwGetProcAddress); // 0 here is the context identifier
// Context 1 initialization
glClearColor(1.0f, 0.0f, 0.0f, 0.0f);

// Context 2 creation
// GLFWwindow * window2 = glfwCreateWindow(640, 480, "", nullptr, nullptr);
// glfwMakeContextCurrent(window2);
glbinding::initialize(1, glfwGetProcAddress); // 1 here is the context identifier
// Context 1 initialization
glClearColor(0.0f, 1.0f, 0.0f, 0.0f);

// Rendering
while (doNotClose()) {
  // Make context 1 active
  // glfwMakeContextCurrent(window1);
  glbinding::useContext(0);

  // Context 1 rendering
  glViewport(0, 0, width, height);
  glClear(GL_COLOR_BUFFER_BIT);

  // Swap buffer for context 1
  // glfwSwapBuffers(window1);

  // Make context 2 active
  // glfwMakeContextCurrent(window2);
  glbinding::useContext(1);

  // Context 2 rendering
  glViewport(0, 0, width, height);
  glClear(GL_COLOR_BUFFER_BIT);

  // Swap buffer for context 2
  // glfwSwapBuffers(window2);
}
```

### Multiple OpenGL Contexts in Multiple Threads

The combination of multiple OpenGL contexts and multiple threads for OpenGL usage is supported by *glbinding* in general.
You must tell *glbinding* which OpenGL context is used in which thread by calling the initialize method once the context is used first (```glbinding::initialize```) and if you want to switch the current context for one thread, you have to update the current context, too (```glbinding::useContext```).
However, we discourage the use of one context in multiple threads.

### Function Callbacks

To support orthogonal features of the OpenGL API, *glbinding* allows attaching a number of callbacks to several concepts of the OpenGL API (e.g. a function).
Such orthogonal features include runtime error checking (i.e., ```glGetError``` after each function call), logging, and caching of driver information.

*glbinding* supports different types of callbacks that can be registered.
The main types are

 * global and local (per-function) before callbacks, that are called before the OpenGL function call,
 * global and local (per-function) after callbacks, that are called after the OpenGL function call,
 * unresolved callbacks, that are called each time an unresolved OpenGL function should be called (instead of a segmentation fault),
 * context switch callbacks, that are called if the internal current OpenGL context of *glbinding* is changed.

The before callbacks are useful , e.g., for tracing or application-specific parameter checking.
The available information in this callback is the wrapped OpenGL function (including its name and bound function address) and all parameters.
The after callbacks are useful, e.g., for tracing, logging, or the obligatory error check (```glGetError```).
Available information is extended by the return value.
The unresolved callback provides information about the (unresolved) wrapped OpenGL function object.

Example for error checking:

```cpp
setCallbackMaskExcept(CallbackMask::After, { "glGetError" });
setAfterCallback([](const FunctionCall &)
{
  const auto error = glGetError();
  if (error != GL_NO_ERROR)
    std::cout << "error: " << std::hex << error << std::endl;
});

// OpenGL Code ...
```

As a shortcut, *glbinding* 3.0 introduced a debugging interface for error-checking after callbacks within the *glbinding-aux* library:

```cpp
#include <glbinding-aux/debug.h>

glbinding::aux::enableGetErrorCallback();

// OpenGL Code ...
```

Example for logging:

```cpp
setCallbackMask(CallbackMask::After | CallbackMask::ParametersAndReturnValue);
setAfterCallback([](const FunctionCall & call)
{
  std::cout << call.function->name() << "(";
  for (unsigned i = 0; i < call.parameters.size(); ++i)
  {
    std::cout << call.parameters[i].get();
    if (i < call.parameters.size() - 1)
      std::cout << ", ";
  }
  std::cout << ")";

  if (call.returnValue)
    std::cout << " -> " << call.returnValue.get();

  std::cout << std::endl;
});

// OpenGL Code ...
```

### Alternative Signatures

The OpenGL API is designed without function overloading using only simple parameter types.
This results in explicit parameter encoding in function names for conceptually overloaded functions (e.g., glTexParameteri and glTexParameterf).
Another design decision for the OpenGL API is the high similarity of the integer, boolean, enum, and bitfield data types.
This means, that for *overloaded* functions, there is no separate function for ```GLboolean```, ```GLenum```, and ```GLbitfield``` types.
Using type-save functions of *glbinding*, some typically compiling code constructs are now deliberately broken.
For most of those cases, we provide alternative *overloaded* function signatures.
Additionally, we also fix signatures that are semantically broken in the OpenGL API specification, i.e., when base types (C types) are similar such as in the case of enums and integers.

Alternative function signatures are enabled by default, so the following example works out-of-the-box:

```cpp
#include <glbinding/gl/gl.h>

using namespace gl;

// ...
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
glTexImage2D(GL_TEXTURE_2D, 0, GL_R8, 64, 64, 0, GL_RED, GL_UNSIGNED_BYTE, terrain.data());
```

### Meta Information

Besides an actual OpenGL binding, *glbinding* also supports queries for both compile time and runtime information about the gl.xml and your OpenGL driver within the *glbinding-aux* library. This library comes with own includes and needs to be linked separately.
Typical use cases are querying the available OpenGL extensions or the associated extensions to an OpenGL feature and their functions and enums.

The following example prints out a list of all available OpenGL versions/features:

```cpp
#include <iostream>

#include <glbinding/Version.h>

#include <glbinding-aux/Meta.h>
#include <glbinding-aux/types_to_string.h>

// ...
using namespace glbinding;

for (const Version & v : aux::Meta::versions())
  std::cout << v << std::endl;
```
