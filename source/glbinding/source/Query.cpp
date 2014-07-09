
#include <glbinding/Query.h>

#include <glbinding/featured/gl30.h>

#include <glbinding/Meta.h>
#include <glbinding/Version.h>


namespace gl
{

using namespace gl30;

std::set<GLextension> Query::extensions(std::set<std::string> * unknown)
{
    std::set<GLextension> extensions;

    int numExtensions = 0;
    glGetIntegerv(GL_NUM_EXTENSIONS, &numExtensions);

    for (GLuint i = 0; i < static_cast<GLuint>(numExtensions); ++i)
    {
        const GLubyte * name = glGetStringi(GL_EXTENSIONS, i);

        GLextension extension = Meta::getExtension(reinterpret_cast<const char *>(name));
        if (GLextension::UNKNOWN != extension)
            extensions.insert(extension);
        else if (unknown)
            unknown->insert(reinterpret_cast<const char *>(name));
    }

    return extensions;
}

std::string Query::renderer()
{
    return std::string(reinterpret_cast<const char *>(glGetString(GL_RENDERER)));
}

std::string Query::vendor()
{
    return std::string(reinterpret_cast<const char *>(glGetString(GL_VENDOR)));
}

Version Query::version()
{
    Version version;
    glGetIntegerv(GL_MAJOR_VERSION, &version.m_major);
    glGetIntegerv(GL_MINOR_VERSION, &version.m_minor);

    // probably version below 3.0
    if (GL_INVALID_ENUM == glGetError())
    {
        const GLubyte * versionString = glGetString(GL_VERSION);
        version.m_major = versionString[0];
        version.m_minor = versionString[2];
    }

    return version;
}

} // namespace gl
