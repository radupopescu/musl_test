# musl_test - Simple C++ test application to test building in a container

## Overview

This is a simple demo C++14 project, configured with CMake. In the project root, there is the `musl_build.sh` script
which will compile the project inside the `radupopescu/musl-builder` Docker container.

The resulting binaries - located under `build-musl` are statically linked against the `musl` C library and can be
copied and run on any (recent?) x86_64 Linux distribution.

## License and authorship

The contributors are listed in AUTHORS. This project uses the MPL v2 license, see LICENSE.

## Issues

To report an issue, use the [musl_test issue tracker](https://github.com/radupopescu/musl_test/issues) at github.com.

