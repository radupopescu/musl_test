include(FeatureSummary)

option(${PROJECT_NAME}_BUILD_TESTS "Build unit tests" ON)
add_feature_info(
    "Testsuite"
    ${PROJECT_NAME}_BUILD_TESTS
    "Build all unit tests"
)

if(${PROJECT_NAME}_BUILD_TESTS)
    enable_testing()
endif()

feature_summary(WHAT ALL)
