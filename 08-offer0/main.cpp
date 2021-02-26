// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#include <iostream>
#include <string>

int main()
{
    const double      price{19.95};
    const double      discountedPrice{price * 0.95};
    const std::string currency{"EUR"};

    std::cout << "Heute statt " << price << currency << "nur "
              << discountedPrice << " " << currency << "!\n";
}