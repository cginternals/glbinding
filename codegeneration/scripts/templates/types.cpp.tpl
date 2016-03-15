
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
};

{{#types.items}}
{{#item}}
{{#integrations.hashable}}
{{>partials/types_hashable.cpp}}

{{/integrations.hashable}}
{{#integrations.streamable}}
{{>partials/types_streamable.cpp}}

{{/integrations.streamable}}
{{#integrations.addable}}
{{>partials/types_addable.cpp}}

{{/integrations.addable}}
{{#integrations.bitfieldStreamable}}
{{>partials/types_bitfieldStreamable.cpp}}

{{/integrations.bitfieldStreamable}}
{{#integrations.bitOperatable}}
{{>partials/types_bitOperatable.cpp}}

{{/integrations.bitOperatable}}
{{#integrations.comparable}}
{{>partials/types_comparable.cpp}}

{{/integrations.comparable}}
{{/item}}
{{/types.items}}
