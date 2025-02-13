#include <cstdio>
#include <vector>

template <typename T>
int binary_search(const std::vector<T> &v, const T &val)
{
    int low = 0;
    int high = v.size() - 1;
    while (low <= high)
    {
        auto mid = (high + low) / 2;
        if (v[mid] == val)
        {
            return mid;
        }
        else if (v[mid] < val)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main(int argc, char *argv[])
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7};
    for (auto val : {0, 1, 3, 7, 8})
    {
        printf("%d\n", binary_search(v, val));
    }
}