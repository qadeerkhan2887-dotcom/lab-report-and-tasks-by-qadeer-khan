#include <iostream>
using namespace std;
int main() {
    // Declare and initialize 4x4 array
    int arr[4][4] = {
        {12, 5, 7, 9},
        {3, 15, 8, 6},
        {10, 2, 14, 11},
        {4, 18, 1, 13}
    };

    // Assume first element is maximum
    int maxValue = arr[0][0];

    // Find maximum value
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > maxValue) {
                maxValue = arr[i][j];}}
    cout << "Maximum value in the array = " << maxValue << endl;

    return 0;}

