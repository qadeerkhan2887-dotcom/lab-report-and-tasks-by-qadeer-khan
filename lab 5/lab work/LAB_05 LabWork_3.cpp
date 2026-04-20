//NAME: qadeer khan
//ID: BF25NWELE0712
//SEMESTER: 2nd
//LAB: 2 (Programming)
//DATE: 9/3/2026

#include <iostream>
using namespace std;

int main()//delare variable input number.loop counter ,and some accumulator
{
    int num, i = 1, sum = 0;

    cout << "Enter a positive integer: ";//pomote user for input
    cin >> num;

    while(i <= num)//loop from to num,
    {
        sum = sum + i;//add current of i to sum
        i++;//increment loop counter 
    }

    cout << "Sum = " << sum << endl;

    return 0;
}


