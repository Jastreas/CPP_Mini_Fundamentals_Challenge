//Script: 1 Modify the "Hello World" program so that it asks the user for their name and greets them in a personalized way.
//NOTE: I didn't use Google's C++ convention for writing this code.
#include <iostream>
#include <cctype>

using namespace std;

int main(){

    string usrName;
    cout << "Type your name:" << endl;
    getline(cin, usrName);

    bool correctInput = true;

    for (size_t i = 0; i < usrName.length(); i++) {
        char auxVar = usrName[i];

        if (!isalpha(auxVar) && auxVar != ' ') {  // If a non-letter is found, input is invalid
            correctInput = false;
            break;
        }
    }

    if (correctInput) {
        cout << "\033[42;37mHello: " << usrName << "!\033[0m" << endl;
    } else {
        cout << "\033[41;37mInvalid input. Please enter a valid name." << endl;
        return 1;
    }

    return 0;
}