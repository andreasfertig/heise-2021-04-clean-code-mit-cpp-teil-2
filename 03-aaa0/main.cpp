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

// Classic C++ declaration order

const char* s = "Hello";
widget      w = get_widget();

employee e{empid};
widget   w2{12, 34};

widget*            w3 = new widget{};
unique_ptr<widget> w4 = make_unique<widget>();

int                 x  = 42;
float               xf = 42.;
long                xl = 42;
std::string         xs = "42";
chrono::nanoseconds xns{42};
int main() {}
