#include "ch01/binary-search.h"
#include <gtest/gtest.h>

static std::vector<int> v{1, 2, 3, 4, 5, 6, 7};

TEST(grokking_lib, binary_search) { EXPECT_EQ(binary_search(v, 4), 3); }

TEST(grokking_lib, binary_search_find_first_element)
{
    EXPECT_EQ(binary_search(v, 1), 0);
}

TEST(grokking_lib, binary_search_find_last_element)
{
    EXPECT_EQ(binary_search(v, 7), 6);
}

TEST(grokking_lib, binary_search_value_less_than_first_element)
{
    EXPECT_EQ(binary_search(v, 0), -1);
}

TEST(grokking_lib, binary_search_value_greater_than_last_element)
{
    EXPECT_EQ(binary_search(v, 8), -1);
}
