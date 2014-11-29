#include "printfunctions.h"

#include <glbinding/Meta.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/functions.h>
#include <glbinding/gl/boolean.h>

using namespace gl;
using namespace glbinding;

void requestAndPrintb(GLenum value)
{
    GLboolean result = GL_FALSE;
    glGetBooleanv(value, &result);

    if (glGetError() == GL_NO_ERROR)
    {
        std::cout << "\t" << Meta::getString(value) << " = " << result << std::endl;
    }
    else
    {
        std::cout << "\t" << Meta::getString(value) << " not available " << std::endl;
    }
}

void requestAndPrintb(GLenum value, int index)
{
    GLboolean result = GL_FALSE;
    glGetBooleani_v(value, index, &result);

    if (glGetError() == GL_NO_ERROR)
    {
        std::cout << "\t" << Meta::getString(value) << "_" << index << " = " << result << std::endl;
    }
    else
    {
        std::cout << "\t" << Meta::getString(value) << "_" << index << " not available " << std::endl;
    }
}

void requestAndPrintb(GLenum value, int startIndex, int endIndex)
{
    for (int i = startIndex; i <= endIndex; ++i)
    {
        requestAndPrintb(value, i);
    }
}


void requestAndPrinti(GLenum value)
{
    int result = 0;
    glGetIntegerv(value, &result);

    if (glGetError() == GL_NO_ERROR)
    {
        std::cout << "\t" << Meta::getString(value) << " = " << result << std::endl;
    }
    else
    {
        std::cout << "\t" << Meta::getString(value) << " not available " << std::endl;
    }
}

void requestAndPrinti(GLenum value, int index)
{
    int result = 0;
    glGetIntegeri_v(value, index, &result);

    if (glGetError() == GL_NO_ERROR)
    {
        std::cout << "\t" << Meta::getString(value) << "_" << index << " = " << result << std::endl;
    }
    else
    {
        std::cout << "\t" << Meta::getString(value) << "_" << index << " not available " << std::endl;
    }
}

void requestAndPrinti(GLenum value, int startIndex, int endIndex)
{
    for (int i = startIndex; i <= endIndex; ++i)
    {
        requestAndPrinti(value, i);
    }
}


void requestAndPrintf(GLenum value)
{
    float result = 0.0f;
    glGetFloatv(value, &result);

    if (glGetError() == GL_NO_ERROR)
    {
        std::cout << "\t" << Meta::getString(value) << " = " << result << std::endl;
    }
    else
    {
        std::cout << "\t" << Meta::getString(value) << " not available " << std::endl;
    }
}

void requestAndPrintf(GLenum value, int index)
{
    float result = 0.0f;
    glGetFloati_v(value, index, &result);

    if (glGetError() == GL_NO_ERROR)
    {
        std::cout << "\t" << Meta::getString(value) << "_" << index << " = " << result << std::endl;
    }
    else
    {
        std::cout << "\t" << Meta::getString(value) << "_" << index << " not available " << std::endl;
    }
}

void requestAndPrintf(GLenum value, int startIndex, int endIndex)
{
    for (int i = startIndex; i <= endIndex; ++i)
    {
        requestAndPrintf(value, i);
    }
}


void requestAndPrinte(GLenum value)
{
    GLenum result = GL_NONE;
    glGetIntegerv(value, reinterpret_cast<int*>(&result));

    if (glGetError() == GL_NO_ERROR)
    {
        std::cout << "\t" << Meta::getString(value) << " = " << result << std::endl;
    }
    else
    {
        std::cout << "\t" << Meta::getString(value) << " not available " << std::endl;
    }
}

void requestAndPrinte(GLenum value, int index)
{
    GLenum result = GL_NONE;
    glGetIntegeri_v(value, index, reinterpret_cast<int*>(&result));

    if (glGetError() == GL_NO_ERROR)
    {
        std::cout << "\t" << Meta::getString(value) << "_" << index << " = " << result << std::endl;
    }
    else
    {
        std::cout << "\t" << Meta::getString(value) << "_" << index << " not available " << std::endl;
    }
}

void requestAndPrinte(GLenum value, int startIndex, int endIndex)
{
    for (int i = startIndex; i <= endIndex; ++i)
    {
        requestAndPrinte(value, i);
    }
}
