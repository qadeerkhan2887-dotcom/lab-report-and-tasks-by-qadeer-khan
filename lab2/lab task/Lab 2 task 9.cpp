//name muhammad qadeer khan
//ID: BF25NWELE0712
//SEMESTER: 2nd
//LAB: 2 (Programming)
//DATE: 9/3/2026
// C++ Program to Add Two Numbers Using Functions
#include <iostream>
using namespace std;
int addTwo(int x, int y);
int main(){
    int a, b, sum;
    
    // Asking for input number and their sum
    cout << "Enter the first number: ";
    // asking the user to enter the first integer 
    cin >> a;
    cout << "Enter the second number: ";
    // asking the user to enter the second integer
    cin >> b;
    
    // Calling out user-defined function 
    sum = addTwo(a, b);
    // add two storing the reult in sum
    
    // Displaying output
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;
}
int addTwo(int x, int y)
	{
    return (x + y);
}
	
