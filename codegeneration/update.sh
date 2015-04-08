#!/bin/bash

url=https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/gl.xml

if [ -e gl.revision ]
then
  rcurrent=`cat gl.revision`
else
  rcurrent=0
fi

echo "local revision of gl.xml is $rcurrent"
echo "retrieving latest changed revision of gl.xml"

rnew=`svn info "$url" | grep "Revision: " | awk '{ print $2}'`

if [ $rnew -gt $rcurrent ]
then
  echo "updating gl.xml $rcurrent to $rnew"
  svn export --force --quiet "$url"
  echo "$rnew" > gl.revision
  echo "local revision of gl.xml is $rnew"
  echo ""
  git diff gl.xml
  echo ""
fi
