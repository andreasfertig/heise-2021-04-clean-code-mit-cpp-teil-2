// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    const std::vector<int> src{6, 7, 8, 9};
    std::vector<int>       dst{3, 4, 5};

    std::copy(src.begin(), src.end(), std::back_inserter(dst));

    for(const auto& e : dst) {
        std::cout << e << ' ';
    }

    std::cout << '\n';
}