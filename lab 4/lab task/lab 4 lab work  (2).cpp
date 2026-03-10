// Name: muhammmad qadeer khan
// Reg No: BF25NWELE0712
#include <iostream>     
using namespace std;     

int main() 
{
    int choice;         // Variable to store user's menu choice
    double value;       // Variable to store numeric value entered by user

    // Display menu options
    cout << "Choose an option from the menu:\n";
    cout << "1. Convert km to m\n";
    cout << "2. Convert m to cm\n";
    cout << "3. Convert kg to g\n";
    cout << "4. Convert Celsius to Fahrenheit\n";
    cout << "Enter your choice: ";
    cin >> choice;      // Read user's menu selection

    // Perform the conversion based on user's choice
    switch (choice) {
        case 1:
            cout << "Enter distance in kilometers: ";
            cin >> value;
            cout << value << " km = " << value * 1000 << " m" << endl; // km ? m
            break;

        case 2:
            cout << "Enter distance in meters: ";
            cin >> value;
            cout << value << " m = " << value * 100 << " cm" << endl; // m ? cm
            break;

        case 3:
            cout << "Enter weight in kilograms: ";
            cin >> value;
            cout << value << " kg = " << value * 1000 << " g" << endl; // kg ? g
            break;

        case 4:
            cout << "Enter temperature in Celsius: ";
            cin >> value;
            cout << value << " C = " << (value * 9 / 5) + 32 << " F" << endl; // C ? F
            break;

        default:
            cout << "Invalid choice! Please select a valid option." << endl; // Handles wrong input
    }

    return 0; // Program ends successfully
}
