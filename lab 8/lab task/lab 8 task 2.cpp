#include <iostream>
using namespace std;

int main() {
    // Initialize 3x3 array with values
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int totalSum = 0;

    // Row sum
    cout << "Row sums:\n";
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
            totalSum += arr[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }

    // Column sum
    cout << "\nColumn sums:\n";
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << " sum = " << colSum << endl;}
     // Total sum
    cout << "\nTotal sum of all elements = " << totalSum << endl;

    return 0;}

