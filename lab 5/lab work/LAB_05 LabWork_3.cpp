//NAME: qadeer khan
//ID: BF25NWELE0712
//SEMESTER: 2nd
//LAB: 2 (Programming)
//DATE: 9/3/2026

#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    while(i <= num)
    {
        sum = sum + i;
        i++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}


