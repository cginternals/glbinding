
#include <iostream>
#include <algorithm>
#include <set>
#include <iomanip>

#include <glbinding/Version.h>

#include <glbinding/gl/enum.h>
#include <glbinding/gl/extension.h>

#include <glbinding-aux/Meta.h>
#include <glbinding-aux/ValidVersions.h>

using namespace gl; 
using namespace glbinding;

int main(int, char * [])
{
    // enlist all versions

    std::cout << std::endl << std::endl << "[VERSIONS]" << std::endl << std::endl;

    std::cout << "# Versions: " << aux::Meta::versions().size() << std::endl << std::endl;

    for (Version v : aux::Meta::versions())
        std::cout << v.toString() << std::endl;

    // enlist all enums

    std::cout << std::endl << std::endl << "[ENUMS]" << std::endl << std::endl;

    std::cout << "# Enums: " << aux::Meta::enums().size() << std::endl << std::endl;

    for (GLenum e : aux::Meta::enums()) // c++ 14 ...
        std::cout << " (" << std::hex << std::showbase << std::internal << std::setfill('0') << std::setw(8) 
            << static_cast<std::underlying_type<GLenum>::type>(e) << ") " << aux::Meta::getString(e) << std::dec << std::endl;

    std::cout << std::dec;
    
    // enlist all extensions

    std::cout << std::endl << std::endl << "[EXTENSIONS]" << std::endl << std::endl;

    std::cout << " # Extensions: " << aux::Meta::extensions().size() << std::endl << std::endl;

    for (GLextension extension : aux::Meta::extensions())
    {
        const Version v = aux::Meta::version(extension);
        std::cout << " " << aux::Meta::getString(extension) << " " << (v.isNull() ? "" : v.toString()) << std::endl;
    }
    
    return 0;
}
