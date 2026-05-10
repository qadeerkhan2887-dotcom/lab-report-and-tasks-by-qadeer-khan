#include <iostream>
using namespace std;

int main() {
    // Declare a 3x3 matrix
    int matrix[3][3];

    // Initialize values from 1 to 9
    int value = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = value;
            value++;
        }
    }

    // Display the matrix
    cout << "Matrix elements are:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";}
           cout << endl;}
 return 0;}

