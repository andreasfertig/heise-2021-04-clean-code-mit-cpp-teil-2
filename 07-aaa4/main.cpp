// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#if not defined(__clang__)
#include <concepts>

template<typename T>
auto Calculate(T& t)
{
    return t;
}

template<typename T>
auto SomeFunction(T& value)
{
    // ...

    std::integral auto x = Calculate(value);

    // ...
}

int main()
{
    int i = 3;
    SomeFunction(i);
}
#else
int main()
{
#pragma message("Clang currently has no std::integral concept")
}
#endif