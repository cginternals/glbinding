#!/bin/bash

python scripts/update.py -f egl.xml -r egl.revision
python scripts/update.py -f gl.xml -r gl.revision
#python scripts/update.py -f wgl.xml -r wgl.revision
#python scripts/update.py -f glx.xml -r glx.revision
