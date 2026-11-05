cmake_minimum_required(VERSION 3.16)

project(GravityLab
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(gravity_lab
    src/app/main.cpp,
    src/physics/Vec2.cpp,
    src/physics/RigidBody.cpp
)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU"
    OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")

    target_compile_options(gravity_lab PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
endif()
