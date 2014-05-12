#include <glbinding/GetProcAddress.h>

#ifdef WIN32
    #include <string>
    #include <windows.h>
#elif __APPLE__
    #include <string>
    #include <mach-o/dyld.h>
#else
    #include <GL/glx.h>
#endif

namespace gl {

ProcAddress GetProcAddress(const char * name)
{
#ifdef WIN32

    typedef void (__stdcall * PROCADDRESS)();
    PROCADDRESS procAddress = reinterpret_cast<PROCADDRESS>(wglGetProcAddress(name));

    if(nullptr == procAddress)
    {
        static HMODULE module = LoadLibrary(L"OPENGL32.DLL");
        procAddress = reinterpret_cast<PROCADDRESS>(::GetProcAddress(module, name));
    }

#elif __APPLE__

    typedef void * PROCADDRESS;

    std::string string(name);
    string = "_" + string;

    NSSymbol symbol(nullptr);

    if (NSIsSymbolNameDefined(string.c_str()))
        symbol = NSLookupAndBindSymbol(string.c_str());

    PROCADDRESS procAddress = reinterpret_cast<PROCADDRESS>(symbol ? NSAddressOfSymbol(symbol) : nullptr);

#else

    typedef void (const unsigned char * PROCADDRESS)();
    PROCADDRESS procAddress = reinterpret_cast<PROCADDRESS>(glxGetProcAddress(name));

#endif

    return reinterpret_cast<ProcAddress>(procAddress);
}

} // namespace gl
