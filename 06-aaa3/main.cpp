// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#include <type_traits>

template<typename T>
auto Calculate(T& t)
{
    return t;
}

template<typename T>
auto SomeFunction(T& value)
{
    // ...

    auto x = Calculate(value);
    static_assert(std::is_integral_v<decltype(x)>,
                  "Only integrals are allowed");

    // ...
}

int main()
{
    int i = 3;
    SomeFunction(i);
}