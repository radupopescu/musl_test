#!/bin/sh

export WORKDIR=/opt/src
rm -rf build-musl

docker run --rm -it -v "${PWD}":"${WORKDIR}" radupopescu/musl-builder \
    sh -c "cd ${WORKDIR} && mkdir build-musl && cd build-musl && cmake -D CMAKE_EXE_LINKER_FLAGS=\"-static\" ../ && make"
