#!/bin/sh

rm -f build-{debug,opt}
mkdir -p build-{debug,opt}

cd ../../build-debug
cmake -G Ninja -D CMAKE_BUILD_TYPE=Debug ../
ninja

cd ../build-opt
cmake -G Ninja -D CMAKE_BUILD_TYPE=Release ../
ninja
