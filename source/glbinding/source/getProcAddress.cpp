
#include <glbinding/getProcAddress.h>

#include <cassert>

#ifdef SYSTEM_WINDOWS
    #include <string>
    #include <tchar.h>
    #include <windows.h>
#else
    #include <dlfcn.h>
#endif


namespace glbinding {

#ifdef SYSTEM_WINDOWS

ProcAddress getProcAddress(const char * name)
{
    static auto module = LoadLibrary(_T("OPENGL32.DLL"));

	// Prevent static linking of opengl32
	static auto wglGetProcAddress_ = reinterpret_cast<void * (__stdcall *)(const char *)>(::GetProcAddress(module, "wglGetProcAddress"));
	assert(wglGetProcAddress_ != nullptr);

	auto procAddress = wglGetProcAddress_(name);
	if (procAddress != nullptr)
	{
		return reinterpret_cast<ProcAddress>(procAddress);
	}

	procAddress = ::GetProcAddress(module, name);
    return reinterpret_cast<ProcAddress>(procAddress);
}

#else

ProcAddress getProcAddress(const char * name)
{
#ifdef SYSTEM_DARWIN
    static auto library = dlopen("/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL", RTLD_LAZY);
#else
    static auto library = dlopen("libGL.so", RTLD_LAZY);
#endif

    assert(library != nullptr);

    auto symbol = dlsym(library, name);

    return reinterpret_cast<ProcAddress>(symbol);
}

#endif


} // namespace glbinding
