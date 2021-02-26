// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#if __has_include(<format>)
#include <format>
#include <iostream>
#include <string>

int main()
{
    const double      price{19.95};
    const double      discountedPrice{price * 0.95};
    const std::string currency{"EUR"};

    std::cout << std::format("Heute statt {1:.2f} {0} nur {2:.2f} {0}!\n",
                             currency,
                             price,
                             discountedPrice);
}
#else
int main()
{
#pragma message("not supported")
}
#endif