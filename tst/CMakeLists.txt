add_executable(main_test test.c)

target_link_libraries(main_test Unity)

add_test(all_ones_test main_test)