#!/bin/bash

python scripts/generate.py -s gl.xml -d -a gl ../glbinding -r gl.revision -p patch.xml
python scripts/generate.py -s gl.xml -a glsc -d ../glscbinding -r gl.revision -p patch.xml
