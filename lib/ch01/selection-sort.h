#include <vector>

template <typename T>
size_t find_smallest(const std::vector<T>& v)
{
    auto smallest = v[0];
    auto smallest_index = 0;
    for (auto i = 1; i < v.size(); i++) {
        if (v[i] < smallest) {
            smallest = v[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

template <typename T>
std::vector<T> selection_sort(std::vector<T> v)
{
    std::vector<T> retval;
    retval.reserve(v.size());
    while (v.size() > 0) {
        auto smallest_index = find_smallest(v);
        retval.emplace_back(v[smallest_index]);
        std::swap(v[smallest_index], v[v.size() - 1]);
        v.pop_back();
    }
    return retval;
}
