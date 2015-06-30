#!/bin/bash

python scripts/generate.py -a egl -s egl.xml -l eglbinding -r egl.revision -p eglpatch.xml
python scripts/generate.py -a gl -s gl.xml -l glbinding -r gl.revision -p glpatch.xml
python scripts/generate.py -a gles2 -s gl.xml -l glesbinding -r gl.revision -p glpatch.xml
# python scripts/generate.py -a wgl -s wgl.xml -l wglbinding -r wgl.revision -p wglpatch.xml
# python scripts/generate.py -a glx -s glx.xml -l glxbinding -r glx.revision -p glxpatch.xml
