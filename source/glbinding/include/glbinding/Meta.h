#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <utility>
#include <vector>
#include <set>
#include <cstdint>

#include <glbinding/gl/types.h>


namespace glbinding
{

class Version;


class GLBINDING_API Meta
{
public:
    Meta() = delete;

    static bool stringsByGL();
    static bool glByStrings();

    static int glRevision();

    static gl::GLbitfield getBitfield(const std::string & glbitfield);
    static std::vector<gl::GLbitfield> bitfields();

    static const std::string & getString(gl::GLenum glenum);
    static gl::GLenum getEnum(const std::string & glenum);
    static std::vector<gl::GLenum> enums();

    static const std::string & getString(gl::GLboolean boolean);
    static gl::GLboolean getBoolean(const std::string & boolean);

    static const std::string & getString(gl::GLextension extension);
    static gl::GLextension getExtension(const std::string & extension);
    static std::set<gl::GLextension> extensions();

    static const std::set<std::string> & getRequiredFunctions(gl::GLextension extension);
    static const std::set<gl::GLextension> & getExtensionsRequiring(const std::string & function);

    static const Version & getRequiringVersion(gl::GLextension extension);
    static const std::set<Version> & versions();

    static const std::string & getString(gl::AttribMask glbitfield);
    static const std::string & getString(gl::ClearBufferMask glbitfield);
    static const std::string & getString(gl::ClientAttribMask glbitfield);
    static const std::string & getString(gl::ContextFlagMask glbitfield);
    static const std::string & getString(gl::ContextProfileMask glbitfield);
    static const std::string & getString(gl::FfdMaskSGIX glbitfield);
    static const std::string & getString(gl::FragmentShaderColorModMaskATI glbitfield);
    static const std::string & getString(gl::FragmentShaderDestMaskATI glbitfield);
    static const std::string & getString(gl::FragmentShaderDestModMaskATI glbitfield);
    static const std::string & getString(gl::MapBufferUsageMask glbitfield);
    static const std::string & getString(gl::MemoryBarrierMask glbitfield);
    static const std::string & getString(gl::PathRenderingMaskNV glbitfield);
    static const std::string & getString(gl::PerformanceQueryCapsMaskINTEL glbitfield);
    static const std::string & getString(gl::SyncObjectMask glbitfield);
    static const std::string & getString(gl::TextureStorageMaskAMD glbitfield);
    static const std::string & getString(gl::UseProgramStageMask glbitfield);
    static const std::string & getString(gl::VertexHintsMaskPGI glbitfield);
    static const std::string & getString(gl::UnusedMask glbitfield);
    static const std::string & getString(gl::BufferAccessMask glbitfield);
    static const std::string & getString(gl::BufferStorageMask glbitfield);
    static const std::string & getString(gl::PathFontStyle glbitfield);

private:
    static int alphabeticalGroupIndex(const std::string & identifier, std::uint8_t prefixLength);
};

} // namespace gl
