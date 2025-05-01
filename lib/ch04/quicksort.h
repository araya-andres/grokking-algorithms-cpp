#include <utility>
#include <vector>

template <typename T>
void quick_sort(T* v, int n)
{
    if (n <= 1) return; // nothing to do
    std::swap(v[0], v[rand() % n]);
    auto last = 0;
    for (int i = 1; i < n; i++)
        if (v[i] < v[0]) std::swap(v[++last], v[i]);
    std::swap(v[0], v[last]);
    quick_sort(v, last);
    quick_sort(v + last + 1, n - last - 1);
}

template <typename T>
void quick_sort(std::vector<T>& v)
{
    quick_sort(v.data(), v.size());
}
