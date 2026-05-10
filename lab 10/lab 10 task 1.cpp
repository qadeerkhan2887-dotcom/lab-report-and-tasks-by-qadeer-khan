#include <iostream>
using namespace std;

// Function declaration
void multiply(int num1, int num2);

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Function call
    multiply(a, b);

    return 0;
}

// Function definition
void multiply(int num1, int num2) {
    int product = num1 * num2;
    cout << "Product = " << product << endl;
}

