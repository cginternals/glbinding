
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

#include <GLFW/glfw3.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/Version.h>
#include <glbinding/glbinding.h>

#include <glbinding/gl/gl.h>

#include <glbinding-aux/Meta.h>
#include <glbinding-aux/ContextInfo.h>
#include <glbinding-aux/ValidVersions.h>
#include <glbinding-aux/types_to_string.h>


using namespace gl;
using namespace glbinding;


void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

int main(int argc, char* argv[])
{
    if (argc < 2 || argv[argc-1] == nullptr)
    {
        std::cout << std::endl << "glisdeprecated" << std::endl
            << "\tA command line tool to query the deprecation status of an OpenGL identifier" << std::endl
            << "\t(function, type, enum, or extension)" << std::endl;
        std::cout << std::endl;
        std::cout << "Usage: " << argv[0] << " [options] <query>" << std::endl << std::endl;

        return -1;
    }

    const auto identifier = std::string(argv[argc-1]);

    const auto bitfieldValue = aux::Meta::getBitfield(identifier);
    const auto booleanValue = aux::Meta::getBoolean(identifier);
    const auto enumValue = aux::Meta::getEnum(identifier);
    const auto extensionValue = aux::Meta::getExtension(identifier);
    const auto functionInExtension = aux::Meta::extensions(identifier);
    const auto functionInFeature = aux::Meta::versions(identifier);

    if (bitfieldValue != static_cast<gl::GLbitfield>(-1)) // probably bitfield
    {
        std::cout << bitfieldValue << std::endl;
    }
    else if (booleanValue != static_cast<gl::GLboolean>(-1))
    {
        std::cout << booleanValue << std::endl;
    }
    else if (enumValue != static_cast<gl::GLenum>(-1))
    {
        std::cout << enumValue << std::endl;
    }
    else if (extensionValue != gl::GLextension::UNKNOWN)
    {
        std::cout << extensionValue << std::endl;
    }
    else if (!functionInExtension.empty() || !functionInFeature.empty())
    {
        std::cout << identifier << std::endl;
    }
    else
    {
        std::cerr << "The passed identifier " << identifier << " is not recognized by the OpenGL specification" << std::endl;
        return -1;
    }
}
