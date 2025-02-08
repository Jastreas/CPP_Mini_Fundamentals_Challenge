//Script: 3
//Filename: 3.cpp
//Description: Prompts the user to enter a number and determines if it is odd or even. (input is handled).
//NOTE: I reused the 2nd exercise code :)
#include <iostream>
#include <sstream>
#include <string>

const std::string ERROR_INT_INVALID_INPUT = "\033[41;37mInvalid input. Please enter a valid number.\033[0m";

bool is_valid_integer(const std::string& input, int number) {
/* 
Returns true if the input string can be successfully converted to an integer.
Parameters:
    input: The string to check for validity.
    number: The integer output if input is valid.
*/
    std::istringstream iss(input);
    iss >> number;
    return !iss.fail() && iss.eof();
}

int ask_number_input(){
/* Returns a number introduced by the user if it is correct, if not, prompts an error message */
    int usrNum = 0;
    std::string input;
    bool isValid = false;

    while (!isValid) {
        std::cout << "\033[5mType a number:\033[0m" << std::endl;
        std::getline(std::cin, input);
        if (is_valid_integer(input, usrNum)) { isValid = true; } 
        else { std::cout << ERROR_INT_INVALID_INPUT << std::endl; }
    }
    return usrNum;
}

std::string is_odd_even(int number){ 
/*
Returns even or odd strings if the number %2 is 0 or not

Parameters:
    number: the number that will be divided by 2 (introduced by the user in ask_number_input function)
*/
    return number%2 == 0 ? "even" : "odd"; }

int main() {
/*
Asks for a number then prints if even or odd, if input is incorrect, prints error message and ask for input again
*/
    int usrNum = ask_number_input();
    std::cout << "\033[42mThe number is: \033[0m \033[32m" << is_odd_even(usrNum) <<"\033[0m" << std::endl;
    return 0;
}