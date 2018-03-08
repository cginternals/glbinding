
#include <gmock/gmock.h>

#include <glesbinding/gles/gl.h>
#include <glesbinding/gles20/gl.h>
#include <glesbinding/gles30/gl.h>
#include <glesbinding/gles31/gl.h>
#include <glesbinding/gles32/gl.h>


TEST(AllVersions, Compilation)
{
    SUCCEED();  // compiling this file without errors and warnings results in successful test
}
