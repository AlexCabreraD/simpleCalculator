#include <iostream>
#include <string>
#include "arithmatic.h"

int main() {
    std::string continueInput = "start";
    std::cout << "-------- Started calculator --------\n";
    std::cout << "Example input: 12+4\n";

    while (continueInput != "end") {
        std::cout << "Valid operations: + - * /\n";

        int number1 = 0;
        int number2 = 0;
        char symbol;

        std::cout << "Enter an operation:";

        std::cin >> number1;

        std::cin >> symbol;

        std::cin >> number2;

        arithmatic operation = arithmatic(symbol, number1, number2);

        std::cout << "Result: " << operation.result << std::endl;

        std::cout << "Type 'end' to quit or press enter to continue: ";
        std::cin.ignore();
        std::getline(std::cin, continueInput);

        std::cout << "\n";
    }

    std::cout << "Calculator ended. Goodbye!\n";
    return 0;
}
