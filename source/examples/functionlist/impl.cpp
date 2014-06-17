#include "impl.h"

#include <glbinding/glbinding.h>
#include <glbinding/AbstractFunction.h>
#include <glbinding/functions.h>
#include <glbinding/constants.h>
#include <glbinding/meta.h>

#include <iostream>

using namespace gl;

void printExtensionInfo(const AbstractFunction * function, const std::set<Extension> & extensions)
{
    std::vector<Extension> required = function->extensions();
    if (!required.empty())
    {
        std::cout << "\t\t(";
        unsigned i = 0;
        for (auto r : required)
        {
            bool hasExt = extensions.find(r) != extensions.end();
            std::cout << meta::getName(r) << ": " << (hasExt ? "yes" : "no");
            if (i<required.size()-1)
                std::cout << ", ";
            ++i;
        }
        std::cout << ")";
    }
}

void printFunctionsInfo()
{
    std::set<Extension> extensions;
    int num = 0;
    glGetIntegerv(GL_NUM_EXTENSIONS, &num);
    for (int i = 0; i < num; ++i)
    {
        const unsigned char * name = glGetStringi(GL_EXTENSIONS, i);
        Extension extension = meta::extensionFromString(reinterpret_cast<const char*>(name));
        if (extension != Extension::Unknown)
            extensions.insert(extension);
    }

    unsigned int validFunctionCount = 0;
    std::set<const AbstractFunction*> invalidFunctions;
    for (const AbstractFunction* function : AbstractFunction::functions())
    {
        if (function->isResolved())
        {
            std::cout << reinterpret_cast<void*>(function->address()) << " " << function->name();
            printExtensionInfo(function, extensions);
            std::cout << std::endl;

            validFunctionCount++;
        }
        else
        {
            invalidFunctions.insert(function);
        }
    }

    if (invalidFunctions.size() > 0)
    {
        std::cout << std::endl << "Unresolved functions:" << std::endl;
        for (const AbstractFunction* invalidFunction : invalidFunctions)
        {
            std::cout << invalidFunction->name();
            printExtensionInfo(invalidFunction, extensions);
            std::cout << std::endl;
        }
    }

    std::cout << std::endl << "Valid: " << validFunctionCount << "\tInvalid: " << invalidFunctions.size() << std::endl;
}
