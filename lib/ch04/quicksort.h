#include <cstdio>
#include <stdlib.h>
#include <vector>

template <typename T>
void swap(T* v, int i, int j)
{
    auto tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

template <typename T>
void quick_sort(T* v, int n)
{
    if (n <= 1) return; // nothing to do
    swap(v, 0, rand() % n);
    auto last = 0;
    for (int i = 1; i < n; i++)
        if (v[i] < v[0]) swap(v, ++last, i);
    swap(v, 0, last);
    quick_sort(v, last);
    quick_sort(v + last + 1, n - last - 1);
}

template <typename T>
void quick_sort(std::vector<T>& v)
{
    quick_sort(v.data(), v.size());
}
