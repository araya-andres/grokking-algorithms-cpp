#include "ch01/selection-sort.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

std::vector<int> v{1, 2, 3, 4, 5, 6, 7};

TEST(grokking_lib, selection_sort)
{
    std::vector v{5, 3, 6, 2, 10};
    EXPECT_THAT(
        selection_sort(v), ::testing::ElementsAreArray({2, 3, 5, 6, 10})
    );
}

TEST(grokking_lib, selection_sort_empty_array)
{
    std::vector<int> v;
    EXPECT_EQ(selection_sort(v).size(), 0);
}

TEST(grokking_lib, selection_sort_single_element)
{
    std::vector v{42};
    EXPECT_THAT(selection_sort(v), ::testing::ElementsAreArray({42}));
}
