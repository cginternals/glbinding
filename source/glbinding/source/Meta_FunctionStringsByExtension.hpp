#pragma once

#include <unordered_map>

#include <glbinding/Extension.h>


namespace gl
{

class Meta_FunctionStringsByExtension
{
public:
    Meta_FunctionStringsByExtension() = delete;

    inline static const std::vector<std::string> & get(const Extension extension)
    {
        auto i = s_strings.find(extension);
        if (i == s_strings.end())
        {
            static const std::vector<std::string> none;
            return none;
        }
        return i->second;
    }

protected:
    static const std::unordered_map<Extension, std::vector<std::string>> s_strings;
};

} // namespace gl
