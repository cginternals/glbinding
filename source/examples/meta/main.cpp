
#include <iostream>
#include <algorithm>
#include <set>

#include <glbinding/Meta.h>

#include <glbinding/enum.h>
#include <glbinding/extension.h>
#include <glbinding/Version.h>



using namespace gl; 

int main(int /*argc*/, char* /*argv*/[])
{
   
#ifdef STRINGS_BY_GL
    
    //// enlist all enums
    for (GLenum e : Meta::getEnums()) // c++ 14 ...
        std::cout << "0x" << std::hex << static_cast<std::underlying_type<GLenum>::type>(e) 
            << " = " << Meta::getString(e) << std::endl;

    // enlist all extensions
    std::vector<GLextension> extensions = Meta::getExtensions();
    for (GLextension e : extensions)
    {
        const Version v = Meta::getRequiringVersion(e);
        std::cout << Meta::getString(e) << " " << (v.isNull() ? "" : v.toString()) << std::endl;
    }

#else

    std::cout << "Enums cannot be enlisted (STRINGS_BY_GL not defined)." << std::endl;

#endif

	return 0;
}
