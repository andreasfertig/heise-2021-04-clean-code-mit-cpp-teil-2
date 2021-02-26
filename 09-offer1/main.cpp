// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    const double      price{19.95};
    const double      discountedPrice{price * 0.95};
    const std::string currency{"EUR"};

    std::cout << std::fixed << std::setprecision(2) << "Heute statt "
              << price << currency << "nur " << discountedPrice << " "
              << currency << "!\n";
}