//Program
//Filename 6.cpp
//Description: Asks the user to enter a word and displays the word inverted.

#include <iostream>
#include <list>

static const std::string color_red = "\033[41;37m";
static const std::string color_reset = "\033[0m";
static const std::string color_green = "\033[42m";
static const std::string color_cyan = "\033[36m";

bool validate_input(const std::string input){
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
            char aux_var = input[i];
    
            if (!isalpha(aux_var) && aux_var != ' ') {
                return false;
            }
        }
        return true;
    }


std::string invert_word(std::string word){

    std::string reversed_word;

    for(int i = word.length(); i > -1; i--){
        reversed_word += word[i];
    }

    return reversed_word;
}



int main(){

    std::string user_word;

    std::cout << color_cyan << "Type a word, then press enter\n" << color_reset << std::endl;
    std::cin >> user_word;
    
    if(validate_input(user_word) == 0){
        std::cout << color_red << "ERROR: The input is not correct" << color_reset << std::endl;
    } else {
        std::cout << color_green << "The inverted word is: " << invert_word(user_word) << color_reset << std::endl;
    }

    return 0;
}