#!/bin/sh

rm -rf build-musl

docker run --rm -it -v "${PWD}":/opt/src musl-builder sh -c "mkdir build-musl && cd build-musl && cmake ../ && make"
