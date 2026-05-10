#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    // loop until i reaches n
    while (i <= n) {
        sum += i; // add value
        i++; // increment
    }

    cout << "Sum = " << sum << endl;

    return 0;}

