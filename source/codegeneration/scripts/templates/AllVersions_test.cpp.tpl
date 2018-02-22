
#include <gmock/gmock.h>

{{#apiMemberSets.items}}
#include <glbinding/{{api}}{{item.memberSet}}/gl.h>
{{/apiMemberSets.items}}


TEST(AllVersions, Compilation)
{
    SUCCEED();  // compiling this file without errors and warnings results in successful test
}
