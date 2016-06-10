include_directories(${PROJECT_SOURCE_DIR}/external ${PROJECT_SOURCE_DIR}/src)

if(${PROJECT_NAME}_BUILD_TESTS)
    file(GLOB test_sources *.cpp)

    add_executable(test_runner
        ${test_sources}
    )
    target_link_libraries(test_runner ${PROJECT_NAME_LOWER})

    add_test(test_runner test_runner)
endif()

