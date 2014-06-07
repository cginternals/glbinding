#pragma once

#include <unordered_map>

#include <glbinding/enums.h>


namespace gl
{

class Meta_EnumsByString
{
public:
    Meta_EnumsByString() = delete;

    inline static GLenum get(const std::string & glenum)
    {
        auto i = s_enums.find(glenum);
        if (i == s_enums.end())
            return static_cast<GLenum>(-1);

        return i->second;
    }

protected:
    static const std::unordered_map<std::string, GLenum> s_enums;
};

} // namespace gl
