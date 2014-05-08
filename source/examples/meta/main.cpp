#include <iostream>
#include <algorithm>

#include <glbinding/meta.h>

using namespace gl;

int main(int /*argc*/, char* /*argv*/[])
{
    std::cout << "Enums:" << std::endl;

    auto enums = meta::allEnums();
    std::vector<GLenum> enumVector(enums.begin(), enums.end());
    std::sort(enumVector.begin(), enumVector.end());


    for (GLenum e : enumVector)
    {
        auto names = meta::getNames(e);

        std::cout << "0x" << std::hex << e << " = ";

        for (unsigned i = 0; i < names.size(); ++i)
        {
            std::cout << names[i];
            if (i<names.size()-1)
                std::cout << ", ";
        }

        std::cout << std::endl;
    }

    std::cout << "Extensions:" << std::endl;

    for (Extension extension : meta::allExtensions())
    {
        auto name = meta::getName(extension);
        auto pair = meta::coreVersionForExtension(extension);

        std::cout << "\t" << name;

        if (pair.first>0)
        {
            std::cout << " (in core since " << (int)pair.first << "." << (int)pair.second << ")";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;

	return 0;
}
