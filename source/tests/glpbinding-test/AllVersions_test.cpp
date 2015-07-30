#include <gmock/gmock.h>

#include <glpbinding/glp/glp.h>
#include <glpbinding/glp20/glp.h>
#include <glpbinding/glp30/glp.h>
#include <glpbinding/glp31/glp.h>

TEST(AllVersions, Compilation)
{
    SUCCEED();  // compiling this file without errors and warnings results in successful test
}
