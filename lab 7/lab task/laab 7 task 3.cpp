#include <iostream>
using namespace std;

int main() {
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];

    // Copy elements
    for(int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    // Display source array
    cout << "Source Array:\n";
    for(int i = 0; i < 5; i++) {
        cout << source[i] << " ";
    }

    cout << endl;

    // Display destination array
    cout << "Destination Array:\n";
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << " ";
    }
    return 0;}

