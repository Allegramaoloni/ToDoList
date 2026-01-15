cmake_minimum_required(VERSION 3.26)
project(ToDoList)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.14.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


add_executable(ToDoList
        main.cpp
        Task.h
        TaskList.h
        Task.cpp
        TaskList.cpp
)


enable_testing()


add_executable(runTests
        TaskTest.cpp
        Task.cpp
        TaskList.cpp
)


target_link_libraries(runTests GTest::gtest_main)


include(GoogleTest)
gtest_discover_tests(runTests)