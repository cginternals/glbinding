#include <gmock/gmock.h>

#include <glesbinding/gles/gles.h>
#include <glesbinding/gles20/gles.h>
#include <glesbinding/gles30/gles.h>
#include <glesbinding/gles31/gles.h>

TEST(AllVersions, Compilation)
{
    SUCCEED();  // compiling this file without errors and warnings results in successful test
}
