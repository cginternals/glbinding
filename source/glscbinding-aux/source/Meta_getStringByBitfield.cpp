
#include <glscbinding-aux/Meta.h>

#include <glscbinding/glsc/bitfield.h>

#include "Meta_Maps.h"


using namespace glsc;


namespace
{


const auto none = std::string{};


} // namespace


namespace glscbinding { namespace aux
{



const std::string & Meta::getString(const AttribMask bitfield)
{
    const auto i = Meta_StringsByAttribMask.find(bitfield);
    if (i != Meta_StringsByAttribMask.end())
    {
        return i->second;
    }
    return none;
}


const std::string & Meta::getString(const ClearBufferMask bitfield)
{
    const auto i = Meta_StringsByClearBufferMask.find(bitfield);
    if (i != Meta_StringsByClearBufferMask.end())
    {
        return i->second;
    }
    return none;
}


} } // namespace glscbinding::aux
