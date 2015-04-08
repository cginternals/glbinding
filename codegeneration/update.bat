@echo off
set url=https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/gl.xml

set /p rcurrent=<gl.revision
echo local revision of gl.xml is %rcurrent%
echo retrieving latest changed revision of gl.xml

svn info %url%>gl.xml.info
for /F "delims=" %%a in ('findstr /r /x /c:"Last Changed Rev: [0-9]*" gl.xml.info') do (
   for %%b in (%%a) do set rnew=%%b)
del gl.xml.info

if %rnew% gtr %rcurrent% (goto :update)
echo gl.xml is up to date, skipping update
goto :skip

:update
echo updating gl.xml %rcurrent% to %rnew%
svn export --force %url% --quiet
echo %rnew%>gl.revision
echo local revision of gl.xml is %rnew% 
echo.
git diff gl.xml
echo.

:skip
