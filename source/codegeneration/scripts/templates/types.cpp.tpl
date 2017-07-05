
#include <glbinding/{{api}}/types.h>

#include <glbinding/Meta.h>

#include <bitset>
#include <sstream>


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(gl::GLbitfield) * 8> bits(static_cast<gl::GLbitfield>(value));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(gl::GLbitfield) * 8; ++i)
    {
    if (!bits.test(i))
        continue;

    if (first)
        {
            first = false;
        }
        else
        {
            ss << " | ";
        }

    const gl::GLbitfield bit = 1 << i;

    const auto identifier = glbinding::Meta::getString(static_cast<T>(bit));
    if (identifier.empty())
    {
        ss << "1 << " << i;
    }
    else
    {
        ss << identifier;
    }
    }
    return ss.str();
}

{{#types.items}}
{{#item.integrations.streamable}}
{{#item}}{{>partials/types_streamable.cpp}}{{/item}}

{{/item.integrations.streamable}}
{{#item.integrations.addable}}
{{#item}}{{>partials/types_addable.cpp}}{{/item}}

{{/item.integrations.addable}}
{{#item.integrations.bitfieldStreamable}}
{{#item}}{{>partials/types_bitfieldStreamable.cpp}}{{/item}}

{{/item.integrations.bitfieldStreamable}}
{{#item.integrations.bitOperatable}}
{{#item}}{{>partials/types_bitOperatable.cpp}}{{/item}}

{{/item.integrations.bitOperatable}}
{{#item.integrations.comparable}}
{{#item}}{{>partials/types_comparable.cpp}}{{/item}}

{{/item.integrations.comparable}}
{{#item.hasIntegrations}}

{{/item.hasIntegrations}}
{{/types.items}}
