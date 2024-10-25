#include <unordered_map>
#include <functional>
#include <iostream>

#pragma once

class arithmatic {
public:
    void calculate();
    arithmatic(char symbol, int numberA, int numberB);
    int getResult();
private:
    char symbol;
    int numberA;
    int numberB;
    int result;

    std::unordered_map<char, std::function<int(int, int)>> operations = {
        {'+', [](int a, int b) { return a + b; }},
        {'-', [](int a, int b) { return a - b; }},
        {'*', [](int a, int b) { return a * b; }},
        {'/', [](int a, int b) { return b != 0 ? a / b : 0; }}
    };
};
