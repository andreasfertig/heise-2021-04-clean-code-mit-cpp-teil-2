// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

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

    // ...
}

int main()
{
    int i = 3;
    SomeFunction(i);
}