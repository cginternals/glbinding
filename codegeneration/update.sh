#!/bin/bash

python scripts/update.py -a egl -f egl.xml -r egl.revision
python scripts/update.py -a gl -f gl.xml -r gl.revision
#python scripts/update.py -a wgl -f wgl.xml -r wgl.revision
#python scripts/update.py -a glx -f glx.xml -r glx.revision
