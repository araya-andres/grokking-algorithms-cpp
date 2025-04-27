find_package(GTest CONFIG REQUIRED)

add_executable(
    grokking-tests
    ch01/test-binary-search.cc
    ch01/test-selection-sort.cc
    ch04/test-quicksort.cc
    ch06/test-bfs.cc
)

add_dependencies(grokking-tests grokking-lib)

add_test(grokking-tests ${CMAKE_BINARY_DIR}/tests/grokking-tests)

target_include_directories(grokking-tests PRIVATE ../lib)

target_link_libraries(
    grokking-tests
    PRIVATE
    grokking-lib
    GTest::gmock
    GTest::gmock_main
    GTest::gtest
    GTest::gtest_main
)