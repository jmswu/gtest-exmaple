cmake_minimum_required(VERSION 3.0)

project(unit_test)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} 
        ./src/main.cpp
        ./src/test.cpp
        ./src/test2.cpp
    )

target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES} pthread)
