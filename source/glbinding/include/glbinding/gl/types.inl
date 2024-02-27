
#pragma once


#include <glbinding/gl/types.h>


namespace std
{


template<>
struct hash<gl::GLextension>
{
    std::size_t operator()(const gl::GLextension & t) const
    {
        return hash<std::underlying_type<gl::GLextension>::type>()(static_cast<std::underlying_type<gl::GLextension>::type>(t));
    }
};


} // namespace std


namespace std
{


template<>
struct hash<gl::GLenum>
{
    std::size_t operator()(const gl::GLenum & t) const
    {
        return hash<std::underlying_type<gl::GLenum>::type>()(static_cast<std::underlying_type<gl::GLenum>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline GLenum operator+(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) + b);
}

GLBINDING_CONSTEXPR inline GLenum operator-(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) - b);
}

GLBINDING_CONSTEXPR inline bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) == b;
}

GLBINDING_CONSTEXPR inline bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) != b;
}

GLBINDING_CONSTEXPR inline bool operator< (const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) < b;
}

GLBINDING_CONSTEXPR inline bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) <= b;
}

GLBINDING_CONSTEXPR inline bool operator> (const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) > b;
}

GLBINDING_CONSTEXPR inline bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) >= b;
}

GLBINDING_CONSTEXPR inline bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a == static_cast<std::underlying_type<GLenum>::type>(b);
}

GLBINDING_CONSTEXPR inline bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a != static_cast<std::underlying_type<GLenum>::type>(b);
}

GLBINDING_CONSTEXPR inline bool operator< (std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a < static_cast<std::underlying_type<GLenum>::type>(b);
}

GLBINDING_CONSTEXPR inline bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a <= static_cast<std::underlying_type<GLenum>::type>(b);
}

GLBINDING_CONSTEXPR inline bool operator> (std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a > static_cast<std::underlying_type<GLenum>::type>(b);
}

GLBINDING_CONSTEXPR inline bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a >= static_cast<std::underlying_type<GLenum>::type>(b);
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::AttribMask>
{
    std::size_t operator()(const gl::AttribMask & t) const
    {
        return hash<std::underlying_type<gl::AttribMask>::type>()(static_cast<std::underlying_type<gl::AttribMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline AttribMask operator|(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator|=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline AttribMask operator&(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator&=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline AttribMask operator^(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator^=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::BufferStorageMask>
{
    std::size_t operator()(const gl::BufferStorageMask & t) const
    {
        return hash<std::underlying_type<gl::BufferStorageMask>::type>()(static_cast<std::underlying_type<gl::BufferStorageMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline BufferStorageMask operator|(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator|=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator&=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator^=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::ClearBufferMask>
{
    std::size_t operator()(const gl::ClearBufferMask & t) const
    {
        return hash<std::underlying_type<gl::ClearBufferMask>::type>()(static_cast<std::underlying_type<gl::ClearBufferMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator|=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator&=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator^=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::ClientAttribMask>
{
    std::size_t operator()(const gl::ClientAttribMask & t) const
    {
        return hash<std::underlying_type<gl::ClientAttribMask>::type>()(static_cast<std::underlying_type<gl::ClientAttribMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline ClientAttribMask operator|(const ClientAttribMask & a, const ClientAttribMask & b)
{
    return static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) | static_cast<std::underlying_type<ClientAttribMask>::type>(b));
}

inline ClientAttribMask & operator|=(ClientAttribMask & a, const ClientAttribMask & b)
{
    a = static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) | static_cast<std::underlying_type<ClientAttribMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ClientAttribMask operator&(const ClientAttribMask & a, const ClientAttribMask & b)
{
    return static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) & static_cast<std::underlying_type<ClientAttribMask>::type>(b));
}

inline ClientAttribMask & operator&=(ClientAttribMask & a, const ClientAttribMask & b)
{
    a = static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) & static_cast<std::underlying_type<ClientAttribMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ClientAttribMask operator^(const ClientAttribMask & a, const ClientAttribMask & b)
{
    return static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) ^ static_cast<std::underlying_type<ClientAttribMask>::type>(b));
}

inline ClientAttribMask & operator^=(ClientAttribMask & a, const ClientAttribMask & b)
{
    a = static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) ^ static_cast<std::underlying_type<ClientAttribMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::ContextFlagMask>
{
    std::size_t operator()(const gl::ContextFlagMask & t) const
    {
        return hash<std::underlying_type<gl::ContextFlagMask>::type>()(static_cast<std::underlying_type<gl::ContextFlagMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline ContextFlagMask operator|(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator|=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator&=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator^=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::ContextProfileMask>
{
    std::size_t operator()(const gl::ContextProfileMask & t) const
    {
        return hash<std::underlying_type<gl::ContextProfileMask>::type>()(static_cast<std::underlying_type<gl::ContextProfileMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline ContextProfileMask operator|(const ContextProfileMask & a, const ContextProfileMask & b)
{
    return static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) | static_cast<std::underlying_type<ContextProfileMask>::type>(b));
}

inline ContextProfileMask & operator|=(ContextProfileMask & a, const ContextProfileMask & b)
{
    a = static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) | static_cast<std::underlying_type<ContextProfileMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ContextProfileMask operator&(const ContextProfileMask & a, const ContextProfileMask & b)
{
    return static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) & static_cast<std::underlying_type<ContextProfileMask>::type>(b));
}

inline ContextProfileMask & operator&=(ContextProfileMask & a, const ContextProfileMask & b)
{
    a = static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) & static_cast<std::underlying_type<ContextProfileMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ContextProfileMask operator^(const ContextProfileMask & a, const ContextProfileMask & b)
{
    return static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<ContextProfileMask>::type>(b));
}

inline ContextProfileMask & operator^=(ContextProfileMask & a, const ContextProfileMask & b)
{
    a = static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<ContextProfileMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::FfdMaskSGIX>
{
    std::size_t operator()(const gl::FfdMaskSGIX & t) const
    {
        return hash<std::underlying_type<gl::FfdMaskSGIX>::type>()(static_cast<std::underlying_type<gl::FfdMaskSGIX>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline FfdMaskSGIX operator|(const FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    return static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) | static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
}

inline FfdMaskSGIX & operator|=(FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    a = static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) | static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FfdMaskSGIX operator&(const FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    return static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) & static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
}

inline FfdMaskSGIX & operator&=(FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    a = static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) & static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FfdMaskSGIX operator^(const FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    return static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) ^ static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
}

inline FfdMaskSGIX & operator^=(FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    a = static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) ^ static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::FragmentShaderColorModMaskATI>
{
    std::size_t operator()(const gl::FragmentShaderColorModMaskATI & t) const
    {
        return hash<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>()(static_cast<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline FragmentShaderColorModMaskATI operator|(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    return static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
}

inline FragmentShaderColorModMaskATI & operator|=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    a = static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderColorModMaskATI operator&(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    return static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
}

inline FragmentShaderColorModMaskATI & operator&=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    a = static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderColorModMaskATI operator^(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    return static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
}

inline FragmentShaderColorModMaskATI & operator^=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    a = static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::FragmentShaderDestMaskATI>
{
    std::size_t operator()(const gl::FragmentShaderDestMaskATI & t) const
    {
        return hash<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>()(static_cast<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline FragmentShaderDestMaskATI operator|(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

inline FragmentShaderDestMaskATI & operator|=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderDestMaskATI operator&(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

inline FragmentShaderDestMaskATI & operator&=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderDestMaskATI operator^(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

inline FragmentShaderDestMaskATI & operator^=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::FragmentShaderDestModMaskATI>
{
    std::size_t operator()(const gl::FragmentShaderDestModMaskATI & t) const
    {
        return hash<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>()(static_cast<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline FragmentShaderDestModMaskATI operator|(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

inline FragmentShaderDestModMaskATI & operator|=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderDestModMaskATI operator&(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

inline FragmentShaderDestModMaskATI & operator&=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderDestModMaskATI operator^(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

inline FragmentShaderDestModMaskATI & operator^=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::MapBufferAccessMask>
{
    std::size_t operator()(const gl::MapBufferAccessMask & t) const
    {
        return hash<std::underlying_type<gl::MapBufferAccessMask>::type>()(static_cast<std::underlying_type<gl::MapBufferAccessMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline MapBufferAccessMask operator|(const MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    return static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) | static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));
}

inline MapBufferAccessMask & operator|=(MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    a = static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) | static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline MapBufferAccessMask operator&(const MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    return static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) & static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));
}

inline MapBufferAccessMask & operator&=(MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    a = static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) & static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline MapBufferAccessMask operator^(const MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    return static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));
}

inline MapBufferAccessMask & operator^=(MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    a = static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::MemoryBarrierMask>
{
    std::size_t operator()(const gl::MemoryBarrierMask & t) const
    {
        return hash<std::underlying_type<gl::MemoryBarrierMask>::type>()(static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline MemoryBarrierMask operator|(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator|=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator&=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator^=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::OcclusionQueryEventMaskAMD>
{
    std::size_t operator()(const gl::OcclusionQueryEventMaskAMD & t) const
    {
        return hash<std::underlying_type<gl::OcclusionQueryEventMaskAMD>::type>()(static_cast<std::underlying_type<gl::OcclusionQueryEventMaskAMD>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline OcclusionQueryEventMaskAMD operator|(const OcclusionQueryEventMaskAMD & a, const OcclusionQueryEventMaskAMD & b)
{
    return static_cast<OcclusionQueryEventMaskAMD>(static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(a) | static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(b));
}

inline OcclusionQueryEventMaskAMD & operator|=(OcclusionQueryEventMaskAMD & a, const OcclusionQueryEventMaskAMD & b)
{
    a = static_cast<OcclusionQueryEventMaskAMD>(static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(a) | static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline OcclusionQueryEventMaskAMD operator&(const OcclusionQueryEventMaskAMD & a, const OcclusionQueryEventMaskAMD & b)
{
    return static_cast<OcclusionQueryEventMaskAMD>(static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(a) & static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(b));
}

inline OcclusionQueryEventMaskAMD & operator&=(OcclusionQueryEventMaskAMD & a, const OcclusionQueryEventMaskAMD & b)
{
    a = static_cast<OcclusionQueryEventMaskAMD>(static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(a) & static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline OcclusionQueryEventMaskAMD operator^(const OcclusionQueryEventMaskAMD & a, const OcclusionQueryEventMaskAMD & b)
{
    return static_cast<OcclusionQueryEventMaskAMD>(static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(a) ^ static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(b));
}

inline OcclusionQueryEventMaskAMD & operator^=(OcclusionQueryEventMaskAMD & a, const OcclusionQueryEventMaskAMD & b)
{
    a = static_cast<OcclusionQueryEventMaskAMD>(static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(a) ^ static_cast<std::underlying_type<OcclusionQueryEventMaskAMD>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::PathFontStyle>
{
    std::size_t operator()(const gl::PathFontStyle & t) const
    {
        return hash<std::underlying_type<gl::PathFontStyle>::type>()(static_cast<std::underlying_type<gl::PathFontStyle>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator|=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator&=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator^=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::PathMetricMask>
{
    std::size_t operator()(const gl::PathMetricMask & t) const
    {
        return hash<std::underlying_type<gl::PathMetricMask>::type>()(static_cast<std::underlying_type<gl::PathMetricMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline PathMetricMask operator|(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) | static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator|=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) | static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PathMetricMask operator&(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) & static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator&=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) & static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PathMetricMask operator^(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) ^ static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator^=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) ^ static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::PerformanceQueryCapsMaskINTEL>
{
    std::size_t operator()(const gl::PerformanceQueryCapsMaskINTEL & t) const
    {
        return hash<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>()(static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator|(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator|=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator&=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator^=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::SyncObjectMask>
{
    std::size_t operator()(const gl::SyncObjectMask & t) const
    {
        return hash<std::underlying_type<gl::SyncObjectMask>::type>()(static_cast<std::underlying_type<gl::SyncObjectMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline SyncObjectMask operator|(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator|=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator&=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator^=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::TextureStorageMaskAMD>
{
    std::size_t operator()(const gl::TextureStorageMaskAMD & t) const
    {
        return hash<std::underlying_type<gl::TextureStorageMaskAMD>::type>()(static_cast<std::underlying_type<gl::TextureStorageMaskAMD>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline TextureStorageMaskAMD operator|(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    return static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) | static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
}

inline TextureStorageMaskAMD & operator|=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    a = static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) | static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline TextureStorageMaskAMD operator&(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    return static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) & static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
}

inline TextureStorageMaskAMD & operator&=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    a = static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) & static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline TextureStorageMaskAMD operator^(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    return static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) ^ static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
}

inline TextureStorageMaskAMD & operator^=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    a = static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) ^ static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::UnusedMask>
{
    std::size_t operator()(const gl::UnusedMask & t) const
    {
        return hash<std::underlying_type<gl::UnusedMask>::type>()(static_cast<std::underlying_type<gl::UnusedMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline UnusedMask operator|(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator|=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline UnusedMask operator&(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator&=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline UnusedMask operator^(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator^=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::UseProgramStageMask>
{
    std::size_t operator()(const gl::UseProgramStageMask & t) const
    {
        return hash<std::underlying_type<gl::UseProgramStageMask>::type>()(static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline UseProgramStageMask operator|(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator|=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator&=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator^=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::VertexHintsMaskPGI>
{
    std::size_t operator()(const gl::VertexHintsMaskPGI & t) const
    {
        return hash<std::underlying_type<gl::VertexHintsMaskPGI>::type>()(static_cast<std::underlying_type<gl::VertexHintsMaskPGI>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_CONSTEXPR inline VertexHintsMaskPGI operator|(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    return static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) | static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
}

inline VertexHintsMaskPGI & operator|=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    a = static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) | static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline VertexHintsMaskPGI operator&(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    return static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) & static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
}

inline VertexHintsMaskPGI & operator&=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    a = static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) & static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline VertexHintsMaskPGI operator^(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    return static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) ^ static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
}

inline VertexHintsMaskPGI & operator^=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    a = static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) ^ static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));

    return a;
}


} // namespace gl