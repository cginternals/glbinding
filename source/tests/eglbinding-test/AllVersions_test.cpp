
#include <gmock/gmock.h>

#include <eglbinding/egl/gl.h>
#include <eglbinding/egl10/gl.h>
#include <eglbinding/egl11/gl.h>
#include <eglbinding/egl12/gl.h>
#include <eglbinding/egl13/gl.h>
#include <eglbinding/egl14/gl.h>
#include <eglbinding/egl15/gl.h>


TEST(AllVersions, Compilation)
{
    SUCCEED();  // compiling this file without errors and warnings results in successful test
}
