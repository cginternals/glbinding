#!/bin/bash
cd `dirname $0`
cd ..

find source -iname "*.h" -or -iname "*.hpp" -or -iname "*.cpp" | xargs -I{} uncrustify -c styleguide/uncrustify.cfg --no-backup -l CPP {}
