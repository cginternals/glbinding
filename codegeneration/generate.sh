#!/bin/bash

python scripts/generate_functions.py -i gl.xml
python scripts/generate_constants.py -i gl.xml 
#~ python scripts/generate_types.py -i gl.xml 
