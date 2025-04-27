#include <vector>

template <typename T>
int binary_search(const std::vector<T>& v, const T& val)
{
    int low = 0;
    int high = v.size() - 1;
    while (low <= high) {
        auto mid = (high + low) / 2;
        if (v[mid] == val) return mid;
        else if (v[mid] < val) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
