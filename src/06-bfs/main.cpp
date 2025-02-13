#include <deque>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using graph = std::map<std::string, std::vector<std::string>>;

bool is_seller(const std::string &person)
{
    return person.at(person.size() - 1) == 'm';
}

int main(int argc, char *argv[])
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

    std::deque<std::string> search_queue{"you"};
    while (search_queue.size() > 0)
    {
        const auto person = std::move(search_queue.front());
        search_queue.pop_front();
        if (is_seller(person))
        {
            std::cout << person << " is a mango seller\n";
            return 0;
        }
        const auto &tail = g[person];
        search_queue.insert(search_queue.end(), tail.cbegin(), tail.cend());
    }
}