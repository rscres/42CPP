#include "Pmergeme.hpp"

int getJacobsthal(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return getJacobsthal(n - 1) + 2 * getJacobsthal(n - 2);
}

bool compare(std::pair<int, int> a, std::pair<int, int> b) {
    return a.second < b.second;
}

bool is_sorted(const std::vector<int>& vec) {
    for (std::size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] < vec[i-1]) {
            return false;
        }
    }
    return true;
}
