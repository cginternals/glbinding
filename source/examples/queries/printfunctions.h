#include <iostream>
#include <sstream>
#include <vector>

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

template <typename T>
std::string printResult(gl::GLenum value, const std::vector<T> & result)
{
    std::stringstream stream;

    if (gl::glGetError() == gl::GL_NO_ERROR)
    {
        stream << "\t" << glbinding::Meta::getString(value) << " = ";
        for (int i=0; i < result.size(); ++i)
        {
            stream << result[i];

            if (i + 1 < result.size())
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

template <typename T>
void storeResult(std::vector<QueryResult> & results, gl::GLenum value, const std::vector<T> & result)
{
    results.emplace_back(
        value,
        glbinding::Meta::getString(value),
        printResult<T>(value, result)
    );
}

template <typename T, bool Indexed>
struct RequestAndPrint
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count);
};

template <typename T, int Count, bool Indexed>
void requestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
{
    RequestAndPrint<T, Indexed> temp(results, value, Count);
}

template <typename T>
void multipleRequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, gl::GLenum countValue)
{
    int count = 0;
    gl::glGetIntegerv(countValue, &count);

    for (int i=0; i < count; ++i)
    {
        RequestAndPrint<T, false>(results, static_cast<gl::GLenum>(static_cast<int>(value) + i), 1);
    }
}

template <typename T, int Count>
void multipleRequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value)
{
    for (int i=0; i < Count; ++i)
    {
        RequestAndPrint<T, false>(results, static_cast<gl::GLenum>(static_cast<int>(value) + i), 1);
    }
}

template <typename T>
void multipleDynamicRequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, gl::GLenum countValue)
{
    int count = 0;
    gl::glGetIntegerv(countValue, &count);

    for (int i=0; i < count; ++i)
    {
        RequestAndPrint<T, false>(results, static_cast<gl::GLenum>(static_cast<int>(value) + i), 1);
    }
}

template <typename T>
void dynamicRequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, gl::GLenum countValue)
{
    int count = 0;
    gl::glGetIntegerv(countValue, &count);

    RequestAndPrint<T, false>(results, value, count);
}

template <>
struct RequestAndPrint<bool, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<gl::GLboolean> result(count);
        gl::glGetBooleanv(value, result.data());

        storeResult<gl::GLboolean>(results, value, result);
    }
};

template <>
struct RequestAndPrint<bool, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<gl::GLboolean> result(count);

        for (int i=0; i < count; ++i)
        {
            gl::glGetBooleani_v(value, i, &result[i]);
        }

        storeResult<gl::GLboolean>(results, value, result);
    }
};

template <>
struct RequestAndPrint<int, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<int> result(count);
        gl::glGetIntegerv(value, result.data());

        storeResult<int>(results, value, result);
    }
};

template <>
struct RequestAndPrint<int, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<int> result(count);

        for (int i = 0; i < count; ++i)
            gl::glGetIntegeri_v(value, i, &result[i]);

        storeResult<int>(results, value, result);
    }
};

template <>
struct RequestAndPrint<long, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<gl::GLint64> result(count);
        gl::glGetInteger64v(value, result.data());

        std::vector<long> longs(count);
        for (const auto & r : result)
            longs.push_back(static_cast<long>(r));

        storeResult<long>(results, value, longs);
    }
};

template <>
struct RequestAndPrint<long, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<gl::GLint64> result(count);

        for (int i=0; i < count; ++i)
            gl::glGetInteger64i_v(value, i, &result[i]);

        std::vector<long> longs(count);
        for (const auto & r : result)
            longs.push_back(static_cast<long>(r));

        storeResult<long>(results, value, longs);
    }
};

template <>
struct RequestAndPrint<float, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<float> result(count);
        gl::glGetFloatv(value, result.data());

        storeResult<float>(results, value, result);
    }
};

template <>
struct RequestAndPrint<float, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<float> result(count);

        for (int i=0; i < count; ++i)
        {
            gl::glGetFloati_v(value, i, &result[i]);
        }

        storeResult<float>(results, value, result);
    }
};

template <>
struct RequestAndPrint<double, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<double> result(count);
        gl::glGetDoublev(value, result.data());

        storeResult<double>(results, value, result);
    }
};

template <>
struct RequestAndPrint<double, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<double> result(count);

        for (int i=0; i < count; ++i)
        {
            gl::glGetDoublei_v(value, i, &result[i]);
        }

        storeResult<double>(results, value, result);
    }
};

template <>
struct RequestAndPrint<gl::GLenum, false>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<gl::GLenum> result(count);
        gl::glGetIntegerv(value, reinterpret_cast<int*>(result.data()));

        storeResult<gl::GLenum>(results, value, result);
    }
};

template <>
struct RequestAndPrint<gl::GLenum, true>
{
    RequestAndPrint(std::vector<QueryResult> & results, gl::GLenum value, int count)
    {
        std::vector<gl::GLenum> result(count);

        for (int i=0; i < count; ++i)
        {
            gl::glGetIntegeri_v(value, i, reinterpret_cast<int*>(&result[i]));
        }

        storeResult<gl::GLenum>(results, value, result);
    }
};
