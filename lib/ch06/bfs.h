#include <deque>
#include <map>
#include <optional>
#include <string>
#include <vector>

using node = std::string;
using graph = std::map<node, std::vector<node>>;

std::optional<std::string>
bfs(graph& g,
    const node& starting_node,
    std::function<bool(const node&)> callback_fn)
{
    std::deque<std::string> search_queue{starting_node};
    while (search_queue.size() > 0) {
        const auto current_node = std::move(search_queue.front());
        search_queue.pop_front();
        if (callback_fn(current_node)) return current_node;
        const auto& tail = g[current_node];
        search_queue.insert(search_queue.end(), tail.cbegin(), tail.cend());
    }
    return std::nullopt;
}
