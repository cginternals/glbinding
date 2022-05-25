ARG BASE=ubuntu:20.04
ARG PROJECT_NAME=glbinding
ARG WORKSPACE=/workspace

# BUILD

FROM $BASE AS glbinding-build

ARG PROJECT_NAME
ARG WORKSPACE
ARG COMPILER_FLAGS="-j 4"

ENV DEBIAN_FRONTEND=noninteractive

RUN apt update
RUN apt install -y --no-install-recommends sudo \
    && echo 'user ALL=(ALL) NOPASSWD: ALL' >/etc/sudoers.d/user
RUN apt install -y --no-install-recommends --reinstall ca-certificates
RUN apt install -y --no-install-recommends cmake git build-essential

ENV PROJECT_DIR="$WORKSPACE/$PROJECT_NAME"

WORKDIR $WORKSPACE

COPY --from=cpplocate:latest $WORKSPACE/cpplocate $WORKSPACE/cpplocate

RUN git clone --depth=1 --branch=master https://github.com/glfw/glfw.git
RUN apt install -y --no-install-recommends \
    libxcursor-dev libxinerama-dev libxrandr-dev libxi-dev
WORKDIR $WORKSPACE/glfw
RUN cmake -DCMAKE_INSTALL_PREFIX="$WORKSPACE/glfw" .
RUN cmake --build . -- $COMPILER_FLAGS
RUN cmake --build . --target install
ENV glfw3_DIR=$WORKSPACE/glfw/lib/cmake

WORKDIR $WORKSPACE

ADD cmake $PROJECT_NAME/cmake
ADD docs $PROJECT_NAME/docs
ADD deploy $PROJECT_NAME/deploy
ADD source $PROJECT_NAME/source
ADD data $PROJECT_NAME/data
ADD CMakeLists.txt $PROJECT_NAME/CMakeLists.txt
ADD configure $PROJECT_NAME/configure
ADD $PROJECT_NAME-config.cmake $PROJECT_NAME/$PROJECT_NAME-config.cmake
ADD $PROJECT_NAME-logo.png $PROJECT_NAME/$PROJECT_NAME-logo.png
ADD $PROJECT_NAME-logo.svg $PROJECT_NAME/$PROJECT_NAME-logo.svg
ADD LICENSE $PROJECT_NAME/LICENSE
ADD README.md $PROJECT_NAME/README.md
ADD AUTHORS $PROJECT_NAME/AUTHORS

ENV CMAKE_PREFIX_PATH=$WORKSPACE

WORKDIR $PROJECT_DIR
RUN ./configure
RUN CMAKE_OPTIONS="-DOPTION_BUILD_TESTS=Off -DCMAKE_INSTALL_PREFIX=$WORKSPACE/$PROJECT_NAME-install" ./configure
RUN cmake --build build -- $COMPILER_FLAGS
RUN cmake --build build --target install

# DEPLOY

FROM $BASE AS glbinding

ARG PROJECT_NAME
ARG WORKSPACE

ENV DEBIAN_FRONTEND=noninteractive

RUN apt update
RUN apt install -y --no-install-recommends cmake

COPY --from=glbinding-build $WORKSPACE/cpplocate $WORKSPACE/cpplocate
COPY --from=glbinding-build $WORKSPACE/glfw $WORKSPACE/glfw

COPY --from=glbinding-build $WORKSPACE/$PROJECT_NAME-install $WORKSPACE/$PROJECT_NAME
