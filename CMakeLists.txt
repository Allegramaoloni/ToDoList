cmake_minimum_required(VERSION 3.18)
project(ToDoList)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Definiamo i file della logica (quelli che devono essere testati)
set(SOURCE_FILES Task.cpp TaskList.cpp)
set(HEADER_FILES Task.h TaskList.h TaskListException.h)

# 2. Creiamo una libreria con questi file (la chiamiamo ToDoList_lib)
add_library(${CMAKE_PROJECT_NAME}_lib ${SOURCE_FILES} ${HEADER_FILES})
target_include_directories(${CMAKE_PROJECT_NAME}_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


# 3. Eseguibile principale dell'app
add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} ${CMAKE_PROJECT_NAME}_lib)

# 4. Diciamo a CMake di andare a leggere nella cartella test
add_subdirectory(test)