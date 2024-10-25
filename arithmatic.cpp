#include "arithmatic.h"

arithmatic::arithmatic(char symbol, int numberA, int numberB) {
    this->symbol = symbol;
    this->numberA = numberA;
    this->numberB = numberB;
    calculate();
}

void arithmatic::calculate() {
    if (operations.find(this->symbol) != operations.end()) {
        int result = operations[this->symbol](numberA, numberB);
        this->result = result;
    }
    else {
        std::cout << "Invalid operation!" << std::endl;
    }
}
