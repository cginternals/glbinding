#pragma once

#include <khrapi/khrapi_api.h>

#include <khrapi/callbacks.h>


namespace khrapi 
{

namespace logging
{
    KHRAPI_API void resize(const unsigned int);

    KHRAPI_API void start();
    KHRAPI_API void start(const std::string & filepath);
    KHRAPI_API void stop();

    using BufferType = FunctionCall*;
    KHRAPI_API void log(BufferType call);
}


} // namespace khrapi
