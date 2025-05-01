#include "ch04/quicksort.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(grokking_lib, binary_quicksort)
{
    std::vector v{3, 4, 2, 8, 5, 6, 1, 7, 9};
    quick_sort(v);
    EXPECT_THAT(v, ::testing::ElementsAreArray({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

TEST(grokking_lib, binary_quicksort_with_elements_sorted)
{
    std::vector v{1, 2, 3};
    quick_sort(v);
    EXPECT_THAT(v, ::testing::ElementsAreArray({1, 2, 3}));
}

TEST(grokking_lib, binary_quicksort_with_empty_array)
{
    std::vector<int> v;
    quick_sort(v);
    ASSERT_EQ(v.size(), 0);
}

TEST(grokking_lib, binary_quicksort_array_with_strings)
{
    std::vector<std::string> v{"dice", "bee", "apple", "cat"};
    quick_sort(v);
    EXPECT_THAT(
        v, ::testing::ElementsAreArray({"apple", "bee", "cat", "dice"})
    );
}
