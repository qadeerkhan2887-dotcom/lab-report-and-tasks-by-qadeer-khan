#include <iostream>
using namespace std;

int main() {
    // Declare character array
    char message[] = "HELLO";

    // Display each character on separate line
    cout << "Characters are:\n";
    for(int i = 0; message[i] != '\0'; i++) {
        cout << message[i] << endl;
    }

