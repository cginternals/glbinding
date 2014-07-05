
#include <iostream>
#include <algorithm>
#include <set>

#include <glbinding/enum.h>
#include <glbinding/extension.h>

#include <glbinding/Meta.h>
#include <glbinding/Version.h>


using namespace gl; 

int main(int /*argc*/, char* /*argv*/[])
{

    // enlist gl revision
    std::cout << std::endl << "REVISION" << std::endl;
    std::cout << "gl.xml revision: " << Meta::glRevision() << std::endl;

    // enlist all versions
    std::cout << std::endl << "VERSIONS (" << Meta::versions().size() << ")" << std::endl;

    for (Version v : Meta::versions())
        std::cout << v.toString() << std::endl;

    // enlist all enums
    if (Meta::stringsByGL())
    {
        std::cout << std::endl << "ENUMS (" << Meta::extensions().size() << ")" << std::endl;

        for (GLenum e : Meta::enums()) // c++ 14 ...
            std::cout << Meta::getString(e) << " (0x" << std::hex << static_cast<std::underlying_type<GLenum>::type>(e) << ")" << std::endl;

        std::cout << std::dec;
    }
    else
        std::cout << std::endl << "ENUMS cannot be enlisted (STRINGS_BY_GL not available)." << std::endl;

    // enlist all extensions
    if (Meta::stringsByGL())
    {
        std::cout << std::endl << "EXTENSIONS (" << Meta::extensions().size() << ")" << std::endl;

        for (GLextension e : Meta::extensions())
        {
            const Version v = Meta::getRequiringVersion(e);
            std::cout << Meta::getString(e) << " " << (v.isNull() ? "" : v.toString()) << std::endl;
        }
    }
    else
        std::cout << std::endl << "EXTENSIONS cannot be enlisted (STRINGS_BY_GL not available)." << std::endl;


	return 0;
}
