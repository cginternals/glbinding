#pragma once

#include <unordered_map>

#include <glbinding/Extension.h>


namespace gl
{

class Meta_ExtensionsByString
{
public:
    Meta_ExtensionsByString() = delete;

    inline static Extension get(const std::string & extension)
    {
        auto i = s_extensions.find(extension);
        if (i == s_extensions.end())
            return Extension::UNKNOWN;

        return i->second;
    }

protected:
    static const std::unordered_map<std::string, Extension> s_extensions;
};

} // namespace gl
