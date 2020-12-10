cmake_minimum_required (VERSION 3.19)

project ("L1.1")

if (CMAKE_COMPILER_IS_GNUCXX)
  add_definitions (-Wall -pedantic -std=gnu++2a)
endif ()

add_executable (${PROJECT_NAME} "Main.cpp")

set_target_properties (${PROJECT_NAME}
  PROPERTIES
    set (CMAKE_CXX_STANDARD 20)
    set (CMAKE_CXX_STANDARD_REQUIRED ON)
)
