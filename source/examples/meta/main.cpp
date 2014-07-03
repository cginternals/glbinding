
#include <iostream>
#include <algorithm>
#include <set>

#include <glbinding/Meta.h>

#include <glbinding/enums.h>
#include <glbinding/Extension.h>


using namespace gl;

int main(int /*argc*/, char* /*argv*/[])
{
    std::cout << "Enums:" << std::endl;


    std::set<GLenum> enums;
#ifdef GL_BY_STRINGS
    
#endif

    /*auto enums = meta::allEnums();
    std::vector<GLenum> enumVector(enums.begin(), enums.end());
    std::sort(enumVector.begin(), enumVector.end());


    for (GLenum e : enumVector)
    {
        std::string name = Meta::getString(e);

        std::cout << "0x" << std::hex << static_cast<unsigned int>(e) << " = " << name << std::endl;
    }

    std::cout << "Extensions:" << std::endl;

    for (Extension extension : meta::allExtensions())
    {
        auto name = Meta::getString(extension);
        auto pair = Meta::getRequiringVersion(extension);

        std::cout << "\t" << name;

        if (pair.first>0)
        {
            std::cout << " (in core since " << (int)pair.first << "." << (int)pair.second << ")";
        }

        std::cout << std::endl;
    }
*/
    std::cout << std::endl;

	return 0;
}
