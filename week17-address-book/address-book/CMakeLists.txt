add_executable(week17_address_book
    main.cpp
    contact.cpp
    book.cpp
)

target_include_directories(week17_address_book PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
