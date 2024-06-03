cmake_minimum_required (VERSION 3.19)

# For clang
# set(VCPKG_TARGET_TRIPLET "x64-mingw-static")

set(CMAKE_CXX_STANDARD 20)

project(ProjectTemplate)

file(GLOB_RECURSE PROJ_Src LIST_DIRECTORIES false 
    src/*.cpp
    src/**/*.cpp)

add_executable(ProjectTemplate ${PROJ_Src})

target_include_directories(ProjectTemplate PRIVATE include)

find_package(glfw3 CONFIG REQUIRED)
    target_link_libraries(ProjectTemplate PRIVATE glfw)

find_package(glad CONFIG REQUIRED)
    target_link_libraries(ProjectTemplate PRIVATE glad::glad)