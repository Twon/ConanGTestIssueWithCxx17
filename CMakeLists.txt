cmake_minimum_required(VERSION 3.14)

project(ConanGTestIssueWithCxx17)

list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

find_package(GTest)

add_executable(ConanGTestIssueWithCxx17)
target_sources(ConanGTestIssueWithCxx17 
    PRIVATE
        main.cpp
)
target_link_libraries(ConanGTestIssueWithCxx17
    PRIVATE
        gtest::gtest
)
set_target_properties(ConanGTestIssueWithCxx17
    PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
)