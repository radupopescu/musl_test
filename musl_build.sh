#!/bin/sh

rm -rf build-musl

docker run --rm -it -v "${PWD}":/opt/src radupopescu/musl-builder sh -c "mkdir build-musl && cd build-musl && cmake -D CMAKE_EXE_LINKER_FLAGS="-static" ../ && make"
