
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
    return glbinding::Binding::PassTexCoordATI(dst, coord, swizzle);
}

void glPassThrough(GLfloat token)
{
    return glbinding::Binding::PassThrough(token);
}

void glPassThroughxOES(GLfixed token)
{
    return glbinding::Binding::PassThroughxOES(token);
}

void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
    return glbinding::Binding::PatchParameterfv(pname, values);
}

void glPatchParameteri(GLenum pname, GLint value)
{
    return glbinding::Binding::PatchParameteri(pname, value);
}

void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs)
{
    return glbinding::Binding::PathColorGenNV(color, genMode, colorFormat, coeffs);
}

void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::Binding::PathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::Binding::PathCoordsNV(path, numCoords, coordType, coords);
}

void glPathCoverDepthFuncNV(GLenum func)
{
    return glbinding::Binding::PathCoverDepthFuncNV(func);
}

void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return glbinding::Binding::PathDashArrayNV(path, dashCount, dashArray);
}

void glPathFogGenNV(GLenum genMode)
{
    return glbinding::Binding::PathFogGenNV(genMode);
}

GLenum glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::Binding::PathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathGlyphIndexRangeNV(GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint * baseAndCount)
{
    return glbinding::Binding::PathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
}

void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::Binding::PathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::Binding::PathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::Binding::PathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return glbinding::Binding::PathParameterfNV(path, pname, value);
}

void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return glbinding::Binding::PathParameterfvNV(path, pname, value);
}

void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return glbinding::Binding::PathParameteriNV(path, pname, value);
}

void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return glbinding::Binding::PathParameterivNV(path, pname, value);
}

void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return glbinding::Binding::PathStencilDepthOffsetNV(factor, units);
}

void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::Binding::PathStencilFuncNV(func, ref, mask);
}

void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return glbinding::Binding::PathStringNV(path, format, length, pathString);
}

void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::Binding::PathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::Binding::PathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glbinding::Binding::PathTexGenNV(texCoordSet, genMode, components, coeffs);
}

void glPauseTransformFeedback()
{
    return glbinding::Binding::PauseTransformFeedback();
}

void glPauseTransformFeedbackNV()
{
    return glbinding::Binding::PauseTransformFeedbackNV();
}

void glPixelDataRangeNV(GLenum target, GLsizei length, const void * pointer)
{
    return glbinding::Binding::PixelDataRangeNV(target, length, pointer);
}

void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
    return glbinding::Binding::PixelMapfv(map, mapsize, values);
}

void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
    return glbinding::Binding::PixelMapuiv(map, mapsize, values);
}

void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
    return glbinding::Binding::PixelMapusv(map, mapsize, values);
}

void glPixelMapx(GLenum map, GLint size, const GLfixed * values)
{
    return glbinding::Binding::PixelMapx(map, size, values);
}

void glPixelStoref(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PixelStoref(pname, param);
}

void glPixelStorei(GLenum pname, GLint param)
{
    return glbinding::Binding::PixelStorei(pname, param);
}

void glPixelStorex(GLenum pname, GLfixed param)
{
    return glbinding::Binding::PixelStorex(pname, param);
}

void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PixelTexGenParameterfSGIS(pname, param);
}

void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PixelTexGenParameterfvSGIS(pname, params);
}

void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
    return glbinding::Binding::PixelTexGenParameteriSGIS(pname, param);
}

void glPixelTexGenParameterivSGIS(GLenum pname, const GLint * params)
{
    return glbinding::Binding::PixelTexGenParameterivSGIS(pname, params);
}

void glPixelTexGenSGIX(GLenum mode)
{
    return glbinding::Binding::PixelTexGenSGIX(mode);
}

void glPixelTransferf(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PixelTransferf(pname, param);
}

void glPixelTransferi(GLenum pname, GLint param)
{
    return glbinding::Binding::PixelTransferi(pname, param);
}

void glPixelTransferxOES(GLenum pname, GLfixed param)
{
    return glbinding::Binding::PixelTransferxOES(pname, param);
}

void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::PixelTransformParameterfEXT(target, pname, param);
}

void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PixelTransformParameterfvEXT(target, pname, params);
}

void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::PixelTransformParameteriEXT(target, pname, param);
}

void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::PixelTransformParameterivEXT(target, pname, params);
}

void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    return glbinding::Binding::PixelZoom(xfactor, yfactor);
}

void glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
    return glbinding::Binding::PixelZoomxOES(xfactor, yfactor);
}

void glPNTrianglesfATI(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PNTrianglesfATI(pname, param);
}

void glPNTrianglesiATI(GLenum pname, GLint param)
{
    return glbinding::Binding::PNTrianglesiATI(pname, param);
}

GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return glbinding::Binding::PointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void glPointParameterf(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PointParameterf(pname, param);
}

void glPointParameterfARB(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PointParameterfARB(pname, param);
}

void glPointParameterfEXT(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PointParameterfEXT(pname, param);
}

void glPointParameterfSGIS(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PointParameterfSGIS(pname, param);
}

void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PointParameterfv(pname, params);
}

void glPointParameterfvARB(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PointParameterfvARB(pname, params);
}

void glPointParameterfvEXT(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PointParameterfvEXT(pname, params);
}

void glPointParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PointParameterfvSGIS(pname, params);
}

void glPointParameteri(GLenum pname, GLint param)
{
    return glbinding::Binding::PointParameteri(pname, param);
}

void glPointParameteriNV(GLenum pname, GLint param)
{
    return glbinding::Binding::PointParameteriNV(pname, param);
}

void glPointParameteriv(GLenum pname, const GLint * params)
{
    return glbinding::Binding::PointParameteriv(pname, params);
}

void glPointParameterivNV(GLenum pname, const GLint * params)
{
    return glbinding::Binding::PointParameterivNV(pname, params);
}

void glPointParameterxOES(GLenum pname, GLfixed param)
{
    return glbinding::Binding::PointParameterxOES(pname, param);
}

void glPointParameterxvOES(GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::PointParameterxvOES(pname, params);
}

void glPointSize(GLfloat size)
{
    return glbinding::Binding::PointSize(size);
}

void glPointSizexOES(GLfixed size)
{
    return glbinding::Binding::PointSizexOES(size);
}

GLint glPollAsyncSGIX(GLuint * markerp)
{
    return glbinding::Binding::PollAsyncSGIX(markerp);
}

GLint glPollInstrumentsSGIX(GLint * marker_p)
{
    return glbinding::Binding::PollInstrumentsSGIX(marker_p);
}

void glPolygonMode(GLenum face, GLenum mode)
{
    return glbinding::Binding::PolygonMode(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glbinding::Binding::PolygonOffset(factor, units);
}

void glPolygonOffsetClamp(GLfloat factor, GLfloat units, GLfloat clamp)
{
    return glbinding::Binding::PolygonOffsetClamp(factor, units, clamp);
}

void glPolygonOffsetClampEXT(GLfloat factor, GLfloat units, GLfloat clamp)
{
    return glbinding::Binding::PolygonOffsetClampEXT(factor, units, clamp);
}

void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
    return glbinding::Binding::PolygonOffsetEXT(factor, bias);
}

void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
    return glbinding::Binding::PolygonOffsetxOES(factor, units);
}

void glPolygonStipple(const GLubyte * mask)
{
    return glbinding::Binding::PolygonStipple(mask);
}

void glPopAttrib()
{
    return glbinding::Binding::PopAttrib();
}

void glPopClientAttrib()
{
    return glbinding::Binding::PopClientAttrib();
}

void glPopDebugGroup()
{
    return glbinding::Binding::PopDebugGroup();
}

void glPopDebugGroupKHR()
{
    return glbinding::Binding::PopDebugGroupKHR();
}

void glPopGroupMarkerEXT()
{
    return glbinding::Binding::PopGroupMarkerEXT();
}

void glPopMatrix()
{
    return glbinding::Binding::PopMatrix();
}

void glPopName()
{
    return glbinding::Binding::PopName();
}

void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
    return glbinding::Binding::PresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
    return glbinding::Binding::PresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

void glPrimitiveBoundingBoxARB(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
    return glbinding::Binding::PrimitiveBoundingBoxARB(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void glPrimitiveRestartIndex(GLuint index)
{
    return glbinding::Binding::PrimitiveRestartIndex(index);
}

void glPrimitiveRestartIndexNV(GLuint index)
{
    return glbinding::Binding::PrimitiveRestartIndexNV(index);
}

void glPrimitiveRestartNV()
{
    return glbinding::Binding::PrimitiveRestartNV();
}

void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
    return glbinding::Binding::PrioritizeTextures(n, textures, priorities);
}

void glPrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
    return glbinding::Binding::PrioritizeTexturesEXT(n, textures, priorities);
}

void glPrioritizeTexturesxOES(GLsizei n, const GLuint * textures, const GLfixed * priorities)
{
    return glbinding::Binding::PrioritizeTexturesxOES(n, textures, priorities);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glbinding::Binding::ProgramBinary(program, binaryFormat, binary, length);
}

void glProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat * params)
{
    return glbinding::Binding::ProgramBufferParametersfvNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint * params)
{
    return glbinding::Binding::ProgramBufferParametersIivNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint * params)
{
    return glbinding::Binding::ProgramBufferParametersIuivNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::ProgramEnvParameter4dARB(target, index, x, y, z, w);
}

void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::Binding::ProgramEnvParameter4dvARB(target, index, params);
}

void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::ProgramEnvParameter4fARB(target, index, x, y, z, w);
}

void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::Binding::ProgramEnvParameter4fvARB(target, index, params);
}

void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::ProgramEnvParameterI4iNV(target, index, x, y, z, w);
}

void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return glbinding::Binding::ProgramEnvParameterI4ivNV(target, index, params);
}

void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::Binding::ProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}

void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::Binding::ProgramEnvParameterI4uivNV(target, index, params);
}

void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::Binding::ProgramEnvParameters4fvEXT(target, index, count, params);
}

void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::Binding::ProgramEnvParametersI4ivNV(target, index, count, params);
}

void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::Binding::ProgramEnvParametersI4uivNV(target, index, count, params);
}

void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::ProgramLocalParameter4dARB(target, index, x, y, z, w);
}

void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::Binding::ProgramLocalParameter4dvARB(target, index, params);
}

void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::ProgramLocalParameter4fARB(target, index, x, y, z, w);
}

void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::Binding::ProgramLocalParameter4fvARB(target, index, params);
}

void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::ProgramLocalParameterI4iNV(target, index, x, y, z, w);
}

void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return glbinding::Binding::ProgramLocalParameterI4ivNV(target, index, params);
}

void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::Binding::ProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}

void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::Binding::ProgramLocalParameterI4uivNV(target, index, params);
}

void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::Binding::ProgramLocalParameters4fvEXT(target, index, count, params);
}

void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::Binding::ProgramLocalParametersI4ivNV(target, index, count, params);
}

void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::Binding::ProgramLocalParametersI4uivNV(target, index, count, params);
}

void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::ProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
    return glbinding::Binding::ProgramNamedParameter4dvNV(id, len, name, v);
}

void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::ProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
    return glbinding::Binding::ProgramNamedParameter4fvNV(id, len, name, v);
}

void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::ProgramParameter4dNV(target, index, x, y, z, w);
}

void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * v)
{
    return glbinding::Binding::ProgramParameter4dvNV(target, index, v);
}

void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::ProgramParameter4fNV(target, index, x, y, z, w);
}

void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * v)
{
    return glbinding::Binding::ProgramParameter4fvNV(target, index, v);
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return glbinding::Binding::ProgramParameteri(program, pname, value);
}

void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
    return glbinding::Binding::ProgramParameteriARB(program, pname, value);
}

void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return glbinding::Binding::ProgramParameteriEXT(program, pname, value);
}

void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::Binding::ProgramParameters4dvNV(target, index, count, v);
}

void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::ProgramParameters4fvNV(target, index, count, v);
}

void glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glbinding::Binding::ProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
}

void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
    return glbinding::Binding::ProgramStringARB(target, format, len, string);
}

void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint * params)
{
    return glbinding::Binding::ProgramSubroutineParametersuivNV(target, count, params);
}

void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    return glbinding::Binding::ProgramUniform1d(program, location, v0);
}

void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
    return glbinding::Binding::ProgramUniform1dEXT(program, location, x);
}

void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform1dv(program, location, count, value);
}

void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform1dvEXT(program, location, count, value);
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::Binding::ProgramUniform1f(program, location, v0);
}

void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::Binding::ProgramUniform1fEXT(program, location, v0);
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform1fv(program, location, count, value);
}

void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform1fvEXT(program, location, count, value);
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return glbinding::Binding::ProgramUniform1i(program, location, v0);
}

void glProgramUniform1i64ARB(GLuint program, GLint location, GLint64 x)
{
    return glbinding::Binding::ProgramUniform1i64ARB(program, location, x);
}

void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
    return glbinding::Binding::ProgramUniform1i64NV(program, location, x);
}

void glProgramUniform1i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 * value)
{
    return glbinding::Binding::ProgramUniform1i64vARB(program, location, count, value);
}

void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::ProgramUniform1i64vNV(program, location, count, value);
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return glbinding::Binding::ProgramUniform1iEXT(program, location, v0);
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform1iv(program, location, count, value);
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform1ivEXT(program, location, count, value);
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return glbinding::Binding::ProgramUniform1ui(program, location, v0);
}

void glProgramUniform1ui64ARB(GLuint program, GLint location, GLuint64 x)
{
    return glbinding::Binding::ProgramUniform1ui64ARB(program, location, x);
}

void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
    return glbinding::Binding::ProgramUniform1ui64NV(program, location, x);
}

void glProgramUniform1ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::Binding::ProgramUniform1ui64vARB(program, location, count, value);
}

void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::ProgramUniform1ui64vNV(program, location, count, value);
}

void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return glbinding::Binding::ProgramUniform1uiEXT(program, location, v0);
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform1uiv(program, location, count, value);
}

void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform1uivEXT(program, location, count, value);
}

void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    return glbinding::Binding::ProgramUniform2d(program, location, v0, v1);
}

void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
    return glbinding::Binding::ProgramUniform2dEXT(program, location, x, y);
}

void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform2dv(program, location, count, value);
}

void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform2dvEXT(program, location, count, value);
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::Binding::ProgramUniform2f(program, location, v0, v1);
}

void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::Binding::ProgramUniform2fEXT(program, location, v0, v1);
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform2fv(program, location, count, value);
}

void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform2fvEXT(program, location, count, value);
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::Binding::ProgramUniform2i(program, location, v0, v1);
}

void glProgramUniform2i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y)
{
    return glbinding::Binding::ProgramUniform2i64ARB(program, location, x, y);
}

void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
    return glbinding::Binding::ProgramUniform2i64NV(program, location, x, y);
}

void glProgramUniform2i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 * value)
{
    return glbinding::Binding::ProgramUniform2i64vARB(program, location, count, value);
}

void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::ProgramUniform2i64vNV(program, location, count, value);
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::Binding::ProgramUniform2iEXT(program, location, v0, v1);
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform2iv(program, location, count, value);
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform2ivEXT(program, location, count, value);
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::Binding::ProgramUniform2ui(program, location, v0, v1);
}

void glProgramUniform2ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y)
{
    return glbinding::Binding::ProgramUniform2ui64ARB(program, location, x, y);
}

void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::Binding::ProgramUniform2ui64NV(program, location, x, y);
}

void glProgramUniform2ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::Binding::ProgramUniform2ui64vARB(program, location, count, value);
}

void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::ProgramUniform2ui64vNV(program, location, count, value);
}

void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::Binding::ProgramUniform2uiEXT(program, location, v0, v1);
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform2uiv(program, location, count, value);
}

void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform2uivEXT(program, location, count, value);
}

void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    return glbinding::Binding::ProgramUniform3d(program, location, v0, v1, v2);
}

void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::ProgramUniform3dEXT(program, location, x, y, z);
}

void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform3dv(program, location, count, value);
}

void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform3dvEXT(program, location, count, value);
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::ProgramUniform3f(program, location, v0, v1, v2);
}

void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::ProgramUniform3fEXT(program, location, v0, v1, v2);
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform3fv(program, location, count, value);
}

void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform3fvEXT(program, location, count, value);
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::Binding::ProgramUniform3i(program, location, v0, v1, v2);
}

void glProgramUniform3i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z)
{
    return glbinding::Binding::ProgramUniform3i64ARB(program, location, x, y, z);
}

void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::Binding::ProgramUniform3i64NV(program, location, x, y, z);
}

void glProgramUniform3i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 * value)
{
    return glbinding::Binding::ProgramUniform3i64vARB(program, location, count, value);
}

void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::ProgramUniform3i64vNV(program, location, count, value);
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::Binding::ProgramUniform3iEXT(program, location, v0, v1, v2);
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform3iv(program, location, count, value);
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform3ivEXT(program, location, count, value);
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::Binding::ProgramUniform3ui(program, location, v0, v1, v2);
}

void glProgramUniform3ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z)
{
    return glbinding::Binding::ProgramUniform3ui64ARB(program, location, x, y, z);
}

void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::Binding::ProgramUniform3ui64NV(program, location, x, y, z);
}

void glProgramUniform3ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::Binding::ProgramUniform3ui64vARB(program, location, count, value);
}

void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::ProgramUniform3ui64vNV(program, location, count, value);
}

void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::Binding::ProgramUniform3uiEXT(program, location, v0, v1, v2);
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform3uiv(program, location, count, value);
}

void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform3uivEXT(program, location, count, value);
}

void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    return glbinding::Binding::ProgramUniform4d(program, location, v0, v1, v2, v3);
}

void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::ProgramUniform4dEXT(program, location, x, y, z, w);
}

void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform4dv(program, location, count, value);
}

void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform4dvEXT(program, location, count, value);
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::Binding::ProgramUniform4f(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::Binding::ProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform4fv(program, location, count, value);
}

void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform4fvEXT(program, location, count, value);
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::Binding::ProgramUniform4i(program, location, v0, v1, v2, v3);
}

void glProgramUniform4i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w)
{
    return glbinding::Binding::ProgramUniform4i64ARB(program, location, x, y, z, w);
}

void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::Binding::ProgramUniform4i64NV(program, location, x, y, z, w);
}

void glProgramUniform4i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 * value)
{
    return glbinding::Binding::ProgramUniform4i64vARB(program, location, count, value);
}

void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::ProgramUniform4i64vNV(program, location, count, value);
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::Binding::ProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform4iv(program, location, count, value);
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform4ivEXT(program, location, count, value);
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::Binding::ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void glProgramUniform4ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w)
{
    return glbinding::Binding::ProgramUniform4ui64ARB(program, location, x, y, z, w);
}

void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::Binding::ProgramUniform4ui64NV(program, location, x, y, z, w);
}

void glProgramUniform4ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::Binding::ProgramUniform4ui64vARB(program, location, count, value);
}

void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::ProgramUniform4ui64vNV(program, location, count, value);
}

void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::Binding::ProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform4uiv(program, location, count, value);
}

void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform4uivEXT(program, location, count, value);
}

void glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value)
{
    return glbinding::Binding::ProgramUniformHandleui64ARB(program, location, value);
}

void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return glbinding::Binding::ProgramUniformHandleui64NV(program, location, value);
}

void glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glbinding::Binding::ProgramUniformHandleui64vARB(program, location, count, values);
}

void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glbinding::Binding::ProgramUniformHandleui64vNV(program, location, count, values);
}

void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
    return glbinding::Binding::ProgramUniformui64NV(program, location, value);
}

void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::ProgramUniformui64vNV(program, location, count, value);
}

void glProgramVertexLimitNV(GLenum target, GLint limit)
{
    return glbinding::Binding::ProgramVertexLimitNV(target, limit);
}

void glProvokingVertex(GLenum mode)
{
    return glbinding::Binding::ProvokingVertex(mode);
}

void glProvokingVertexEXT(GLenum mode)
{
    return glbinding::Binding::ProvokingVertexEXT(mode);
}

void glPushAttrib(AttribMask mask)
{
    return glbinding::Binding::PushAttrib(mask);
}

void glPushClientAttrib(ClientAttribMask mask)
{
    return glbinding::Binding::PushClientAttrib(mask);
}

void glPushClientAttribDefaultEXT(ClientAttribMask mask)
{
    return glbinding::Binding::PushClientAttribDefaultEXT(mask);
}

void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return glbinding::Binding::PushDebugGroup(source, id, length, message);
}

void glPushDebugGroupKHR(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return glbinding::Binding::PushDebugGroupKHR(source, id, length, message);
}

void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glbinding::Binding::PushGroupMarkerEXT(length, marker);
}

void glPushMatrix()
{
    return glbinding::Binding::PushMatrix();
}

void glPushName(GLuint name)
{
    return glbinding::Binding::PushName(name);
}


} // namespace gl