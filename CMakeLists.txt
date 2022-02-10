cmake_minimum_required(VERSION 3.20)
project(mqtt_conan_test)

set(CMAKE_CXX_STANDARD 11)

set(PATH_CONAN_BUILD_INFO ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

if (EXISTS ${PATH_CONAN_BUILD_INFO})
    # Includes the contents of the conanbuildinfo.cmake file.
    include(${PATH_CONAN_BUILD_INFO})
    # Prepares the CMakeList.txt for Conan (set include directories, set variables, etc...)
    conan_basic_setup()
endif()

add_executable(mqtt_conan_test main.cpp)
target_link_libraries(mqtt_conan_test ${CONAN_LIBS})
