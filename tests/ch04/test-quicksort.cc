#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "ch04/quicksort.h"

TEST(grokking_lib, binary_quicksort)
{
    std::vector<int> v{3, 4, 2, 8, 5, 6, 1, 7, 9};
    quick_sort(v);
    EXPECT_THAT(v, ::testing::ElementsAreArray({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}