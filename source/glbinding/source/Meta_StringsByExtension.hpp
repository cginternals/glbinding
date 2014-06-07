#pragma once

#include <unordered_map>

#include <glbinding/Extension.h>


namespace gl
{

class Meta_StringsByExtension
{
public:
    Meta_StringsByExtension() = delete;

    inline static const std::string & get(const Extension extension)
    {
        auto i = s_strings.find(extension);
        if (i == s_strings.end())
        {
            static const std::string none;
            return none;
        }
        return i->second;
    }

protected:
    static const std::unordered_map<Extension, std::string> s_strings;
};

} // namespace gl
