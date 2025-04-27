#include "ch06/bfs.h"
#include <gtest/gtest.h>

TEST(grokking_lib, bfs)
{
    graph g{
        {"you", {"alice", "bob", "claire"}},
        {"bob", {"anuj", "peggy"}},
        {"alice", {"peggy"}},
        {"claire", {"tom", "jonny"}},
        {"anuj", {}},
        {"thom", {}},
        {"jonny", {}},
    };
    auto cond = [](const node& n) { return n.at(n.size() - 1) == 'm'; };
    auto rv = bfs(g, "you", cond);
    ASSERT_TRUE(rv.has_value());
    ASSERT_EQ(*rv, "bob");
}
