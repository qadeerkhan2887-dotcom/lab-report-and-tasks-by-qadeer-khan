#include <iostream>
#include <iomanip> // for formatting
using namespace std;

int main() {
    cout << "Multiplication Table (1 to 10)\n\n";

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << setw(4) << i * j; // aligned output
        }
        cout << endl;}
        return 0;}

