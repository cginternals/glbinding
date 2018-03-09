
#include <gmock/gmock.h>

#include <glxbinding/glx/gl.h>
#include <glxbinding/glx10/gl.h>
#include <glxbinding/glx11/gl.h>
#include <glxbinding/glx12/gl.h>
#include <glxbinding/glx13/gl.h>
#include <glxbinding/glx14/gl.h>


TEST(AllVersions, Compilation)
{
    SUCCEED();  // compiling this file without errors and warnings results in successful test
}
