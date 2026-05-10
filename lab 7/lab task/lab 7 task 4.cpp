#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    // Take input from user
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Calculate sum
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Display sum
    cout << "Sum = " << sum;

    return 0;
}


