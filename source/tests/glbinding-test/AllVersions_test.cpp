#include <gmock/gmock.h>

#include <glbinding/gl/gl.h>
#include <glbinding/gl/gl10.h>
#include <glbinding/gl/gl10ext.h>
#include <glbinding/gl/gl11.h>
#include <glbinding/gl/gl11ext.h>
#include <glbinding/gl/gl12.h>
#include <glbinding/gl/gl12ext.h>
#include <glbinding/gl/gl13.h>
#include <glbinding/gl/gl13ext.h>
#include <glbinding/gl/gl14.h>
#include <glbinding/gl/gl14ext.h>
#include <glbinding/gl/gl15.h>
#include <glbinding/gl/gl15ext.h>
#include <glbinding/gl/gl20.h>
#include <glbinding/gl/gl20ext.h>
#include <glbinding/gl/gl21.h>
#include <glbinding/gl/gl21ext.h>
#include <glbinding/gl/gl30.h>
#include <glbinding/gl/gl30ext.h>
#include <glbinding/gl/gl31.h>
#include <glbinding/gl/gl31ext.h>
#include <glbinding/gl/gl32.h>
#include <glbinding/gl/gl32core.h>
#include <glbinding/gl/gl32ext.h>
#include <glbinding/gl/gl33.h>
#include <glbinding/gl/gl33core.h>
#include <glbinding/gl/gl33ext.h>
#include <glbinding/gl/gl40.h>
#include <glbinding/gl/gl40core.h>
#include <glbinding/gl/gl40ext.h>
#include <glbinding/gl/gl41.h>
#include <glbinding/gl/gl41core.h>
#include <glbinding/gl/gl41ext.h>
#include <glbinding/gl/gl42.h>
#include <glbinding/gl/gl42core.h>
#include <glbinding/gl/gl42ext.h>
#include <glbinding/gl/gl43.h>
#include <glbinding/gl/gl43core.h>
#include <glbinding/gl/gl43ext.h>
#include <glbinding/gl/gl44.h>
#include <glbinding/gl/gl44core.h>
#include <glbinding/gl/gl44ext.h>
#include <glbinding/gl/gl45.h>
#include <glbinding/gl/gl45core.h>
#include <glbinding/gl/gl45ext.h>

TEST(AllVersions, Compilation)
{
    SUCCEED();  // compiling this file without errors and warnings results in successful test
}
