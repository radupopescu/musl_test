cmake_minimum_required (VERSION 2.8)

project(musl_test)
string(TOLOWER ${PROJECT_NAME} PROJECT_NAME_LOWER)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

include(version)
include(compiler_options)
include(project_options)
include(dependencies)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(apps)
