#pragma once

#include <unordered_map>

#include <glbinding/Extension.h>


namespace gl
{

class Meta_ExtensionsByFunctionString
{
public:
    Meta_ExtensionsByFunctionString() = delete;

    inline static const std::vector<Extension> & get(const std::string & function)
    {
        auto i = s_extensions.find(function);
        if (i == s_extensions.end())
        {
            static const std::vector<Extension> none;
            return none;
        }
        return i->second;
    }

protected:
    static const std::unordered_map<std::string, std::vector<Extension>> s_extensions;
};

} // namespace gl
