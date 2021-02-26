// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#include <chrono>
#include <cstdio>
#include <memory>
#include <string>

using namespace std::literals::chrono_literals;
using namespace std::literals::string_literals;

using namespace std;

struct widget
{
    widget() = default;
    widget(int, int) {}
};

widget get_widget()
{
    return {};
}

int empid;

struct employee
{
    employee(int) {}
};

// Modern C++ style

auto* s = "Hello";
auto  w = get_widget();

auto e  = employee{empid};
auto w2 = widget{12, 34};

/* auto* w3 = new widget{}; */
auto w4 = make_unique<widget>();

auto x   = 42;
auto xf  = 42.f;
auto xl  = 42l;
auto xs  = "42"s;  // C++14
auto xns = 42ns;   // C++14
int main() {}
