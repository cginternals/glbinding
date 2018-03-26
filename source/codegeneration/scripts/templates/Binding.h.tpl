
#pragma once


#include <array>
#include <vector>
#include <functional>

#include <khrbinding/{{bindingType}}.h>
#include <khrbinding/AbstractFunction.h>

#include <{{api}}binding/{{api}}binding_api.h>
#include <{{api}}binding/{{api}}binding_features.h>

#include <{{api}}binding/ContextHandle.h>
#include <{{api}}binding/Function.h>

#include <{{api}}binding/{{api}}/types.h>


namespace {{api}}binding
{


/**
*  @brief
*    The main interface to handle additional features to OpenGL functions besides regular function calls
*
*  Additional features include binding initialization (even for multi-threaded environments), additional function registration,
*  context switches (for multi-context environments) and basic reflection in form of accessors to the full list of functions
*/
class {{ucapi}}BINDING_API Binding : public khrbinding::{{bindingType}}<Binding>
{
public:
    using array_t = std::array<khrbinding::AbstractFunction *, {{functions.count}}>; ///< The type of the build-in functions collection

    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Binding() = delete;

    /**
    *  @brief
    *    The accessor for all build-in functions
    * 
    *  @return
    *    The list of all build-in functions
    */
    static const array_t & functions();


public:
{{#functions.items}}
    {{#item}}static Function<Binding, {{>partials/general_typeNs}}{{^params.empty}}, {{>partials/general_paramSignatureNs}}{{/params.empty}}> {{identifierNoGl}}; ///< Wrapper for {{identifier}}{{/item}}
{{/functions.items}}


protected:
    static const array_t s_functions;           ///< The list of all build-in functions
};


} // namespace {{api}}binding
