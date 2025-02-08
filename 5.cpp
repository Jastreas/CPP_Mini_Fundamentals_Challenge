//Script 5
//Filename: 5.cpp
//Description: Create a program that asks the user for a phrase and counts how many vowels there are in it.

#include <iostream>
#include <string>

const std::string ERROR_INVALID_INPUT = "\033[41;37mInvalid input. Please enter a valid phrase.\033[0m";

bool validate_input(const std::string& input){
/*
Returns: 
true: If the input is correct returns
false: If not correct

Parameters:
Recieves a string with all kind of characters

Description:
iterates the string, stores it in an aux char value that will be checked, if its incorrect exits with false flag (0)
if everything is correct returns true (1)
*/
    for (size_t i = 0; i < input.length(); i++) {
        if (!isalpha(input[i]) && input[i] != ' ') { return false; }
    }
    return true;
}

int check_number_of_vowels(const std::string& phrase){
/*
Returns:
The number of vowels contained in the phrase
Parameters:
The string that stores the phrase MUST HAD BEEN ALREADY CHECKED
Description:
I iterate the string and if the character == vowel sum 1 to cont
*/
    int cont {};
    
    for (size_t i = 0; i < phrase.length(); i++) {
        char c = tolower(phrase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { cont++; }
    }

    return cont;
}


int main(){
/*
Asks for user to input a phrase just using letters
prints error if there's a non letter char
counts the vowels in the phrase
shows the number of vowels in the phrase
*/
    std::string usr_input {};
    std::cout << "Please introduce a phrase:" << std::endl;
    std::getline(std::cin, usr_input);
    if (usr_input.empty() || !validate_input(usr_input)) {
        std::cout << ERROR_INVALID_INPUT << std::endl;
    } else {
        std::cout << "The phrase contains " << check_number_of_vowels(usr_input) << " vowels." << std::endl;
    }

    return 0;
}
