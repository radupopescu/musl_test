include_directories(${PROJECT_SOURCE_DIR}/src)

# Example main app
set(main_sources main.cpp)
add_executable(${PROJECT_NAME_LOWER}_main ${main_sources})
target_link_libraries(${PROJECT_NAME_LOWER}_main ${PROJECT_NAME_LOWER})
