// Name: muhammmad qadeer khan
// Reg No: BF25NWELE0712
#include <iostream>      
using namespace std;     
// Allows us to use cout/cin without std::

int main() {
    char grade;          
	// Variable to store the grade entered by the user

    // Ask the user to enter their grade
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;        // Read the grade input

    // Switch statement to determine the grade description
    switch (grade) {
        case 'A': case 'a': 
		// Handles both uppercase and lowercase 'A'
            cout << "Excellent" << endl;
            break;
        case 'B': case 'b': 
		// Handles 'B' and 'b'
            cout << "Very Good" << endl;
            break;
        case 'C': case 'c': 
		// Handles 'C' and 'c'
            cout << "Good" << endl;
            break;
        case 'D': case 'd': 
		// Handles 'D' and 'd'
            cout << "Pass" << endl;
            break;
        case 'F': case 'f': 
		// Handles 'F' and 'f'
            cout << "Fail" << endl;
            break;
        default:             
		// Any other input not matching above cases
            cout << "Invalid grade" << endl;
    }

    return 0; 
}
