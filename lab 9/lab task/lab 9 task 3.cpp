#include <iostream>
using namespace std;

// Function to calculate sum
int calculateSum(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main() {
    int arr[10];
    int sum;

    // Input from user
    cout << "Enter 10 integers: " << endl;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Function call
    sum = calculateSum(arr, 10);

    // Calculate average
    float average = sum / 10.0;

    // Output results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

