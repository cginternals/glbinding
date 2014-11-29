#include <iostream>
#include <sstream>
#include <array>

#include <glbinding/Meta.h>
#include <glbinding/gl/types.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/functions.h>
#include <glbinding/gl/boolean.h>

struct QueryResult
{
    QueryResult()
    : value(gl::GL_NONE)
    {
    }

    QueryResult(gl::GLenum value, const std::string & name, const std::string & result)
    : value(value)
    , name(name)
    , result(result)
    {
    }

    gl::GLenum value;
    std::string name;
    std::string result;
};

template <typename T, int Count>
std::string printResult(gl::GLenum value, const std::array<T, Count> & result)
{
    std::stringstream stream;

    if (gl::glGetError() == gl::GL_NO_ERROR)
    {
        stream << "\t" << glbinding::Meta::getString(value) << " = ";
        for (int i=0; i < Count; ++i)
        {
            stream << result[i];

            if (i + 1 < Count)
            {
                stream << ", ";
            }
        }
    }
    else
    {
        stream << "\t" << glbinding::Meta::getString(value) << " not available ";
    }

    return stream.str();
}

template <typename T, int Count>
void storeResult(std::vector<QueryResult> & results, gl::GLenum value, const std::array<T, Count> & result)
{
    results.emplace_back(
        value,
        glbinding::Meta::getString(value),
        printResult<T, Count>(value, result)
    );
}

template <typename T, int Count, bool Indexed>
struct RequestAndPrint
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value);
};

template <typename T, int Count, bool Indexed>
void requestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
{
    RequestAndPrint<T, Count, Indexed> temp(results, value);
}

template <int Count>
struct RequestAndPrint<bool, Count, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<gl::GLboolean, Count> result;
        gl::glGetBooleanv(value, result.data());

        storeResult<gl::GLboolean, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<bool, Count, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<gl::GLboolean, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetBooleani_v(value, i, &result[i]);
        }

        storeResult<gl::GLboolean, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<int, Count, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<int, Count> result;
        gl::glGetIntegerv(value, result.data());

        storeResult<int, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<int, Count, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<int, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetIntegeri_v(value, i, &result[i]);
        }

        storeResult<int, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<long long, Count, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<long long, Count> result;
        gl::glGetInteger64v(value, result.data());

        storeResult<long long, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<long long, Count, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<long long, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetInteger64i_v(value, i, &result[i]);
        }

        storeResult<long long, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<float, Count, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<float, Count> result;
        gl::glGetFloatv(value, result.data());

        storeResult<float, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<float, Count, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<float, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetFloati_v(value, i, &result[i]);
        }

        storeResult<float, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<double, Count, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<double, Count> result;
        gl::glGetDoublev(value, result.data());

        storeResult<double, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<double, Count, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<double, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetDoublei_v(value, i, &result[i]);
        }

        storeResult<double, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<gl::GLenum, Count, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<gl::GLenum, Count> result;
        gl::glGetIntegerv(value, reinterpret_cast<int*>(result.data()));

        storeResult<gl::GLenum, Count>(results, value, result);
    }
};

template <int Count>
struct RequestAndPrint<gl::GLenum, Count, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
    {
        std::array<gl::GLenum, Count> result;

        for (int i=0; i < Count; ++i)
        {
            gl::glGetIntegeri_v(value, i, reinterpret_cast<int*>(&result[i]));
        }

        storeResult<gl::GLenum, Count>(results, value, result);
    }
};
