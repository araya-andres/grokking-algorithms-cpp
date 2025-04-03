#include <gtest/gtest.h>
#include "ch06/bfs.h"

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
    auto rv = bfs(g, "you", [](const node &n) { return n.at(n.size() - 1) == 'm'; });
    ASSERT_TRUE(rv.has_value());
    ASSERT_EQ(*rv, "tom");
}
