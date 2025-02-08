//Script: 2. Create a program that asks the user for two numbers and performs the addition and subtraction of those numbers, displaying the results.
//NOTE: I didn't use Google's C++ convention for writing this code.
#include <iostream>
#include <limits>
#include <array>
#include <sstream>
#include <string>

bool is_valid_integer(const std::string& input, int& number) {
    std::istringstream iss(input);
    iss >> number;
    return !iss.fail() && iss.eof();
}

void printRes(const int& res, const std::string& operation) {
    std::cout << "\033[42mThe result of " << operation << " both numbers is:\033[0m \033[32m" 
              << res << "\033[0m" << std::endl;
}

int main() {
    std::array<int, 2> usrNumsArr;
    int usrNum = 0, cont = 0;
    std::string input;

    while (cont < 2) {
        std::cout << "\033[5mType a number:\033[0m" << std::endl;
        std::getline(std::cin, input);

        if (is_valid_integer(input, usrNum)) {
            usrNumsArr[cont] = usrNum;
            cont++;
        } else {
            std::cout << "\033[41;37mInvalid input. Please enter a valid number.\033[0m" << std::endl;
        }
    }

    printRes(usrNumsArr[0] + usrNumsArr[1], "adding");
    printRes(usrNumsArr[0] - usrNumsArr[1], "subtracting");

    return 0;
}