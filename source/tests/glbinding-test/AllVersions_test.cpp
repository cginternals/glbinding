
#include <gmock/gmock.h>


#include <glbinding/gl10/gl.h>
#include <glbinding/gl11/gl.h>
#include <glbinding/gl12/gl.h>
#include <glbinding/gl13/gl.h>
#include <glbinding/gl14/gl.h>
#include <glbinding/gl15/gl.h>
#include <glbinding/gl20/gl.h>
#include <glbinding/gl21/gl.h>
#include <glbinding/gl30/gl.h>
#include <glbinding/gl31/gl.h>
#include <glbinding/gl32/gl.h>
#include <glbinding/gl33/gl.h>
#include <glbinding/gl40/gl.h>
#include <glbinding/gl41/gl.h>
#include <glbinding/gl42/gl.h>
#include <glbinding/gl43/gl.h>
#include <glbinding/gl44/gl.h>
#include <glbinding/gl45/gl.h>
#include <glbinding/gl46/gl.h>


TEST(AllVersions, Compilation)
{
    SUCCEED();  // compiling this file without errors and warnings results in successful test
}