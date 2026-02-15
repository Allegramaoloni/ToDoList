# Aggiunge Google Test dalla cartella locale lib
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../lib/googletest ./googletest_build)

# Permette di trovare i file .h che stanno nella cartella superiore
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib/googletest/googletest/include)

# File necessari per i test
set(SOURCE_TEST_FILES
        RunallTest.cpp
        TaskTest.cpp
        TaskListTest.cpp
        TaskListExceptionTest.cpp

)

# Crea l'eseguibile dei test
add_executable(runTests ${SOURCE_TEST_FILES})

# Collega la libreria della logica e Google Test
target_link_libraries(runTests
        ${CMAKE_PROJECT_NAME}_lib
        gtest
        gtest_main
)
