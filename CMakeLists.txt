# 本仓库的练习构建脚本。
# 第 1 周可以先只用 g++。从任意一周开始，也可以用这里的 CMake 一次编译全部练习。
# 第 16 周会回来读这份文件。

cmake_minimum_required(VERSION 3.16)

project(cpp_learning LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if(MSVC)
    add_compile_options(/W4 /permissive- /Zc:__cplusplus)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 每个 weekXX 目录下的 ex*.cpp 都是一个独立的小程序（自带 main）。
file(GLOB week_dirs CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/week*")
foreach(dir IN LISTS week_dirs)
    if(NOT IS_DIRECTORY "${dir}")
        continue()
    endif()

    file(GLOB sources CONFIGURE_DEPENDS "${dir}/ex*.cpp")
    get_filename_component(week_name "${dir}" NAME)
    string(REPLACE "-" "_" week_id "${week_name}")

    foreach(src IN LISTS sources)
        get_filename_component(stem "${src}" NAME_WE)
        string(REPLACE "-" "_" stem_id "${stem}")
        set(target "${week_id}_${stem_id}")
        add_executable(${target} "${src}")
    endforeach()
endforeach()

# 多文件练习不参与上面的「一文件一个程序」扫描，单独列在各自的 CMakeLists.txt 里。
add_subdirectory(week16-cmake/mini-lib)
add_subdirectory(week17-address-book/address-book)
