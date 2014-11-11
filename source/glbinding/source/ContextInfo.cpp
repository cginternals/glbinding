
#include <glbinding/ContextInfo.h>

#include <glbinding/Meta.h>
#include <glbinding/Version.h>

#include <glbinding/gl/gl.h>

using namespace gl;

namespace glbinding
{

std::set<GLextension> ContextInfo::extensions(std::set<std::string> * unknown)
{
    if (version() < Version(3, 0))
    {
        return std::set<GLextension>();
    }

    std::set<GLextension> extensions;

    int numExtensions = 0;
    glGetIntegerv(GL_NUM_EXTENSIONS, &numExtensions);

    for (GLuint i = 0; i < static_cast<GLuint>(numExtensions); ++i)
    {
        const GLubyte * name = glGetStringi(GL_EXTENSIONS, i);

        GLextension extension = Meta::getExtension(reinterpret_cast<const char *>(name));
        if (GLextension::UNKNOWN != extension)
        {
            extensions.insert(extension);
        }
        else if (unknown)
        {
            unknown->insert(reinterpret_cast<const char *>(name));
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
