/*
    OBJECTIVE : Program to print/generate fibonacci series upto 'n' terms
    eg- n=6
    output : 0 1 1 2 3 5
*/
#include <iostream>
using namespace std;
// function declaration
int fibo(int);
int main()
{
    int num;
    cout << "Enter the number of terms : ";
    cin >> num;
    int i = 1, term;
    cout << "The series is : " << endl;
    while (i <= num)
    {
        term = fibo(i);
        cout << term << "\t";
        i++;
    }
    return 0;
}
// function defination
int fibo(int n)
{
    if (n == 1) // base case
        return 0;
    if (n == 2) // base case
        return 1;
    return fibo(n - 1) + fibo(n - 2); // cause 3rd term = 2nd term + 1st term
}