
#include <gmock/gmock.h>


#include <glbinding/gl45core/boolean.h>


using namespace gl;


TEST(Boolean, Compilation)
{
    const gl45core::GLboolean b1 = gl45core::GL_TRUE;
    const gl::GLboolean b2 = gl::GL_TRUE;
    const GLboolean b3 = GL_TRUE;

    (void)b1;
    (void)b2;
    (void)b3;

    SUCCEED();  // compiling this file without errors and warnings results in successful test
}
