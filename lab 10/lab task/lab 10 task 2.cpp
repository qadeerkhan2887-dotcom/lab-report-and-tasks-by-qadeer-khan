#include <iostream>
using namespace std;

// Function declaration
int getSquare(int number);

int main() {
    int num, result;

    cout << "Enter a number: ";
    cin >> num;

    // Function call
    result = getSquare(num);

    cout << "Square = " << result << endl;

    return 0;
}

// Function definition
int getSquare(int number) {
    return number * number;
}

