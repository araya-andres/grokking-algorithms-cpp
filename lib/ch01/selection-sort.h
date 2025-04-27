#include <algorithm>
#include <vector>

template <typename T>
std::vector<T> selection_sort(std::vector<T> v)
{
    std::vector<T> retval;
    retval.reserve(v.size());
    while (!v.empty()) {
        auto smallest = std::min_element(v.begin(), v.end());
        retval.emplace_back(*smallest);
        std::swap(*smallest, v.back());
        v.pop_back();
    }
    return retval;
}
