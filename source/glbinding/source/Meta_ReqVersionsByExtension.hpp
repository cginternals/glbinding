#pragma once

#include <unordered_map>
#include <utility>

#include <glbinding/Extension.h>


namespace gl
{

class Meta_ReqVersionsByExtension
{
public:
    Meta_ReqVersionsByExtension() = delete;

    using ucharpair = std::pair<unsigned char, unsigned char>;
    inline static const ucharpair & get(const Extension extension)
    {
        auto i = s_versions.find(extension);
        if (i == s_versions.end())
        {
            static const ucharpair none(0, 0);
            return none;
        }
        return i->second;
    }

protected:
    static const std::unordered_map<Extension, ucharpair> s_versions;
};

} // namespace gl
