add_executable(week16_mini_lib
    main.cpp
    greet.cpp
)

target_include_directories(week16_mini_lib PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
