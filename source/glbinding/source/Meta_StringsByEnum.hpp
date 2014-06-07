#pragma once

#include <unordered_map>

#include <glbinding/enums.h>


namespace gl
{

class Meta_StringsByEnum
{
public:
    Meta_StringsByEnum() = delete;

    inline static const std::string & get(const gl::GLenum glenum)
    {
        auto i = s_strings.find(glenum);
        if (i == s_strings.end())
        {
            static const std::string none;
            return none;
        }
        return i->second;
    }

protected:
    static const std::unordered_map<GLenum, std::string> s_strings;
};

} // namespace gl
