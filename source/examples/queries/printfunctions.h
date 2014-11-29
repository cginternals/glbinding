#include <iostream>
#include <array>

#include <glbinding/Meta.h>
#include <glbinding/gl/types.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/functions.h>
#include <glbinding/gl/boolean.h>

template <typename T, int Count>
void printResult(gl::GLenum value, const std::array<T, Count> & result)
{
    if (gl::glGetError() == gl::GL_NO_ERROR)
    {
        std::cout << "\t" << glbinding::Meta::getString(value) << " = ";
        for (int i=0; i < Count; ++i)
        {
            std::cout << result[i];

            if (i + 1 < Count)
            {
                std::cout << ", ";
            }
        }

        std::cout << std::endl;
    }
    else
    {
        std::cout << "\t" << glbinding::Meta::getString(value) << " not available " << std::endl;
    }
}

template <typename T, int Count, bool Indexed>
struct RequestAndPrint
{
    RequestAndPrint(gl::GLenum value);
};

template <typename T, int Count, bool Indexed>
void requestAndPrint(gl::GLenum value)
{
    RequestAndPrint<T, Count, Indexed> temp(value);
}

template <int Count>
struct RequestAndPrint<bool, Count, false>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<gl::GLboolean, Count> result;
        gl::glGetBooleanv(value, result.data());

        printResult<gl::GLboolean, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<bool, Count, true>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<gl::GLboolean, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetBooleani_v(value, i, &result[i]);
        }

        printResult<gl::GLboolean, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<int, Count, false>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<int, Count> result;
        gl::glGetIntegerv(value, result.data());

        printResult<int, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<int, Count, true>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<int, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetIntegeri_v(value, i, &result[i]);
        }

        printResult<int, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<long long, Count, false>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<long long, Count> result;
        gl::glGetInteger64v(value, result.data());

        printResult<long long, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<long long, Count, true>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<long long, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetInteger64i_v(value, i, &result[i]);
        }

        printResult<long long, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<float, Count, false>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<float, Count> result;
        gl::glGetFloatv(value, result.data());

        printResult<float, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<float, Count, true>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<float, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetFloati_v(value, i, &result[i]);
        }

        printResult<float, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<double, Count, false>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<double, Count> result;
        gl::glGetDoublev(value, result.data());

        printResult<double, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<double, Count, true>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<double, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetDoublei_v(value, i, &result[i]);
        }

        printResult<double, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<gl::GLenum, Count, false>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<gl::GLenum, Count> result;
        gl::glGetIntegerv(value, reinterpret_cast<int*>(result.data()));

        printResult<gl::GLenum, Count>(value, result);
    }
};

template <int Count>
struct RequestAndPrint<gl::GLenum, Count, true>
{
    RequestAndPrint(gl::GLenum value)
    {
        std::array<gl::GLenum, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetIntegeri_v(value, i, reinterpret_cast<int*>(&result[i]));
        }

        printResult<gl::GLenum, Count>(value, result);
    }
};
