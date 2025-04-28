#include <algorithm>
#include <vector>

template <typename T>
std::vector<T> selection_sort(std::vector<T> v)
{
    for (auto it = begin(v); it < end(v); it++) {
        auto smallest = std::min_element(it, end(v));
        std::swap(*smallest, *it);
    }
    return v;
}
