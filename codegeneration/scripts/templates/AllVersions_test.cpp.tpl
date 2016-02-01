#include <gmock/gmock.h>

{{#features}}
#include <glbinding/{{api}}{{feature}}/gl.h>
{{/features}}

TEST(AllVersions, Compilation)
{
    SUCCEED();  // compiling this file without errors and warnings results in successful test
}
