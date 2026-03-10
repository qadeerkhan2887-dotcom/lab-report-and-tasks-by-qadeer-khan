// Name: muhammmad qadeer khan
// Reg No: BF25NWELE0712
#include <iostream>     
using namespace std;    

int main() {
    int month;          
 // Loop until a valid month number (1-12) is entered
    do {
        // Ask the user to enter a month number
        cout << "Enter a month number (1-12): ";
        cin >> month;   // Read input

        // Determine the month name based on the number
        switch (month) {
            case 1:
                cout << "January" << endl;
                break;
            case 2:
                cout << "February" << endl;
                break;
            case 3:
                cout << "March" << endl;
                break;
            case 4:
                cout << "April" << endl;
                break;
            case 5:
                cout << "May" << endl;
                break;
            case 6:
                cout << "June" << endl;
                break;
            case 7:
                cout << "July" << endl;
                break;
            case 8:
                cout << "August" << endl;
                break;
            case 9:
                cout << "September" << endl;
                break;
            case 10:
                cout << "October" << endl;
                break;
            case 11:
                cout << "November" << endl;
                break;
            case 12:
                cout << "December" << endl;
                break;
            default:
                // If the input is not 1-12, show error message
                cout << "Invalid month number! Please try again." << endl;
        }

    } while (month < 1 || month > 12); 
	// Continue looping if number is invalid

    return 0; 
	// Program ends successfully
}
