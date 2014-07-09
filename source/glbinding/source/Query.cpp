
#include <glbinding/Query.h>

#include <glbinding/featured/gl30.h>

#include <glbinding/Meta.h>
#include <glbinding/Version.h>


namespace gl
{

using namespace gl30;

std::set<GLextension> Query::extensions(std::set<std::string> * unknown)
{
    std::set<GLextension> exts;

    int num = 0;
    glGetIntegerv(GL_NUM_EXTENSIONS, &num);

    for (GLuint i = 0; i < static_cast<GLuint>(num); ++i)
    {
        const GLubyte * name = glGetStringi(GL_EXTENSIONS, i);

        GLextension ext = Meta::getExtension(reinterpret_cast<const char *>(name));
        if (GLextension::UNKNOWN != ext)
            exts.insert(ext);
        else if (unknown)
            unknown->insert(reinterpret_cast<const char *>(name));
    }

    return exts;
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
    Version v;
    glGetIntegerv(GL_MAJOR_VERSION, &v.m_major);
    glGetIntegerv(GL_MINOR_VERSION, &v.m_minor);

    // probably version below 3.0
    if (GL_INVALID_ENUM == glGetError())
    {
        const GLubyte * vstr(glGetString(GL_VERSION));
        v.m_major = vstr[0];
        v.m_minor = vstr[2];
    }
    return v;
}

} // namespace gl
