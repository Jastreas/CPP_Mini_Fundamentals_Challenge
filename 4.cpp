//Script 4: ask a number from the user and show the multiplication table from 1 to 10
//NOTE: I didn't use Google's C++ convention for writing this code.
#include <iostream>

using namespace std;

int main() {
    int userNum = 0;

    cout << "Type a number:" << endl;
    if (!(cin >> userNum)) {
        cout << "\033[41;37mInvalid input. Please enter a valid number." << endl;
        return 1;
    }

    for (int i = 10; i > 0; i--) {
        cout << i << " x " << userNum << " = " << (userNum * i) << endl;
    }

    return 0;
}