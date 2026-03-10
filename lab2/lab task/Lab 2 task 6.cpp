//NAME: muhammad qadeer khan
//ID: BF25NWELE0712
//SEMESTER: 2nd
//LAB: 2 (Programming)
//DATE: 9/3/2026

#include <iostream>
using namespace std;

int main() 
{
int number;				
// declare integer varible 'number'
cout << "Enter an integer: ";	
// ask user to enter a number 
if (number >= 0) 		
// check if the number is positive or zero and if check condition inside parentheses is ture 
{
cout << "You entered a positive integer: " << number << endl; 	
// print if positive 
		}
  else						
  // runs when the if condition is false
{
cout << "You entered a negative integer: " << number << endl;	// print if negative 
}
 return 0;
}
