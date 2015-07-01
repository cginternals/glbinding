#!/bin/bash

python scripts/generate.py -a egl -p egl -l egl -s egl.xml -r egl.revision -x eglpatch.xml
python scripts/generate.py -a gl -p gl -l gl -s gl.xml -r gl.revision -x glpatch.xml
python scripts/generate.py -a gles2 -p gl -l gles -s gl.xml -r gl.revision -x glpatch.xml
# python scripts/generate.py -a wgl -p wgl -l wgl -s wgl.xml -r wgl.revision -x wglpatch.xml
# python scripts/generate.py -a glx -p glx -l glx -s glx.xml -r glx.revision -x glxpatch.xml
