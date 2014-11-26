
#include <glbinding/ContextInfo.h>

#include <sstream>
#include <iostream>

#include <glbinding/Meta.h>
#include <glbinding/Version.h>

#include <glbinding/gl/gl.h>

using namespace gl;

namespace
{

void insertExtension(const std::string extensionName, std::set<GLextension> * extensions, std::set<std::string> * unknownExtensionNames)
{
    GLextension extension = glbinding::Meta::getExtension(extensionName);
    if (GLextension::UNKNOWN != extension)
    {
        extensions->insert(extension);
    }
    else if (unknownExtensionNames)
    {
        unknownExtensionNames->insert(extensionName);
    }
}

}

namespace glbinding
{

std::set<GLextension> ContextInfo::extensions(std::set<std::string> * unknown)
{
    const auto v = version();

    if (v <= Version(1, 0)) // OpenGL 1.0 doesn't support extensions
    {
        return std::set<GLextension> {};
    }

    std::set<GLextension> extensions;

    if (v < Version(3, 0))
    {
        const GLubyte * extensionString = glGetString(GL_EXTENSIONS);

        if (extensionString)
        {
            std::istringstream stream(reinterpret_cast<const char *>(extensionString));
            std::string extensionName;
            while (std::getline(stream, extensionName, ' '))
            {
                insertExtension(extensionName, &extensions, unknown);
            }
        }
    }
    else
    {
        int numExtensions = 0;
        glGetIntegerv(GL_NUM_EXTENSIONS, &numExtensions);

        for (GLuint i = 0; i < static_cast<GLuint>(numExtensions); ++i)
        {
            const GLubyte * name = glGetStringi(GL_EXTENSIONS, i);

            if (name)
            {
                insertExtension(reinterpret_cast<const char*>(name), &extensions, unknown);
            }
        }
    }

    return extensions;
}

std::string ContextInfo::renderer()
{
    return std::string(reinterpret_cast<const char *>(glGetString(GL_RENDERER)));
}

std::string ContextInfo::vendor()
{
    return std::string(reinterpret_cast<const char *>(glGetString(GL_VENDOR)));
}

Version ContextInfo::version()
{
    Version version;
    glGetIntegerv(GL_MAJOR_VERSION, &version.m_major);
    glGetIntegerv(GL_MINOR_VERSION, &version.m_minor);

    // probably version below 3.0
    if (GL_INVALID_ENUM == glGetError()) // TODO: what if error was already handled in a callback
    {
        const GLubyte * versionString = glGetString(GL_VERSION);
        version.m_major = versionString[0] - '0';
        version.m_minor = versionString[2] - '0';
    }

    return version;
}

} // namespace glbinding
