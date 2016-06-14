
#include <iostream>
#include <algorithm>
#include <set>
#include <iomanip>

#include <glbinding/Meta.h>
#include <glbinding/Version.h>

#include <glbinding/gl/enum.h>
#include <glbinding/gl/extension.h>


using namespace gl; 
using namespace glbinding;

int main(int, char * [])
{
    // enlist all versions

    std::cout << std::endl << std::endl << "[VERSIONS]" << std::endl << std::endl;

    std::cout << "# Versions: " << Meta::versions().size() << std::endl << std::endl;

    for (Version v : Meta::versions())
        std::cout << v.toString() << std::endl;

    // enlist all enums

    std::cout << std::endl << std::endl << "[ENUMS]" << std::endl << std::endl;

    std::cout << "# Enums: " << Meta::enums().size() << std::endl << std::endl;

    for (GLenum e : Meta::enums()) // c++ 14 ...
        std::cout << " (" << std::hex << std::showbase << std::internal << std::setfill('0') << std::setw(8) 
            << static_cast<std::underlying_type<GLenum>::type>(e) << ") " << Meta::getString(e) << std::dec << std::endl;

    std::cout << std::dec;
    
    // enlist all extensions

    std::cout << std::endl << std::endl << "[EXTENSIONS]" << std::endl << std::endl;

    std::cout << " # Extensions: " << Meta::extensions().size() << std::endl << std::endl;

    for (GLextension extension : Meta::extensions())
    {
        const Version v = Meta::version(extension);
        std::cout << " " << Meta::getString(extension) << " " << (v.isNull() ? "" : v.toString()) << std::endl;
    }
    
    // print some gl infos (query)

    std::cout << std::endl
        << "OpenGL Revision: " << Meta::glRevision() << " (gl.xml)" << std::endl << std::endl;

    return 0;
}
