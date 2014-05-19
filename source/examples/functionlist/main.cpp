#include <iostream>

#include <GLFW/glfw3.h>

#include <glbinding/glbinding.h>
#include <glbinding/AbstractFunction.h>
#include <glbinding/functions.h>
#include <glbinding/constants.h>
#include <glbinding/meta.h>

#include <iostream>

void errorfun(int errnum, const char* errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

void printExtensionInfo(const gl::AbstractFunction * function, const std::set<gl::Extension> & extensions)
{
    std::vector<gl::Extension> required = function->extensions();
    if (!required.empty())
    {
        std::cout << "\t\t(";
        unsigned i = 0;
        for (auto r : required)
        {
            bool hasExt = extensions.find(r) != extensions.end();
            std::cout << gl::meta::getName(r) << ": " << (hasExt ? "yes" : "no");
            if (i<required.size()-1)
                std::cout << ", ";
            ++i;
        }
        std::cout << ")";
    }
}

int main(int /*argc*/, char* /*argv*/[])
{
    if (!glfwInit())
    {
        return 1;
    }

    glfwSetErrorCallback(errorfun);

    GLFWwindow* window = glfwCreateWindow(640, 480, "Dummy Window", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gl::initialize())
    {
        glfwTerminate();
        return 1;
    }

    std::set<gl::Extension> extensions;
    int num = 0;
    gl::GetIntegerv(gl::NUM_EXTENSIONS, &num);
    for (int i = 0; i < num; ++i)
    {
        const unsigned char * name = gl::GetStringi(gl::EXTENSIONS, i);
        gl::Extension extension = gl::meta::extensionFromString(reinterpret_cast<const char*>(name));
        if (extension != gl::Extension::Unknown)
            extensions.insert(extension);
    }

    unsigned int validFunctionCount = 0;
    std::set<const gl::AbstractFunction*> invalidFunctions;
    for (const gl::AbstractFunction* function : gl::AbstractFunction::functions())
    {
        if (function->isValid())
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
        for (const gl::AbstractFunction* invalidFunction : invalidFunctions)
        {
            std::cout << invalidFunction->name();
            printExtensionInfo(invalidFunction, extensions);
            std::cout << std::endl;
        }
    }

    std::cout << std::endl << "Valid: " << validFunctionCount << "\tInvalid: " << invalidFunctions.size() << std::endl;

    glfwTerminate();
    return 0;
}
